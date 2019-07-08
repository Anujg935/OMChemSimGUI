/* Linear Systems */
#include "splitter1_model.h"
#include "splitter1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA482(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,482};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_real tmp50;
  modelica_boolean tmp51;
  RELATIONHYSTERESIS(tmp8, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp11 = (tmp9?(-data->localData[0]->realVars[180] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp11)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp12, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp14 = (modelica_boolean)tmp12;
  if(tmp14)
  {
    tmp15 = (-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp13, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp15 = (tmp13?-0.0:(-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 4, (-(tmp15)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp16, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp18 = (modelica_boolean)tmp16;
  if(tmp18)
  {
    tmp19 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp17, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp19 = (tmp17?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp19)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp20, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp20?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp21, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp23 = (modelica_boolean)tmp21;
  if(tmp23)
  {
    tmp24 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp22, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp24 = (tmp22?(-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp24)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp25, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 1, (-((tmp25?1.0:-0.0))), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp26, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp27, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp29 = (tmp27?(-data->localData[0]->realVars[179] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp29)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp30, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp31, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp33 = (tmp31?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp33)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp34, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp36 = (modelica_boolean)tmp34;
  if(tmp36)
  {
    tmp37 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp35, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp37 = (tmp35?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp37)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp38, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 0, (-((tmp38?1.0:-0.0))), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp39, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp41 = (modelica_boolean)tmp39;
  if(tmp41)
  {
    tmp42 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp40, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp42 = (tmp40?(-data->localData[0]->realVars[179] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp42)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp43, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp45 = (modelica_boolean)tmp43;
  if(tmp45)
  {
    tmp46 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp44, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp46 = (tmp44?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp46)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp47, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp49 = (modelica_boolean)tmp47;
  if(tmp49)
  {
    tmp50 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp48, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp50 = (tmp48?(-data->localData[0]->realVars[180] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp50)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp51, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(4, 2, (-((tmp51?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb482(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,482};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_real tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  RELATIONHYSTERESIS(tmp52, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp55 = (tmp53?data->localData[0]->realVars[112] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp55, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp56, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp57, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp59 = (tmp57?data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp59, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp60, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp61, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp63 = (tmp61?data->localData[0]->realVars[111] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp63, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp64, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp65, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp67 = (tmp65?data->localData[0]->realVars[110] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp67, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp68, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = (-data->localData[0]->realVars[115] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp69, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp71 = (tmp69?data->localData[0]->realVars[113] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[115] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp71, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData482(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA423(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,423};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_real tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  modelica_real tmp85;
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  modelica_real tmp89;
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  modelica_real tmp93;
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  modelica_real tmp97;
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  modelica_real tmp101;
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  modelica_real tmp105;
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  modelica_real tmp109;
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_real tmp114;
  modelica_boolean tmp115;
  RELATIONHYSTERESIS(tmp72, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp72?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp73, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp75 = (modelica_boolean)tmp73;
  if(tmp75)
  {
    tmp76 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp74, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp76 = (tmp74?(-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp76)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp77, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp79 = (modelica_boolean)tmp77;
  if(tmp79)
  {
    tmp80 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp78, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp80 = (tmp78?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp80)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp81, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(1, 1, (-((tmp81?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp82, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp84 = (modelica_boolean)tmp82;
  if(tmp84)
  {
    tmp85 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp83, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp85 = (tmp83?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp85)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp86, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp88 = (modelica_boolean)tmp86;
  if(tmp88)
  {
    tmp89 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp87, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp89 = (tmp87?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp89)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp90, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp92 = (modelica_boolean)tmp90;
  if(tmp92)
  {
    tmp93 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp91, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp93 = (tmp91?(-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp93)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp94, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp96 = (modelica_boolean)tmp94;
  if(tmp96)
  {
    tmp97 = (-data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp95, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp97 = (tmp95?-0.0:(-data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 2, (-(tmp97)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp98, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp100 = (modelica_boolean)tmp98;
  if(tmp100)
  {
    tmp101 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp99, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp101 = (tmp99?(-data->localData[0]->realVars[268] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp101)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp102, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp104 = (modelica_boolean)tmp102;
  if(tmp104)
  {
    tmp105 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp103, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp105 = (tmp103?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp105)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp106, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp108 = (modelica_boolean)tmp106;
  if(tmp108)
  {
    tmp109 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp107, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp109 = (tmp107?(-data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp109)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp110, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(3, 3, (-((tmp110?1.0:-0.0))), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp111, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp113 = (modelica_boolean)tmp111;
  if(tmp113)
  {
    tmp114 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp112, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp114 = (tmp112?(-data->localData[0]->realVars[268] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp114)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp115, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(4, 4, (-((tmp115?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb423(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,423};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  modelica_real tmp119;
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  modelica_real tmp123;
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  modelica_real tmp127;
  modelica_boolean tmp128;
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  modelica_real tmp131;
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  modelica_real tmp135;
  RELATIONHYSTERESIS(tmp116, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp118 = (modelica_boolean)tmp116;
  if(tmp118)
  {
    tmp119 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp117, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp119 = (tmp117?data->localData[0]->realVars[198] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp119, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp120, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp122 = (modelica_boolean)tmp120;
  if(tmp122)
  {
    tmp123 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp121, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp123 = (tmp121?data->localData[0]->realVars[199] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp123, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp124, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp126 = (modelica_boolean)tmp124;
  if(tmp126)
  {
    tmp127 = data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp125, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp127 = (tmp125?data->localData[0]->realVars[200] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp127, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp128, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp130 = (modelica_boolean)tmp128;
  if(tmp130)
  {
    tmp131 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp129, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp131 = (tmp129?data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp131, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp132, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp134 = (modelica_boolean)tmp132;
  if(tmp134)
  {
    tmp135 = (-data->localData[0]->realVars[203] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp133, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp135 = (tmp133?data->localData[0]->realVars[201] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[203] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp135, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData423(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,2] */.max;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[204].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[204].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[204].attribute /* MatStm5.compMasFrac[2,1] */.max;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[202].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[202].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[202].attribute /* MatStm5.compMasFrac[1,1] */.max;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[3,1] */.max;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA353(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,353};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  modelica_real tmp140;
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  modelica_real tmp144;
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  modelica_boolean tmp147;
  modelica_real tmp148;
  modelica_boolean tmp149;
  modelica_boolean tmp150;
  modelica_boolean tmp151;
  modelica_boolean tmp152;
  modelica_real tmp153;
  modelica_boolean tmp154;
  modelica_boolean tmp155;
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  modelica_real tmp158;
  modelica_boolean tmp159;
  modelica_boolean tmp160;
  modelica_boolean tmp161;
  modelica_real tmp162;
  modelica_boolean tmp163;
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  modelica_real tmp166;
  modelica_boolean tmp167;
  modelica_boolean tmp168;
  modelica_boolean tmp169;
  modelica_real tmp170;
  modelica_boolean tmp171;
  modelica_boolean tmp172;
  modelica_boolean tmp173;
  modelica_boolean tmp174;
  modelica_real tmp175;
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  modelica_boolean tmp178;
  modelica_real tmp179;
  tmp136 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 0, (-((tmp136?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp137 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp139 = (modelica_boolean)tmp137;
  if(tmp139)
  {
    tmp140 = 0.0;
  }
  else
  {
    tmp138 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp140 = (tmp138?(-data->localData[0]->realVars[89] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp140)), 1, linearSystemData, threadData);
  tmp141 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp143 = (modelica_boolean)tmp141;
  if(tmp143)
  {
    tmp144 = 0.0;
  }
  else
  {
    tmp142 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp144 = (tmp142?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp144)), 2, linearSystemData, threadData);
  tmp145 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp147 = (modelica_boolean)tmp145;
  if(tmp147)
  {
    tmp148 = 0.0;
  }
  else
  {
    tmp146 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp148 = (tmp146?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp148)), 3, linearSystemData, threadData);
  tmp149 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp149?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp150 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp152 = (modelica_boolean)tmp150;
  if(tmp152)
  {
    tmp153 = 0.0;
  }
  else
  {
    tmp151 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp153 = (tmp151?(-data->localData[0]->realVars[90] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp153)), 5, linearSystemData, threadData);
  tmp154 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp154?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp155 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp157 = (modelica_boolean)tmp155;
  if(tmp157)
  {
    tmp158 = 0.0;
  }
  else
  {
    tmp156 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp158 = (tmp156?(-data->localData[0]->realVars[91] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp158)), 7, linearSystemData, threadData);
  tmp159 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp161 = (modelica_boolean)tmp159;
  if(tmp161)
  {
    tmp162 = 0.0;
  }
  else
  {
    tmp160 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp162 = (tmp160?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp162)), 8, linearSystemData, threadData);
  tmp163 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp165 = (modelica_boolean)tmp163;
  if(tmp165)
  {
    tmp166 = -1.0;
  }
  else
  {
    tmp164 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp166 = (tmp164?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp166)), 9, linearSystemData, threadData);
  tmp167 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp169 = (modelica_boolean)tmp167;
  if(tmp169)
  {
    tmp170 = 0.0;
  }
  else
  {
    tmp168 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp170 = (tmp168?(-data->localData[0]->realVars[90] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp170)), 10, linearSystemData, threadData);
  tmp171 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 4, (-((tmp171?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp172 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp174 = (modelica_boolean)tmp172;
  if(tmp174)
  {
    tmp175 = -0.0;
  }
  else
  {
    tmp173 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp175 = (tmp173?(-data->localData[0]->realVars[91] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp175)), 12, linearSystemData, threadData);
  tmp176 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp178 = (modelica_boolean)tmp176;
  if(tmp178)
  {
    tmp179 = (-data->localData[0]->realVars[89] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp177 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp179 = (tmp177?-0.0:(-data->localData[0]->realVars[89] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp179)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb353(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,353};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  modelica_boolean tmp182;
  modelica_real tmp183;
  modelica_boolean tmp184;
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  modelica_real tmp187;
  modelica_boolean tmp188;
  modelica_boolean tmp189;
  modelica_boolean tmp190;
  modelica_real tmp191;
  modelica_boolean tmp192;
  modelica_boolean tmp193;
  modelica_boolean tmp194;
  modelica_real tmp195;
  modelica_boolean tmp196;
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  modelica_real tmp199;
  tmp180 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp182 = (modelica_boolean)tmp180;
  if(tmp182)
  {
    tmp183 = 0.0;
  }
  else
  {
    tmp181 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp183 = (tmp181?data->localData[0]->realVars[19] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp183, linearSystemData, threadData);
  tmp184 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp186 = (modelica_boolean)tmp184;
  if(tmp186)
  {
    tmp187 = 0.0;
  }
  else
  {
    tmp185 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp187 = (tmp185?data->localData[0]->realVars[21] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp187, linearSystemData, threadData);
  tmp188 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp190 = (modelica_boolean)tmp188;
  if(tmp190)
  {
    tmp191 = (-data->localData[0]->realVars[26] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp189 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp191 = (tmp189?data->localData[0]->realVars[24] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[26] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp191, linearSystemData, threadData);
  tmp192 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp194 = (modelica_boolean)tmp192;
  if(tmp194)
  {
    tmp195 = 0.0;
  }
  else
  {
    tmp193 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp195 = (tmp193?data->localData[0]->realVars[22] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp195, linearSystemData, threadData);
  tmp196 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp198 = (modelica_boolean)tmp196;
  if(tmp198)
  {
    tmp199 = data->localData[0]->realVars[19] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp197 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp199 = (tmp197?data->localData[0]->realVars[23] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[19] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp199, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData353(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm3.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA241(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,241};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  modelica_boolean tmp202;
  modelica_real tmp203;
  modelica_boolean tmp204;
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  modelica_real tmp207;
  modelica_boolean tmp208;
  modelica_boolean tmp209;
  modelica_boolean tmp210;
  modelica_real tmp211;
  modelica_boolean tmp212;
  modelica_boolean tmp213;
  modelica_boolean tmp214;
  modelica_real tmp215;
  modelica_boolean tmp216;
  modelica_boolean tmp217;
  modelica_boolean tmp218;
  modelica_boolean tmp219;
  modelica_real tmp220;
  modelica_boolean tmp221;
  modelica_boolean tmp222;
  modelica_boolean tmp223;
  modelica_boolean tmp224;
  modelica_real tmp225;
  modelica_boolean tmp226;
  modelica_boolean tmp227;
  modelica_boolean tmp228;
  modelica_boolean tmp229;
  modelica_real tmp230;
  modelica_boolean tmp231;
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  modelica_real tmp234;
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  modelica_real tmp238;
  modelica_boolean tmp239;
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  modelica_real tmp243;
  tmp200 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp202 = (modelica_boolean)tmp200;
  if(tmp202)
  {
    tmp203 = (-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp201 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp203 = (tmp201?-0.0:(-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp203)), 0, linearSystemData, threadData);
  tmp204 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp206 = (modelica_boolean)tmp204;
  if(tmp206)
  {
    tmp207 = -0.0;
  }
  else
  {
    tmp205 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp207 = (tmp205?(-data->localData[0]->realVars[180] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp207)), 1, linearSystemData, threadData);
  tmp208 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp210 = (modelica_boolean)tmp208;
  if(tmp210)
  {
    tmp211 = 0.0;
  }
  else
  {
    tmp209 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp211 = (tmp209?(-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp211)), 2, linearSystemData, threadData);
  tmp212 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp214 = (modelica_boolean)tmp212;
  if(tmp214)
  {
    tmp215 = 0.0;
  }
  else
  {
    tmp213 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp215 = (tmp213?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp215)), 3, linearSystemData, threadData);
  tmp216 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp216?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp217 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp219 = (modelica_boolean)tmp217;
  if(tmp219)
  {
    tmp220 = 0.0;
  }
  else
  {
    tmp218 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp220 = (tmp218?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp220)), 5, linearSystemData, threadData);
  tmp221 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp221?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp222 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp224 = (modelica_boolean)tmp222;
  if(tmp224)
  {
    tmp225 = 0.0;
  }
  else
  {
    tmp223 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp225 = (tmp223?(-data->localData[0]->realVars[179] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp225)), 7, linearSystemData, threadData);
  tmp226 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp226?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp227 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp229 = (modelica_boolean)tmp227;
  if(tmp229)
  {
    tmp230 = 0.0;
  }
  else
  {
    tmp228 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp230 = (tmp228?(-data->localData[0]->realVars[180] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp230)), 9, linearSystemData, threadData);
  tmp231 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp233 = (modelica_boolean)tmp231;
  if(tmp233)
  {
    tmp234 = -1.0;
  }
  else
  {
    tmp232 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp234 = (tmp232?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp234)), 10, linearSystemData, threadData);
  tmp235 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp237 = (modelica_boolean)tmp235;
  if(tmp237)
  {
    tmp238 = 0.0;
  }
  else
  {
    tmp236 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp238 = (tmp236?(-data->localData[0]->realVars[179] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp238)), 11, linearSystemData, threadData);
  tmp239 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(4, 3, (-((tmp239?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp240 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp242 = (modelica_boolean)tmp240;
  if(tmp242)
  {
    tmp243 = 0.0;
  }
  else
  {
    tmp241 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp243 = (tmp241?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp243)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb241(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,241};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp244;
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  modelica_real tmp247;
  modelica_boolean tmp248;
  modelica_boolean tmp249;
  modelica_boolean tmp250;
  modelica_real tmp251;
  modelica_boolean tmp252;
  modelica_boolean tmp253;
  modelica_boolean tmp254;
  modelica_real tmp255;
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  modelica_real tmp259;
  modelica_boolean tmp260;
  modelica_boolean tmp261;
  modelica_boolean tmp262;
  modelica_real tmp263;
  tmp244 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp246 = (modelica_boolean)tmp244;
  if(tmp246)
  {
    tmp247 = data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp245 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp247 = (tmp245?data->localData[0]->realVars[112] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp247, linearSystemData, threadData);
  tmp248 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp250 = (modelica_boolean)tmp248;
  if(tmp250)
  {
    tmp251 = 0.0;
  }
  else
  {
    tmp249 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp251 = (tmp249?data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp251, linearSystemData, threadData);
  tmp252 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp254 = (modelica_boolean)tmp252;
  if(tmp254)
  {
    tmp255 = 0.0;
  }
  else
  {
    tmp253 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp255 = (tmp253?data->localData[0]->realVars[110] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp255, linearSystemData, threadData);
  tmp256 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp258 = (modelica_boolean)tmp256;
  if(tmp258)
  {
    tmp259 = (-data->localData[0]->realVars[115] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp257 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp259 = (tmp257?data->localData[0]->realVars[113] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[115] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp259, linearSystemData, threadData);
  tmp260 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp262 = (modelica_boolean)tmp260;
  if(tmp262)
  {
    tmp263 = 0.0;
  }
  else
  {
    tmp261 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp263 = (tmp261?data->localData[0]->realVars[111] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp263, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData241(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[1,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm4.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA182(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,182};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  modelica_real tmp267;
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  modelica_real tmp271;
  modelica_boolean tmp272;
  modelica_boolean tmp273;
  modelica_boolean tmp274;
  modelica_real tmp275;
  modelica_boolean tmp276;
  modelica_boolean tmp277;
  modelica_boolean tmp278;
  modelica_real tmp279;
  modelica_boolean tmp280;
  modelica_boolean tmp281;
  modelica_boolean tmp282;
  modelica_boolean tmp283;
  modelica_real tmp284;
  modelica_boolean tmp285;
  modelica_boolean tmp286;
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  modelica_real tmp289;
  modelica_boolean tmp290;
  modelica_boolean tmp291;
  modelica_boolean tmp292;
  modelica_boolean tmp293;
  modelica_real tmp294;
  modelica_boolean tmp295;
  modelica_boolean tmp296;
  modelica_boolean tmp297;
  modelica_real tmp298;
  modelica_boolean tmp299;
  modelica_boolean tmp300;
  modelica_boolean tmp301;
  modelica_real tmp302;
  modelica_boolean tmp303;
  modelica_boolean tmp304;
  modelica_boolean tmp305;
  modelica_boolean tmp306;
  modelica_real tmp307;
  tmp264 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp266 = (modelica_boolean)tmp264;
  if(tmp266)
  {
    tmp267 = (-data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    tmp265 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp267 = (tmp265?-0.0:(-data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp267)), 0, linearSystemData, threadData);
  tmp268 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp270 = (modelica_boolean)tmp268;
  if(tmp270)
  {
    tmp271 = -0.0;
  }
  else
  {
    tmp269 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp271 = (tmp269?(-data->localData[0]->realVars[268] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp271)), 1, linearSystemData, threadData);
  tmp272 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp274 = (modelica_boolean)tmp272;
  if(tmp274)
  {
    tmp275 = 0.0;
  }
  else
  {
    tmp273 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp275 = (tmp273?(-data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp275)), 2, linearSystemData, threadData);
  tmp276 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp278 = (modelica_boolean)tmp276;
  if(tmp278)
  {
    tmp279 = 0.0;
  }
  else
  {
    tmp277 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp279 = (tmp277?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp279)), 3, linearSystemData, threadData);
  tmp280 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp280?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp281 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp283 = (modelica_boolean)tmp281;
  if(tmp283)
  {
    tmp284 = 0.0;
  }
  else
  {
    tmp282 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp284 = (tmp282?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp284)), 5, linearSystemData, threadData);
  tmp285 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp285?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp286 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp288 = (modelica_boolean)tmp286;
  if(tmp288)
  {
    tmp289 = 0.0;
  }
  else
  {
    tmp287 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp289 = (tmp287?(-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp289)), 7, linearSystemData, threadData);
  tmp290 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp290?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp291 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp293 = (modelica_boolean)tmp291;
  if(tmp293)
  {
    tmp294 = 0.0;
  }
  else
  {
    tmp292 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp294 = (tmp292?(-data->localData[0]->realVars[268] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp294)), 9, linearSystemData, threadData);
  tmp295 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp297 = (modelica_boolean)tmp295;
  if(tmp297)
  {
    tmp298 = -1.0;
  }
  else
  {
    tmp296 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp298 = (tmp296?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp298)), 10, linearSystemData, threadData);
  tmp299 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp301 = (modelica_boolean)tmp299;
  if(tmp301)
  {
    tmp302 = 0.0;
  }
  else
  {
    tmp300 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp302 = (tmp300?(-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp302)), 11, linearSystemData, threadData);
  tmp303 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(4, 3, (-((tmp303?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp304 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp306 = (modelica_boolean)tmp304;
  if(tmp306)
  {
    tmp307 = 0.0;
  }
  else
  {
    tmp305 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp307 = (tmp305?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp307)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb182(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,182};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp308;
  modelica_boolean tmp309;
  modelica_boolean tmp310;
  modelica_real tmp311;
  modelica_boolean tmp312;
  modelica_boolean tmp313;
  modelica_boolean tmp314;
  modelica_real tmp315;
  modelica_boolean tmp316;
  modelica_boolean tmp317;
  modelica_boolean tmp318;
  modelica_real tmp319;
  modelica_boolean tmp320;
  modelica_boolean tmp321;
  modelica_boolean tmp322;
  modelica_real tmp323;
  modelica_boolean tmp324;
  modelica_boolean tmp325;
  modelica_boolean tmp326;
  modelica_real tmp327;
  tmp308 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp310 = (modelica_boolean)tmp308;
  if(tmp310)
  {
    tmp311 = data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp309 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp311 = (tmp309?data->localData[0]->realVars[200] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp311, linearSystemData, threadData);
  tmp312 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp314 = (modelica_boolean)tmp312;
  if(tmp314)
  {
    tmp315 = 0.0;
  }
  else
  {
    tmp313 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp315 = (tmp313?data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp315, linearSystemData, threadData);
  tmp316 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp318 = (modelica_boolean)tmp316;
  if(tmp318)
  {
    tmp319 = 0.0;
  }
  else
  {
    tmp317 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp319 = (tmp317?data->localData[0]->realVars[198] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp319, linearSystemData, threadData);
  tmp320 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp322 = (modelica_boolean)tmp320;
  if(tmp322)
  {
    tmp323 = (-data->localData[0]->realVars[203] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp321 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp323 = (tmp321?data->localData[0]->realVars[201] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[203] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp323, linearSystemData, threadData);
  tmp324 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp326 = (modelica_boolean)tmp324;
  if(tmp326)
  {
    tmp327 = 0.0;
  }
  else
  {
    tmp325 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp327 = (tmp325?data->localData[0]->realVars[199] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp327, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData182(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[202].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[202].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[202].attribute /* MatStm5.compMasFrac[1,1] */.max;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,2] */.max;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,2] */.max;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[204].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[204].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[204].attribute /* MatStm5.compMasFrac[2,1] */.max;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA108(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,108};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp328;
  modelica_boolean tmp329;
  modelica_boolean tmp330;
  modelica_boolean tmp331;
  modelica_real tmp332;
  modelica_boolean tmp333;
  modelica_boolean tmp334;
  modelica_boolean tmp335;
  modelica_real tmp336;
  modelica_boolean tmp337;
  modelica_boolean tmp338;
  modelica_boolean tmp339;
  modelica_real tmp340;
  modelica_boolean tmp341;
  modelica_boolean tmp342;
  modelica_boolean tmp343;
  modelica_boolean tmp344;
  modelica_real tmp345;
  modelica_boolean tmp346;
  modelica_boolean tmp347;
  modelica_boolean tmp348;
  modelica_real tmp349;
  modelica_boolean tmp350;
  modelica_boolean tmp351;
  modelica_boolean tmp352;
  modelica_real tmp353;
  modelica_boolean tmp354;
  modelica_boolean tmp355;
  modelica_boolean tmp356;
  modelica_real tmp357;
  modelica_boolean tmp358;
  modelica_boolean tmp359;
  modelica_boolean tmp360;
  modelica_real tmp361;
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  modelica_boolean tmp364;
  modelica_real tmp365;
  modelica_boolean tmp366;
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  modelica_boolean tmp369;
  modelica_real tmp370;
  modelica_boolean tmp371;
  tmp328 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 0, (-((tmp328?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp329 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp331 = (modelica_boolean)tmp329;
  if(tmp331)
  {
    tmp332 = 0.0;
  }
  else
  {
    tmp330 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp332 = (tmp330?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp332)), 1, linearSystemData, threadData);
  tmp333 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp335 = (modelica_boolean)tmp333;
  if(tmp335)
  {
    tmp336 = 0.0;
  }
  else
  {
    tmp334 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp336 = (tmp334?(-data->localData[0]->realVars[90] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp336)), 2, linearSystemData, threadData);
  tmp337 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp339 = (modelica_boolean)tmp337;
  if(tmp339)
  {
    tmp340 = 0.0;
  }
  else
  {
    tmp338 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp340 = (tmp338?(-data->localData[0]->realVars[89] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp340)), 3, linearSystemData, threadData);
  tmp341 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp341?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp342 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp344 = (modelica_boolean)tmp342;
  if(tmp344)
  {
    tmp345 = 0.0;
  }
  else
  {
    tmp343 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp345 = (tmp343?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp345)), 5, linearSystemData, threadData);
  tmp346 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp348 = (modelica_boolean)tmp346;
  if(tmp348)
  {
    tmp349 = (-data->localData[0]->realVars[89] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp347 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp349 = (tmp347?-0.0:(-data->localData[0]->realVars[89] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 2, (-(tmp349)), 6, linearSystemData, threadData);
  tmp350 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp352 = (modelica_boolean)tmp350;
  if(tmp352)
  {
    tmp353 = -0.0;
  }
  else
  {
    tmp351 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp353 = (tmp351?(-data->localData[0]->realVars[91] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp353)), 7, linearSystemData, threadData);
  tmp354 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp356 = (modelica_boolean)tmp354;
  if(tmp356)
  {
    tmp357 = 0.0;
  }
  else
  {
    tmp355 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp357 = (tmp355?(-data->localData[0]->realVars[90] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp357)), 8, linearSystemData, threadData);
  tmp358 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp360 = (modelica_boolean)tmp358;
  if(tmp360)
  {
    tmp361 = -1.0;
  }
  else
  {
    tmp359 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp361 = (tmp359?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp361)), 9, linearSystemData, threadData);
  tmp362 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp364 = (modelica_boolean)tmp362;
  if(tmp364)
  {
    tmp365 = 0.0;
  }
  else
  {
    tmp363 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp365 = (tmp363?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp365)), 10, linearSystemData, threadData);
  tmp366 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 4, (-((tmp366?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp367 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp369 = (modelica_boolean)tmp367;
  if(tmp369)
  {
    tmp370 = 0.0;
  }
  else
  {
    tmp368 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp370 = (tmp368?(-data->localData[0]->realVars[91] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp370)), 12, linearSystemData, threadData);
  tmp371 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp371?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb108(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,108};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp372;
  modelica_boolean tmp373;
  modelica_boolean tmp374;
  modelica_real tmp375;
  modelica_boolean tmp376;
  modelica_boolean tmp377;
  modelica_boolean tmp378;
  modelica_real tmp379;
  modelica_boolean tmp380;
  modelica_boolean tmp381;
  modelica_boolean tmp382;
  modelica_real tmp383;
  modelica_boolean tmp384;
  modelica_boolean tmp385;
  modelica_boolean tmp386;
  modelica_real tmp387;
  modelica_boolean tmp388;
  modelica_boolean tmp389;
  modelica_boolean tmp390;
  modelica_real tmp391;
  tmp372 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp374 = (modelica_boolean)tmp372;
  if(tmp374)
  {
    tmp375 = 0.0;
  }
  else
  {
    tmp373 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp375 = (tmp373?data->localData[0]->realVars[21] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp375, linearSystemData, threadData);
  tmp376 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp378 = (modelica_boolean)tmp376;
  if(tmp378)
  {
    tmp379 = 0.0;
  }
  else
  {
    tmp377 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp379 = (tmp377?data->localData[0]->realVars[19] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp379, linearSystemData, threadData);
  tmp380 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp382 = (modelica_boolean)tmp380;
  if(tmp382)
  {
    tmp383 = data->localData[0]->realVars[19] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp381 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp383 = (tmp381?data->localData[0]->realVars[23] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[19] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp383, linearSystemData, threadData);
  tmp384 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp386 = (modelica_boolean)tmp384;
  if(tmp386)
  {
    tmp387 = 0.0;
  }
  else
  {
    tmp385 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp387 = (tmp385?data->localData[0]->realVars[22] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp387, linearSystemData, threadData);
  tmp388 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */);
  tmp390 = (modelica_boolean)tmp388;
  if(tmp390)
  {
    tmp391 = (-data->localData[0]->realVars[26] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp389 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm3.Pdew variable */);
    tmp391 = (tmp389?data->localData[0]->realVars[24] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[26] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp391, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData108(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm3.compMasFrac[2,1] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void splitter1_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 482;
  linearSystemData[5].size = 5;
  linearSystemData[5].nnz = 14;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA482;
  linearSystemData[5].setb = setLinearVectorb482;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData482;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 423;
  linearSystemData[4].size = 5;
  linearSystemData[4].nnz = 14;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA423;
  linearSystemData[4].setb = setLinearVectorb423;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData423;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 353;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA353;
  linearSystemData[3].setb = setLinearVectorb353;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData353;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 241;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA241;
  linearSystemData[2].setb = setLinearVectorb241;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData241;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 182;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA182;
  linearSystemData[1].setb = setLinearVectorb182;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData182;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 108;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA108;
  linearSystemData[0].setb = setLinearVectorb108;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData108;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

