/* Asserts */
#include "flash1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1366
type: ALGORITHM

  assert(Flash1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= Flash1.totMolFlo[2], has value: " + String(Flash1.totMolFlo[2], "g"));
*/
void flash1_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1366};
  modelica_boolean tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,74,"Variable violating min constraint: 0.0 <= Flash1.totMolFlo[2], has value: ");
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp5)
  {
    tmp2 = GreaterEq(data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */,0.0);
    if(!tmp2)
    {
      tmp4 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp3),tmp4);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4974,7,4974,341,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nFlash1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp5 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1367
type: ALGORITHM

  assert(Flash1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= Flash1.totMolFlo[3], has value: " + String(Flash1.totMolFlo[3], "g"));
*/
void flash1_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1367};
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,74,"Variable violating min constraint: 0.0 <= Flash1.totMolFlo[3], has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp6 = GreaterEq(data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */,0.0);
    if(!tmp6)
    {
      tmp8 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4974,7,4974,341,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nFlash1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1368
type: ALGORITHM

  assert(Flash1.liqPhasMolFrac >= 0.0 and Flash1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= Flash1.liqPhasMolFrac <= 1.0, has value: " + String(Flash1.liqPhasMolFrac, "g"));
*/
void flash1_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1368};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,87,"Variable violating min/max constraint: 0.0 <= Flash1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
    tmp10 = GreaterEq(data->localData[0]->realVars[38] /* Flash1.liqPhasMolFrac variable */,0.0);
    tmp11 = LessEq(data->localData[0]->realVars[38] /* Flash1.liqPhasMolFrac variable */,1.0);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[38] /* Flash1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4974,7,4974,341,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nFlash1.liqPhasMolFrac >= 0.0 and Flash1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1369
type: ALGORITHM

  assert(Flash1.vapPhasMolFrac >= 0.0 and Flash1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= Flash1.vapPhasMolFrac <= 1.0, has value: " + String(Flash1.vapPhasMolFrac, "g"));
*/
void flash1_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1369};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,87,"Variable violating min/max constraint: 0.0 <= Flash1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp15 = GreaterEq(data->localData[0]->realVars[61] /* Flash1.vapPhasMolFrac variable */,0.0);
    tmp16 = LessEq(data->localData[0]->realVars[61] /* Flash1.vapPhasMolFrac variable */,1.0);
    if(!(tmp15 && tmp16))
    {
      tmp18 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[61] /* Flash1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4974,7,4974,341,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nFlash1.vapPhasMolFrac >= 0.0 and Flash1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1370
type: ALGORITHM

  assert(MatStm5.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.Pbubl, has value: " + String(MatStm5.Pbubl, "g"));
*/
void flash1_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1370};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,68,"Variable violating min constraint: 0.0 <= MatStm5.Pbubl, has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */,0.0);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1371
type: ALGORITHM

  assert(MatStm5.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.Pdew, has value: " + String(MatStm5.Pdew, "g"));
*/
void flash1_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1371};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,67,"Variable violating min constraint: 0.0 <= MatStm5.Pdew, has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp24 = GreaterEq(data->localData[0]->realVars[249] /* MatStm5.Pdew variable */,0.0);
    if(!tmp24)
    {
      tmp26 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1372
type: ALGORITHM

  assert(MatStm5.liqPhasMolFrac >= 0.0 and MatStm5.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMolFrac <= 1.0, has value: " + String(MatStm5.liqPhasMolFrac, "g"));
*/
void flash1_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1372};
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  static const MMC_DEFSTRINGLIT(tmp30,88,"Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp31;
  static int tmp32 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp32)
  {
    tmp28 = GreaterEq(data->localData[0]->realVars[301] /* MatStm5.liqPhasMolFrac variable */,0.0);
    tmp29 = LessEq(data->localData[0]->realVars[301] /* MatStm5.liqPhasMolFrac variable */,1.0);
    if(!(tmp28 && tmp29))
    {
      tmp31 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[301] /* MatStm5.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp30),tmp31);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.liqPhasMolFrac >= 0.0 and MatStm5.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp32 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1373
type: ALGORITHM

  assert(MatStm5.vapPhasMolFrac >= 0.0 and MatStm5.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.vapPhasMolFrac <= 1.0, has value: " + String(MatStm5.vapPhasMolFrac, "g"));
*/
void flash1_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1373};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,88,"Variable violating min/max constraint: 0.0 <= MatStm5.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp36;
  static int tmp37 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp37)
  {
    tmp33 = GreaterEq(data->localData[0]->realVars[328] /* MatStm5.vapPhasMolFrac variable */,0.0);
    tmp34 = LessEq(data->localData[0]->realVars[328] /* MatStm5.vapPhasMolFrac variable */,1.0);
    if(!(tmp33 && tmp34))
    {
      tmp36 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[328] /* MatStm5.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.vapPhasMolFrac >= 0.0 and MatStm5.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp37 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1374
type: ALGORITHM

  assert(MatStm5.liqPhasMasFrac >= 0.0 and MatStm5.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMasFrac <= 1.0, has value: " + String(MatStm5.liqPhasMasFrac, "g"));
*/
void flash1_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1374};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,88,"Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp38 = GreaterEq(data->localData[0]->realVars[300] /* MatStm5.liqPhasMasFrac variable */,0.0);
    tmp39 = LessEq(data->localData[0]->realVars[300] /* MatStm5.liqPhasMasFrac variable */,1.0);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[300] /* MatStm5.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.liqPhasMasFrac >= 0.0 and MatStm5.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1375
type: ALGORITHM

  assert(MatStm5.vapPhasMasFrac >= 0.0 and MatStm5.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.vapPhasMasFrac <= 1.0, has value: " + String(MatStm5.vapPhasMasFrac, "g"));
*/
void flash1_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1375};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,88,"Variable violating min/max constraint: 0.0 <= MatStm5.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp43 = GreaterEq(data->localData[0]->realVars[327] /* MatStm5.vapPhasMasFrac variable */,0.0);
    tmp44 = LessEq(data->localData[0]->realVars[327] /* MatStm5.vapPhasMasFrac variable */,1.0);
    if(!(tmp43 && tmp44))
    {
      tmp46 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[327] /* MatStm5.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.vapPhasMasFrac >= 0.0 and MatStm5.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1376
type: ALGORITHM

  assert(MatStm5.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[2], has value: " + String(MatStm5.totMolFlo[2], "g"));
*/
void flash1_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1376};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,75,"Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[2], has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */,0.0);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1377
type: ALGORITHM

  assert(MatStm5.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[3], has value: " + String(MatStm5.totMolFlo[3], "g"));
*/
void flash1_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1377};
  modelica_boolean tmp52;
  static const MMC_DEFSTRINGLIT(tmp53,75,"Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[3], has value: ");
  modelica_string tmp54;
  static int tmp55 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp55)
  {
    tmp52 = GreaterEq(data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */,0.0);
    if(!tmp52)
    {
      tmp54 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp53),tmp54);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp55 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1378
