/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 364
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp38 = GreaterEq(data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp39 = LessEq(data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 365
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp43 = GreaterEq(data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp44 = LessEq(data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp43 && tmp44))
    {
      tmp46 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 366
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  static const MMC_DEFSTRINGLIT(tmp50,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp51;
  static int tmp52 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp52)
  {
    tmp48 = GreaterEq(data->localData[0]->realVars[59] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp49 = LessEq(data->localData[0]->realVars[59] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp48 && tmp49))
    {
      tmp51 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[59] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp50),tmp51);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp52 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 367
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  static const MMC_DEFSTRINGLIT(tmp55,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp56;
  static int tmp57 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp57)
  {
    tmp53 = GreaterEq(data->localData[0]->realVars[87] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp54 = LessEq(data->localData[0]->realVars[87] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp53 && tmp54))
    {
      tmp56 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[87] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp55),tmp56);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp57 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 368
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp60;
  static int tmp61 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp61)
  {
    tmp58 = GreaterEq(data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp58)
    {
      tmp60 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp59),tmp60);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp61 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 369
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  modelica_boolean tmp62;
  static const MMC_DEFSTRINGLIT(tmp63,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp64;
  static int tmp65 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp65)
  {
    tmp62 = GreaterEq(data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp62)
    {
      tmp64 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp63),tmp64);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp65 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 370
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  modelica_boolean tmp66;
  static const MMC_DEFSTRINGLIT(tmp67,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp68;
  static int tmp69 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp69)
  {
    tmp66 = GreaterEq(data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp66)
    {
      tmp68 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp67),tmp68);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp69 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 371
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  modelica_boolean tmp70;
  static const MMC_DEFSTRINGLIT(tmp71,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp72;
  static int tmp73 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp73)
  {
    tmp70 = GreaterEq(data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp70)
    {
      tmp72 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp71),tmp72);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp73 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 372
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  modelica_boolean tmp74;
  static const MMC_DEFSTRINGLIT(tmp75,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp76;
  static int tmp77 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp77)
  {
    tmp74 = GreaterEq(data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp74)
    {
      tmp76 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp75),tmp76);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp77 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 373
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  modelica_boolean tmp78;
  static const MMC_DEFSTRINGLIT(tmp79,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp80;
  static int tmp81 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp81)
  {
    tmp78 = GreaterEq(data->localData[0]->realVars[2] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp78)
    {
      tmp80 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[2] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp79),tmp80);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp81 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 374
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  modelica_boolean tmp82;
  static const MMC_DEFSTRINGLIT(tmp83,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp84;
  static int tmp85 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp85)
  {
    tmp82 = GreaterEq(data->localData[0]->realVars[3] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp82)
    {
      tmp84 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[3] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp83),tmp84);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp85 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 375
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  modelica_boolean tmp86;
  static const MMC_DEFSTRINGLIT(tmp87,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp88;
  static int tmp89 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp89)
  {
    tmp86 = GreaterEq(data->localData[0]->realVars[4] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp86)
    {
      tmp88 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[4] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp87),tmp88);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp89 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 376
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp93;
  static int tmp94 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp94)
  {
    tmp90 = GreaterEq(data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp91 = LessEq(data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp90 && tmp91))
    {
      tmp93 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp94 = 1;
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
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  static const MMC_DEFSTRINGLIT(tmp97,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp98;
  static int tmp99 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp99)
  {
    tmp95 = GreaterEq(data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp96 = LessEq(data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp95 && tmp96))
    {
      tmp98 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp97),tmp98);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp99 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 378
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  static const MMC_DEFSTRINGLIT(tmp102,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp103;
  static int tmp104 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp104)
  {
    tmp100 = GreaterEq(data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp101 = LessEq(data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp100 && tmp101))
    {
      tmp103 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp102),tmp103);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp104 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 379
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp108;
  static int tmp109 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp109)
  {
    tmp105 = GreaterEq(data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp106 = LessEq(data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp105 && tmp106))
    {
      tmp108 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp109 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 380
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  static const MMC_DEFSTRINGLIT(tmp112,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp113;
  static int tmp114 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp114)
  {
    tmp110 = GreaterEq(data->localData[0]->realVars[17] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp111 = LessEq(data->localData[0]->realVars[17] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp110 && tmp111))
    {
      tmp113 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[17] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp112),tmp113);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp114 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 381
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp118;
  static int tmp119 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp119)
  {
    tmp115 = GreaterEq(data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp116 = LessEq(data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp115 && tmp116))
    {
      tmp118 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp119 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 382
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp123;
  static int tmp124 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp124)
  {
    tmp120 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp121 = LessEq(data->localData[0]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp120 && tmp121))
    {
      tmp123 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp124 = 1;
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
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp128;
  static int tmp129 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp129)
  {
    tmp125 = GreaterEq(data->localData[0]->realVars[20] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp126 = LessEq(data->localData[0]->realVars[20] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp125 && tmp126))
    {
      tmp128 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp129 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 384
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  static const MMC_DEFSTRINGLIT(tmp132,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp133;
  static int tmp134 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp134)
  {
    tmp130 = GreaterEq(data->localData[0]->realVars[21] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp131 = LessEq(data->localData[0]->realVars[21] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp130 && tmp131))
    {
      tmp133 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp132),tmp133);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp134 = 1;
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
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp138;
  static int tmp139 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp139)
  {
    tmp135 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp136 = LessEq(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp135 && tmp136))
    {
      tmp138 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp139 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 386
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp142;
  static int tmp143 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp143)
  {
    tmp140 = GreaterEq(data->localData[0]->realVars[37] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp140)
    {
      tmp142 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[37] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp143 = 1;
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
  modelica_boolean tmp144;
  static const MMC_DEFSTRINGLIT(tmp145,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp146;
  static int tmp147 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp147)
  {
    tmp144 = GreaterEq(data->localData[0]->realVars[38] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp144)
    {
      tmp146 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[38] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp145),tmp146);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp147 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 388
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  modelica_boolean tmp148;
  static const MMC_DEFSTRINGLIT(tmp149,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp150;
  static int tmp151 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp151)
  {
    tmp148 = GreaterEq(data->localData[0]->realVars[39] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp148)
    {
      tmp150 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[39] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp149),tmp150);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp151 = 1;
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
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp154;
  static int tmp155 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp155)
  {
    tmp152 = GreaterEq(data->localData[0]->realVars[40] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp152)
    {
      tmp154 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[40] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp155 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 390
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp158;
  static int tmp159 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp159)
  {
    tmp156 = GreaterEq(data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp156)
    {
      tmp158 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp159 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 391
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  modelica_boolean tmp160;
  static const MMC_DEFSTRINGLIT(tmp161,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp162;
  static int tmp163 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp163)
  {
    tmp160 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp160)
    {
      tmp162 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp161),tmp162);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp163 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 392
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp166;
  static int tmp167 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp167)
  {
    tmp164 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp164)
    {
      tmp166 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp167 = 1;
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
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp170;
  static int tmp171 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp171)
  {
    tmp168 = GreaterEq(data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp168)
    {
      tmp170 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp171 = 1;
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
  modelica_boolean tmp172;
  static const MMC_DEFSTRINGLIT(tmp173,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp174;
  static int tmp175 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp175)
  {
    tmp172 = GreaterEq(data->localData[0]->realVars[1] /* MatStm1.K[2] variable */,0.0);
    if(!tmp172)
    {
      tmp174 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp173),tmp174);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp175 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 362
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void Flowsheet_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp178;
  static int tmp179 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp179)
  {
    tmp176 = GreaterEq(data->localData[0]->realVars[0] /* MatStm1.K[1] variable */,0.0);
    if(!tmp176)
    {
      tmp178 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[0] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp179 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 361
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  modelica_boolean tmp180;
  static const MMC_DEFSTRINGLIT(tmp181,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp182;
  static int tmp183 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp183)
  {
    tmp180 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp180)
    {
      tmp182 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp181),tmp182);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp183 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 360
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  modelica_boolean tmp184;
  static const MMC_DEFSTRINGLIT(tmp185,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp186;
  static int tmp187 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp187)
  {
    tmp184 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp184)
    {
      tmp186 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp185),tmp186);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp187 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Flowsheet_eqFunction_364(data, threadData);

  Flowsheet_eqFunction_365(data, threadData);

  Flowsheet_eqFunction_366(data, threadData);

  Flowsheet_eqFunction_367(data, threadData);

  Flowsheet_eqFunction_368(data, threadData);

  Flowsheet_eqFunction_369(data, threadData);

  Flowsheet_eqFunction_370(data, threadData);

  Flowsheet_eqFunction_371(data, threadData);

  Flowsheet_eqFunction_372(data, threadData);

  Flowsheet_eqFunction_373(data, threadData);

  Flowsheet_eqFunction_374(data, threadData);

  Flowsheet_eqFunction_375(data, threadData);

  Flowsheet_eqFunction_376(data, threadData);

  Flowsheet_eqFunction_377(data, threadData);

  Flowsheet_eqFunction_378(data, threadData);

  Flowsheet_eqFunction_379(data, threadData);

  Flowsheet_eqFunction_380(data, threadData);

  Flowsheet_eqFunction_381(data, threadData);

  Flowsheet_eqFunction_382(data, threadData);

  Flowsheet_eqFunction_383(data, threadData);

  Flowsheet_eqFunction_384(data, threadData);

  Flowsheet_eqFunction_385(data, threadData);

  Flowsheet_eqFunction_386(data, threadData);

  Flowsheet_eqFunction_387(data, threadData);

  Flowsheet_eqFunction_388(data, threadData);

  Flowsheet_eqFunction_389(data, threadData);

  Flowsheet_eqFunction_390(data, threadData);

  Flowsheet_eqFunction_391(data, threadData);

  Flowsheet_eqFunction_392(data, threadData);

  Flowsheet_eqFunction_393(data, threadData);

  Flowsheet_eqFunction_363(data, threadData);

  Flowsheet_eqFunction_362(data, threadData);

  Flowsheet_eqFunction_361(data, threadData);

  Flowsheet_eqFunction_360(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

