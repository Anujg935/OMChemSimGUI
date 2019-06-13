/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 479
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[82] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp1 = LessEq(data->localData[0]->realVars[82] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[82] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2024,7,2024,312,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 480
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->localData[0]->realVars[108] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp6 = LessEq(data->localData[0]->realVars[108] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[108] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2024,7,2024,312,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 481
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
    tmp10 = GreaterEq(data->localData[0]->realVars[81] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp11 = LessEq(data->localData[0]->realVars[81] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[81] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2024,7,2024,312,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 482
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp15 = GreaterEq(data->localData[0]->realVars[107] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp16 = LessEq(data->localData[0]->realVars[107] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp15 && tmp16))
    {
      tmp18 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[107] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2024,7,2024,312,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 483
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2025,7,2025,177,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 484
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp24 = GreaterEq(data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp24)
    {
      tmp26 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2025,7,2025,177,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 485
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp28 = GreaterEq(data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2025,7,2025,177,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 486
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[102] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp32)
    {
      tmp34 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[102] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2025,7,2025,177,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 487
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp36 = GreaterEq(data->localData[0]->realVars[103] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[103] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2025,7,2025,177,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 488
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp40 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2025,7,2025,177,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 489
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp44 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2025,7,2025,177,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 490
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->localData[0]->realVars[13] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2025,7,2025,177,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 491
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp55;
  static int tmp56 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp56)
  {
    tmp52 = GreaterEq(data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp53 = LessEq(data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp52 && tmp53))
    {
      tmp55 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp54),tmp55);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp56 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 492
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp60;
  static int tmp61 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp61)
  {
    tmp57 = GreaterEq(data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp58 = LessEq(data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp57 && tmp58))
    {
      tmp60 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp59),tmp60);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp61 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 493
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,3] >= 0.0 and MatStm1.compMolFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,3] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp65;
  static int tmp66 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp66)
  {
    tmp62 = GreaterEq(data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */,0.0);
    tmp63 = LessEq(data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */,1.0);
    if(!(tmp62 && tmp63))
    {
      tmp65 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,3] >= 0.0 and MatStm1.compMolFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp66 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 494
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp70;
  static int tmp71 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp71)
  {
    tmp67 = GreaterEq(data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp68 = LessEq(data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp67 && tmp68))
    {
      tmp70 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp71 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 495
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp75;
  static int tmp76 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp76)
  {
    tmp72 = GreaterEq(data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp73 = LessEq(data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp72 && tmp73))
    {
      tmp75 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp76 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 496
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,3] >= 0.0 and MatStm1.compMolFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,3] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  static const MMC_DEFSTRINGLIT(tmp79,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp80;
  static int tmp81 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp81)
  {
    tmp77 = GreaterEq(data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */,0.0);
    tmp78 = LessEq(data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */,1.0);
    if(!(tmp77 && tmp78))
    {
      tmp80 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp79),tmp80);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,3] >= 0.0 and MatStm1.compMolFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp81 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 497
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  static const MMC_DEFSTRINGLIT(tmp84,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp85;
  static int tmp86 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp86)
  {
    tmp82 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp83 = LessEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp82 && tmp83))
    {
      tmp85 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp84),tmp85);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp86 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 498
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  static const MMC_DEFSTRINGLIT(tmp89,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp90;
  static int tmp91 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp91)
  {
    tmp87 = GreaterEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp88 = LessEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp87 && tmp88))
    {
      tmp90 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp89),tmp90);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp91 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 499
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,3] >= 0.0 and MatStm1.compMasFrac[1,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,3] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,3], "g"));
*/
void Flowsheet_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  static const MMC_DEFSTRINGLIT(tmp94,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,3] <= 1.0, has value: ");
  modelica_string tmp95;
  static int tmp96 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp96)
  {
    tmp92 = GreaterEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,3] variable */,0.0);
    tmp93 = LessEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,3] variable */,1.0);
    if(!(tmp92 && tmp93))
    {
      tmp95 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp94),tmp95);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,3] >= 0.0 and MatStm1.compMasFrac[1,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp96 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 500
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp100;
  static int tmp101 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp101)
  {
    tmp97 = GreaterEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp98 = LessEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp97 && tmp98))
    {
      tmp100 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp99),tmp100);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp101 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 501
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  static const MMC_DEFSTRINGLIT(tmp104,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp105;
  static int tmp106 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp106)
  {
    tmp102 = GreaterEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp103 = LessEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp102 && tmp103))
    {
      tmp105 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp104),tmp105);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp106 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 502
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,3] >= 0.0 and MatStm1.compMasFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,3] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  static const MMC_DEFSTRINGLIT(tmp109,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp110;
  static int tmp111 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp111)
  {
    tmp107 = GreaterEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,3] variable */,0.0);
    tmp108 = LessEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,3] variable */,1.0);
    if(!(tmp107 && tmp108))
    {
      tmp110 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp109),tmp110);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,3] >= 0.0 and MatStm1.compMasFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp111 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 503
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  static const MMC_DEFSTRINGLIT(tmp114,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp115;
  static int tmp116 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp116)
  {
    tmp112 = GreaterEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp113 = LessEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp112 && tmp113))
    {
      tmp115 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp114),tmp115);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp116 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 504
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  static const MMC_DEFSTRINGLIT(tmp119,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp120;
  static int tmp121 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp121)
  {
    tmp117 = GreaterEq(data->localData[0]->realVars[34] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp118 = LessEq(data->localData[0]->realVars[34] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp117 && tmp118))
    {
      tmp120 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[34] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp119),tmp120);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp121 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 505
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,3] >= 0.0 and MatStm1.compMasFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,3] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  modelica_boolean tmp122;
  modelica_boolean tmp123;
  static const MMC_DEFSTRINGLIT(tmp124,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp125;
  static int tmp126 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp126)
  {
    tmp122 = GreaterEq(data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,3] variable */,0.0);
    tmp123 = LessEq(data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,3] variable */,1.0);
    if(!(tmp122 && tmp123))
    {
      tmp125 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp124),tmp125);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,3] >= 0.0 and MatStm1.compMasFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp126 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 506
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0 and MatStm1.compMolFlo[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFlo[2,1] <= 1.0, has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,89,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFlo[2,1] <= 1.0, has value: ");
  modelica_string tmp130;
  static int tmp131 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp131)
  {
    tmp127 = GreaterEq(data->localData[0]->realVars[57] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    tmp128 = LessEq(data->localData[0]->realVars[57] /* MatStm1.compMolFlo[2,1] variable */,1.0);
    if(!(tmp127 && tmp128))
    {
      tmp130 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[57] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0 and MatStm1.compMolFlo[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp131 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 507
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0 and MatStm1.compMolFlo[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFlo[2,2] <= 1.0, has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  static const MMC_DEFSTRINGLIT(tmp134,89,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFlo[2,2] <= 1.0, has value: ");
  modelica_string tmp135;
  static int tmp136 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp136)
  {
    tmp132 = GreaterEq(data->localData[0]->realVars[58] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    tmp133 = LessEq(data->localData[0]->realVars[58] /* MatStm1.compMolFlo[2,2] variable */,1.0);
    if(!(tmp132 && tmp133))
    {
      tmp135 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[58] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp134),tmp135);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0 and MatStm1.compMolFlo[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp136 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 508
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,3] >= 0.0 and MatStm1.compMolFlo[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFlo[2,3] <= 1.0, has value: " + String(MatStm1.compMolFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  static const MMC_DEFSTRINGLIT(tmp139,89,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFlo[2,3] <= 1.0, has value: ");
  modelica_string tmp140;
  static int tmp141 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp141)
  {
    tmp137 = GreaterEq(data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,3] variable */,0.0);
    tmp138 = LessEq(data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,3] variable */,1.0);
    if(!(tmp137 && tmp138))
    {
      tmp140 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp139),tmp140);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,3] >= 0.0 and MatStm1.compMolFlo[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp141 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 509
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0 and MatStm1.compMolFlo[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFlo[3,1] <= 1.0, has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  static const MMC_DEFSTRINGLIT(tmp144,89,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFlo[3,1] <= 1.0, has value: ");
  modelica_string tmp145;
  static int tmp146 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp146)
  {
    tmp142 = GreaterEq(data->localData[0]->realVars[60] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    tmp143 = LessEq(data->localData[0]->realVars[60] /* MatStm1.compMolFlo[3,1] variable */,1.0);
    if(!(tmp142 && tmp143))
    {
      tmp145 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[60] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp144),tmp145);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0 and MatStm1.compMolFlo[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp146 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 510
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0 and MatStm1.compMolFlo[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFlo[3,2] <= 1.0, has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  modelica_boolean tmp147;
  modelica_boolean tmp148;
  static const MMC_DEFSTRINGLIT(tmp149,89,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFlo[3,2] <= 1.0, has value: ");
  modelica_string tmp150;
  static int tmp151 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp151)
  {
    tmp147 = GreaterEq(data->localData[0]->realVars[61] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    tmp148 = LessEq(data->localData[0]->realVars[61] /* MatStm1.compMolFlo[3,2] variable */,1.0);
    if(!(tmp147 && tmp148))
    {
      tmp150 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[61] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp149),tmp150);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0 and MatStm1.compMolFlo[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp151 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 511
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,3] >= 0.0 and MatStm1.compMolFlo[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFlo[3,3] <= 1.0, has value: " + String(MatStm1.compMolFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  modelica_boolean tmp152;
  modelica_boolean tmp153;
  static const MMC_DEFSTRINGLIT(tmp154,89,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFlo[3,3] <= 1.0, has value: ");
  modelica_string tmp155;
  static int tmp156 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp156)
  {
    tmp152 = GreaterEq(data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,3] variable */,0.0);
    tmp153 = LessEq(data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,3] variable */,1.0);
    if(!(tmp152 && tmp153))
    {
      tmp155 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp154),tmp155);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,3] >= 0.0 and MatStm1.compMolFlo[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp156 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 512
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  modelica_boolean tmp157;
  static const MMC_DEFSTRINGLIT(tmp158,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp159;
  static int tmp160 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp160)
  {
    tmp157 = GreaterEq(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp157)
    {
      tmp159 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp158),tmp159);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp160 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 513
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  modelica_boolean tmp161;
  static const MMC_DEFSTRINGLIT(tmp162,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp163;
  static int tmp164 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp164)
  {
    tmp161 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp161)
    {
      tmp163 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp162),tmp163);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp164 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 514
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,3], has value: " + String(MatStm1.compMasFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  modelica_boolean tmp165;
  static const MMC_DEFSTRINGLIT(tmp166,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,3], has value: ");
  modelica_string tmp167;
  static int tmp168 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp168)
  {
    tmp165 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,3] variable */,0.0);
    if(!tmp165)
    {
      tmp167 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp166),tmp167);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp168 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 515
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  modelica_boolean tmp169;
  static const MMC_DEFSTRINGLIT(tmp170,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp171;
  static int tmp172 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp172)
  {
    tmp169 = GreaterEq(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp169)
    {
      tmp171 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp170),tmp171);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp172 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 516
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  modelica_boolean tmp173;
  static const MMC_DEFSTRINGLIT(tmp174,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp175;
  static int tmp176 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp176)
  {
    tmp173 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp173)
    {
      tmp175 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp174),tmp175);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp176 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 517
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,3], has value: " + String(MatStm1.compMasFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  modelica_boolean tmp177;
  static const MMC_DEFSTRINGLIT(tmp178,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,3], has value: ");
  modelica_string tmp179;
  static int tmp180 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp180)
  {
    tmp177 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,3] variable */,0.0);
    if(!tmp177)
    {
      tmp179 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp178),tmp179);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp180 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 478
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,3], has value: " + String(MatStm1.compMasFlo[1,3], "g"));
*/
void Flowsheet_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,3], has value: ");
  modelica_string tmp183;
  static int tmp184 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp184)
  {
    tmp181 = GreaterEq(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,3] variable */,0.0);
    if(!tmp181)
    {
      tmp183 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp184 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 477
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  modelica_boolean tmp185;
  static const MMC_DEFSTRINGLIT(tmp186,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp187;
  static int tmp188 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp188)
  {
    tmp185 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp185)
    {
      tmp187 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp186),tmp187);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp188 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 476
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  modelica_boolean tmp189;
  static const MMC_DEFSTRINGLIT(tmp190,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp191;
  static int tmp192 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp192)
  {
    tmp189 = GreaterEq(data->localData[0]->realVars[18] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp189)
    {
      tmp191 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[18] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp190),tmp191);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2026,7,2026,327,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp192 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Flowsheet_eqFunction_479(data, threadData);

  Flowsheet_eqFunction_480(data, threadData);

  Flowsheet_eqFunction_481(data, threadData);

  Flowsheet_eqFunction_482(data, threadData);

  Flowsheet_eqFunction_483(data, threadData);

  Flowsheet_eqFunction_484(data, threadData);

  Flowsheet_eqFunction_485(data, threadData);

  Flowsheet_eqFunction_486(data, threadData);

  Flowsheet_eqFunction_487(data, threadData);

  Flowsheet_eqFunction_488(data, threadData);

  Flowsheet_eqFunction_489(data, threadData);

  Flowsheet_eqFunction_490(data, threadData);

  Flowsheet_eqFunction_491(data, threadData);

  Flowsheet_eqFunction_492(data, threadData);

  Flowsheet_eqFunction_493(data, threadData);

  Flowsheet_eqFunction_494(data, threadData);

  Flowsheet_eqFunction_495(data, threadData);

  Flowsheet_eqFunction_496(data, threadData);

  Flowsheet_eqFunction_497(data, threadData);

  Flowsheet_eqFunction_498(data, threadData);

  Flowsheet_eqFunction_499(data, threadData);

  Flowsheet_eqFunction_500(data, threadData);

  Flowsheet_eqFunction_501(data, threadData);

  Flowsheet_eqFunction_502(data, threadData);

  Flowsheet_eqFunction_503(data, threadData);

  Flowsheet_eqFunction_504(data, threadData);

  Flowsheet_eqFunction_505(data, threadData);

  Flowsheet_eqFunction_506(data, threadData);

  Flowsheet_eqFunction_507(data, threadData);

  Flowsheet_eqFunction_508(data, threadData);

  Flowsheet_eqFunction_509(data, threadData);

  Flowsheet_eqFunction_510(data, threadData);

  Flowsheet_eqFunction_511(data, threadData);

  Flowsheet_eqFunction_512(data, threadData);

  Flowsheet_eqFunction_513(data, threadData);

  Flowsheet_eqFunction_514(data, threadData);

  Flowsheet_eqFunction_515(data, threadData);

  Flowsheet_eqFunction_516(data, threadData);

  Flowsheet_eqFunction_517(data, threadData);

  Flowsheet_eqFunction_478(data, threadData);

  Flowsheet_eqFunction_477(data, threadData);

  Flowsheet_eqFunction_476(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