type: ALGORITHM

  assert(MatStm5.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[1], has value: " + String(MatStm5.totMasFlo[1], "g"));
*/
void flash1_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1378};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,75,"Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[1], has value: ");
  modelica_string tmp58;
  static int tmp59 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp59)
  {
    tmp56 = GreaterEq(data->localData[0]->realVars[322] /* MatStm5.totMasFlo[1] variable */,0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[322] /* MatStm5.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp59 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1379
type: ALGORITHM

  assert(MatStm5.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[2], has value: " + String(MatStm5.totMasFlo[2], "g"));
*/
void flash1_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1379};
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,75,"Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[2], has value: ");
  modelica_string tmp62;
  static int tmp63 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp63)
  {
    tmp60 = GreaterEq(data->localData[0]->realVars[323] /* MatStm5.totMasFlo[2] variable */,0.0);
    if(!tmp60)
    {
      tmp62 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[323] /* MatStm5.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp63 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1380
type: ALGORITHM

  assert(MatStm5.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[3], has value: " + String(MatStm5.totMasFlo[3], "g"));
*/
void flash1_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1380};
  modelica_boolean tmp64;
  static const MMC_DEFSTRINGLIT(tmp65,75,"Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[3], has value: ");
  modelica_string tmp66;
  static int tmp67 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp67)
  {
    tmp64 = GreaterEq(data->localData[0]->realVars[324] /* MatStm5.totMasFlo[3] variable */,0.0);
    if(!tmp64)
    {
      tmp66 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[324] /* MatStm5.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp65),tmp66);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp67 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1381
type: ALGORITHM

  assert(MatStm5.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.MW[1], has value: " + String(MatStm5.MW[1], "g"));
*/
void flash1_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1381};
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,68,"Variable violating min constraint: 0.0 <= MatStm5.MW[1], has value: ");
  modelica_string tmp70;
  static int tmp71 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp71)
  {
    tmp68 = GreaterEq(data->localData[0]->realVars[245] /* MatStm5.MW[1] variable */,0.0);
    if(!tmp68)
    {
      tmp70 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[245] /* MatStm5.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp71 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1382
type: ALGORITHM

  assert(MatStm5.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.MW[2], has value: " + String(MatStm5.MW[2], "g"));
*/
void flash1_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1382};
  modelica_boolean tmp72;
  static const MMC_DEFSTRINGLIT(tmp73,68,"Variable violating min constraint: 0.0 <= MatStm5.MW[2], has value: ");
  modelica_string tmp74;
  static int tmp75 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp75)
  {
    tmp72 = GreaterEq(data->localData[0]->realVars[246] /* MatStm5.MW[2] variable */,0.0);
    if(!tmp72)
    {
      tmp74 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[246] /* MatStm5.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp73),tmp74);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp75 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1383
type: ALGORITHM

  assert(MatStm5.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.MW[3], has value: " + String(MatStm5.MW[3], "g"));
*/
void flash1_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1383};
  modelica_boolean tmp76;
  static const MMC_DEFSTRINGLIT(tmp77,68,"Variable violating min constraint: 0.0 <= MatStm5.MW[3], has value: ");
  modelica_string tmp78;
  static int tmp79 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp79)
  {
    tmp76 = GreaterEq(data->localData[0]->realVars[247] /* MatStm5.MW[3] variable */,0.0);
    if(!tmp76)
    {
      tmp78 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[247] /* MatStm5.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp77),tmp78);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp79 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1384
type: ALGORITHM

  assert(MatStm5.compMolFrac[1,1] >= 0.0 and MatStm5.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm5.compMolFrac[1,1], "g"));
*/
void flash1_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1384};
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  static const MMC_DEFSTRINGLIT(tmp82,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp83;
  static int tmp84 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp84)
  {
    tmp80 = GreaterEq(data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */,0.0);
    tmp81 = LessEq(data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */,1.0);
    if(!(tmp80 && tmp81))
    {
      tmp83 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp82),tmp83);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[1,1] >= 0.0 and MatStm5.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp84 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1385
type: ALGORITHM

  assert(MatStm5.compMolFrac[1,2] >= 0.0 and MatStm5.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm5.compMolFrac[1,2], "g"));
*/
void flash1_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1385};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  static const MMC_DEFSTRINGLIT(tmp87,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp88;
  static int tmp89 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp89)
  {
    tmp85 = GreaterEq(data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */,0.0);
    tmp86 = LessEq(data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */,1.0);
    if(!(tmp85 && tmp86))
    {
      tmp88 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp87),tmp88);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[1,2] >= 0.0 and MatStm5.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp89 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1386
type: ALGORITHM

  assert(MatStm5.compMolFrac[2,1] >= 0.0 and MatStm5.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm5.compMolFrac[2,1], "g"));
*/
void flash1_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1386};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp93;
  static int tmp94 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp94)
  {
    tmp90 = GreaterEq(data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */,0.0);
    tmp91 = LessEq(data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */,1.0);
    if(!(tmp90 && tmp91))
    {
      tmp93 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[2,1] >= 0.0 and MatStm5.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp94 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1387
type: ALGORITHM

  assert(MatStm5.compMolFrac[2,2] >= 0.0 and MatStm5.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm5.compMolFrac[2,2], "g"));
*/
void flash1_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1387};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  static const MMC_DEFSTRINGLIT(tmp97,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp98;
  static int tmp99 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp99)
  {
    tmp95 = GreaterEq(data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */,0.0);
    tmp96 = LessEq(data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */,1.0);
    if(!(tmp95 && tmp96))
    {
      tmp98 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp97),tmp98);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[2,2] >= 0.0 and MatStm5.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp99 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1388
type: ALGORITHM

  assert(MatStm5.compMolFrac[3,1] >= 0.0 and MatStm5.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm5.compMolFrac[3,1], "g"));
*/
void flash1_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1388};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  static const MMC_DEFSTRINGLIT(tmp102,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp103;
  static int tmp104 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp104)
  {
    tmp100 = GreaterEq(data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */,0.0);
    tmp101 = LessEq(data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */,1.0);
    if(!(tmp100 && tmp101))
    {
      tmp103 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp102),tmp103);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[3,1] >= 0.0 and MatStm5.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp104 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1389
type: ALGORITHM

  assert(MatStm5.compMolFrac[3,2] >= 0.0 and MatStm5.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm5.compMolFrac[3,2], "g"));
