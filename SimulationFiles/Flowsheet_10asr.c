/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1268
type: ALGORITHM

  assert(Splitter1.outMixMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[2], has value: " + String(Splitter1.outMixMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1268};
  modelica_boolean tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,80,"Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[2], has value: ");
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp5)
  {
    tmp2 = GreaterEq(data->localData[0]->realVars[279] /* Splitter1.outMixMasFlo[2] variable */,0.0);
    if(!tmp2)
    {
      tmp4 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[279] /* Splitter1.outMixMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp3),tmp4);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.outMixMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp5 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1269
type: ALGORITHM

  assert(Splitter1.inMixMolFrac[1] >= 0.0 and Splitter1.inMixMolFrac[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[1] <= 1.0, has value: " + String(Splitter1.inMixMolFrac[1], "g"));
*/
void Flowsheet_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1269};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  static const MMC_DEFSTRINGLIT(tmp8,91,"Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[1] <= 1.0, has value: ");
  modelica_string tmp9;
  static int tmp10 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp10)
  {
    tmp6 = GreaterEq(data->localData[0]->realVars[276] /* Splitter1.inMixMolFrac[1] variable */,0.0);
    tmp7 = LessEq(data->localData[0]->realVars[276] /* Splitter1.inMixMolFrac[1] variable */,1.0);
    if(!(tmp6 && tmp7))
    {
      tmp9 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[276] /* Splitter1.inMixMolFrac[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp8),tmp9);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.inMixMolFrac[1] >= 0.0 and Splitter1.inMixMolFrac[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp10 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1270
type: ALGORITHM

  assert(Splitter1.inMixMolFrac[2] >= 0.0 and Splitter1.inMixMolFrac[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[2] <= 1.0, has value: " + String(Splitter1.inMixMolFrac[2], "g"));
*/
void Flowsheet_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1270};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,91,"Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[2] <= 1.0, has value: ");
  modelica_string tmp14;
  static int tmp15 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp15)
  {
    tmp11 = GreaterEq(data->localData[0]->realVars[277] /* Splitter1.inMixMolFrac[2] variable */,0.0);
    tmp12 = LessEq(data->localData[0]->realVars[277] /* Splitter1.inMixMolFrac[2] variable */,1.0);
    if(!(tmp11 && tmp12))
    {
      tmp14 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[277] /* Splitter1.inMixMolFrac[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.inMixMolFrac[2] >= 0.0 and Splitter1.inMixMolFrac[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp15 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1271
type: ALGORITHM

  assert(Splitter1.MW >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.MW, has value: " + String(Splitter1.MW, "g"));
*/
void Flowsheet_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1271};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,67,"Variable violating min constraint: 0.0 <= Splitter1.MW, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp16 = GreaterEq(data->localData[0]->realVars[275] /* Splitter1.MW variable */,0.0);
    if(!tmp16)
    {
      tmp18 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[275] /* Splitter1.MW variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.MW >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1272
type: ALGORITHM

  assert(Splitter1.outMixMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[1], has value: " + String(Splitter1.outMixMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1272};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,80,"Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[1], has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->localData[0]->realVars[278] /* Splitter1.outMixMasFlo[1] variable */,0.0);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[278] /* Splitter1.outMixMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.outMixMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1273
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1273};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp27;
  static int tmp28 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp28)
  {
    tmp24 = GreaterEq(data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp25 = LessEq(data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp24 && tmp25))
    {
      tmp27 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1274
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1274};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp32;
  static int tmp33 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp33)
  {
    tmp29 = GreaterEq(data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp30 = LessEq(data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp29 && tmp30))
    {
      tmp32 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp31),tmp32);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp33 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1275
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1275};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp37;
  static int tmp38 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp38)
  {
    tmp34 = GreaterEq(data->localData[0]->realVars[67] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp35 = LessEq(data->localData[0]->realVars[67] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp34 && tmp35))
    {
      tmp37 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[67] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp38 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1276
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1276};
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp39 = GreaterEq(data->localData[0]->realVars[95] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp40 = LessEq(data->localData[0]->realVars[95] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp39 && tmp40))
    {
      tmp42 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[95] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1277
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1277};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp44 = GreaterEq(data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1278
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1278};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1279
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1279};
  modelica_boolean tmp52;
  static const MMC_DEFSTRINGLIT(tmp53,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp54;
  static int tmp55 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp55)
  {
    tmp52 = GreaterEq(data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp52)
    {
      tmp54 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp53),tmp54);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp55 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1280
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1280};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp58;
  static int tmp59 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp59)
  {
    tmp56 = GreaterEq(data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp59 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1281
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1281};
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp62;
  static int tmp63 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp63)
  {
    tmp60 = GreaterEq(data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp60)
    {
      tmp62 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp63 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1282
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1282};
  modelica_boolean tmp64;
  static const MMC_DEFSTRINGLIT(tmp65,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp66;
  static int tmp67 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp67)
  {
    tmp64 = GreaterEq(data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp64)
    {
      tmp66 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp65),tmp66);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp67 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1283
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1283};
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp70;
  static int tmp71 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp71)
  {
    tmp68 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp68)
    {
      tmp70 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp71 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1284
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1284};
  modelica_boolean tmp72;
  static const MMC_DEFSTRINGLIT(tmp73,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp74;
  static int tmp75 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp75)
  {
    tmp72 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp72)
    {
      tmp74 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp73),tmp74);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp75 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1285
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1285};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  static const MMC_DEFSTRINGLIT(tmp78,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp79;
  static int tmp80 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp80)
  {
    tmp76 = GreaterEq(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp77 = LessEq(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp76 && tmp77))
    {
      tmp79 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp78),tmp79);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp80 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1286
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1286};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  static const MMC_DEFSTRINGLIT(tmp83,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp84;
  static int tmp85 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp85)
  {
    tmp81 = GreaterEq(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp82 = LessEq(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp81 && tmp82))
    {
      tmp84 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp83),tmp84);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp85 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1287
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1287};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  static const MMC_DEFSTRINGLIT(tmp88,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp89;
  static int tmp90 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp90)
  {
    tmp86 = GreaterEq(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp87 = LessEq(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp86 && tmp87))
    {
      tmp89 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp88),tmp89);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp90 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1288
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1288};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp94;
  static int tmp95 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp95)
  {
    tmp91 = GreaterEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp92 = LessEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp91 && tmp92))
    {
      tmp94 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp95 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1289
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1289};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  static const MMC_DEFSTRINGLIT(tmp98,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp99;
  static int tmp100 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp100)
  {
    tmp96 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp97 = LessEq(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp96 && tmp97))
    {
      tmp99 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp98),tmp99);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp100 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1290
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1290};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  static const MMC_DEFSTRINGLIT(tmp103,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp104;
  static int tmp105 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp105)
  {
    tmp101 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp102 = LessEq(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp101 && tmp102))
    {
      tmp104 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp103),tmp104);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp105 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1291
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1291};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  static const MMC_DEFSTRINGLIT(tmp108,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp109;
  static int tmp110 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp110)
  {
    tmp106 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp107 = LessEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp106 && tmp107))
    {
      tmp109 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp108),tmp109);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp110 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1292
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1292};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  static const MMC_DEFSTRINGLIT(tmp113,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp114;
  static int tmp115 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp115)
  {
    tmp111 = GreaterEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp112 = LessEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp111 && tmp112))
    {
      tmp114 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp113),tmp114);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp115 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1293
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1293};
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp119;
  static int tmp120 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp120)
  {
    tmp116 = GreaterEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp117 = LessEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp116 && tmp117))
    {
      tmp119 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp120 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1294
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1294};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp124;
  static int tmp125 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp125)
  {
    tmp121 = GreaterEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp122 = LessEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp121 && tmp122))
    {
      tmp124 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp125 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1295
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1295};
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp128;
  static int tmp129 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp129)
  {
    tmp126 = GreaterEq(data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp126)
    {
      tmp128 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp129 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1296
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1296};
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp132;
  static int tmp133 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp133)
  {
    tmp130 = GreaterEq(data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp130)
    {
      tmp132 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp133 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1297
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1297};
  modelica_boolean tmp134;
  static const MMC_DEFSTRINGLIT(tmp135,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp136;
  static int tmp137 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp137)
  {
    tmp134 = GreaterEq(data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp134)
    {
      tmp136 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp135),tmp136);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp137 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1298
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1298};
  modelica_boolean tmp138;
  static const MMC_DEFSTRINGLIT(tmp139,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp140;
  static int tmp141 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp141)
  {
    tmp138 = GreaterEq(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp138)
    {
      tmp140 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp139),tmp140);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp141 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1299
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1299};
  modelica_boolean tmp142;
  static const MMC_DEFSTRINGLIT(tmp143,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp144;
  static int tmp145 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp145)
  {
    tmp142 = GreaterEq(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp142)
    {
      tmp144 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp143),tmp144);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp145 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1300
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1300};
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp148;
  static int tmp149 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp149)
  {
    tmp146 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp146)
    {
      tmp148 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp149 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1301
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1301};
  modelica_boolean tmp150;
  static const MMC_DEFSTRINGLIT(tmp151,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp152;
  static int tmp153 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp153)
  {
    tmp150 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp150)
    {
      tmp152 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp151),tmp152);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp153 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1302
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1302};
  modelica_boolean tmp154;
  static const MMC_DEFSTRINGLIT(tmp155,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp156;
  static int tmp157 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp157)
  {
    tmp154 = GreaterEq(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp154)
    {
      tmp156 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp155),tmp156);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp157 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1303
type: ALGORITHM

  assert(MatStm2.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.Pbubl, has value: " + String(MatStm2.Pbubl, "g"));
*/
void Flowsheet_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1303};
  modelica_boolean tmp158;
  static const MMC_DEFSTRINGLIT(tmp159,68,"Variable violating min constraint: 0.0 <= MatStm2.Pbubl, has value: ");
  modelica_string tmp160;
  static int tmp161 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp161)
  {
    tmp158 = GreaterEq(data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */,0.0);
    if(!tmp158)
    {
      tmp160 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp159),tmp160);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp161 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1304
