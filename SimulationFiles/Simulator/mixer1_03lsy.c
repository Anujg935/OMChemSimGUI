/* Linear Systems */
#include "mixer1_model.h"
#include "mixer1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA428(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,428};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_real tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp3 = (tmp1?(-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp3)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 4, (-((tmp4?1.0:-0.0))), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp6, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp8 = (tmp6?(-data->localData[0]->realVars[177] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp8)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp9, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp9?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp10, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp12 = (modelica_boolean)tmp10;
  if(tmp12)
  {
    tmp13 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp11, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp13 = (tmp11?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp13)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp14, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp16 = (modelica_boolean)tmp14;
  if(tmp16)
  {
    tmp17 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp15, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp17 = (tmp15?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp17)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp18, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp20 = (modelica_boolean)tmp18;
  if(tmp20)
  {
    tmp21 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp19, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp21 = (tmp19?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp21)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp22, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp22?1.0:-0.0))), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp23, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp25 = (modelica_boolean)tmp23;
  if(tmp25)
  {
    tmp26 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp24, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp26 = (tmp24?(-data->localData[0]->realVars[177] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp26)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp27, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp29 = (modelica_boolean)tmp27;
  if(tmp29)
  {
    tmp30 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp28, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp30 = (tmp28?(-data->localData[0]->realVars[176] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp30)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp31, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 1, (-((tmp31?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp32, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp34 = (modelica_boolean)tmp32;
  if(tmp34)
  {
    tmp35 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp33, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp35 = (tmp33?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp35)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp36, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp38 = (modelica_boolean)tmp36;
  if(tmp38)
  {
    tmp39 = (-data->localData[0]->realVars[176] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp37, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp39 = (tmp37?-0.0:(-data->localData[0]->realVars[176] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp39)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp40, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp42 = (modelica_boolean)tmp40;
  if(tmp42)
  {
    tmp43 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp41, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp43 = (tmp41?(-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp43)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb428(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,428};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
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
  RELATIONHYSTERESIS(tmp44, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp46 = (modelica_boolean)tmp44;
  if(tmp46)
  {
    tmp47 = (-data->localData[0]->realVars[113] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp45, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp47 = (tmp45?data->localData[0]->realVars[111] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[113] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp47, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp48, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp50 = (modelica_boolean)tmp48;
  if(tmp50)
  {
    tmp51 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp49, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp51 = (tmp49?data->localData[0]->realVars[108] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp51, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp52, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp55 = (tmp53?data->localData[0]->realVars[109] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp55, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp56, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp57, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp59 = (tmp57?data->localData[0]->realVars[106] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp59, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp60, 101325.0, data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */, 0, GreaterEq);
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = data->localData[0]->realVars[106] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp61, 101325.0, data->localData[0]->realVars[102] /* MatStm4.Pdew variable */, 1, GreaterEq);
    tmp63 = (tmp61?data->localData[0]->realVars[110] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[106] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp63, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData428(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[112].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[112].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[112].attribute /* MatStm4.compMasFrac[1,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm4.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA378(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,378};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
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
  modelica_boolean tmp89;
  modelica_real tmp90;
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  modelica_real tmp94;
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  modelica_real tmp99;
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  modelica_real tmp103;
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  modelica_real tmp107;
  tmp64 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = -1.0;
  }
  else
  {
    tmp65 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp67 = (tmp65?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp67)), 0, linearSystemData, threadData);
  tmp68 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = 0.0;
  }
  else
  {
    tmp69 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp71 = (tmp69?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp71)), 1, linearSystemData, threadData);
  tmp72 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp72?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp73 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp75 = (modelica_boolean)tmp73;
  if(tmp75)
  {
    tmp76 = 0.0;
  }
  else
  {
    tmp74 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp76 = (tmp74?(-data->localData[0]->realVars[268] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp76)), 3, linearSystemData, threadData);
  tmp77 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp79 = (modelica_boolean)tmp77;
  if(tmp79)
  {
    tmp80 = 0.0;
  }
  else
  {
    tmp78 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp80 = (tmp78?(-data->localData[0]->realVars[269] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp80)), 4, linearSystemData, threadData);
  tmp81 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp81?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp82 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp84 = (modelica_boolean)tmp82;
  if(tmp84)
  {
    tmp85 = 0.0;
  }
  else
  {
    tmp83 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp85 = (tmp83?(-data->localData[0]->realVars[268] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp85)), 6, linearSystemData, threadData);
  tmp86 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp86?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp87 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp89 = (modelica_boolean)tmp87;
  if(tmp89)
  {
    tmp90 = 0.0;
  }
  else
  {
    tmp88 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp90 = (tmp88?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp90)), 8, linearSystemData, threadData);
  tmp91 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp93 = (modelica_boolean)tmp91;
  if(tmp93)
  {
    tmp94 = 0.0;
  }
  else
  {
    tmp92 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp94 = (tmp92?(-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp94)), 9, linearSystemData, threadData);
  tmp95 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp95?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp96 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp98 = (modelica_boolean)tmp96;
  if(tmp98)
  {
    tmp99 = 0.0;
  }
  else
  {
    tmp97 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp99 = (tmp97?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp99)), 11, linearSystemData, threadData);
  tmp100 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp102 = (modelica_boolean)tmp100;
  if(tmp102)
  {
    tmp103 = (-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    tmp101 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp103 = (tmp101?-0.0:(-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp103)), 12, linearSystemData, threadData);
  tmp104 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp106 = (modelica_boolean)tmp104;
  if(tmp106)
  {
    tmp107 = -0.0;
  }
  else
  {
    tmp105 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp107 = (tmp105?(-data->localData[0]->realVars[269] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp107)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb378(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,378};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  modelica_real tmp115;
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
  tmp108 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp110 = (modelica_boolean)tmp108;
  if(tmp110)
  {
    tmp111 = 0.0;
  }
  else
  {
    tmp109 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp111 = (tmp109?data->localData[0]->realVars[200] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp111, linearSystemData, threadData);
  tmp112 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp114 = (modelica_boolean)tmp112;
  if(tmp114)
  {
    tmp115 = (-data->localData[0]->realVars[204] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp113 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp115 = (tmp113?data->localData[0]->realVars[202] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[204] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp115, linearSystemData, threadData);
  tmp116 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp118 = (modelica_boolean)tmp116;
  if(tmp118)
  {
    tmp119 = 0.0;
  }
  else
  {
    tmp117 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp119 = (tmp117?data->localData[0]->realVars[199] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp119, linearSystemData, threadData);
  tmp120 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp122 = (modelica_boolean)tmp120;
  if(tmp122)
  {
    tmp123 = 0.0;
  }
  else
  {
    tmp121 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp123 = (tmp121?data->localData[0]->realVars[197] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp123, linearSystemData, threadData);
  tmp124 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp126 = (modelica_boolean)tmp124;
  if(tmp126)
  {
    tmp127 = data->localData[0]->realVars[197] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp125 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp127 = (tmp125?data->localData[0]->realVars[201] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[197] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp127, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData378(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[203].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[203].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[203].attribute /* MatStm5.compMasFrac[1,1] */.max;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,1] */.max;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,1] */.max;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm5.compMasFrac[3,2] */.max;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp128;
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  modelica_real tmp132;
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  modelica_real tmp136;
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  modelica_real tmp140;
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  modelica_boolean tmp144;
  modelica_real tmp145;
  modelica_boolean tmp146;
  modelica_boolean tmp147;
  modelica_boolean tmp148;
  modelica_real tmp149;
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
  modelica_boolean tmp162;
  modelica_real tmp163;
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  modelica_real tmp167;
  modelica_boolean tmp168;
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  modelica_real tmp171;
  tmp128 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp128?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp129 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp131 = (modelica_boolean)tmp129;
  if(tmp131)
  {
    tmp132 = 0.0;
  }
  else
  {
    tmp130 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp132 = (tmp130?(-data->localData[0]->realVars[88] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp132)), 1, linearSystemData, threadData);
  tmp133 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp135 = (modelica_boolean)tmp133;
  if(tmp135)
  {
    tmp136 = 0.0;
  }
  else
  {
    tmp134 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp136 = (tmp134?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp136)), 2, linearSystemData, threadData);
  tmp137 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp139 = (modelica_boolean)tmp137;
  if(tmp139)
  {
    tmp140 = 0.0;
  }
  else
  {
    tmp138 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp140 = (tmp138?(-data->localData[0]->realVars[87] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp140)), 3, linearSystemData, threadData);
  tmp141 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp141?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp142 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp144 = (modelica_boolean)tmp142;
  if(tmp144)
  {
    tmp145 = -1.0;
  }
  else
  {
    tmp143 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp145 = (tmp143?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp145)), 5, linearSystemData, threadData);
  tmp146 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp148 = (modelica_boolean)tmp146;
  if(tmp148)
  {
    tmp149 = 0.0;
  }
  else
  {
    tmp147 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp149 = (tmp147?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp149)), 6, linearSystemData, threadData);
  tmp150 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp152 = (modelica_boolean)tmp150;
  if(tmp152)
  {
    tmp153 = 0.0;
  }
  else
  {
    tmp151 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp153 = (tmp151?(-data->localData[0]->realVars[87] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp153)), 7, linearSystemData, threadData);
  tmp154 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp154?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp155 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp157 = (modelica_boolean)tmp155;
  if(tmp157)
  {
    tmp158 = 0.0;
  }
  else
  {
    tmp156 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp158 = (tmp156?(-data->localData[0]->realVars[86] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp158)), 9, linearSystemData, threadData);
  tmp159 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp159?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp160 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp162 = (modelica_boolean)tmp160;
  if(tmp162)
  {
    tmp163 = 0.0;
  }
  else
  {
    tmp161 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp163 = (tmp161?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp163)), 11, linearSystemData, threadData);
  tmp164 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp166 = (modelica_boolean)tmp164;
  if(tmp166)
  {
    tmp167 = (-data->localData[0]->realVars[86] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp165 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp167 = (tmp165?-0.0:(-data->localData[0]->realVars[86] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp167)), 12, linearSystemData, threadData);
  tmp168 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp170 = (modelica_boolean)tmp168;
  if(tmp170)
  {
    tmp171 = -0.0;
  }
  else
  {
    tmp169 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp171 = (tmp169?(-data->localData[0]->realVars[88] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp171)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp172;
  modelica_boolean tmp173;
  modelica_boolean tmp174;
  modelica_real tmp175;
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  modelica_boolean tmp178;
  modelica_real tmp179;
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
  tmp172 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp174 = (modelica_boolean)tmp172;
  if(tmp174)
  {
    tmp175 = (-data->localData[0]->realVars[23] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp173 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp175 = (tmp173?data->localData[0]->realVars[21] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp175, linearSystemData, threadData);
  tmp176 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp178 = (modelica_boolean)tmp176;
  if(tmp178)
  {
    tmp179 = 0.0;
  }
  else
  {
    tmp177 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp179 = (tmp177?data->localData[0]->realVars[18] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp179, linearSystemData, threadData);
  tmp180 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp182 = (modelica_boolean)tmp180;
  if(tmp182)
  {
    tmp183 = 0.0;
  }
  else
  {
    tmp181 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp183 = (tmp181?data->localData[0]->realVars[19] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp183, linearSystemData, threadData);
  tmp184 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp186 = (modelica_boolean)tmp184;
  if(tmp186)
  {
    tmp187 = 0.0;
  }
  else
  {
    tmp185 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp187 = (tmp185?data->localData[0]->realVars[16] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp187, linearSystemData, threadData);
  tmp188 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp190 = (modelica_boolean)tmp188;
  if(tmp190)
  {
    tmp191 = data->localData[0]->realVars[16] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp189 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp191 = (tmp189?data->localData[0]->realVars[20] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp191, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData325(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[24].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[24].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[24].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp192;
  modelica_boolean tmp193;
  modelica_boolean tmp194;
  modelica_real tmp195;
  modelica_boolean tmp196;
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  modelica_boolean tmp199;
  modelica_real tmp200;
  modelica_boolean tmp201;
  modelica_boolean tmp202;
  modelica_boolean tmp203;
  modelica_real tmp204;
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  modelica_boolean tmp207;
  modelica_real tmp208;
  modelica_boolean tmp209;
  modelica_boolean tmp210;
  modelica_boolean tmp211;
  modelica_real tmp212;
  modelica_boolean tmp213;
  modelica_boolean tmp214;
  modelica_boolean tmp215;
  modelica_real tmp216;
  modelica_boolean tmp217;
  modelica_boolean tmp218;
  modelica_boolean tmp219;
  modelica_boolean tmp220;
  modelica_real tmp221;
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
  modelica_boolean tmp234;
  modelica_real tmp235;
  tmp192 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp194 = (modelica_boolean)tmp192;
  if(tmp194)
  {
    tmp195 = 0.0;
  }
  else
  {
    tmp193 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp195 = (tmp193?(-data->localData[0]->realVars[268] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp195)), 0, linearSystemData, threadData);
  tmp196 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp196?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp197 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp199 = (modelica_boolean)tmp197;
  if(tmp199)
  {
    tmp200 = 0.0;
  }
  else
  {
    tmp198 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp200 = (tmp198?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp200)), 2, linearSystemData, threadData);
  tmp201 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp203 = (modelica_boolean)tmp201;
  if(tmp203)
  {
    tmp204 = -1.0;
  }
  else
  {
    tmp202 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp204 = (tmp202?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp204)), 3, linearSystemData, threadData);
  tmp205 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp207 = (modelica_boolean)tmp205;
  if(tmp207)
  {
    tmp208 = -0.0;
  }
  else
  {
    tmp206 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp208 = (tmp206?(-data->localData[0]->realVars[269] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp208)), 4, linearSystemData, threadData);
  tmp209 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp211 = (modelica_boolean)tmp209;
  if(tmp211)
  {
    tmp212 = (-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    tmp210 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp212 = (tmp210?-0.0:(-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 4, (-(tmp212)), 5, linearSystemData, threadData);
  tmp213 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp215 = (modelica_boolean)tmp213;
  if(tmp215)
  {
    tmp216 = 0.0;
  }
  else
  {
    tmp214 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp216 = (tmp214?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp216)), 6, linearSystemData, threadData);
  tmp217 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp217?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp218 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp220 = (modelica_boolean)tmp218;
  if(tmp220)
  {
    tmp221 = 0.0;
  }
  else
  {
    tmp219 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp221 = (tmp219?(-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp221)), 8, linearSystemData, threadData);
  tmp222 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp224 = (modelica_boolean)tmp222;
  if(tmp224)
  {
    tmp225 = 0.0;
  }
  else
  {
    tmp223 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp225 = (tmp223?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp225)), 9, linearSystemData, threadData);
  tmp226 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp226?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp227 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp229 = (modelica_boolean)tmp227;
  if(tmp229)
  {
    tmp230 = 0.0;
  }
  else
  {
    tmp228 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp230 = (tmp228?(-data->localData[0]->realVars[268] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp230)), 11, linearSystemData, threadData);
  tmp231 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp231?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp232 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp234 = (modelica_boolean)tmp232;
  if(tmp234)
  {
    tmp235 = 0.0;
  }
  else
  {
    tmp233 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp235 = (tmp233?(-data->localData[0]->realVars[269] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp235)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  modelica_boolean tmp238;
  modelica_real tmp239;
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  modelica_real tmp243;
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
  tmp236 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp238 = (modelica_boolean)tmp236;
  if(tmp238)
  {
    tmp239 = 0.0;
  }
  else
  {
    tmp237 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp239 = (tmp237?data->localData[0]->realVars[200] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp239, linearSystemData, threadData);
  tmp240 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp242 = (modelica_boolean)tmp240;
  if(tmp242)
  {
    tmp243 = data->localData[0]->realVars[197] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp241 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp243 = (tmp241?data->localData[0]->realVars[201] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[197] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp243, linearSystemData, threadData);
  tmp244 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp246 = (modelica_boolean)tmp244;
  if(tmp246)
  {
    tmp247 = 0.0;
  }
  else
  {
    tmp245 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp247 = (tmp245?data->localData[0]->realVars[197] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp247, linearSystemData, threadData);
  tmp248 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp250 = (modelica_boolean)tmp248;
  if(tmp250)
  {
    tmp251 = 0.0;
  }
  else
  {
    tmp249 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp251 = (tmp249?data->localData[0]->realVars[199] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp251, linearSystemData, threadData);
  tmp252 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp254 = (modelica_boolean)tmp252;
  if(tmp254)
  {
    tmp255 = (-data->localData[0]->realVars[204] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp253 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp255 = (tmp253?data->localData[0]->realVars[202] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[204] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp255, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData226(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[2,2] */.max;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm5.compMasFrac[3,2] */.max;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,1] */.max;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,1] */.max;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[203].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[203].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[203].attribute /* MatStm5.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA192(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,192};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  modelica_boolean tmp259;
  modelica_real tmp260;
  modelica_boolean tmp261;
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  modelica_real tmp264;
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  modelica_real tmp268;
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  modelica_boolean tmp271;
  modelica_boolean tmp272;
  modelica_real tmp273;
  modelica_boolean tmp274;
  modelica_boolean tmp275;
  modelica_boolean tmp276;
  modelica_real tmp277;
  modelica_boolean tmp278;
  modelica_boolean tmp279;
  modelica_boolean tmp280;
  modelica_real tmp281;
  modelica_boolean tmp282;
  modelica_boolean tmp283;
  modelica_boolean tmp284;
  modelica_boolean tmp285;
  modelica_real tmp286;
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  modelica_boolean tmp289;
  modelica_boolean tmp290;
  modelica_real tmp291;
  modelica_boolean tmp292;
  modelica_boolean tmp293;
  modelica_boolean tmp294;
  modelica_real tmp295;
  modelica_boolean tmp296;
  modelica_boolean tmp297;
  modelica_boolean tmp298;
  modelica_real tmp299;
  tmp256 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp256?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp257 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp259 = (modelica_boolean)tmp257;
  if(tmp259)
  {
    tmp260 = 0.0;
  }
  else
  {
    tmp258 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp260 = (tmp258?(-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp260)), 1, linearSystemData, threadData);
  tmp261 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp263 = (modelica_boolean)tmp261;
  if(tmp263)
  {
    tmp264 = 0.0;
  }
  else
  {
    tmp262 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp264 = (tmp262?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp264)), 2, linearSystemData, threadData);
  tmp265 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp267 = (modelica_boolean)tmp265;
  if(tmp267)
  {
    tmp268 = 0.0;
  }
  else
  {
    tmp266 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp268 = (tmp266?(-data->localData[0]->realVars[177] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp268)), 3, linearSystemData, threadData);
  tmp269 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp269?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp270 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp272 = (modelica_boolean)tmp270;
  if(tmp272)
  {
    tmp273 = -1.0;
  }
  else
  {
    tmp271 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp273 = (tmp271?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp273)), 5, linearSystemData, threadData);
  tmp274 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp276 = (modelica_boolean)tmp274;
  if(tmp276)
  {
    tmp277 = 0.0;
  }
  else
  {
    tmp275 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp277 = (tmp275?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp277)), 6, linearSystemData, threadData);
  tmp278 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp280 = (modelica_boolean)tmp278;
  if(tmp280)
  {
    tmp281 = 0.0;
  }
  else
  {
    tmp279 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp281 = (tmp279?(-data->localData[0]->realVars[177] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp281)), 7, linearSystemData, threadData);
  tmp282 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp282?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp283 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp285 = (modelica_boolean)tmp283;
  if(tmp285)
  {
    tmp286 = 0.0;
  }
  else
  {
    tmp284 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp286 = (tmp284?(-data->localData[0]->realVars[176] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp286)), 9, linearSystemData, threadData);
  tmp287 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp287?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp288 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp290 = (modelica_boolean)tmp288;
  if(tmp290)
  {
    tmp291 = 0.0;
  }
  else
  {
    tmp289 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp291 = (tmp289?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp291)), 11, linearSystemData, threadData);
  tmp292 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp294 = (modelica_boolean)tmp292;
  if(tmp294)
  {
    tmp295 = (-data->localData[0]->realVars[176] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp293 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp295 = (tmp293?-0.0:(-data->localData[0]->realVars[176] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp295)), 12, linearSystemData, threadData);
  tmp296 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp298 = (modelica_boolean)tmp296;
  if(tmp298)
  {
    tmp299 = -0.0;
  }
  else
  {
    tmp297 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp299 = (tmp297?(-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp299)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb192(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,192};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp300;
  modelica_boolean tmp301;
  modelica_boolean tmp302;
  modelica_real tmp303;
  modelica_boolean tmp304;
  modelica_boolean tmp305;
  modelica_boolean tmp306;
  modelica_real tmp307;
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
  tmp300 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp302 = (modelica_boolean)tmp300;
  if(tmp302)
  {
    tmp303 = (-data->localData[0]->realVars[113] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp301 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp303 = (tmp301?data->localData[0]->realVars[111] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[113] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp303, linearSystemData, threadData);
  tmp304 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp306 = (modelica_boolean)tmp304;
  if(tmp306)
  {
    tmp307 = 0.0;
  }
  else
  {
    tmp305 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp307 = (tmp305?data->localData[0]->realVars[108] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp307, linearSystemData, threadData);
  tmp308 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp310 = (modelica_boolean)tmp308;
  if(tmp310)
  {
    tmp311 = 0.0;
  }
  else
  {
    tmp309 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp311 = (tmp309?data->localData[0]->realVars[109] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp311, linearSystemData, threadData);
  tmp312 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp314 = (modelica_boolean)tmp312;
  if(tmp314)
  {
    tmp315 = 0.0;
  }
  else
  {
    tmp313 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp315 = (tmp313?data->localData[0]->realVars[106] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp315, linearSystemData, threadData);
  tmp316 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm4.Pbubl variable */);
  tmp318 = (modelica_boolean)tmp316;
  if(tmp318)
  {
    tmp319 = data->localData[0]->realVars[106] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp317 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm4.Pdew variable */);
    tmp319 = (tmp317?data->localData[0]->realVars[110] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[106] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp319, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData192(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[112].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[112].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[112].attribute /* MatStm4.compMasFrac[1,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA115(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,115};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp320;
  modelica_boolean tmp321;
  modelica_boolean tmp322;
  modelica_boolean tmp323;
  modelica_real tmp324;
  modelica_boolean tmp325;
  modelica_boolean tmp326;
  modelica_boolean tmp327;
  modelica_real tmp328;
  modelica_boolean tmp329;
  modelica_boolean tmp330;
  modelica_boolean tmp331;
  modelica_real tmp332;
  modelica_boolean tmp333;
  modelica_boolean tmp334;
  modelica_boolean tmp335;
  modelica_boolean tmp336;
  modelica_boolean tmp337;
  modelica_real tmp338;
  modelica_boolean tmp339;
  modelica_boolean tmp340;
  modelica_boolean tmp341;
  modelica_real tmp342;
  modelica_boolean tmp343;
  modelica_boolean tmp344;
  modelica_boolean tmp345;
  modelica_real tmp346;
  modelica_boolean tmp347;
  modelica_boolean tmp348;
  modelica_boolean tmp349;
  modelica_real tmp350;
  modelica_boolean tmp351;
  modelica_boolean tmp352;
  modelica_boolean tmp353;
  modelica_real tmp354;
  modelica_boolean tmp355;
  modelica_boolean tmp356;
  modelica_boolean tmp357;
  modelica_real tmp358;
  modelica_boolean tmp359;
  modelica_boolean tmp360;
  modelica_boolean tmp361;
  modelica_boolean tmp362;
  modelica_real tmp363;
  tmp320 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp320?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp321 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp323 = (modelica_boolean)tmp321;
  if(tmp323)
  {
    tmp324 = 0.0;
  }
  else
  {
    tmp322 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp324 = (tmp322?(-data->localData[0]->realVars[88] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp324)), 1, linearSystemData, threadData);
  tmp325 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp327 = (modelica_boolean)tmp325;
  if(tmp327)
  {
    tmp328 = 0.0;
  }
  else
  {
    tmp326 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp328 = (tmp326?(-data->localData[0]->realVars[87] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp328)), 2, linearSystemData, threadData);
  tmp329 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp331 = (modelica_boolean)tmp329;
  if(tmp331)
  {
    tmp332 = 0.0;
  }
  else
  {
    tmp330 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp332 = (tmp330?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp332)), 3, linearSystemData, threadData);
  tmp333 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp333?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp334 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp334?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp335 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp337 = (modelica_boolean)tmp335;
  if(tmp337)
  {
    tmp338 = 0.0;
  }
  else
  {
    tmp336 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp338 = (tmp336?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp338)), 6, linearSystemData, threadData);
  tmp339 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp341 = (modelica_boolean)tmp339;
  if(tmp341)
  {
    tmp342 = -1.0;
  }
  else
  {
    tmp340 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp342 = (tmp340?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp342)), 7, linearSystemData, threadData);
  tmp343 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp345 = (modelica_boolean)tmp343;
  if(tmp345)
  {
    tmp346 = 0.0;
  }
  else
  {
    tmp344 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp346 = (tmp344?(-data->localData[0]->realVars[87] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp346)), 8, linearSystemData, threadData);
  tmp347 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp349 = (modelica_boolean)tmp347;
  if(tmp349)
  {
    tmp350 = -0.0;
  }
  else
  {
    tmp348 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp350 = (tmp348?(-data->localData[0]->realVars[88] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp350)), 9, linearSystemData, threadData);
  tmp351 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp353 = (modelica_boolean)tmp351;
  if(tmp353)
  {
    tmp354 = (-data->localData[0]->realVars[86] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp352 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp354 = (tmp352?-0.0:(-data->localData[0]->realVars[86] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp354)), 10, linearSystemData, threadData);
  tmp355 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp357 = (modelica_boolean)tmp355;
  if(tmp357)
  {
    tmp358 = 0.0;
  }
  else
  {
    tmp356 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp358 = (tmp356?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp358)), 11, linearSystemData, threadData);
  tmp359 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp359?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp360 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp362 = (modelica_boolean)tmp360;
  if(tmp362)
  {
    tmp363 = 0.0;
  }
  else
  {
    tmp361 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp363 = (tmp361?(-data->localData[0]->realVars[86] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp363)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb115(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,115};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp364;
  modelica_boolean tmp365;
  modelica_boolean tmp366;
  modelica_real tmp367;
  modelica_boolean tmp368;
  modelica_boolean tmp369;
  modelica_boolean tmp370;
  modelica_real tmp371;
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
  tmp364 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp366 = (modelica_boolean)tmp364;
  if(tmp366)
  {
    tmp367 = (-data->localData[0]->realVars[23] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp365 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp367 = (tmp365?data->localData[0]->realVars[21] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp367, linearSystemData, threadData);
  tmp368 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp370 = (modelica_boolean)tmp368;
  if(tmp370)
  {
    tmp371 = 0.0;
  }
  else
  {
    tmp369 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp371 = (tmp369?data->localData[0]->realVars[18] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp371, linearSystemData, threadData);
  tmp372 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp374 = (modelica_boolean)tmp372;
  if(tmp374)
  {
    tmp375 = 0.0;
  }
  else
  {
    tmp373 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp375 = (tmp373?data->localData[0]->realVars[19] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp375, linearSystemData, threadData);
  tmp376 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp378 = (modelica_boolean)tmp376;
  if(tmp378)
  {
    tmp379 = data->localData[0]->realVars[16] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp377 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp379 = (tmp377?data->localData[0]->realVars[20] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp379, linearSystemData, threadData);
  tmp380 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm3.Pbubl variable */);
  tmp382 = (modelica_boolean)tmp380;
  if(tmp382)
  {
    tmp383 = 0.0;
  }
  else
  {
    tmp381 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm3.Pdew variable */);
    tmp383 = (tmp381?data->localData[0]->realVars[16] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp383, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData115(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[24].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[24].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[24].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void mixer1_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 428;
  linearSystemData[5].size = 5;
  linearSystemData[5].nnz = 14;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA428;
  linearSystemData[5].setb = setLinearVectorb428;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData428;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 378;
  linearSystemData[4].size = 5;
  linearSystemData[4].nnz = 14;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA378;
  linearSystemData[4].setb = setLinearVectorb378;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData378;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 325;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA325;
  linearSystemData[3].setb = setLinearVectorb325;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData325;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 226;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA226;
  linearSystemData[2].setb = setLinearVectorb226;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData226;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 192;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA192;
  linearSystemData[1].setb = setLinearVectorb192;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData192;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 115;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA115;
  linearSystemData[0].setb = setLinearVectorb115;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData115;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