*/
void flash1_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1389};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp108;
  static int tmp109 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp109)
  {
    tmp105 = GreaterEq(data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */,0.0);
    tmp106 = LessEq(data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */,1.0);
    if(!(tmp105 && tmp106))
    {
      tmp108 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[3,2] >= 0.0 and MatStm5.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp109 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1390
type: ALGORITHM

  assert(MatStm5.compMasFrac[1,1] >= 0.0 and MatStm5.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm5.compMasFrac[1,1], "g"));
*/
void flash1_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1390};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  static const MMC_DEFSTRINGLIT(tmp112,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp113;
  static int tmp114 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp114)
  {
    tmp110 = GreaterEq(data->localData[0]->realVars[258] /* MatStm5.compMasFrac[1,1] variable */,0.0);
    tmp111 = LessEq(data->localData[0]->realVars[258] /* MatStm5.compMasFrac[1,1] variable */,1.0);
    if(!(tmp110 && tmp111))
    {
      tmp113 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[258] /* MatStm5.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp112),tmp113);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[1,1] >= 0.0 and MatStm5.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp114 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1391
type: ALGORITHM

  assert(MatStm5.compMasFrac[1,2] >= 0.0 and MatStm5.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm5.compMasFrac[1,2], "g"));
*/
void flash1_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1391};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp118;
  static int tmp119 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp119)
  {
    tmp115 = GreaterEq(data->localData[0]->realVars[259] /* MatStm5.compMasFrac[1,2] variable */,0.0);
    tmp116 = LessEq(data->localData[0]->realVars[259] /* MatStm5.compMasFrac[1,2] variable */,1.0);
    if(!(tmp115 && tmp116))
    {
      tmp118 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[259] /* MatStm5.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[1,2] >= 0.0 and MatStm5.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp119 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1392
type: ALGORITHM

  assert(MatStm5.compMasFrac[2,1] >= 0.0 and MatStm5.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm5.compMasFrac[2,1], "g"));
*/
void flash1_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1392};
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp123;
  static int tmp124 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp124)
  {
    tmp120 = GreaterEq(data->localData[0]->realVars[260] /* MatStm5.compMasFrac[2,1] variable */,0.0);
    tmp121 = LessEq(data->localData[0]->realVars[260] /* MatStm5.compMasFrac[2,1] variable */,1.0);
    if(!(tmp120 && tmp121))
    {
      tmp123 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[260] /* MatStm5.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[2,1] >= 0.0 and MatStm5.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp124 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1393
type: ALGORITHM

  assert(MatStm5.compMasFrac[2,2] >= 0.0 and MatStm5.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm5.compMasFrac[2,2], "g"));
*/
void flash1_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1393};
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp128;
  static int tmp129 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp129)
  {
    tmp125 = GreaterEq(data->localData[0]->realVars[261] /* MatStm5.compMasFrac[2,2] variable */,0.0);
    tmp126 = LessEq(data->localData[0]->realVars[261] /* MatStm5.compMasFrac[2,2] variable */,1.0);
    if(!(tmp125 && tmp126))
    {
      tmp128 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[261] /* MatStm5.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[2,2] >= 0.0 and MatStm5.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp129 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1394
type: ALGORITHM

  assert(MatStm5.compMasFrac[3,1] >= 0.0 and MatStm5.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm5.compMasFrac[3,1], "g"));
*/
void flash1_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1394};
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  static const MMC_DEFSTRINGLIT(tmp132,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp133;
  static int tmp134 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp134)
  {
    tmp130 = GreaterEq(data->localData[0]->realVars[262] /* MatStm5.compMasFrac[3,1] variable */,0.0);
    tmp131 = LessEq(data->localData[0]->realVars[262] /* MatStm5.compMasFrac[3,1] variable */,1.0);
    if(!(tmp130 && tmp131))
    {
      tmp133 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[262] /* MatStm5.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp132),tmp133);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[3,1] >= 0.0 and MatStm5.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp134 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1395
type: ALGORITHM

  assert(MatStm5.compMasFrac[3,2] >= 0.0 and MatStm5.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm5.compMasFrac[3,2], "g"));
*/
void flash1_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1395};
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp138;
  static int tmp139 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp139)
  {
    tmp135 = GreaterEq(data->localData[0]->realVars[263] /* MatStm5.compMasFrac[3,2] variable */,0.0);
    tmp136 = LessEq(data->localData[0]->realVars[263] /* MatStm5.compMasFrac[3,2] variable */,1.0);
    if(!(tmp135 && tmp136))
    {
      tmp138 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[263] /* MatStm5.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[3,2] >= 0.0 and MatStm5.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp139 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1396
type: ALGORITHM

  assert(MatStm5.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[1,1], has value: " + String(MatStm5.compMolFlo[1,1], "g"));
*/
void flash1_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1396};
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[1,1], has value: ");
  modelica_string tmp142;
  static int tmp143 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp143)
  {
    tmp140 = GreaterEq(data->localData[0]->realVars[276] /* MatStm5.compMolFlo[1,1] variable */,0.0);
    if(!tmp140)
    {
      tmp142 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[276] /* MatStm5.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp143 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1397
type: ALGORITHM

  assert(MatStm5.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[1,2], has value: " + String(MatStm5.compMolFlo[1,2], "g"));
*/
void flash1_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1397};
  modelica_boolean tmp144;
  static const MMC_DEFSTRINGLIT(tmp145,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[1,2], has value: ");
  modelica_string tmp146;
  static int tmp147 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp147)
  {
    tmp144 = GreaterEq(data->localData[0]->realVars[277] /* MatStm5.compMolFlo[1,2] variable */,0.0);
    if(!tmp144)
    {
      tmp146 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[277] /* MatStm5.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp145),tmp146);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp147 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1398
type: ALGORITHM

  assert(MatStm5.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,1], has value: " + String(MatStm5.compMolFlo[2,1], "g"));
*/
void flash1_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1398};
  modelica_boolean tmp148;
  static const MMC_DEFSTRINGLIT(tmp149,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,1], has value: ");
  modelica_string tmp150;
  static int tmp151 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp151)
  {
    tmp148 = GreaterEq(data->localData[0]->realVars[278] /* MatStm5.compMolFlo[2,1] variable */,0.0);
    if(!tmp148)
    {
      tmp150 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[278] /* MatStm5.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp149),tmp150);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp151 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1399
type: ALGORITHM

  assert(MatStm5.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,2], has value: " + String(MatStm5.compMolFlo[2,2], "g"));
*/
void flash1_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1399};
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,2], has value: ");
  modelica_string tmp154;
  static int tmp155 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp155)
  {
    tmp152 = GreaterEq(data->localData[0]->realVars[279] /* MatStm5.compMolFlo[2,2] variable */,0.0);
    if(!tmp152)
    {
      tmp154 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[279] /* MatStm5.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp155 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1400
type: ALGORITHM

  assert(MatStm5.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,1], has value: " + String(MatStm5.compMolFlo[3,1], "g"));
*/
void flash1_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1400};
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,1], has value: ");
  modelica_string tmp158;
  static int tmp159 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp159)
  {
    tmp156 = GreaterEq(data->localData[0]->realVars[280] /* MatStm5.compMolFlo[3,1] variable */,0.0);
    if(!tmp156)
    {
      tmp158 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[280] /* MatStm5.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp159 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1401
type: ALGORITHM

  assert(MatStm5.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,2], has value: " + String(MatStm5.compMolFlo[3,2], "g"));
*/
void flash1_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1401};
  modelica_boolean tmp160;
  static const MMC_DEFSTRINGLIT(tmp161,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,2], has value: ");
  modelica_string tmp162;
  static int tmp163 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp163)
  {
    tmp160 = GreaterEq(data->localData[0]->realVars[281] /* MatStm5.compMolFlo[3,2] variable */,0.0);
    if(!tmp160)
    {
      tmp162 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[281] /* MatStm5.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp161),tmp162);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp163 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1402
type: ALGORITHM

  assert(MatStm5.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[1,1], has value: " + String(MatStm5.compMasFlo[1,1], "g"));
*/
void flash1_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1402};
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[1,1], has value: ");
  modelica_string tmp166;
  static int tmp167 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp167)
  {
    tmp164 = GreaterEq(data->localData[0]->realVars[252] /* MatStm5.compMasFlo[1,1] variable */,0.0);
    if(!tmp164)
    {
      tmp166 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[252] /* MatStm5.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp167 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1403
type: ALGORITHM

  assert(MatStm5.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[1,2], has value: " + String(MatStm5.compMasFlo[1,2], "g"));
*/
void flash1_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1403};
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[1,2], has value: ");
  modelica_string tmp170;
  static int tmp171 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp171)
  {
    tmp168 = GreaterEq(data->localData[0]->realVars[253] /* MatStm5.compMasFlo[1,2] variable */,0.0);
    if(!tmp168)
    {
      tmp170 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[253] /* MatStm5.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp171 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1404
type: ALGORITHM

  assert(MatStm5.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,1], has value: " + String(MatStm5.compMasFlo[2,1], "g"));
*/
void flash1_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1404};
  modelica_boolean tmp172;
  static const MMC_DEFSTRINGLIT(tmp173,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,1], has value: ");
  modelica_string tmp174;
  static int tmp175 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp175)
  {
    tmp172 = GreaterEq(data->localData[0]->realVars[254] /* MatStm5.compMasFlo[2,1] variable */,0.0);
    if(!tmp172)
    {
      tmp174 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[254] /* MatStm5.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp173),tmp174);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp175 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1405
type: ALGORITHM

  assert(MatStm5.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,2], has value: " + String(MatStm5.compMasFlo[2,2], "g"));
*/
void flash1_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1405};
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,2], has value: ");
  modelica_string tmp178;
  static int tmp179 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp179)
  {
    tmp176 = GreaterEq(data->localData[0]->realVars[255] /* MatStm5.compMasFlo[2,2] variable */,0.0);
    if(!tmp176)
    {
      tmp178 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[255] /* MatStm5.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp179 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1406
type: ALGORITHM

  assert(MatStm5.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,1], has value: " + String(MatStm5.compMasFlo[3,1], "g"));
*/
void flash1_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1406};
  modelica_boolean tmp180;
  static const MMC_DEFSTRINGLIT(tmp181,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,1], has value: ");
  modelica_string tmp182;
  static int tmp183 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp183)
  {
    tmp180 = GreaterEq(data->localData[0]->realVars[256] /* MatStm5.compMasFlo[3,1] variable */,0.0);
    if(!tmp180)
    {
      tmp182 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[256] /* MatStm5.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp181),tmp182);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp183 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1407
type: ALGORITHM

  assert(MatStm5.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,2], has value: " + String(MatStm5.compMasFlo[3,2], "g"));
*/
void flash1_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1407};
  modelica_boolean tmp184;
  static const MMC_DEFSTRINGLIT(tmp185,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,2], has value: ");
  modelica_string tmp186;
  static int tmp187 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp187)
  {
    tmp184 = GreaterEq(data->localData[0]->realVars[257] /* MatStm5.compMasFlo[3,2] variable */,0.0);
    if(!tmp184)
    {
      tmp186 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[257] /* MatStm5.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp185),tmp186);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp187 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1408
type: ALGORITHM

  assert(MatStm2.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.Pbubl, has value: " + String(MatStm2.Pbubl, "g"));
*/
void flash1_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1408};
  modelica_boolean tmp188;
  static const MMC_DEFSTRINGLIT(tmp189,68,"Variable violating min constraint: 0.0 <= MatStm2.Pbubl, has value: ");
  modelica_string tmp190;
  static int tmp191 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp191)
  {
    tmp188 = GreaterEq(data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */,0.0);
    if(!tmp188)
    {
      tmp190 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp189),tmp190);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp191 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1409