type: ALGORITHM

  assert(MatStm2.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.Pdew, has value: " + String(MatStm2.Pdew, "g"));
*/
void Flowsheet_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1304};
  modelica_boolean tmp162;
  static const MMC_DEFSTRINGLIT(tmp163,67,"Variable violating min constraint: 0.0 <= MatStm2.Pdew, has value: ");
  modelica_string tmp164;
  static int tmp165 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp165)
  {
    tmp162 = GreaterEq(data->localData[0]->realVars[105] /* MatStm2.Pdew variable */,0.0);
    if(!tmp162)
    {
      tmp164 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp163),tmp164);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp165 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1305
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1305};
  modelica_boolean tmp166;
  modelica_boolean tmp167;
  static const MMC_DEFSTRINGLIT(tmp168,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp169;
  static int tmp170 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp170)
  {
    tmp166 = GreaterEq(data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp167 = LessEq(data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp166 && tmp167))
    {
      tmp169 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp168),tmp169);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp170 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1306
type: ALGORITHM

  assert(MatStm2.vapPhasMolFrac >= 0.0 and MatStm2.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMolFrac <= 1.0, has value: " + String(MatStm2.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1306};
  modelica_boolean tmp171;
  modelica_boolean tmp172;
  static const MMC_DEFSTRINGLIT(tmp173,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp174;
  static int tmp175 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp175)
  {
    tmp171 = GreaterEq(data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */,0.0);
    tmp172 = LessEq(data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */,1.0);
    if(!(tmp171 && tmp172))
    {
      tmp174 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp173),tmp174);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMolFrac >= 0.0 and MatStm2.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp175 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1307
type: ALGORITHM

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1307};
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  static const MMC_DEFSTRINGLIT(tmp178,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp179;
  static int tmp180 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp180)
  {
    tmp176 = GreaterEq(data->localData[0]->realVars[156] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp177 = LessEq(data->localData[0]->realVars[156] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp176 && tmp177))
    {
      tmp179 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[156] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp178),tmp179);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp180 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1308
type: ALGORITHM

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1308};
  modelica_boolean tmp181;
  modelica_boolean tmp182;
  static const MMC_DEFSTRINGLIT(tmp183,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp184;
  static int tmp185 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp185)
  {
    tmp181 = GreaterEq(data->localData[0]->realVars[183] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp182 = LessEq(data->localData[0]->realVars[183] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp181 && tmp182))
    {
      tmp184 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[183] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp183),tmp184);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp185 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1309
type: ALGORITHM

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1309};
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp188;
  static int tmp189 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp189)
  {
    tmp186 = GreaterEq(data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp186)
    {
      tmp188 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp189 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1310
type: ALGORITHM

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1310};
  modelica_boolean tmp190;
  static const MMC_DEFSTRINGLIT(tmp191,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp192;
  static int tmp193 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp193)
  {
    tmp190 = GreaterEq(data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp190)
    {
      tmp192 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp191),tmp192);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp193 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1311
type: ALGORITHM

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1311};
  modelica_boolean tmp194;
  static const MMC_DEFSTRINGLIT(tmp195,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp196;
  static int tmp197 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp197)
  {
    tmp194 = GreaterEq(data->localData[0]->realVars[178] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp194)
    {
      tmp196 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[178] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp195),tmp196);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp197 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1312
