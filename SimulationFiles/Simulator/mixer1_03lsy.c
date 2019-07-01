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
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
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
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_real tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
  RELATIONHYSTERESIS(tmp2, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp4 = (modelica_boolean)tmp2;
  if(tmp4)
  {
    tmp5 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp3, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp5 = (tmp3?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp5)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp6, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 4, (-((tmp6?1.0:-0.0))), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp7, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp9 = (modelica_boolean)tmp7;
  if(tmp9)
  {
    tmp10 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp8, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp10 = (tmp8?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp10)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp11, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp11?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp12, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp14 = (modelica_boolean)tmp12;
  if(tmp14)
  {
    tmp15 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp13, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp15 = (tmp13?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp15)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp16, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp18 = (modelica_boolean)tmp16;
  if(tmp18)
  {
    tmp19 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp17, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp19 = (tmp17?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp19)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp20, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp22 = (modelica_boolean)tmp20;
  if(tmp22)
  {
    tmp23 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp21, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp23 = (tmp21?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp23)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp24, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp24?1.0:-0.0))), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp25, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp27 = (modelica_boolean)tmp25;
  if(tmp27)
  {
    tmp28 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp26, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp28 = (tmp26?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp28)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp29, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp31 = (modelica_boolean)tmp29;
  if(tmp31)
  {
    tmp32 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp30, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp32 = (tmp30?(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp32)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp33, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 1, (-((tmp33?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp34, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp36 = (modelica_boolean)tmp34;
  if(tmp36)
  {
    tmp37 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp35, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp37 = (tmp35?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp37)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp38, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp40 = (modelica_boolean)tmp38;
  if(tmp40)
  {
    tmp41 = (-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp39, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp41 = (tmp39?-0.0:(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp41)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp42, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp44 = (modelica_boolean)tmp42;
  if(tmp44)
  {
    tmp45 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp43, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp45 = (tmp43?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp45)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb428(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,428};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_real tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_real tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_real tmp57;
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_real tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  RELATIONHYSTERESIS(tmp46, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp48 = (modelica_boolean)tmp46;
  if(tmp48)
  {
    tmp49 = (-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp47, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp49 = (tmp47?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp49, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp50, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp52 = (modelica_boolean)tmp50;
  if(tmp52)
  {
    tmp53 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp51, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp53 = (tmp51?data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp53, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp54, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp56 = (modelica_boolean)tmp54;
  if(tmp56)
  {
    tmp57 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp55, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp57 = (tmp55?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp57, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp58, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp60 = (modelica_boolean)tmp58;
  if(tmp60)
  {
    tmp61 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp59, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp61 = (tmp59?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp61, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp62, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp64 = (modelica_boolean)tmp62;
  if(tmp64)
  {
    tmp65 = data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp63, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp65 = (tmp63?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp65, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData428(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA378(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,378};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_real tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_real tmp73;
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_real tmp78;
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  modelica_real tmp82;
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_real tmp87;
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  modelica_real tmp92;
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  modelica_real tmp96;
  modelica_boolean tmp97;
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
  tmp66 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp68 = (modelica_boolean)tmp66;
  if(tmp68)
  {
    tmp69 = -1.0;
  }
  else
  {
    tmp67 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp69 = (tmp67?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp69)), 0, linearSystemData, threadData);
  tmp70 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp72 = (modelica_boolean)tmp70;
  if(tmp72)
  {
    tmp73 = 0.0;
  }
  else
  {
    tmp71 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp73 = (tmp71?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp73)), 1, linearSystemData, threadData);
  tmp74 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp74?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp75 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp77 = (modelica_boolean)tmp75;
  if(tmp77)
  {
    tmp78 = 0.0;
  }
  else
  {
    tmp76 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp78 = (tmp76?(-data->localData[0]->realVars[178] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp78)), 3, linearSystemData, threadData);
  tmp79 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp81 = (modelica_boolean)tmp79;
  if(tmp81)
  {
    tmp82 = 0.0;
  }
  else
  {
    tmp80 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp82 = (tmp80?(-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp82)), 4, linearSystemData, threadData);
  tmp83 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp83?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp84 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp86 = (modelica_boolean)tmp84;
  if(tmp86)
  {
    tmp87 = 0.0;
  }
  else
  {
    tmp85 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp87 = (tmp85?(-data->localData[0]->realVars[178] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp87)), 6, linearSystemData, threadData);
  tmp88 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp88?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp89 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp91 = (modelica_boolean)tmp89;
  if(tmp91)
  {
    tmp92 = 0.0;
  }
  else
  {
    tmp90 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp92 = (tmp90?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp92)), 8, linearSystemData, threadData);
  tmp93 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp95 = (modelica_boolean)tmp93;
  if(tmp95)
  {
    tmp96 = 0.0;
  }
  else
  {
    tmp94 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp96 = (tmp94?(-data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp96)), 9, linearSystemData, threadData);
  tmp97 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp97?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp98 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp100 = (modelica_boolean)tmp98;
  if(tmp100)
  {
    tmp101 = 0.0;
  }
  else
  {
    tmp99 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp101 = (tmp99?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp101)), 11, linearSystemData, threadData);
  tmp102 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp104 = (modelica_boolean)tmp102;
  if(tmp104)
  {
    tmp105 = (-data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp103 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp105 = (tmp103?-0.0:(-data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp105)), 12, linearSystemData, threadData);
  tmp106 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp108 = (modelica_boolean)tmp106;
  if(tmp108)
  {
    tmp109 = -0.0;
  }
  else
  {
    tmp107 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp109 = (tmp107?(-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp109)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb378(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,378};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_real tmp113;
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  modelica_real tmp117;
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_real tmp121;
  modelica_boolean tmp122;
  modelica_boolean tmp123;
  modelica_boolean tmp124;
  modelica_real tmp125;
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  modelica_real tmp129;
  tmp110 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp112 = (modelica_boolean)tmp110;
  if(tmp112)
  {
    tmp113 = 0.0;
  }
  else
  {
    tmp111 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp113 = (tmp111?data->localData[0]->realVars[110] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp113, linearSystemData, threadData);
  tmp114 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp116 = (modelica_boolean)tmp114;
  if(tmp116)
  {
    tmp117 = (-data->localData[0]->realVars[114] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp115 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp117 = (tmp115?data->localData[0]->realVars[112] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[114] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp117, linearSystemData, threadData);
  tmp118 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp120 = (modelica_boolean)tmp118;
  if(tmp120)
  {
    tmp121 = 0.0;
  }
  else
  {
    tmp119 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp121 = (tmp119?data->localData[0]->realVars[109] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp121, linearSystemData, threadData);
  tmp122 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp124 = (modelica_boolean)tmp122;
  if(tmp124)
  {
    tmp125 = 0.0;
  }
  else
  {
    tmp123 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp125 = (tmp123?data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp125, linearSystemData, threadData);
  tmp126 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp128 = (modelica_boolean)tmp126;
  if(tmp128)
  {
    tmp129 = data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp127 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp129 = (tmp127?data->localData[0]->realVars[111] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp129, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData378(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[113].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[113].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[113].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  modelica_real tmp134;
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  modelica_real tmp138;
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  modelica_real tmp142;
  modelica_boolean tmp143;
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  modelica_real tmp147;
  modelica_boolean tmp148;
  modelica_boolean tmp149;
  modelica_boolean tmp150;
  modelica_real tmp151;
  modelica_boolean tmp152;
  modelica_boolean tmp153;
  modelica_boolean tmp154;
  modelica_real tmp155;
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  modelica_boolean tmp158;
  modelica_boolean tmp159;
  modelica_real tmp160;
  modelica_boolean tmp161;
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  modelica_boolean tmp164;
  modelica_real tmp165;
  modelica_boolean tmp166;
  modelica_boolean tmp167;
  modelica_boolean tmp168;
  modelica_real tmp169;
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  modelica_boolean tmp172;
  modelica_real tmp173;
  tmp130 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp130?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp131 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp133 = (modelica_boolean)tmp131;
  if(tmp133)
  {
    tmp134 = 0.0;
  }
  else
  {
    tmp132 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp134 = (tmp132?(-data->localData[0]->realVars[269] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp134)), 1, linearSystemData, threadData);
  tmp135 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp137 = (modelica_boolean)tmp135;
  if(tmp137)
  {
    tmp138 = 0.0;
  }
  else
  {
    tmp136 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp138 = (tmp136?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp138)), 2, linearSystemData, threadData);
  tmp139 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp141 = (modelica_boolean)tmp139;
  if(tmp141)
  {
    tmp142 = 0.0;
  }
  else
  {
    tmp140 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp142 = (tmp140?(-data->localData[0]->realVars[268] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp142)), 3, linearSystemData, threadData);
  tmp143 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp143?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp144 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp146 = (modelica_boolean)tmp144;
  if(tmp146)
  {
    tmp147 = -1.0;
  }
  else
  {
    tmp145 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp147 = (tmp145?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp147)), 5, linearSystemData, threadData);
  tmp148 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp150 = (modelica_boolean)tmp148;
  if(tmp150)
  {
    tmp151 = 0.0;
  }
  else
  {
    tmp149 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp151 = (tmp149?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp151)), 6, linearSystemData, threadData);
  tmp152 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp154 = (modelica_boolean)tmp152;
  if(tmp154)
  {
    tmp155 = 0.0;
  }
  else
  {
    tmp153 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp155 = (tmp153?(-data->localData[0]->realVars[268] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp155)), 7, linearSystemData, threadData);
  tmp156 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp156?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp157 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp159 = (modelica_boolean)tmp157;
  if(tmp159)
  {
    tmp160 = 0.0;
  }
  else
  {
    tmp158 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp160 = (tmp158?(-data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp160)), 9, linearSystemData, threadData);
  tmp161 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp161?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp162 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp164 = (modelica_boolean)tmp162;
  if(tmp164)
  {
    tmp165 = 0.0;
  }
  else
  {
    tmp163 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp165 = (tmp163?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp165)), 11, linearSystemData, threadData);
  tmp166 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp168 = (modelica_boolean)tmp166;
  if(tmp168)
  {
    tmp169 = (-data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp167 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp169 = (tmp167?-0.0:(-data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp169)), 12, linearSystemData, threadData);
  tmp170 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp172 = (modelica_boolean)tmp170;
  if(tmp172)
  {
    tmp173 = -0.0;
  }
  else
  {
    tmp171 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp173 = (tmp171?(-data->localData[0]->realVars[269] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp173)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  modelica_real tmp177;
  modelica_boolean tmp178;
  modelica_boolean tmp179;
  modelica_boolean tmp180;
  modelica_real tmp181;
  modelica_boolean tmp182;
  modelica_boolean tmp183;
  modelica_boolean tmp184;
  modelica_real tmp185;
  modelica_boolean tmp186;
  modelica_boolean tmp187;
  modelica_boolean tmp188;
  modelica_real tmp189;
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  modelica_boolean tmp192;
  modelica_real tmp193;
  tmp174 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp176 = (modelica_boolean)tmp174;
  if(tmp176)
  {
    tmp177 = (-data->localData[0]->realVars[204] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp175 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp177 = (tmp175?data->localData[0]->realVars[202] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[204] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp177, linearSystemData, threadData);
  tmp178 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp180 = (modelica_boolean)tmp178;
  if(tmp180)
  {
    tmp181 = 0.0;
  }
  else
  {
    tmp179 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp181 = (tmp179?data->localData[0]->realVars[199] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp181, linearSystemData, threadData);
  tmp182 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp184 = (modelica_boolean)tmp182;
  if(tmp184)
  {
    tmp185 = 0.0;
  }
  else
  {
    tmp183 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp185 = (tmp183?data->localData[0]->realVars[200] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp185, linearSystemData, threadData);
  tmp186 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp188 = (modelica_boolean)tmp186;
  if(tmp188)
  {
    tmp189 = 0.0;
  }
  else
  {
    tmp187 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp189 = (tmp187?data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp189, linearSystemData, threadData);
  tmp190 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp192 = (modelica_boolean)tmp190;
  if(tmp192)
  {
    tmp193 = data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp191 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp193 = (tmp191?data->localData[0]->realVars[201] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp193, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData325(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[203].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[203].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[203].attribute /* MatStm4.compMasFrac[1,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm4.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp194;
  modelica_boolean tmp195;
  modelica_boolean tmp196;
  modelica_real tmp197;
  modelica_boolean tmp198;
  modelica_boolean tmp199;
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  modelica_real tmp202;
  modelica_boolean tmp203;
  modelica_boolean tmp204;
  modelica_boolean tmp205;
  modelica_real tmp206;
  modelica_boolean tmp207;
  modelica_boolean tmp208;
  modelica_boolean tmp209;
  modelica_real tmp210;
  modelica_boolean tmp211;
  modelica_boolean tmp212;
  modelica_boolean tmp213;
  modelica_real tmp214;
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  modelica_boolean tmp217;
  modelica_real tmp218;
  modelica_boolean tmp219;
  modelica_boolean tmp220;
  modelica_boolean tmp221;
  modelica_boolean tmp222;
  modelica_real tmp223;
  modelica_boolean tmp224;
  modelica_boolean tmp225;
  modelica_boolean tmp226;
  modelica_real tmp227;
  modelica_boolean tmp228;
  modelica_boolean tmp229;
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  modelica_real tmp232;
  modelica_boolean tmp233;
  modelica_boolean tmp234;
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  modelica_real tmp237;
  tmp194 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp196 = (modelica_boolean)tmp194;
  if(tmp196)
  {
    tmp197 = 0.0;
  }
  else
  {
    tmp195 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp197 = (tmp195?(-data->localData[0]->realVars[178] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp197)), 0, linearSystemData, threadData);
  tmp198 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp198?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp199 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp201 = (modelica_boolean)tmp199;
  if(tmp201)
  {
    tmp202 = 0.0;
  }
  else
  {
    tmp200 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp202 = (tmp200?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp202)), 2, linearSystemData, threadData);
  tmp203 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp205 = (modelica_boolean)tmp203;
  if(tmp205)
  {
    tmp206 = -1.0;
  }
  else
  {
    tmp204 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp206 = (tmp204?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp206)), 3, linearSystemData, threadData);
  tmp207 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp209 = (modelica_boolean)tmp207;
  if(tmp209)
  {
    tmp210 = -0.0;
  }
  else
  {
    tmp208 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp210 = (tmp208?(-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp210)), 4, linearSystemData, threadData);
  tmp211 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp213 = (modelica_boolean)tmp211;
  if(tmp213)
  {
    tmp214 = (-data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp212 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp214 = (tmp212?-0.0:(-data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 4, (-(tmp214)), 5, linearSystemData, threadData);
  tmp215 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp217 = (modelica_boolean)tmp215;
  if(tmp217)
  {
    tmp218 = 0.0;
  }
  else
  {
    tmp216 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp218 = (tmp216?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp218)), 6, linearSystemData, threadData);
  tmp219 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp219?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp220 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp222 = (modelica_boolean)tmp220;
  if(tmp222)
  {
    tmp223 = 0.0;
  }
  else
  {
    tmp221 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp223 = (tmp221?(-data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp223)), 8, linearSystemData, threadData);
  tmp224 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp226 = (modelica_boolean)tmp224;
  if(tmp226)
  {
    tmp227 = 0.0;
  }
  else
  {
    tmp225 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp227 = (tmp225?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp227)), 9, linearSystemData, threadData);
  tmp228 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp228?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp229 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp231 = (modelica_boolean)tmp229;
  if(tmp231)
  {
    tmp232 = 0.0;
  }
  else
  {
    tmp230 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp232 = (tmp230?(-data->localData[0]->realVars[178] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp232)), 11, linearSystemData, threadData);
  tmp233 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp233?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp234 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp236 = (modelica_boolean)tmp234;
  if(tmp236)
  {
    tmp237 = 0.0;
  }
  else
  {
    tmp235 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp237 = (tmp235?(-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp237)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp238;
  modelica_boolean tmp239;
  modelica_boolean tmp240;
  modelica_real tmp241;
  modelica_boolean tmp242;
  modelica_boolean tmp243;
  modelica_boolean tmp244;
  modelica_real tmp245;
  modelica_boolean tmp246;
  modelica_boolean tmp247;
  modelica_boolean tmp248;
  modelica_real tmp249;
  modelica_boolean tmp250;
  modelica_boolean tmp251;
  modelica_boolean tmp252;
  modelica_real tmp253;
  modelica_boolean tmp254;
  modelica_boolean tmp255;
  modelica_boolean tmp256;
  modelica_real tmp257;
  tmp238 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp240 = (modelica_boolean)tmp238;
  if(tmp240)
  {
    tmp241 = 0.0;
  }
  else
  {
    tmp239 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp241 = (tmp239?data->localData[0]->realVars[110] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp241, linearSystemData, threadData);
  tmp242 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp244 = (modelica_boolean)tmp242;
  if(tmp244)
  {
    tmp245 = data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp243 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp245 = (tmp243?data->localData[0]->realVars[111] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp245, linearSystemData, threadData);
  tmp246 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp248 = (modelica_boolean)tmp246;
  if(tmp248)
  {
    tmp249 = 0.0;
  }
  else
  {
    tmp247 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp249 = (tmp247?data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp249, linearSystemData, threadData);
  tmp250 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp252 = (modelica_boolean)tmp250;
  if(tmp252)
  {
    tmp253 = 0.0;
  }
  else
  {
    tmp251 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp253 = (tmp251?data->localData[0]->realVars[109] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp253, linearSystemData, threadData);
  tmp254 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp256 = (modelica_boolean)tmp254;
  if(tmp256)
  {
    tmp257 = (-data->localData[0]->realVars[114] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp255 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp257 = (tmp255?data->localData[0]->realVars[112] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[114] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp257, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData226(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[113].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[113].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[113].attribute /* MatStm3.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA192(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,192};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp258;
  modelica_boolean tmp259;
  modelica_boolean tmp260;
  modelica_boolean tmp261;
  modelica_real tmp262;
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  modelica_real tmp266;
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  modelica_real tmp270;
  modelica_boolean tmp271;
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
  modelica_real tmp283;
  modelica_boolean tmp284;
  modelica_boolean tmp285;
  modelica_boolean tmp286;
  modelica_boolean tmp287;
  modelica_real tmp288;
  modelica_boolean tmp289;
  modelica_boolean tmp290;
  modelica_boolean tmp291;
  modelica_boolean tmp292;
  modelica_real tmp293;
  modelica_boolean tmp294;
  modelica_boolean tmp295;
  modelica_boolean tmp296;
  modelica_real tmp297;
  modelica_boolean tmp298;
  modelica_boolean tmp299;
  modelica_boolean tmp300;
  modelica_real tmp301;
  tmp258 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp258?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp259 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp261 = (modelica_boolean)tmp259;
  if(tmp261)
  {
    tmp262 = 0.0;
  }
  else
  {
    tmp260 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp262 = (tmp260?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp262)), 1, linearSystemData, threadData);
  tmp263 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp265 = (modelica_boolean)tmp263;
  if(tmp265)
  {
    tmp266 = 0.0;
  }
  else
  {
    tmp264 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp266 = (tmp264?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp266)), 2, linearSystemData, threadData);
  tmp267 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp269 = (modelica_boolean)tmp267;
  if(tmp269)
  {
    tmp270 = 0.0;
  }
  else
  {
    tmp268 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp270 = (tmp268?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp270)), 3, linearSystemData, threadData);
  tmp271 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp271?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp272 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp274 = (modelica_boolean)tmp272;
  if(tmp274)
  {
    tmp275 = -1.0;
  }
  else
  {
    tmp273 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp275 = (tmp273?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp275)), 5, linearSystemData, threadData);
  tmp276 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp278 = (modelica_boolean)tmp276;
  if(tmp278)
  {
    tmp279 = 0.0;
  }
  else
  {
    tmp277 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp279 = (tmp277?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp279)), 6, linearSystemData, threadData);
  tmp280 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp282 = (modelica_boolean)tmp280;
  if(tmp282)
  {
    tmp283 = 0.0;
  }
  else
  {
    tmp281 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp283 = (tmp281?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp283)), 7, linearSystemData, threadData);
  tmp284 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp284?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp285 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp287 = (modelica_boolean)tmp285;
  if(tmp287)
  {
    tmp288 = 0.0;
  }
  else
  {
    tmp286 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp288 = (tmp286?(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp288)), 9, linearSystemData, threadData);
  tmp289 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp289?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp290 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp292 = (modelica_boolean)tmp290;
  if(tmp292)
  {
    tmp293 = 0.0;
  }
  else
  {
    tmp291 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp293 = (tmp291?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp293)), 11, linearSystemData, threadData);
  tmp294 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp296 = (modelica_boolean)tmp294;
  if(tmp296)
  {
    tmp297 = (-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp295 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp297 = (tmp295?-0.0:(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp297)), 12, linearSystemData, threadData);
  tmp298 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp300 = (modelica_boolean)tmp298;
  if(tmp300)
  {
    tmp301 = -0.0;
  }
  else
  {
    tmp299 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp301 = (tmp299?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp301)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb192(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,192};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp302;
  modelica_boolean tmp303;
  modelica_boolean tmp304;
  modelica_real tmp305;
  modelica_boolean tmp306;
  modelica_boolean tmp307;
  modelica_boolean tmp308;
  modelica_real tmp309;
  modelica_boolean tmp310;
  modelica_boolean tmp311;
  modelica_boolean tmp312;
  modelica_real tmp313;
  modelica_boolean tmp314;
  modelica_boolean tmp315;
  modelica_boolean tmp316;
  modelica_real tmp317;
  modelica_boolean tmp318;
  modelica_boolean tmp319;
  modelica_boolean tmp320;
  modelica_real tmp321;
  tmp302 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp304 = (modelica_boolean)tmp302;
  if(tmp304)
  {
    tmp305 = (-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp303 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp305 = (tmp303?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp305, linearSystemData, threadData);
  tmp306 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp308 = (modelica_boolean)tmp306;
  if(tmp308)
  {
    tmp309 = 0.0;
  }
  else
  {
    tmp307 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp309 = (tmp307?data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp309, linearSystemData, threadData);
  tmp310 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp312 = (modelica_boolean)tmp310;
  if(tmp312)
  {
    tmp313 = 0.0;
  }
  else
  {
    tmp311 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp313 = (tmp311?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp313, linearSystemData, threadData);
  tmp314 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp316 = (modelica_boolean)tmp314;
  if(tmp316)
  {
    tmp317 = 0.0;
  }
  else
  {
    tmp315 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp317 = (tmp315?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp317, linearSystemData, threadData);
  tmp318 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp320 = (modelica_boolean)tmp318;
  if(tmp320)
  {
    tmp321 = data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp319 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp321 = (tmp319?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp321, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData192(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA115(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,115};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp322;
  modelica_boolean tmp323;
  modelica_boolean tmp324;
  modelica_boolean tmp325;
  modelica_real tmp326;
  modelica_boolean tmp327;
  modelica_boolean tmp328;
  modelica_boolean tmp329;
  modelica_real tmp330;
  modelica_boolean tmp331;
  modelica_boolean tmp332;
  modelica_boolean tmp333;
  modelica_real tmp334;
  modelica_boolean tmp335;
  modelica_boolean tmp336;
  modelica_boolean tmp337;
  modelica_boolean tmp338;
  modelica_boolean tmp339;
  modelica_real tmp340;
  modelica_boolean tmp341;
  modelica_boolean tmp342;
  modelica_boolean tmp343;
  modelica_real tmp344;
  modelica_boolean tmp345;
  modelica_boolean tmp346;
  modelica_boolean tmp347;
  modelica_real tmp348;
  modelica_boolean tmp349;
  modelica_boolean tmp350;
  modelica_boolean tmp351;
  modelica_real tmp352;
  modelica_boolean tmp353;
  modelica_boolean tmp354;
  modelica_boolean tmp355;
  modelica_real tmp356;
  modelica_boolean tmp357;
  modelica_boolean tmp358;
  modelica_boolean tmp359;
  modelica_real tmp360;
  modelica_boolean tmp361;
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  modelica_boolean tmp364;
  modelica_real tmp365;
  tmp322 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp322?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp323 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp325 = (modelica_boolean)tmp323;
  if(tmp325)
  {
    tmp326 = 0.0;
  }
  else
  {
    tmp324 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp326 = (tmp324?(-data->localData[0]->realVars[269] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp326)), 1, linearSystemData, threadData);
  tmp327 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp329 = (modelica_boolean)tmp327;
  if(tmp329)
  {
    tmp330 = 0.0;
  }
  else
  {
    tmp328 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp330 = (tmp328?(-data->localData[0]->realVars[268] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp330)), 2, linearSystemData, threadData);
  tmp331 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp333 = (modelica_boolean)tmp331;
  if(tmp333)
  {
    tmp334 = 0.0;
  }
  else
  {
    tmp332 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp334 = (tmp332?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp334)), 3, linearSystemData, threadData);
  tmp335 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp335?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp336 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp336?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp337 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp339 = (modelica_boolean)tmp337;
  if(tmp339)
  {
    tmp340 = 0.0;
  }
  else
  {
    tmp338 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp340 = (tmp338?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp340)), 6, linearSystemData, threadData);
  tmp341 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp343 = (modelica_boolean)tmp341;
  if(tmp343)
  {
    tmp344 = -1.0;
  }
  else
  {
    tmp342 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp344 = (tmp342?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp344)), 7, linearSystemData, threadData);
  tmp345 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp347 = (modelica_boolean)tmp345;
  if(tmp347)
  {
    tmp348 = 0.0;
  }
  else
  {
    tmp346 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp348 = (tmp346?(-data->localData[0]->realVars[268] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp348)), 8, linearSystemData, threadData);
  tmp349 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp351 = (modelica_boolean)tmp349;
  if(tmp351)
  {
    tmp352 = -0.0;
  }
  else
  {
    tmp350 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp352 = (tmp350?(-data->localData[0]->realVars[269] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp352)), 9, linearSystemData, threadData);
  tmp353 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp355 = (modelica_boolean)tmp353;
  if(tmp355)
  {
    tmp356 = (-data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp354 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp356 = (tmp354?-0.0:(-data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp356)), 10, linearSystemData, threadData);
  tmp357 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp359 = (modelica_boolean)tmp357;
  if(tmp359)
  {
    tmp360 = 0.0;
  }
  else
  {
    tmp358 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp360 = (tmp358?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp360)), 11, linearSystemData, threadData);
  tmp361 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp361?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp362 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp364 = (modelica_boolean)tmp362;
  if(tmp364)
  {
    tmp365 = 0.0;
  }
  else
  {
    tmp363 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp365 = (tmp363?(-data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp365)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb115(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,115};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp366;
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  modelica_real tmp369;
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  modelica_boolean tmp372;
  modelica_real tmp373;
  modelica_boolean tmp374;
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  modelica_real tmp377;
  modelica_boolean tmp378;
  modelica_boolean tmp379;
  modelica_boolean tmp380;
  modelica_real tmp381;
  modelica_boolean tmp382;
  modelica_boolean tmp383;
  modelica_boolean tmp384;
  modelica_real tmp385;
  tmp366 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp368 = (modelica_boolean)tmp366;
  if(tmp368)
  {
    tmp369 = (-data->localData[0]->realVars[204] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp367 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp369 = (tmp367?data->localData[0]->realVars[202] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[204] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp369, linearSystemData, threadData);
  tmp370 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp372 = (modelica_boolean)tmp370;
  if(tmp372)
  {
    tmp373 = 0.0;
  }
  else
  {
    tmp371 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp373 = (tmp371?data->localData[0]->realVars[199] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp373, linearSystemData, threadData);
  tmp374 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp376 = (modelica_boolean)tmp374;
  if(tmp376)
  {
    tmp377 = 0.0;
  }
  else
  {
    tmp375 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp377 = (tmp375?data->localData[0]->realVars[200] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp377, linearSystemData, threadData);
  tmp378 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp380 = (modelica_boolean)tmp378;
  if(tmp380)
  {
    tmp381 = data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp379 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp381 = (tmp379?data->localData[0]->realVars[201] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp381, linearSystemData, threadData);
  tmp382 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp384 = (modelica_boolean)tmp382;
  if(tmp384)
  {
    tmp385 = 0.0;
  }
  else
  {
    tmp383 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp385 = (tmp383?data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp385, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData115(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[203].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[203].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[203].attribute /* MatStm4.compMasFrac[1,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm4.compMasFrac[3,2] */.max;
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