type: ALGORITHM

  assert(MatStm2.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.Pdew, has value: " + String(MatStm2.Pdew, "g"));
*/
void flash1_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1409};
  modelica_boolean tmp192;
  static const MMC_DEFSTRINGLIT(tmp193,67,"Variable violating min constraint: 0.0 <= MatStm2.Pdew, has value: ");
  modelica_string tmp194;
  static int tmp195 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp195)
  {
    tmp192 = GreaterEq(data->localData[0]->realVars[161] /* MatStm2.Pdew variable */,0.0);
    if(!tmp192)
    {
      tmp194 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp193),tmp194);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp195 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1410
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void flash1_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1410};
  modelica_boolean tmp196;
  modelica_boolean tmp197;
  static const MMC_DEFSTRINGLIT(tmp198,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp199;
  static int tmp200 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp200)
  {
    tmp196 = GreaterEq(data->localData[0]->realVars[213] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp197 = LessEq(data->localData[0]->realVars[213] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp196 && tmp197))
    {
      tmp199 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[213] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp198),tmp199);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp200 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1411
type: ALGORITHM

  assert(MatStm2.vapPhasMolFrac >= 0.0 and MatStm2.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMolFrac <= 1.0, has value: " + String(MatStm2.vapPhasMolFrac, "g"));
*/
void flash1_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1411};
  modelica_boolean tmp201;
  modelica_boolean tmp202;
  static const MMC_DEFSTRINGLIT(tmp203,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp204;
  static int tmp205 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp205)
  {
    tmp201 = GreaterEq(data->localData[0]->realVars[240] /* MatStm2.vapPhasMolFrac variable */,0.0);
    tmp202 = LessEq(data->localData[0]->realVars[240] /* MatStm2.vapPhasMolFrac variable */,1.0);
    if(!(tmp201 && tmp202))
    {
      tmp204 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[240] /* MatStm2.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp203),tmp204);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMolFrac >= 0.0 and MatStm2.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp205 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1412
type: ALGORITHM

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void flash1_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1412};
  modelica_boolean tmp206;
  modelica_boolean tmp207;
  static const MMC_DEFSTRINGLIT(tmp208,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp209;
  static int tmp210 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp210)
  {
    tmp206 = GreaterEq(data->localData[0]->realVars[212] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp207 = LessEq(data->localData[0]->realVars[212] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp206 && tmp207))
    {
      tmp209 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[212] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp208),tmp209);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp210 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1413
type: ALGORITHM

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void flash1_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1413};
  modelica_boolean tmp211;
  modelica_boolean tmp212;
  static const MMC_DEFSTRINGLIT(tmp213,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp214;
  static int tmp215 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp215)
  {
    tmp211 = GreaterEq(data->localData[0]->realVars[239] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp212 = LessEq(data->localData[0]->realVars[239] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp211 && tmp212))
    {
      tmp214 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[239] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp213),tmp214);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp215 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1414
type: ALGORITHM

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void flash1_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1414};
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp218;
  static int tmp219 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp219)
  {
    tmp216 = GreaterEq(data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp216)
    {
      tmp218 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp219 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1415
type: ALGORITHM

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void flash1_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1415};
  modelica_boolean tmp220;
  static const MMC_DEFSTRINGLIT(tmp221,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp222;
  static int tmp223 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp223)
  {
    tmp220 = GreaterEq(data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp220)
    {
      tmp222 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp221),tmp222);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp223 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1416
type: ALGORITHM

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void flash1_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1416};
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp226;
  static int tmp227 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp227)
  {
    tmp224 = GreaterEq(data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp224)
    {
      tmp226 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp227 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1417
type: ALGORITHM

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void flash1_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1417};
  modelica_boolean tmp228;
  static const MMC_DEFSTRINGLIT(tmp229,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp230;
  static int tmp231 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp231)
  {
    tmp228 = GreaterEq(data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp228)
    {
      tmp230 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp229),tmp230);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp231 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1418
type: ALGORITHM

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void flash1_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1418};
  modelica_boolean tmp232;
  static const MMC_DEFSTRINGLIT(tmp233,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp234;
  static int tmp235 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp235)
  {
    tmp232 = GreaterEq(data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp232)
    {
      tmp234 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp233),tmp234);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp235 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1419
type: ALGORITHM

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void flash1_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1419};
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp238;
  static int tmp239 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp239)
  {
    tmp236 = GreaterEq(data->localData[0]->realVars[157] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp236)
    {
      tmp238 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[157] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp239 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1420
type: ALGORITHM

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void flash1_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1420};
  modelica_boolean tmp240;
  static const MMC_DEFSTRINGLIT(tmp241,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp242;
  static int tmp243 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp243)
  {
    tmp240 = GreaterEq(data->localData[0]->realVars[158] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp240)
    {
      tmp242 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[158] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp241),tmp242);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp243 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1421
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void flash1_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1421};
  modelica_boolean tmp244;
  static const MMC_DEFSTRINGLIT(tmp245,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp246;
  static int tmp247 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp247)
  {
    tmp244 = GreaterEq(data->localData[0]->realVars[159] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp244)
    {
      tmp246 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[159] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp245),tmp246);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp247 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1422
type: ALGORITHM

  assert(MatStm2.compMolFrac[1,1] >= 0.0 and MatStm2.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[1,1], "g"));
*/
void flash1_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1422};
  modelica_boolean tmp248;
  modelica_boolean tmp249;
  static const MMC_DEFSTRINGLIT(tmp250,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp251;
  static int tmp252 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp252)
  {
    tmp248 = GreaterEq(data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */,0.0);
    tmp249 = LessEq(data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */,1.0);
    if(!(tmp248 && tmp249))
    {
      tmp251 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp250),tmp251);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[1,1] >= 0.0 and MatStm2.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp252 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1423
type: ALGORITHM

  assert(MatStm2.compMolFrac[1,2] >= 0.0 and MatStm2.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[1,2], "g"));