type: ALGORITHM

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1312};
  modelica_boolean tmp198;
  static const MMC_DEFSTRINGLIT(tmp199,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp200;
  static int tmp201 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp201)
  {
    tmp198 = GreaterEq(data->localData[0]->realVars[179] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp198)
    {
      tmp200 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[179] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp199),tmp200);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp201 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1313
type: ALGORITHM

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1313};
  modelica_boolean tmp202;
  static const MMC_DEFSTRINGLIT(tmp203,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp204;
  static int tmp205 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp205)
  {
    tmp202 = GreaterEq(data->localData[0]->realVars[180] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp202)
    {
      tmp204 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[180] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp203),tmp204);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp205 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1314
type: ALGORITHM

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void Flowsheet_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1314};
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp208;
  static int tmp209 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp209)
  {
    tmp206 = GreaterEq(data->localData[0]->realVars[101] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp206)
    {
      tmp208 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[101] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp209 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1315
type: ALGORITHM

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void Flowsheet_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1315};
  modelica_boolean tmp210;
  static const MMC_DEFSTRINGLIT(tmp211,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp212;
  static int tmp213 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp213)
  {
    tmp210 = GreaterEq(data->localData[0]->realVars[102] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp210)
    {
      tmp212 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[102] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp211),tmp212);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp213 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1316
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void Flowsheet_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1316};
  modelica_boolean tmp214;
  static const MMC_DEFSTRINGLIT(tmp215,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp216;
  static int tmp217 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp217)
  {
    tmp214 = GreaterEq(data->localData[0]->realVars[103] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp214)
    {
      tmp216 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[103] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp215),tmp216);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp217 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1317
type: ALGORITHM

  assert(MatStm2.compMolFrac[1,1] >= 0.0 and MatStm2.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1317};
  modelica_boolean tmp218;
  modelica_boolean tmp219;
  static const MMC_DEFSTRINGLIT(tmp220,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp221;
  static int tmp222 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp222)
  {
    tmp218 = GreaterEq(data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,1] variable */,0.0);
    tmp219 = LessEq(data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,1] variable */,1.0);
    if(!(tmp218 && tmp219))
    {
      tmp221 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp220),tmp221);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[1,1] >= 0.0 and MatStm2.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp222 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1318
type: ALGORITHM

  assert(MatStm2.compMolFrac[1,2] >= 0.0 and MatStm2.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1318};
  modelica_boolean tmp223;
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp226;
  static int tmp227 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp227)
  {
    tmp223 = GreaterEq(data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,2] variable */,0.0);
    tmp224 = LessEq(data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,2] variable */,1.0);
    if(!(tmp223 && tmp224))
    {
      tmp226 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[1,2] >= 0.0 and MatStm2.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp227 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1319
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1319};
  modelica_boolean tmp228;
  modelica_boolean tmp229;
  static const MMC_DEFSTRINGLIT(tmp230,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp231;
  static int tmp232 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp232)
  {
    tmp228 = GreaterEq(data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp229 = LessEq(data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp228 && tmp229))
    {
      tmp231 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp230),tmp231);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp232 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1320
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1320};
  modelica_boolean tmp233;
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp236;
  static int tmp237 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp237)
  {
    tmp233 = GreaterEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp234 = LessEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp233 && tmp234))
    {
      tmp236 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp237 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1321
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1321};
  modelica_boolean tmp238;
  modelica_boolean tmp239;
  static const MMC_DEFSTRINGLIT(tmp240,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp241;
  static int tmp242 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp242)
  {
    tmp238 = GreaterEq(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp239 = LessEq(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp238 && tmp239))
    {
      tmp241 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp240),tmp241);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp242 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1322
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1322};
  modelica_boolean tmp243;
  modelica_boolean tmp244;
  static const MMC_DEFSTRINGLIT(tmp245,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp246;
  static int tmp247 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp247)
  {
    tmp243 = GreaterEq(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp244 = LessEq(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp243 && tmp244))
    {
      tmp246 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp245),tmp246);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp247 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1323
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1323};
  modelica_boolean tmp248;
  modelica_boolean tmp249;
  static const MMC_DEFSTRINGLIT(tmp250,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp251;
  static int tmp252 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp252)
  {
    tmp248 = GreaterEq(data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp249 = LessEq(data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp248 && tmp249))
    {
      tmp251 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp250),tmp251);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp252 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1324
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1324};
  modelica_boolean tmp253;
  modelica_boolean tmp254;
  static const MMC_DEFSTRINGLIT(tmp255,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp256;
  static int tmp257 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp257)
  {
    tmp253 = GreaterEq(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp254 = LessEq(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp253 && tmp254))
    {
      tmp256 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp255),tmp256);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp257 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1325
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1325};
  modelica_boolean tmp258;
  modelica_boolean tmp259;
  static const MMC_DEFSTRINGLIT(tmp260,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp261;
  static int tmp262 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp262)
  {
    tmp258 = GreaterEq(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp259 = LessEq(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp258 && tmp259))
    {
      tmp261 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp260),tmp261);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp262 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1326
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1326};
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  static const MMC_DEFSTRINGLIT(tmp265,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp266;
  static int tmp267 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp267)
  {
    tmp263 = GreaterEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp264 = LessEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp263 && tmp264))
    {
      tmp266 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp265),tmp266);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp267 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1327
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1327};
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  static const MMC_DEFSTRINGLIT(tmp270,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp271;
  static int tmp272 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp272)
  {
    tmp268 = GreaterEq(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp269 = LessEq(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp268 && tmp269))
    {
      tmp271 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp270),tmp271);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp272 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1328
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1328};
  modelica_boolean tmp273;
  modelica_boolean tmp274;
  static const MMC_DEFSTRINGLIT(tmp275,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp276;
  static int tmp277 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp277)
  {
    tmp273 = GreaterEq(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp274 = LessEq(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp273 && tmp274))
    {
      tmp276 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp275),tmp276);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp277 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1329
