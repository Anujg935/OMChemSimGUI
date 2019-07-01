/* Linear Systems */
#include "cooler1_model.h"
#include "cooler1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA304(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,304};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
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
  modelica_real tmp25;
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
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp4?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp8 = (tmp6?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp8)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp10, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp12 = (tmp10?(-data->localData[0]->realVars[91] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp12)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp13, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 2, (-((tmp13?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp14, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp16 = (modelica_boolean)tmp14;
  if(tmp16)
  {
    tmp17 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp15, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp17 = (tmp15?(-data->localData[0]->realVars[90] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp17)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp18, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp20 = (modelica_boolean)tmp18;
  if(tmp20)
  {
    tmp21 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp19, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp21 = (tmp19?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp21)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp22, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp24 = (modelica_boolean)tmp22;
  if(tmp24)
  {
    tmp25 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp23, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp25 = (tmp23?(-data->localData[0]->realVars[92] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp25)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp26, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = (-data->localData[0]->realVars[90] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp27, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp29 = (tmp27?-0.0:(-data->localData[0]->realVars[90] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 3, (-(tmp29)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp30, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp31, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp33 = (tmp31?(-data->localData[0]->realVars[91] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp33)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp34, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp36 = (modelica_boolean)tmp34;
  if(tmp36)
  {
    tmp37 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp35, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp37 = (tmp35?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp37)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp38, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp40 = (modelica_boolean)tmp38;
  if(tmp40)
  {
    tmp41 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp39, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp41 = (tmp39?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp41)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp42, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 4, (-((tmp42?1.0:-0.0))), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp45 = (modelica_boolean)tmp43;
  if(tmp45)
  {
    tmp46 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp44, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp46 = (tmp44?(-data->localData[0]->realVars[92] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp46)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(4, 1, (-((tmp47?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb304(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,304};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp50 = (modelica_boolean)tmp48;
  if(tmp50)
  {
    tmp51 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp49, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp51 = (tmp49?data->localData[0]->realVars[22] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp51, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp52, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp55 = (tmp53?data->localData[0]->realVars[20] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp55, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = data->localData[0]->realVars[20] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp57, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp59 = (tmp57?data->localData[0]->realVars[24] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[20] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp59, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp60, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp61, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp63 = (tmp61?data->localData[0]->realVars[23] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp63, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp64, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = (-data->localData[0]->realVars[27] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp65, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp67 = (tmp65?data->localData[0]->realVars[25] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[27] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp67, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData304(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm2.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA238(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,238};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_real tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  modelica_real tmp86;
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
  modelica_real tmp98;
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  modelica_real tmp106;
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  tmp68 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = 0.0;
  }
  else
  {
    tmp69 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp71 = (tmp69?(-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp71)), 0, linearSystemData, threadData);
  tmp72 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp74 = (modelica_boolean)tmp72;
  if(tmp74)
  {
    tmp75 = 0.0;
  }
  else
  {
    tmp73 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp75 = (tmp73?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp75)), 1, linearSystemData, threadData);
  tmp76 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp76?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp77 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp77?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp78 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp80 = (modelica_boolean)tmp78;
  if(tmp80)
  {
    tmp81 = 0.0;
  }
  else
  {
    tmp79 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp81 = (tmp79?(-data->localData[0]->realVars[181] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp81)), 4, linearSystemData, threadData);
  tmp82 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp82?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp83 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp85 = (modelica_boolean)tmp83;
  if(tmp85)
  {
    tmp86 = 0.0;
  }
  else
  {
    tmp84 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp86 = (tmp84?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp86)), 6, linearSystemData, threadData);
  tmp87 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp89 = (modelica_boolean)tmp87;
  if(tmp89)
  {
    tmp90 = -1.0;
  }
  else
  {
    tmp88 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp90 = (tmp88?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp90)), 7, linearSystemData, threadData);
  tmp91 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp93 = (modelica_boolean)tmp91;
  if(tmp93)
  {
    tmp94 = 0.0;
  }
  else
  {
    tmp92 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp94 = (tmp92?(-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp94)), 8, linearSystemData, threadData);
  tmp95 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp97 = (modelica_boolean)tmp95;
  if(tmp97)
  {
    tmp98 = -0.0;
  }
  else
  {
    tmp96 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp98 = (tmp96?(-data->localData[0]->realVars[181] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp98)), 9, linearSystemData, threadData);
  tmp99 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp101 = (modelica_boolean)tmp99;
  if(tmp101)
  {
    tmp102 = (-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp100 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp102 = (tmp100?-0.0:(-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp102)), 10, linearSystemData, threadData);
  tmp103 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp105 = (modelica_boolean)tmp103;
  if(tmp105)
  {
    tmp106 = 0.0;
  }
  else
  {
    tmp104 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp106 = (tmp104?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp106)), 11, linearSystemData, threadData);
  tmp107 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp107?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp108 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp110 = (modelica_boolean)tmp108;
  if(tmp110)
  {
    tmp111 = 0.0;
  }
  else
  {
    tmp109 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp111 = (tmp109?(-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp111)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb238(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,238};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp128;
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  modelica_real tmp131;
  tmp112 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp114 = (modelica_boolean)tmp112;
  if(tmp114)
  {
    tmp115 = 0.0;
  }
  else
  {
    tmp113 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp115 = (tmp113?data->localData[0]->realVars[111] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp115, linearSystemData, threadData);
  tmp116 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp118 = (modelica_boolean)tmp116;
  if(tmp118)
  {
    tmp119 = (-data->localData[0]->realVars[116] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp117 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp119 = (tmp117?data->localData[0]->realVars[114] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[116] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp119, linearSystemData, threadData);
  tmp120 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp122 = (modelica_boolean)tmp120;
  if(tmp122)
  {
    tmp123 = 0.0;
  }
  else
  {
    tmp121 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp123 = (tmp121?data->localData[0]->realVars[112] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp123, linearSystemData, threadData);
  tmp124 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp126 = (modelica_boolean)tmp124;
  if(tmp126)
  {
    tmp127 = data->localData[0]->realVars[109] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp125 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp127 = (tmp125?data->localData[0]->realVars[113] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[109] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp127, linearSystemData, threadData);
  tmp128 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp130 = (modelica_boolean)tmp128;
  if(tmp130)
  {
    tmp131 = 0.0;
  }
  else
  {
    tmp129 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp131 = (tmp129?data->localData[0]->realVars[109] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp131, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData238(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA147(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,147};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  modelica_real tmp135;
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  modelica_real tmp139;
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  modelica_real tmp143;
  modelica_boolean tmp144;
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
  modelica_real tmp157;
  modelica_boolean tmp158;
  modelica_boolean tmp159;
  modelica_boolean tmp160;
  modelica_real tmp161;
  modelica_boolean tmp162;
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
  modelica_real tmp174;
  modelica_boolean tmp175;
  tmp132 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp134 = (modelica_boolean)tmp132;
  if(tmp134)
  {
    tmp135 = -0.0;
  }
  else
  {
    tmp133 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp135 = (tmp133?(-data->localData[0]->realVars[92] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp135)), 0, linearSystemData, threadData);
  tmp136 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp138 = (modelica_boolean)tmp136;
  if(tmp138)
  {
    tmp139 = (-data->localData[0]->realVars[90] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp137 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp139 = (tmp137?-0.0:(-data->localData[0]->realVars[90] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 4, (-(tmp139)), 1, linearSystemData, threadData);
  tmp140 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp142 = (modelica_boolean)tmp140;
  if(tmp142)
  {
    tmp143 = 0.0;
  }
  else
  {
    tmp141 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp143 = (tmp141?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp143)), 2, linearSystemData, threadData);
  tmp144 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp144?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp145 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp147 = (modelica_boolean)tmp145;
  if(tmp147)
  {
    tmp148 = 0.0;
  }
  else
  {
    tmp146 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp148 = (tmp146?(-data->localData[0]->realVars[90] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp148)), 4, linearSystemData, threadData);
  tmp149 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp149?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp150 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp152 = (modelica_boolean)tmp150;
  if(tmp152)
  {
    tmp153 = 0.0;
  }
  else
  {
    tmp151 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp153 = (tmp151?(-data->localData[0]->realVars[91] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp153)), 6, linearSystemData, threadData);
  tmp154 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp156 = (modelica_boolean)tmp154;
  if(tmp156)
  {
    tmp157 = 0.0;
  }
  else
  {
    tmp155 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp157 = (tmp155?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp157)), 7, linearSystemData, threadData);
  tmp158 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp160 = (modelica_boolean)tmp158;
  if(tmp160)
  {
    tmp161 = -1.0;
  }
  else
  {
    tmp159 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp161 = (tmp159?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp161)), 8, linearSystemData, threadData);
  tmp162 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp162?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp163 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp165 = (modelica_boolean)tmp163;
  if(tmp165)
  {
    tmp166 = 0.0;
  }
  else
  {
    tmp164 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp166 = (tmp164?(-data->localData[0]->realVars[91] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp166)), 10, linearSystemData, threadData);
  tmp167 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp169 = (modelica_boolean)tmp167;
  if(tmp169)
  {
    tmp170 = 0.0;
  }
  else
  {
    tmp168 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp170 = (tmp168?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp170)), 11, linearSystemData, threadData);
  tmp171 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp173 = (modelica_boolean)tmp171;
  if(tmp173)
  {
    tmp174 = 0.0;
  }
  else
  {
    tmp172 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp174 = (tmp172?(-data->localData[0]->realVars[92] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp174)), 12, linearSystemData, threadData);
  tmp175 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 2, (-((tmp175?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb147(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,147};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp192;
  modelica_boolean tmp193;
  modelica_boolean tmp194;
  modelica_real tmp195;
  tmp176 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp178 = (modelica_boolean)tmp176;
  if(tmp178)
  {
    tmp179 = data->localData[0]->realVars[20] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp177 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp179 = (tmp177?data->localData[0]->realVars[24] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[20] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp179, linearSystemData, threadData);
  tmp180 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp182 = (modelica_boolean)tmp180;
  if(tmp182)
  {
    tmp183 = 0.0;
  }
  else
  {
    tmp181 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp183 = (tmp181?data->localData[0]->realVars[20] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp183, linearSystemData, threadData);
  tmp184 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp186 = (modelica_boolean)tmp184;
  if(tmp186)
  {
    tmp187 = 0.0;
  }
  else
  {
    tmp185 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp187 = (tmp185?data->localData[0]->realVars[23] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp187, linearSystemData, threadData);
  tmp188 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp190 = (modelica_boolean)tmp188;
  if(tmp190)
  {
    tmp191 = 0.0;
  }
  else
  {
    tmp189 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp191 = (tmp189?data->localData[0]->realVars[22] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp191, linearSystemData, threadData);
  tmp192 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp194 = (modelica_boolean)tmp192;
  if(tmp194)
  {
    tmp195 = (-data->localData[0]->realVars[27] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp193 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp195 = (tmp193?data->localData[0]->realVars[25] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[27] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp195, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData147(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm2.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA83(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,83};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp196;
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  modelica_real tmp199;
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
  modelica_real tmp229;
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  modelica_real tmp234;
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  modelica_boolean tmp238;
  modelica_real tmp239;
  tmp196 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp198 = (modelica_boolean)tmp196;
  if(tmp198)
  {
    tmp199 = (-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp197 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp199 = (tmp197?-0.0:(-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 3, (-(tmp199)), 0, linearSystemData, threadData);
  tmp200 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp202 = (modelica_boolean)tmp200;
  if(tmp202)
  {
    tmp203 = -0.0;
  }
  else
  {
    tmp201 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp203 = (tmp201?(-data->localData[0]->realVars[181] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp203)), 1, linearSystemData, threadData);
  tmp204 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp206 = (modelica_boolean)tmp204;
  if(tmp206)
  {
    tmp207 = 0.0;
  }
  else
  {
    tmp205 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp207 = (tmp205?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp207)), 2, linearSystemData, threadData);
  tmp208 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp210 = (modelica_boolean)tmp208;
  if(tmp210)
  {
    tmp211 = 0.0;
  }
  else
  {
    tmp209 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp211 = (tmp209?(-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp211)), 3, linearSystemData, threadData);
  tmp212 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp212?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp213 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp215 = (modelica_boolean)tmp213;
  if(tmp215)
  {
    tmp216 = 0.0;
  }
  else
  {
    tmp214 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp216 = (tmp214?(-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp216)), 5, linearSystemData, threadData);
  tmp217 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp217?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp218 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp220 = (modelica_boolean)tmp218;
  if(tmp220)
  {
    tmp221 = -1.0;
  }
  else
  {
    tmp219 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp221 = (tmp219?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp221)), 7, linearSystemData, threadData);
  tmp222 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp224 = (modelica_boolean)tmp222;
  if(tmp224)
  {
    tmp225 = 0.0;
  }
  else
  {
    tmp223 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp225 = (tmp223?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp225)), 8, linearSystemData, threadData);
  tmp226 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp228 = (modelica_boolean)tmp226;
  if(tmp228)
  {
    tmp229 = 0.0;
  }
  else
  {
    tmp227 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp229 = (tmp227?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp229)), 9, linearSystemData, threadData);
  tmp230 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp230?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp231 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp233 = (modelica_boolean)tmp231;
  if(tmp233)
  {
    tmp234 = 0.0;
  }
  else
  {
    tmp232 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp234 = (tmp232?(-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp234)), 11, linearSystemData, threadData);
  tmp235 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp235?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp236 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp238 = (modelica_boolean)tmp236;
  if(tmp238)
  {
    tmp239 = 0.0;
  }
  else
  {
    tmp237 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp239 = (tmp237?(-data->localData[0]->realVars[181] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp239)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb83(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,83};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  modelica_real tmp259;
  tmp240 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp242 = (modelica_boolean)tmp240;
  if(tmp242)
  {
    tmp243 = data->localData[0]->realVars[109] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp241 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp243 = (tmp241?data->localData[0]->realVars[113] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[109] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp243, linearSystemData, threadData);
  tmp244 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp246 = (modelica_boolean)tmp244;
  if(tmp246)
  {
    tmp247 = 0.0;
  }
  else
  {
    tmp245 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp247 = (tmp245?data->localData[0]->realVars[109] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp247, linearSystemData, threadData);
  tmp248 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp250 = (modelica_boolean)tmp248;
  if(tmp250)
  {
    tmp251 = 0.0;
  }
  else
  {
    tmp249 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp251 = (tmp249?data->localData[0]->realVars[112] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp251, linearSystemData, threadData);
  tmp252 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp254 = (modelica_boolean)tmp252;
  if(tmp254)
  {
    tmp255 = 0.0;
  }
  else
  {
    tmp253 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp255 = (tmp253?data->localData[0]->realVars[111] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp255, linearSystemData, threadData);
  tmp256 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp258 = (modelica_boolean)tmp256;
  if(tmp258)
  {
    tmp259 = (-data->localData[0]->realVars[116] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp257 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp259 = (tmp257?data->localData[0]->realVars[114] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[116] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp259, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData83(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[3,1] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void cooler1_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 304;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA304;
  linearSystemData[3].setb = setLinearVectorb304;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData304;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 238;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA238;
  linearSystemData[2].setb = setLinearVectorb238;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData238;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 147;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA147;
  linearSystemData[1].setb = setLinearVectorb147;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData147;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 83;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA83;
  linearSystemData[0].setb = setLinearVectorb83;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData83;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