*/
void flash1_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1423};
  modelica_boolean tmp253;
  modelica_boolean tmp254;
  static const MMC_DEFSTRINGLIT(tmp255,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp256;
  static int tmp257 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp257)
  {
    tmp253 = GreaterEq(data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */,0.0);
    tmp254 = LessEq(data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */,1.0);
    if(!(tmp253 && tmp254))
    {
      tmp256 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp255),tmp256);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[1,2] >= 0.0 and MatStm2.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp257 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1424
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void flash1_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1424};
  modelica_boolean tmp258;
  modelica_boolean tmp259;
  static const MMC_DEFSTRINGLIT(tmp260,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp261;
  static int tmp262 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp262)
  {
    tmp258 = GreaterEq(data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp259 = LessEq(data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp258 && tmp259))
    {
      tmp261 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp260),tmp261);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp262 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1425
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void flash1_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1425};
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  static const MMC_DEFSTRINGLIT(tmp265,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp266;
  static int tmp267 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp267)
  {
    tmp263 = GreaterEq(data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp264 = LessEq(data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp263 && tmp264))
    {
      tmp266 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp265),tmp266);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp267 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1426
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void flash1_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1426};
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  static const MMC_DEFSTRINGLIT(tmp270,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp271;
  static int tmp272 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp272)
  {
    tmp268 = GreaterEq(data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp269 = LessEq(data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp268 && tmp269))
    {
      tmp271 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp270),tmp271);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp272 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1427
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void flash1_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1427};
  modelica_boolean tmp273;
  modelica_boolean tmp274;
  static const MMC_DEFSTRINGLIT(tmp275,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp276;
  static int tmp277 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp277)
  {
    tmp273 = GreaterEq(data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp274 = LessEq(data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp273 && tmp274))
    {
      tmp276 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp275),tmp276);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp277 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1428
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void flash1_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1428};
  modelica_boolean tmp278;
  modelica_boolean tmp279;
  static const MMC_DEFSTRINGLIT(tmp280,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp281;
  static int tmp282 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp282)
  {
    tmp278 = GreaterEq(data->localData[0]->realVars[170] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp279 = LessEq(data->localData[0]->realVars[170] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp278 && tmp279))
    {
      tmp281 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[170] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp280),tmp281);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp282 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1429
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void flash1_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1429};
  modelica_boolean tmp283;
  modelica_boolean tmp284;
  static const MMC_DEFSTRINGLIT(tmp285,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp286;
  static int tmp287 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp287)
  {
    tmp283 = GreaterEq(data->localData[0]->realVars[171] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp284 = LessEq(data->localData[0]->realVars[171] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp283 && tmp284))
    {
      tmp286 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[171] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp285),tmp286);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp287 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1430
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void flash1_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1430};
  modelica_boolean tmp288;
  modelica_boolean tmp289;
  static const MMC_DEFSTRINGLIT(tmp290,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp291;
  static int tmp292 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp292)
  {
    tmp288 = GreaterEq(data->localData[0]->realVars[172] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp289 = LessEq(data->localData[0]->realVars[172] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp288 && tmp289))
    {
      tmp291 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[172] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp290),tmp291);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp292 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1431
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void flash1_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1431};
  modelica_boolean tmp293;
  modelica_boolean tmp294;
  static const MMC_DEFSTRINGLIT(tmp295,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp296;
  static int tmp297 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp297)
  {
    tmp293 = GreaterEq(data->localData[0]->realVars[173] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp294 = LessEq(data->localData[0]->realVars[173] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp293 && tmp294))
    {
      tmp296 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[173] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp295),tmp296);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp297 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1432
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void flash1_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1432};
  modelica_boolean tmp298;
  modelica_boolean tmp299;
  static const MMC_DEFSTRINGLIT(tmp300,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp301;
  static int tmp302 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp302)
  {
    tmp298 = GreaterEq(data->localData[0]->realVars[174] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp299 = LessEq(data->localData[0]->realVars[174] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp298 && tmp299))
    {
      tmp301 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[174] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp300),tmp301);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp302 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1433
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void flash1_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1433};
  modelica_boolean tmp303;
  modelica_boolean tmp304;
  static const MMC_DEFSTRINGLIT(tmp305,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp306;
  static int tmp307 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp307)
  {
    tmp303 = GreaterEq(data->localData[0]->realVars[175] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp304 = LessEq(data->localData[0]->realVars[175] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp303 && tmp304))
    {
      tmp306 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[175] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp305),tmp306);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp307 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1434
type: ALGORITHM

  assert(MatStm2.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,1], has value: " + String(MatStm2.compMolFlo[1,1], "g"));
*/
void flash1_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1434};
  modelica_boolean tmp308;
  static const MMC_DEFSTRINGLIT(tmp309,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,1], has value: ");
  modelica_string tmp310;
  static int tmp311 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp311)
  {
    tmp308 = GreaterEq(data->localData[0]->realVars[188] /* MatStm2.compMolFlo[1,1] variable */,0.0);
    if(!tmp308)
    {
      tmp310 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[188] /* MatStm2.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp309),tmp310);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp311 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1435
type: ALGORITHM

  assert(MatStm2.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,2], has value: " + String(MatStm2.compMolFlo[1,2], "g"));
*/
void flash1_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1435};
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,2], has value: ");
  modelica_string tmp314;
  static int tmp315 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp315)
  {
    tmp312 = GreaterEq(data->localData[0]->realVars[189] /* MatStm2.compMolFlo[1,2] variable */,0.0);
    if(!tmp312)
    {
      tmp314 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[189] /* MatStm2.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp315 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1436
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: " + String(MatStm2.compMolFlo[2,1], "g"));
*/
void flash1_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1436};
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp318;
  static int tmp319 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp319)
  {
    tmp316 = GreaterEq(data->localData[0]->realVars[190] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp316)
    {
      tmp318 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[190] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp319 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1437
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: " + String(MatStm2.compMolFlo[2,2], "g"));
*/
void flash1_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1437};
  modelica_boolean tmp320;
  static const MMC_DEFSTRINGLIT(tmp321,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp322;
  static int tmp323 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp323)
  {
    tmp320 = GreaterEq(data->localData[0]->realVars[191] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp320)
    {
      tmp322 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[191] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp321),tmp322);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp323 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1438
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: " + String(MatStm2.compMolFlo[3,1], "g"));
*/
void flash1_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1438};
  modelica_boolean tmp324;
  static const MMC_DEFSTRINGLIT(tmp325,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp326;
  static int tmp327 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp327)
  {
    tmp324 = GreaterEq(data->localData[0]->realVars[192] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp324)
    {
      tmp326 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[192] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp325),tmp326);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp327 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1439
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void flash1_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1439};
  modelica_boolean tmp328;
  static const MMC_DEFSTRINGLIT(tmp329,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp330;
  static int tmp331 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp331)
  {
    tmp328 = GreaterEq(data->localData[0]->realVars[193] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp328)
    {
      tmp330 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[193] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp329),tmp330);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp331 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1440