type: ALGORITHM

  assert(MatStm2.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,1], has value: " + String(MatStm2.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1329};
  modelica_boolean tmp278;
  static const MMC_DEFSTRINGLIT(tmp279,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,1], has value: ");
  modelica_string tmp280;
  static int tmp281 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp281)
  {
    tmp278 = GreaterEq(data->localData[0]->realVars[132] /* MatStm2.compMolFlo[1,1] variable */,0.0);
    if(!tmp278)
    {
      tmp280 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[132] /* MatStm2.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp279),tmp280);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp281 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1330
type: ALGORITHM

  assert(MatStm2.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,2], has value: " + String(MatStm2.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1330};
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,2], has value: ");
  modelica_string tmp284;
  static int tmp285 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp285)
  {
    tmp282 = GreaterEq(data->localData[0]->realVars[133] /* MatStm2.compMolFlo[1,2] variable */,0.0);
    if(!tmp282)
    {
      tmp284 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[133] /* MatStm2.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp285 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1331
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: " + String(MatStm2.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1331};
  modelica_boolean tmp286;
  static const MMC_DEFSTRINGLIT(tmp287,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp288;
  static int tmp289 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp289)
  {
    tmp286 = GreaterEq(data->localData[0]->realVars[134] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp286)
    {
      tmp288 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[134] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp287),tmp288);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp289 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1332
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: " + String(MatStm2.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1332};
  modelica_boolean tmp290;
  static const MMC_DEFSTRINGLIT(tmp291,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp292;
  static int tmp293 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp293)
  {
    tmp290 = GreaterEq(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp290)
    {
      tmp292 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp291),tmp292);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp293 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1333
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: " + String(MatStm2.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1333};
  modelica_boolean tmp294;
  static const MMC_DEFSTRINGLIT(tmp295,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp296;
  static int tmp297 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp297)
  {
    tmp294 = GreaterEq(data->localData[0]->realVars[136] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp294)
    {
      tmp296 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[136] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp295),tmp296);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp297 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1334
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1334};
  modelica_boolean tmp298;
  static const MMC_DEFSTRINGLIT(tmp299,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp300;
  static int tmp301 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp301)
  {
    tmp298 = GreaterEq(data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp298)
    {
      tmp300 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp299),tmp300);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp301 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1335
type: ALGORITHM

  assert(MatStm2.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: " + String(MatStm2.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1335};
  modelica_boolean tmp302;
  static const MMC_DEFSTRINGLIT(tmp303,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: ");
  modelica_string tmp304;
  static int tmp305 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp305)
  {
    tmp302 = GreaterEq(data->localData[0]->realVars[108] /* MatStm2.compMasFlo[1,1] variable */,0.0);
    if(!tmp302)
    {
      tmp304 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[108] /* MatStm2.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp303),tmp304);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp305 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1336
type: ALGORITHM

  assert(MatStm2.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: " + String(MatStm2.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1336};
  modelica_boolean tmp306;
  static const MMC_DEFSTRINGLIT(tmp307,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: ");
  modelica_string tmp308;
  static int tmp309 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp309)
  {
    tmp306 = GreaterEq(data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,2] variable */,0.0);
    if(!tmp306)
    {
      tmp308 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp307),tmp308);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp309 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1337
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1337};
  modelica_boolean tmp310;
  static const MMC_DEFSTRINGLIT(tmp311,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp312;
  static int tmp313 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp313)
  {
    tmp310 = GreaterEq(data->localData[0]->realVars[110] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp310)
    {
      tmp312 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[110] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp311),tmp312);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp313 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1338
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1338};
  modelica_boolean tmp314;
  static const MMC_DEFSTRINGLIT(tmp315,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp316;
  static int tmp317 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp317)
  {
    tmp314 = GreaterEq(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp314)
    {
      tmp316 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp315),tmp316);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp317 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1339
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1339};
  modelica_boolean tmp318;
  static const MMC_DEFSTRINGLIT(tmp319,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp320;
  static int tmp321 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp321)
  {
    tmp318 = GreaterEq(data->localData[0]->realVars[112] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp318)
    {
      tmp320 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[112] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp319),tmp320);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp321 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1340
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1340};
  modelica_boolean tmp322;
  static const MMC_DEFSTRINGLIT(tmp323,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp324;
  static int tmp325 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp325)
  {
    tmp322 = GreaterEq(data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp322)
    {
      tmp324 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp323),tmp324);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp325 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1341
type: ALGORITHM

  assert(MatStm3.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.Pbubl, has value: " + String(MatStm3.Pbubl, "g"));
*/
void Flowsheet_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1341};
  modelica_boolean tmp326;
  static const MMC_DEFSTRINGLIT(tmp327,68,"Variable violating min constraint: 0.0 <= MatStm3.Pbubl, has value: ");
  modelica_string tmp328;
  static int tmp329 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp329)
  {
    tmp326 = GreaterEq(data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */,0.0);
    if(!tmp326)
    {
      tmp328 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp327),tmp328);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp329 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1342
type: ALGORITHM

  assert(MatStm3.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.Pdew, has value: " + String(MatStm3.Pdew, "g"));
*/
void Flowsheet_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1342};
  modelica_boolean tmp330;
  static const MMC_DEFSTRINGLIT(tmp331,67,"Variable violating min constraint: 0.0 <= MatStm3.Pdew, has value: ");
  modelica_string tmp332;
  static int tmp333 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp333)
  {
    tmp330 = GreaterEq(data->localData[0]->realVars[193] /* MatStm3.Pdew variable */,0.0);
    if(!tmp330)
    {
      tmp332 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp331),tmp332);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp333 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1343