type: ALGORITHM

  assert(MatStm2.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: " + String(MatStm2.compMasFlo[1,1], "g"));
*/
void flash1_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1440};
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: ");
  modelica_string tmp334;
  static int tmp335 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp335)
  {
    tmp332 = GreaterEq(data->localData[0]->realVars[164] /* MatStm2.compMasFlo[1,1] variable */,0.0);
    if(!tmp332)
    {
      tmp334 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[164] /* MatStm2.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp335 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1441
type: ALGORITHM

  assert(MatStm2.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: " + String(MatStm2.compMasFlo[1,2], "g"));
*/
void flash1_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1441};
  modelica_boolean tmp336;
  static const MMC_DEFSTRINGLIT(tmp337,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: ");
  modelica_string tmp338;
  static int tmp339 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp339)
  {
    tmp336 = GreaterEq(data->localData[0]->realVars[165] /* MatStm2.compMasFlo[1,2] variable */,0.0);
    if(!tmp336)
    {
      tmp338 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[165] /* MatStm2.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp337),tmp338);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp339 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1442
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void flash1_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1442};
  modelica_boolean tmp340;
  static const MMC_DEFSTRINGLIT(tmp341,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp342;
  static int tmp343 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp343)
  {
    tmp340 = GreaterEq(data->localData[0]->realVars[166] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp340)
    {
      tmp342 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[166] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp341),tmp342);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp343 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1443
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void flash1_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1443};
  modelica_boolean tmp344;
  static const MMC_DEFSTRINGLIT(tmp345,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp346;
  static int tmp347 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp347)
  {
    tmp344 = GreaterEq(data->localData[0]->realVars[167] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp344)
    {
      tmp346 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[167] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp345),tmp346);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp347 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1444
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void flash1_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1444};
  modelica_boolean tmp348;
  static const MMC_DEFSTRINGLIT(tmp349,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp350;
  static int tmp351 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp351)
  {
    tmp348 = GreaterEq(data->localData[0]->realVars[168] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp348)
    {
      tmp350 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[168] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp349),tmp350);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp351 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1445
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void flash1_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1445};
  modelica_boolean tmp352;
  static const MMC_DEFSTRINGLIT(tmp353,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp354;
  static int tmp355 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp355)
  {
    tmp352 = GreaterEq(data->localData[0]->realVars[169] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp352)
    {
      tmp354 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[169] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp353),tmp354);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp355 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1446
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void flash1_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1446};
  modelica_boolean tmp356;
  modelica_boolean tmp357;
  static const MMC_DEFSTRINGLIT(tmp358,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp359;
  static int tmp360 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp360)
  {
    tmp356 = GreaterEq(data->localData[0]->realVars[124] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp357 = LessEq(data->localData[0]->realVars[124] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp356 && tmp357))
    {
      tmp359 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[124] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp358),tmp359);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp360 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1447
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void flash1_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1447};
  modelica_boolean tmp361;
  modelica_boolean tmp362;
  static const MMC_DEFSTRINGLIT(tmp363,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp364;
  static int tmp365 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp365)
  {
    tmp361 = GreaterEq(data->localData[0]->realVars[152] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp362 = LessEq(data->localData[0]->realVars[152] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp361 && tmp362))
    {
      tmp364 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[152] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp363),tmp364);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp365 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1448
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void flash1_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1448};
  modelica_boolean tmp366;
  modelica_boolean tmp367;
  static const MMC_DEFSTRINGLIT(tmp368,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp369;
  static int tmp370 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp370)
  {
    tmp366 = GreaterEq(data->localData[0]->realVars[123] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp367 = LessEq(data->localData[0]->realVars[123] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp366 && tmp367))
    {
      tmp369 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[123] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp368),tmp369);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp370 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1449
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void flash1_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1449};
  modelica_boolean tmp371;
  modelica_boolean tmp372;
  static const MMC_DEFSTRINGLIT(tmp373,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp374;
  static int tmp375 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp375)
  {
    tmp371 = GreaterEq(data->localData[0]->realVars[151] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp372 = LessEq(data->localData[0]->realVars[151] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp371 && tmp372))
    {
      tmp374 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[151] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp373),tmp374);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp375 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1450
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void flash1_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1450};
  modelica_boolean tmp376;
  static const MMC_DEFSTRINGLIT(tmp377,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp378;
  static int tmp379 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp379)
  {
    tmp376 = GreaterEq(data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp376)
    {
      tmp378 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp377),tmp378);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp379 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1451
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void flash1_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1451};
  modelica_boolean tmp380;
  static const MMC_DEFSTRINGLIT(tmp381,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp382;
  static int tmp383 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp383)
  {
    tmp380 = GreaterEq(data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp380)
    {
      tmp382 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp381),tmp382);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp383 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1452
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void flash1_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1452};
  modelica_boolean tmp384;
  static const MMC_DEFSTRINGLIT(tmp385,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp386;
  static int tmp387 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp387)
  {
    tmp384 = GreaterEq(data->localData[0]->realVars[145] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp384)
    {
      tmp386 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[145] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp385),tmp386);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp387 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1453
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void flash1_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1453};
  modelica_boolean tmp388;
  static const MMC_DEFSTRINGLIT(tmp389,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp390;
  static int tmp391 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp391)
  {
    tmp388 = GreaterEq(data->localData[0]->realVars[146] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp388)
    {
      tmp390 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[146] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp389),tmp390);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp391 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1454
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void flash1_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1454};
  modelica_boolean tmp392;
  static const MMC_DEFSTRINGLIT(tmp393,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp394;
  static int tmp395 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp395)
  {
    tmp392 = GreaterEq(data->localData[0]->realVars[147] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp392)
    {
      tmp394 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[147] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp393),tmp394);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp395 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1455
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void flash1_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1455};
  modelica_boolean tmp396;
  static const MMC_DEFSTRINGLIT(tmp397,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp398;
  static int tmp399 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp399)
  {
    tmp396 = GreaterEq(data->localData[0]->realVars[66] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp396)
    {
      tmp398 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[66] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp397),tmp398);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp399 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1456
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void flash1_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1456};
  modelica_boolean tmp400;
  static const MMC_DEFSTRINGLIT(tmp401,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp402;
  static int tmp403 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp403)
  {
    tmp400 = GreaterEq(data->localData[0]->realVars[67] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp400)
    {
      tmp402 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[67] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp401),tmp402);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp403 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1457
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void flash1_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1457};
  modelica_boolean tmp404;
  static const MMC_DEFSTRINGLIT(tmp405,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp406;
  static int tmp407 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp407)
  {
    tmp404 = GreaterEq(data->localData[0]->realVars[68] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp404)
    {
      tmp406 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[68] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp405),tmp406);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp407 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1458
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void flash1_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1458};
  modelica_boolean tmp408;
  modelica_boolean tmp409;
  static const MMC_DEFSTRINGLIT(tmp410,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp411;
  static int tmp412 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp412)
  {
    tmp408 = GreaterEq(data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp409 = LessEq(data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp408 && tmp409))
    {
      tmp411 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp410),tmp411);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp412 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1459
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void flash1_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1459};
  modelica_boolean tmp413;
  modelica_boolean tmp414;
  static const MMC_DEFSTRINGLIT(tmp415,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp416;
  static int tmp417 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp417)
  {
    tmp413 = GreaterEq(data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp414 = LessEq(data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp413 && tmp414))
    {
      tmp416 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp415),tmp416);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp417 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1460
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void flash1_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1460};
  modelica_boolean tmp418;
  modelica_boolean tmp419;
  static const MMC_DEFSTRINGLIT(tmp420,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp421;
  static int tmp422 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp422)
  {
    tmp418 = GreaterEq(data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp419 = LessEq(data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp418 && tmp419))
    {
      tmp421 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp420),tmp421);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp422 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1461
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void flash1_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1461};
  modelica_boolean tmp423;
  modelica_boolean tmp424;
  static const MMC_DEFSTRINGLIT(tmp425,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp426;
  static int tmp427 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp427)
  {
    tmp423 = GreaterEq(data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp424 = LessEq(data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp423 && tmp424))
    {
      tmp426 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp425),tmp426);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp427 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1462
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void flash1_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1462};
  modelica_boolean tmp428;
  modelica_boolean tmp429;
  static const MMC_DEFSTRINGLIT(tmp430,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp431;
  static int tmp432 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp432)
  {
    tmp428 = GreaterEq(data->localData[0]->realVars[81] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp429 = LessEq(data->localData[0]->realVars[81] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp428 && tmp429))
    {
      tmp431 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[81] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp430),tmp431);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp432 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1463
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void flash1_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1463};
  modelica_boolean tmp433;
  modelica_boolean tmp434;
  static const MMC_DEFSTRINGLIT(tmp435,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp436;
  static int tmp437 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp437)
  {
    tmp433 = GreaterEq(data->localData[0]->realVars[82] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp434 = LessEq(data->localData[0]->realVars[82] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp433 && tmp434))
    {
      tmp436 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[82] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp435),tmp436);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp437 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1464
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void flash1_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1464};
  modelica_boolean tmp438;
  modelica_boolean tmp439;
  static const MMC_DEFSTRINGLIT(tmp440,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp441;
  static int tmp442 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp442)
  {
    tmp438 = GreaterEq(data->localData[0]->realVars[83] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp439 = LessEq(data->localData[0]->realVars[83] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp438 && tmp439))
    {
      tmp441 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[83] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp440),tmp441);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp442 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1465
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void flash1_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1465};
  modelica_boolean tmp443;
  modelica_boolean tmp444;
  static const MMC_DEFSTRINGLIT(tmp445,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp446;
  static int tmp447 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp447)
  {
    tmp443 = GreaterEq(data->localData[0]->realVars[84] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp444 = LessEq(data->localData[0]->realVars[84] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp443 && tmp444))
    {
      tmp446 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[84] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp445),tmp446);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp447 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1466
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void flash1_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1466};
  modelica_boolean tmp448;
  modelica_boolean tmp449;
  static const MMC_DEFSTRINGLIT(tmp450,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp451;
  static int tmp452 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp452)
  {
    tmp448 = GreaterEq(data->localData[0]->realVars[85] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp449 = LessEq(data->localData[0]->realVars[85] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp448 && tmp449))
    {
      tmp451 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[85] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp450),tmp451);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp452 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1467
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void flash1_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1467};
  modelica_boolean tmp453;
  modelica_boolean tmp454;
  static const MMC_DEFSTRINGLIT(tmp455,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp456;
  static int tmp457 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp457)
  {
    tmp453 = GreaterEq(data->localData[0]->realVars[86] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp454 = LessEq(data->localData[0]->realVars[86] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp453 && tmp454))
    {
      tmp456 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[86] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp455),tmp456);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp457 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1468
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void flash1_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1468};
  modelica_boolean tmp458;
  static const MMC_DEFSTRINGLIT(tmp459,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp460;
  static int tmp461 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp461)
  {
    tmp458 = GreaterEq(data->localData[0]->realVars[101] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp458)
    {
      tmp460 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[101] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp459),tmp460);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp461 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1469
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void flash1_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1469};
  modelica_boolean tmp462;
  static const MMC_DEFSTRINGLIT(tmp463,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp464;
  static int tmp465 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp465)
  {
    tmp462 = GreaterEq(data->localData[0]->realVars[102] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp462)
    {
      tmp464 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[102] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp463),tmp464);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp465 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1470
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void flash1_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1470};
  modelica_boolean tmp466;
  static const MMC_DEFSTRINGLIT(tmp467,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp468;
  static int tmp469 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp469)
  {
    tmp466 = GreaterEq(data->localData[0]->realVars[103] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp466)
    {
      tmp468 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[103] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp467),tmp468);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp469 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1471
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void flash1_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1471};
  modelica_boolean tmp470;
  static const MMC_DEFSTRINGLIT(tmp471,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp472;
  static int tmp473 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp473)
  {
    tmp470 = GreaterEq(data->localData[0]->realVars[104] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp470)
    {
      tmp472 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[104] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp471),tmp472);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp473 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1472
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void flash1_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1472};
  modelica_boolean tmp474;
  static const MMC_DEFSTRINGLIT(tmp475,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp476;
  static int tmp477 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp477)
  {
    tmp474 = GreaterEq(data->localData[0]->realVars[77] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp474)
    {
      tmp476 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[77] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp475),tmp476);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp477 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1473
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void flash1_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1473};
  modelica_boolean tmp478;
  static const MMC_DEFSTRINGLIT(tmp479,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp480;
  static int tmp481 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp481)
  {
    tmp478 = GreaterEq(data->localData[0]->realVars[78] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp478)
    {
      tmp480 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[78] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp479),tmp480);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp481 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1474
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void flash1_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1474};
  modelica_boolean tmp482;
  static const MMC_DEFSTRINGLIT(tmp483,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp484;
  static int tmp485 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp485)
  {
    tmp482 = GreaterEq(data->localData[0]->realVars[79] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp482)
    {
      tmp484 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[79] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp483),tmp484);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp485 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1475
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void flash1_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1475};
  modelica_boolean tmp486;
  static const MMC_DEFSTRINGLIT(tmp487,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp488;
  static int tmp489 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp489)
  {
    tmp486 = GreaterEq(data->localData[0]->realVars[80] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp486)
    {
      tmp488 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[80] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp487),tmp488);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp489 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1365
type: ALGORITHM

  assert(MatStm1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: " + String(MatStm1.K[2], "g"));
*/
void flash1_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1365};
  modelica_boolean tmp490;
  static const MMC_DEFSTRINGLIT(tmp491,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp492;
  static int tmp493 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp493)
  {
    tmp490 = GreaterEq(data->localData[0]->realVars[65] /* MatStm1.K[2] variable */,0.0);
    if(!tmp490)
    {
      tmp492 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[65] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp491),tmp492);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp493 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1364
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void flash1_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1364};
  modelica_boolean tmp494;
  static const MMC_DEFSTRINGLIT(tmp495,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp496;
  static int tmp497 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp497)
  {
    tmp494 = GreaterEq(data->localData[0]->realVars[64] /* MatStm1.K[1] variable */,0.0);
    if(!tmp494)
    {
      tmp496 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[64] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp495),tmp496);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp497 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1363
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void flash1_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1363};
  modelica_boolean tmp498;
  static const MMC_DEFSTRINGLIT(tmp499,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp500;
  static int tmp501 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp501)
  {
    tmp498 = GreaterEq(data->localData[0]->realVars[76] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp498)
    {
      tmp500 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[76] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp499),tmp500);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp501 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1362
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void flash1_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1362};
  modelica_boolean tmp502;
  static const MMC_DEFSTRINGLIT(tmp503,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp504;
  static int tmp505 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp505)
  {
    tmp502 = GreaterEq(data->localData[0]->realVars[75] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp502)
    {
      tmp504 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[75] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp503),tmp504);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp505 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1361
type: ALGORITHM

  assert(MatStm2.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: " + String(MatStm2.K[2], "g"));
*/
void flash1_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1361};
  modelica_boolean tmp506;
  static const MMC_DEFSTRINGLIT(tmp507,67,"Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: ");
  modelica_string tmp508;
  static int tmp509 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp509)
  {
    tmp506 = GreaterEq(data->localData[0]->realVars[156] /* MatStm2.K[2] variable */,0.0);
    if(!tmp506)
    {
      tmp508 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[156] /* MatStm2.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp507),tmp508);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp509 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1360
type: ALGORITHM

  assert(MatStm2.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: " + String(MatStm2.K[1], "g"));
*/
void flash1_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1360};
  modelica_boolean tmp510;
  static const MMC_DEFSTRINGLIT(tmp511,67,"Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: ");
  modelica_string tmp512;
  static int tmp513 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp513)
  {
    tmp510 = GreaterEq(data->localData[0]->realVars[155] /* MatStm2.K[1] variable */,0.0);
    if(!tmp510)
    {
      tmp512 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[155] /* MatStm2.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp511),tmp512);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp513 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1359
type: ALGORITHM

  assert(MatStm5.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.K[2], has value: " + String(MatStm5.K[2], "g"));
*/
void flash1_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1359};
  modelica_boolean tmp514;
  static const MMC_DEFSTRINGLIT(tmp515,67,"Variable violating min constraint: 0.0 <= MatStm5.K[2], has value: ");
  modelica_string tmp516;
  static int tmp517 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp517)
  {
    tmp514 = GreaterEq(data->localData[0]->realVars[244] /* MatStm5.K[2] variable */,0.0);
    if(!tmp514)
    {
      tmp516 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[244] /* MatStm5.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp515),tmp516);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp517 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1358
type: ALGORITHM

  assert(MatStm5.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.K[1], has value: " + String(MatStm5.K[1], "g"));
*/
void flash1_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1358};
  modelica_boolean tmp518;
  static const MMC_DEFSTRINGLIT(tmp519,67,"Variable violating min constraint: 0.0 <= MatStm5.K[1], has value: ");
  modelica_string tmp520;
  static int tmp521 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp521)
  {
    tmp518 = GreaterEq(data->localData[0]->realVars[243] /* MatStm5.K[1] variable */,0.0);
    if(!tmp518)
    {
      tmp520 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[243] /* MatStm5.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp519),tmp520);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp521 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1357
type: ALGORITHM

  assert(Flash1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= Flash1.K[2], has value: " + String(Flash1.K[2], "g"));
*/
void flash1_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1357};
  modelica_boolean tmp522;
  static const MMC_DEFSTRINGLIT(tmp523,66,"Variable violating min constraint: 0.0 <= Flash1.K[2], has value: ");
  modelica_string tmp524;
  static int tmp525 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp525)
  {
    tmp522 = GreaterEq(data->localData[0]->realVars[9] /* Flash1.K[2] variable */,0.0);
    if(!tmp522)
    {
      tmp524 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* Flash1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp523),tmp524);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nFlash1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp525 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1356