type: ALGORITHM

  assert(MatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: " + String(MatStm3.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1343};
  modelica_boolean tmp334;
  modelica_boolean tmp335;
  static const MMC_DEFSTRINGLIT(tmp336,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp337;
  static int tmp338 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp338)
  {
    tmp334 = GreaterEq(data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */,0.0);
    tmp335 = LessEq(data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */,1.0);
    if(!(tmp334 && tmp335))
    {
      tmp337 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp336),tmp337);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp338 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1344
type: ALGORITHM

  assert(MatStm3.vapPhasMolFrac >= 0.0 and MatStm3.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMolFrac <= 1.0, has value: " + String(MatStm3.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1344};
  modelica_boolean tmp339;
  modelica_boolean tmp340;
  static const MMC_DEFSTRINGLIT(tmp341,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp342;
  static int tmp343 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp343)
  {
    tmp339 = GreaterEq(data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */,0.0);
    tmp340 = LessEq(data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */,1.0);
    if(!(tmp339 && tmp340))
    {
      tmp342 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp341),tmp342);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMolFrac >= 0.0 and MatStm3.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp343 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1345
type: ALGORITHM

  assert(MatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: " + String(MatStm3.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1345};
  modelica_boolean tmp344;
  modelica_boolean tmp345;
  static const MMC_DEFSTRINGLIT(tmp346,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp347;
  static int tmp348 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp348)
  {
    tmp344 = GreaterEq(data->localData[0]->realVars[244] /* MatStm3.liqPhasMasFrac variable */,0.0);
    tmp345 = LessEq(data->localData[0]->realVars[244] /* MatStm3.liqPhasMasFrac variable */,1.0);
    if(!(tmp344 && tmp345))
    {
      tmp347 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[244] /* MatStm3.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp346),tmp347);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp348 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1346
type: ALGORITHM

  assert(MatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: " + String(MatStm3.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1346};
  modelica_boolean tmp349;
  modelica_boolean tmp350;
  static const MMC_DEFSTRINGLIT(tmp351,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp352;
  static int tmp353 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp353)
  {
    tmp349 = GreaterEq(data->localData[0]->realVars[271] /* MatStm3.vapPhasMasFrac variable */,0.0);
    tmp350 = LessEq(data->localData[0]->realVars[271] /* MatStm3.vapPhasMasFrac variable */,1.0);
    if(!(tmp349 && tmp350))
    {
      tmp352 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[271] /* MatStm3.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp351),tmp352);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp353 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1347
type: ALGORITHM

  assert(MatStm3.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: " + String(MatStm3.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1347};
  modelica_boolean tmp354;
  static const MMC_DEFSTRINGLIT(tmp355,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: ");
  modelica_string tmp356;
  static int tmp357 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp357)
  {
    tmp354 = GreaterEq(data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */,0.0);
    if(!tmp354)
    {
      tmp356 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp355),tmp356);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp357 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1348
type: ALGORITHM

  assert(MatStm3.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: " + String(MatStm3.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1348};
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: ");
  modelica_string tmp360;
  static int tmp361 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp361)
  {
    tmp358 = GreaterEq(data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */,0.0);
    if(!tmp358)
    {
      tmp360 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp359),tmp360);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp361 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1349
type: ALGORITHM

  assert(MatStm3.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: " + String(MatStm3.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1349};
  modelica_boolean tmp362;
  static const MMC_DEFSTRINGLIT(tmp363,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: ");
  modelica_string tmp364;
  static int tmp365 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp365)
  {
    tmp362 = GreaterEq(data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */,0.0);
    if(!tmp362)
    {
      tmp364 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp363),tmp364);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp365 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1350
type: ALGORITHM

  assert(MatStm3.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: " + String(MatStm3.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1350};
  modelica_boolean tmp366;
  static const MMC_DEFSTRINGLIT(tmp367,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: ");
  modelica_string tmp368;
  static int tmp369 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp369)
  {
    tmp366 = GreaterEq(data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */,0.0);
    if(!tmp366)
    {
      tmp368 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp367),tmp368);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp369 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1351
type: ALGORITHM

  assert(MatStm3.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: " + String(MatStm3.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1351};
  modelica_boolean tmp370;
  static const MMC_DEFSTRINGLIT(tmp371,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: ");
  modelica_string tmp372;
  static int tmp373 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp373)
  {
    tmp370 = GreaterEq(data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */,0.0);
    if(!tmp370)
    {
      tmp372 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp371),tmp372);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp373 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1352
type: ALGORITHM

  assert(MatStm3.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: " + String(MatStm3.MW[1], "g"));
*/
void Flowsheet_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1352};
  modelica_boolean tmp374;
  static const MMC_DEFSTRINGLIT(tmp375,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: ");
  modelica_string tmp376;
  static int tmp377 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp377)
  {
    tmp374 = GreaterEq(data->localData[0]->realVars[189] /* MatStm3.MW[1] variable */,0.0);
    if(!tmp374)
    {
      tmp376 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[189] /* MatStm3.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp375),tmp376);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp377 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1353
type: ALGORITHM

  assert(MatStm3.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: " + String(MatStm3.MW[2], "g"));
*/
void Flowsheet_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1353};
  modelica_boolean tmp378;
  static const MMC_DEFSTRINGLIT(tmp379,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: ");
  modelica_string tmp380;
  static int tmp381 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp381)
  {
    tmp378 = GreaterEq(data->localData[0]->realVars[190] /* MatStm3.MW[2] variable */,0.0);
    if(!tmp378)
    {
      tmp380 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[190] /* MatStm3.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp379),tmp380);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp381 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1354
type: ALGORITHM

  assert(MatStm3.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: " + String(MatStm3.MW[3], "g"));
*/
void Flowsheet_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1354};
  modelica_boolean tmp382;
  static const MMC_DEFSTRINGLIT(tmp383,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: ");
  modelica_string tmp384;
  static int tmp385 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp385)
  {
    tmp382 = GreaterEq(data->localData[0]->realVars[191] /* MatStm3.MW[3] variable */,0.0);
    if(!tmp382)
    {
      tmp384 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[191] /* MatStm3.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp383),tmp384);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp385 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1355
type: ALGORITHM

  assert(MatStm3.compMolFrac[1,1] >= 0.0 and MatStm3.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1355};
  modelica_boolean tmp386;
  modelica_boolean tmp387;
  static const MMC_DEFSTRINGLIT(tmp388,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp389;
  static int tmp390 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp390)
  {
    tmp386 = GreaterEq(data->localData[0]->realVars[226] /* MatStm3.compMolFrac[1,1] variable */,0.0);
    tmp387 = LessEq(data->localData[0]->realVars[226] /* MatStm3.compMolFrac[1,1] variable */,1.0);
    if(!(tmp386 && tmp387))
    {
      tmp389 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[226] /* MatStm3.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp388),tmp389);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[1,1] >= 0.0 and MatStm3.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp390 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1356
type: ALGORITHM

  assert(MatStm3.compMolFrac[1,2] >= 0.0 and MatStm3.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1356};
  modelica_boolean tmp391;
  modelica_boolean tmp392;
  static const MMC_DEFSTRINGLIT(tmp393,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp394;
  static int tmp395 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp395)
  {
    tmp391 = GreaterEq(data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,2] variable */,0.0);
    tmp392 = LessEq(data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,2] variable */,1.0);
    if(!(tmp391 && tmp392))
    {
      tmp394 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp393),tmp394);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[1,2] >= 0.0 and MatStm3.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp395 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1357
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1357};
  modelica_boolean tmp396;
  modelica_boolean tmp397;
  static const MMC_DEFSTRINGLIT(tmp398,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp399;
  static int tmp400 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp400)
  {
    tmp396 = GreaterEq(data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */,0.0);
    tmp397 = LessEq(data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */,1.0);
    if(!(tmp396 && tmp397))
    {
      tmp399 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp398),tmp399);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp400 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1358
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1358};
  modelica_boolean tmp401;
  modelica_boolean tmp402;
  static const MMC_DEFSTRINGLIT(tmp403,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp404;
  static int tmp405 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp405)
  {
    tmp401 = GreaterEq(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */,0.0);
    tmp402 = LessEq(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */,1.0);
    if(!(tmp401 && tmp402))
    {
      tmp404 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp403),tmp404);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp405 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1359
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1359};
  modelica_boolean tmp406;
  modelica_boolean tmp407;
  static const MMC_DEFSTRINGLIT(tmp408,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp409;
  static int tmp410 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp410)
  {
    tmp406 = GreaterEq(data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */,0.0);
    tmp407 = LessEq(data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */,1.0);
    if(!(tmp406 && tmp407))
    {
      tmp409 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp408),tmp409);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp410 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1360
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1360};
  modelica_boolean tmp411;
  modelica_boolean tmp412;
  static const MMC_DEFSTRINGLIT(tmp413,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp414;
  static int tmp415 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp415)
  {
    tmp411 = GreaterEq(data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */,0.0);
    tmp412 = LessEq(data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */,1.0);
    if(!(tmp411 && tmp412))
    {
      tmp414 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp413),tmp414);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp415 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1361
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1361};
  modelica_boolean tmp416;
  modelica_boolean tmp417;
  static const MMC_DEFSTRINGLIT(tmp418,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp419;
  static int tmp420 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp420)
  {
    tmp416 = GreaterEq(data->localData[0]->realVars[202] /* MatStm3.compMasFrac[1,1] variable */,0.0);
    tmp417 = LessEq(data->localData[0]->realVars[202] /* MatStm3.compMasFrac[1,1] variable */,1.0);
    if(!(tmp416 && tmp417))
    {
      tmp419 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[202] /* MatStm3.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp418),tmp419);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp420 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1362
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1362};
  modelica_boolean tmp421;
  modelica_boolean tmp422;
  static const MMC_DEFSTRINGLIT(tmp423,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp424;
  static int tmp425 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp425)
  {
    tmp421 = GreaterEq(data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */,0.0);
    tmp422 = LessEq(data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */,1.0);
    if(!(tmp421 && tmp422))
    {
      tmp424 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp423),tmp424);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp425 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1363
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1363};
  modelica_boolean tmp426;
  modelica_boolean tmp427;
  static const MMC_DEFSTRINGLIT(tmp428,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp429;
  static int tmp430 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp430)
  {
    tmp426 = GreaterEq(data->localData[0]->realVars[204] /* MatStm3.compMasFrac[2,1] variable */,0.0);
    tmp427 = LessEq(data->localData[0]->realVars[204] /* MatStm3.compMasFrac[2,1] variable */,1.0);
    if(!(tmp426 && tmp427))
    {
      tmp429 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[204] /* MatStm3.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp428),tmp429);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp430 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1364
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1364};
  modelica_boolean tmp431;
  modelica_boolean tmp432;
  static const MMC_DEFSTRINGLIT(tmp433,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp434;
  static int tmp435 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp435)
  {
    tmp431 = GreaterEq(data->localData[0]->realVars[205] /* MatStm3.compMasFrac[2,2] variable */,0.0);
    tmp432 = LessEq(data->localData[0]->realVars[205] /* MatStm3.compMasFrac[2,2] variable */,1.0);
    if(!(tmp431 && tmp432))
    {
      tmp434 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[205] /* MatStm3.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp433),tmp434);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp435 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1365
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1365};
  modelica_boolean tmp436;
  modelica_boolean tmp437;
  static const MMC_DEFSTRINGLIT(tmp438,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp439;
  static int tmp440 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp440)
  {
    tmp436 = GreaterEq(data->localData[0]->realVars[206] /* MatStm3.compMasFrac[3,1] variable */,0.0);
    tmp437 = LessEq(data->localData[0]->realVars[206] /* MatStm3.compMasFrac[3,1] variable */,1.0);
    if(!(tmp436 && tmp437))
    {
      tmp439 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[206] /* MatStm3.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp438),tmp439);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp440 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1366
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1366};
  modelica_boolean tmp441;
  modelica_boolean tmp442;
  static const MMC_DEFSTRINGLIT(tmp443,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp444;
  static int tmp445 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp445)
  {
    tmp441 = GreaterEq(data->localData[0]->realVars[207] /* MatStm3.compMasFrac[3,2] variable */,0.0);
    tmp442 = LessEq(data->localData[0]->realVars[207] /* MatStm3.compMasFrac[3,2] variable */,1.0);
    if(!(tmp441 && tmp442))
    {
      tmp444 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[207] /* MatStm3.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp443),tmp444);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp445 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1367
type: ALGORITHM

  assert(MatStm3.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,1], has value: " + String(MatStm3.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1367};
  modelica_boolean tmp446;
  static const MMC_DEFSTRINGLIT(tmp447,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,1], has value: ");
  modelica_string tmp448;
  static int tmp449 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp449)
  {
    tmp446 = GreaterEq(data->localData[0]->realVars[220] /* MatStm3.compMolFlo[1,1] variable */,0.0);
    if(!tmp446)
    {
      tmp448 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[220] /* MatStm3.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp447),tmp448);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp449 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1368
type: ALGORITHM

  assert(MatStm3.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,2], has value: " + String(MatStm3.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1368};
  modelica_boolean tmp450;
  static const MMC_DEFSTRINGLIT(tmp451,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,2], has value: ");
  modelica_string tmp452;
  static int tmp453 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp453)
  {
    tmp450 = GreaterEq(data->localData[0]->realVars[221] /* MatStm3.compMolFlo[1,2] variable */,0.0);
    if(!tmp450)
    {
      tmp452 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[221] /* MatStm3.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp451),tmp452);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp453 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1369
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: " + String(MatStm3.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1369};
  modelica_boolean tmp454;
  static const MMC_DEFSTRINGLIT(tmp455,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: ");
  modelica_string tmp456;
  static int tmp457 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp457)
  {
    tmp454 = GreaterEq(data->localData[0]->realVars[222] /* MatStm3.compMolFlo[2,1] variable */,0.0);
    if(!tmp454)
    {
      tmp456 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[222] /* MatStm3.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp455),tmp456);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp457 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1370
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: " + String(MatStm3.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1370};
  modelica_boolean tmp458;
  static const MMC_DEFSTRINGLIT(tmp459,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: ");
  modelica_string tmp460;
  static int tmp461 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp461)
  {
    tmp458 = GreaterEq(data->localData[0]->realVars[223] /* MatStm3.compMolFlo[2,2] variable */,0.0);
    if(!tmp458)
    {
      tmp460 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[223] /* MatStm3.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp459),tmp460);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp461 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1371
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: " + String(MatStm3.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1371};
  modelica_boolean tmp462;
  static const MMC_DEFSTRINGLIT(tmp463,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: ");
  modelica_string tmp464;
  static int tmp465 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp465)
  {
    tmp462 = GreaterEq(data->localData[0]->realVars[224] /* MatStm3.compMolFlo[3,1] variable */,0.0);
    if(!tmp462)
    {
      tmp464 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[224] /* MatStm3.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp463),tmp464);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp465 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1372
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: " + String(MatStm3.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1372};
  modelica_boolean tmp466;
  static const MMC_DEFSTRINGLIT(tmp467,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: ");
  modelica_string tmp468;
  static int tmp469 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp469)
  {
    tmp466 = GreaterEq(data->localData[0]->realVars[225] /* MatStm3.compMolFlo[3,2] variable */,0.0);
    if(!tmp466)
    {
      tmp468 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[225] /* MatStm3.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp467),tmp468);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp469 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1373
type: ALGORITHM

  assert(MatStm3.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,1], has value: " + String(MatStm3.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1373};
  modelica_boolean tmp470;
  static const MMC_DEFSTRINGLIT(tmp471,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,1], has value: ");
  modelica_string tmp472;
  static int tmp473 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp473)
  {
    tmp470 = GreaterEq(data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */,0.0);
    if(!tmp470)
    {
      tmp472 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp471),tmp472);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp473 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1374
type: ALGORITHM

  assert(MatStm3.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,2], has value: " + String(MatStm3.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1374};
  modelica_boolean tmp474;
  static const MMC_DEFSTRINGLIT(tmp475,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,2], has value: ");
  modelica_string tmp476;
  static int tmp477 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp477)
  {
    tmp474 = GreaterEq(data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,2] variable */,0.0);
    if(!tmp474)
    {
      tmp476 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp475),tmp476);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp477 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1375
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: " + String(MatStm3.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1375};
  modelica_boolean tmp478;
  static const MMC_DEFSTRINGLIT(tmp479,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: ");
  modelica_string tmp480;
  static int tmp481 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp481)
  {
    tmp478 = GreaterEq(data->localData[0]->realVars[198] /* MatStm3.compMasFlo[2,1] variable */,0.0);
    if(!tmp478)
    {
      tmp480 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[198] /* MatStm3.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp479),tmp480);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp481 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1376
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: " + String(MatStm3.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1376};
  modelica_boolean tmp482;
  static const MMC_DEFSTRINGLIT(tmp483,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: ");
  modelica_string tmp484;
  static int tmp485 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp485)
  {
    tmp482 = GreaterEq(data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,2] variable */,0.0);
    if(!tmp482)
    {
      tmp484 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp483),tmp484);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp485 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1377
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: " + String(MatStm3.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1377};
  modelica_boolean tmp486;
  static const MMC_DEFSTRINGLIT(tmp487,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: ");
  modelica_string tmp488;
  static int tmp489 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp489)
  {
    tmp486 = GreaterEq(data->localData[0]->realVars[200] /* MatStm3.compMasFlo[3,1] variable */,0.0);
    if(!tmp486)
    {
      tmp488 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[200] /* MatStm3.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp487),tmp488);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp489 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1378
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: " + String(MatStm3.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1378};
  modelica_boolean tmp490;
  static const MMC_DEFSTRINGLIT(tmp491,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: ");
  modelica_string tmp492;
  static int tmp493 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp493)
  {
    tmp490 = GreaterEq(data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,2] variable */,0.0);
    if(!tmp490)
    {
      tmp492 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp491),tmp492);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp493 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1267