type: ALGORITHM

  assert(Flash1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= Flash1.K[1], has value: " + String(Flash1.K[1], "g"));
*/
void flash1_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1356};
  modelica_boolean tmp526;
  static const MMC_DEFSTRINGLIT(tmp527,66,"Variable violating min constraint: 0.0 <= Flash1.K[1], has value: ");
  modelica_string tmp528;
  static int tmp529 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp529)
  {
    tmp526 = GreaterEq(data->localData[0]->realVars[8] /* Flash1.K[1] variable */,0.0);
    if(!tmp526)
    {
      tmp528 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[8] /* Flash1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp527),tmp528);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nFlash1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp529 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int flash1_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  flash1_eqFunction_1366(data, threadData);

  flash1_eqFunction_1367(data, threadData);

  flash1_eqFunction_1368(data, threadData);

  flash1_eqFunction_1369(data, threadData);

  flash1_eqFunction_1370(data, threadData);

  flash1_eqFunction_1371(data, threadData);

  flash1_eqFunction_1372(data, threadData);

  flash1_eqFunction_1373(data, threadData);

  flash1_eqFunction_1374(data, threadData);

  flash1_eqFunction_1375(data, threadData);

  flash1_eqFunction_1376(data, threadData);

  flash1_eqFunction_1377(data, threadData);

  flash1_eqFunction_1378(data, threadData);

  flash1_eqFunction_1379(data, threadData);

  flash1_eqFunction_1380(data, threadData);

  flash1_eqFunction_1381(data, threadData);

  flash1_eqFunction_1382(data, threadData);

  flash1_eqFunction_1383(data, threadData);

  flash1_eqFunction_1384(data, threadData);

  flash1_eqFunction_1385(data, threadData);

  flash1_eqFunction_1386(data, threadData);

  flash1_eqFunction_1387(data, threadData);

  flash1_eqFunction_1388(data, threadData);

  flash1_eqFunction_1389(data, threadData);

  flash1_eqFunction_1390(data, threadData);

  flash1_eqFunction_1391(data, threadData);

  flash1_eqFunction_1392(data, threadData);

  flash1_eqFunction_1393(data, threadData);

  flash1_eqFunction_1394(data, threadData);

  flash1_eqFunction_1395(data, threadData);

  flash1_eqFunction_1396(data, threadData);

  flash1_eqFunction_1397(data, threadData);

  flash1_eqFunction_1398(data, threadData);

  flash1_eqFunction_1399(data, threadData);

  flash1_eqFunction_1400(data, threadData);

  flash1_eqFunction_1401(data, threadData);

  flash1_eqFunction_1402(data, threadData);

  flash1_eqFunction_1403(data, threadData);

  flash1_eqFunction_1404(data, threadData);

  flash1_eqFunction_1405(data, threadData);

  flash1_eqFunction_1406(data, threadData);

  flash1_eqFunction_1407(data, threadData);

  flash1_eqFunction_1408(data, threadData);

  flash1_eqFunction_1409(data, threadData);

  flash1_eqFunction_1410(data, threadData);

  flash1_eqFunction_1411(data, threadData);

  flash1_eqFunction_1412(data, threadData);

  flash1_eqFunction_1413(data, threadData);

  flash1_eqFunction_1414(data, threadData);

  flash1_eqFunction_1415(data, threadData);

  flash1_eqFunction_1416(data, threadData);

  flash1_eqFunction_1417(data, threadData);

  flash1_eqFunction_1418(data, threadData);

  flash1_eqFunction_1419(data, threadData);

  flash1_eqFunction_1420(data, threadData);

  flash1_eqFunction_1421(data, threadData);

  flash1_eqFunction_1422(data, threadData);

  flash1_eqFunction_1423(data, threadData);

  flash1_eqFunction_1424(data, threadData);

  flash1_eqFunction_1425(data, threadData);

  flash1_eqFunction_1426(data, threadData);

  flash1_eqFunction_1427(data, threadData);

  flash1_eqFunction_1428(data, threadData);

  flash1_eqFunction_1429(data, threadData);

  flash1_eqFunction_1430(data, threadData);

  flash1_eqFunction_1431(data, threadData);

  flash1_eqFunction_1432(data, threadData);

  flash1_eqFunction_1433(data, threadData);

  flash1_eqFunction_1434(data, threadData);

  flash1_eqFunction_1435(data, threadData);

  flash1_eqFunction_1436(data, threadData);

  flash1_eqFunction_1437(data, threadData);

  flash1_eqFunction_1438(data, threadData);

  flash1_eqFunction_1439(data, threadData);

  flash1_eqFunction_1440(data, threadData);

  flash1_eqFunction_1441(data, threadData);

  flash1_eqFunction_1442(data, threadData);

  flash1_eqFunction_1443(data, threadData);

  flash1_eqFunction_1444(data, threadData);

  flash1_eqFunction_1445(data, threadData);

  flash1_eqFunction_1446(data, threadData);

  flash1_eqFunction_1447(data, threadData);

  flash1_eqFunction_1448(data, threadData);

  flash1_eqFunction_1449(data, threadData);

  flash1_eqFunction_1450(data, threadData);

  flash1_eqFunction_1451(data, threadData);

  flash1_eqFunction_1452(data, threadData);

  flash1_eqFunction_1453(data, threadData);

  flash1_eqFunction_1454(data, threadData);

  flash1_eqFunction_1455(data, threadData);

  flash1_eqFunction_1456(data, threadData);

  flash1_eqFunction_1457(data, threadData);

  flash1_eqFunction_1458(data, threadData);

  flash1_eqFunction_1459(data, threadData);

  flash1_eqFunction_1460(data, threadData);

  flash1_eqFunction_1461(data, threadData);

  flash1_eqFunction_1462(data, threadData);

  flash1_eqFunction_1463(data, threadData);

  flash1_eqFunction_1464(data, threadData);

  flash1_eqFunction_1465(data, threadData);

  flash1_eqFunction_1466(data, threadData);

  flash1_eqFunction_1467(data, threadData);

  flash1_eqFunction_1468(data, threadData);

  flash1_eqFunction_1469(data, threadData);

  flash1_eqFunction_1470(data, threadData);

  flash1_eqFunction_1471(data, threadData);

  flash1_eqFunction_1472(data, threadData);

  flash1_eqFunction_1473(data, threadData);

  flash1_eqFunction_1474(data, threadData);

  flash1_eqFunction_1475(data, threadData);

  flash1_eqFunction_1365(data, threadData);

  flash1_eqFunction_1364(data, threadData);

  flash1_eqFunction_1363(data, threadData);

  flash1_eqFunction_1362(data, threadData);

  flash1_eqFunction_1361(data, threadData);

  flash1_eqFunction_1360(data, threadData);

  flash1_eqFunction_1359(data, threadData);

  flash1_eqFunction_1358(data, threadData);

  flash1_eqFunction_1357(data, threadData);

  flash1_eqFunction_1356(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