type: ALGORITHM

  assert(MatStm3.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.K[2], has value: " + String(MatStm3.K[2], "g"));
*/
void Flowsheet_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1267};
  modelica_boolean tmp494;
  static const MMC_DEFSTRINGLIT(tmp495,67,"Variable violating min constraint: 0.0 <= MatStm3.K[2], has value: ");
  modelica_string tmp496;
  static int tmp497 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp497)
  {
    tmp494 = GreaterEq(data->localData[0]->realVars[188] /* MatStm3.K[2] variable */,0.0);
    if(!tmp494)
    {
      tmp496 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[188] /* MatStm3.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp495),tmp496);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp497 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1266
type: ALGORITHM

  assert(MatStm3.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.K[1], has value: " + String(MatStm3.K[1], "g"));
*/
void Flowsheet_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1266};
  modelica_boolean tmp498;
  static const MMC_DEFSTRINGLIT(tmp499,67,"Variable violating min constraint: 0.0 <= MatStm3.K[1], has value: ");
  modelica_string tmp500;
  static int tmp501 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp501)
  {
    tmp498 = GreaterEq(data->localData[0]->realVars[187] /* MatStm3.K[1] variable */,0.0);
    if(!tmp498)
    {
      tmp500 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[187] /* MatStm3.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp499),tmp500);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp501 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1265
type: ALGORITHM

  assert(MatStm2.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: " + String(MatStm2.K[2], "g"));
*/
void Flowsheet_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1265};
  modelica_boolean tmp502;
  static const MMC_DEFSTRINGLIT(tmp503,67,"Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: ");
  modelica_string tmp504;
  static int tmp505 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp505)
  {
    tmp502 = GreaterEq(data->localData[0]->realVars[100] /* MatStm2.K[2] variable */,0.0);
    if(!tmp502)
    {
      tmp504 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[100] /* MatStm2.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp503),tmp504);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp505 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1264
type: ALGORITHM

  assert(MatStm2.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: " + String(MatStm2.K[1], "g"));
*/
void Flowsheet_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  modelica_boolean tmp506;
  static const MMC_DEFSTRINGLIT(tmp507,67,"Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: ");
  modelica_string tmp508;
  static int tmp509 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp509)
  {
    tmp506 = GreaterEq(data->localData[0]->realVars[99] /* MatStm2.K[1] variable */,0.0);
    if(!tmp506)
    {
      tmp508 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[99] /* MatStm2.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp507),tmp508);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp509 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1263
type: ALGORITHM

  assert(MatStm1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: " + String(MatStm1.K[2], "g"));
*/
void Flowsheet_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1263};
  modelica_boolean tmp510;
  static const MMC_DEFSTRINGLIT(tmp511,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp512;
  static int tmp513 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp513)
  {
    tmp510 = GreaterEq(data->localData[0]->realVars[9] /* MatStm1.K[2] variable */,0.0);
    if(!tmp510)
    {
      tmp512 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp511),tmp512);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp513 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1262
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void Flowsheet_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1262};
  modelica_boolean tmp514;
  static const MMC_DEFSTRINGLIT(tmp515,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp516;
  static int tmp517 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp517)
  {
    tmp514 = GreaterEq(data->localData[0]->realVars[8] /* MatStm1.K[1] variable */,0.0);
    if(!tmp514)
    {
      tmp516 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[8] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp515),tmp516);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp517 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1261
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1261};
  modelica_boolean tmp518;
  static const MMC_DEFSTRINGLIT(tmp519,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp520;
  static int tmp521 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp521)
  {
    tmp518 = GreaterEq(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp518)
    {
      tmp520 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp519),tmp520);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp521 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1260
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1260};
  modelica_boolean tmp522;
  static const MMC_DEFSTRINGLIT(tmp523,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp524;
  static int tmp525 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp525)
  {
    tmp522 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp522)
    {
      tmp524 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp523),tmp524);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp525 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Flowsheet_eqFunction_1268(data, threadData);

  Flowsheet_eqFunction_1269(data, threadData);

  Flowsheet_eqFunction_1270(data, threadData);

  Flowsheet_eqFunction_1271(data, threadData);

  Flowsheet_eqFunction_1272(data, threadData);

  Flowsheet_eqFunction_1273(data, threadData);

  Flowsheet_eqFunction_1274(data, threadData);

  Flowsheet_eqFunction_1275(data, threadData);

  Flowsheet_eqFunction_1276(data, threadData);

  Flowsheet_eqFunction_1277(data, threadData);

  Flowsheet_eqFunction_1278(data, threadData);

  Flowsheet_eqFunction_1279(data, threadData);

  Flowsheet_eqFunction_1280(data, threadData);

  Flowsheet_eqFunction_1281(data, threadData);

  Flowsheet_eqFunction_1282(data, threadData);

  Flowsheet_eqFunction_1283(data, threadData);

  Flowsheet_eqFunction_1284(data, threadData);

  Flowsheet_eqFunction_1285(data, threadData);

  Flowsheet_eqFunction_1286(data, threadData);

  Flowsheet_eqFunction_1287(data, threadData);

  Flowsheet_eqFunction_1288(data, threadData);

  Flowsheet_eqFunction_1289(data, threadData);

  Flowsheet_eqFunction_1290(data, threadData);

  Flowsheet_eqFunction_1291(data, threadData);

  Flowsheet_eqFunction_1292(data, threadData);

  Flowsheet_eqFunction_1293(data, threadData);

  Flowsheet_eqFunction_1294(data, threadData);

  Flowsheet_eqFunction_1295(data, threadData);

  Flowsheet_eqFunction_1296(data, threadData);

  Flowsheet_eqFunction_1297(data, threadData);

  Flowsheet_eqFunction_1298(data, threadData);

  Flowsheet_eqFunction_1299(data, threadData);

  Flowsheet_eqFunction_1300(data, threadData);

  Flowsheet_eqFunction_1301(data, threadData);

  Flowsheet_eqFunction_1302(data, threadData);

  Flowsheet_eqFunction_1303(data, threadData);

  Flowsheet_eqFunction_1304(data, threadData);

  Flowsheet_eqFunction_1305(data, threadData);

  Flowsheet_eqFunction_1306(data, threadData);

  Flowsheet_eqFunction_1307(data, threadData);

  Flowsheet_eqFunction_1308(data, threadData);

  Flowsheet_eqFunction_1309(data, threadData);

  Flowsheet_eqFunction_1310(data, threadData);

  Flowsheet_eqFunction_1311(data, threadData);

  Flowsheet_eqFunction_1312(data, threadData);

  Flowsheet_eqFunction_1313(data, threadData);

  Flowsheet_eqFunction_1314(data, threadData);

  Flowsheet_eqFunction_1315(data, threadData);

  Flowsheet_eqFunction_1316(data, threadData);

  Flowsheet_eqFunction_1317(data, threadData);

  Flowsheet_eqFunction_1318(data, threadData);

  Flowsheet_eqFunction_1319(data, threadData);

  Flowsheet_eqFunction_1320(data, threadData);

  Flowsheet_eqFunction_1321(data, threadData);

  Flowsheet_eqFunction_1322(data, threadData);

  Flowsheet_eqFunction_1323(data, threadData);

  Flowsheet_eqFunction_1324(data, threadData);

  Flowsheet_eqFunction_1325(data, threadData);

  Flowsheet_eqFunction_1326(data, threadData);

  Flowsheet_eqFunction_1327(data, threadData);

  Flowsheet_eqFunction_1328(data, threadData);

  Flowsheet_eqFunction_1329(data, threadData);

  Flowsheet_eqFunction_1330(data, threadData);

  Flowsheet_eqFunction_1331(data, threadData);

  Flowsheet_eqFunction_1332(data, threadData);

  Flowsheet_eqFunction_1333(data, threadData);

  Flowsheet_eqFunction_1334(data, threadData);

  Flowsheet_eqFunction_1335(data, threadData);

  Flowsheet_eqFunction_1336(data, threadData);

  Flowsheet_eqFunction_1337(data, threadData);

  Flowsheet_eqFunction_1338(data, threadData);

  Flowsheet_eqFunction_1339(data, threadData);

  Flowsheet_eqFunction_1340(data, threadData);

  Flowsheet_eqFunction_1341(data, threadData);

  Flowsheet_eqFunction_1342(data, threadData);

  Flowsheet_eqFunction_1343(data, threadData);

  Flowsheet_eqFunction_1344(data, threadData);

  Flowsheet_eqFunction_1345(data, threadData);

  Flowsheet_eqFunction_1346(data, threadData);

  Flowsheet_eqFunction_1347(data, threadData);

  Flowsheet_eqFunction_1348(data, threadData);

  Flowsheet_eqFunction_1349(data, threadData);

  Flowsheet_eqFunction_1350(data, threadData);

  Flowsheet_eqFunction_1351(data, threadData);

  Flowsheet_eqFunction_1352(data, threadData);

  Flowsheet_eqFunction_1353(data, threadData);

  Flowsheet_eqFunction_1354(data, threadData);

  Flowsheet_eqFunction_1355(data, threadData);

  Flowsheet_eqFunction_1356(data, threadData);

  Flowsheet_eqFunction_1357(data, threadData);

  Flowsheet_eqFunction_1358(data, threadData);

  Flowsheet_eqFunction_1359(data, threadData);

  Flowsheet_eqFunction_1360(data, threadData);

  Flowsheet_eqFunction_1361(data, threadData);

  Flowsheet_eqFunction_1362(data, threadData);

  Flowsheet_eqFunction_1363(data, threadData);

  Flowsheet_eqFunction_1364(data, threadData);

  Flowsheet_eqFunction_1365(data, threadData);

  Flowsheet_eqFunction_1366(data, threadData);

  Flowsheet_eqFunction_1367(data, threadData);

  Flowsheet_eqFunction_1368(data, threadData);

  Flowsheet_eqFunction_1369(data, threadData);

  Flowsheet_eqFunction_1370(data, threadData);

  Flowsheet_eqFunction_1371(data, threadData);

  Flowsheet_eqFunction_1372(data, threadData);

  Flowsheet_eqFunction_1373(data, threadData);

  Flowsheet_eqFunction_1374(data, threadData);

  Flowsheet_eqFunction_1375(data, threadData);

  Flowsheet_eqFunction_1376(data, threadData);

  Flowsheet_eqFunction_1377(data, threadData);

  Flowsheet_eqFunction_1378(data, threadData);

  Flowsheet_eqFunction_1267(data, threadData);

  Flowsheet_eqFunction_1266(data, threadData);

  Flowsheet_eqFunction_1265(data, threadData);

  Flowsheet_eqFunction_1264(data, threadData);

  Flowsheet_eqFunction_1263(data, threadData);

  Flowsheet_eqFunction_1262(data, threadData);

  Flowsheet_eqFunction_1261(data, threadData);

  Flowsheet_eqFunction_1260(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

