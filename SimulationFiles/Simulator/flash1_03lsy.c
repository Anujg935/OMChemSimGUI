/* Linear Systems */
#include "flash1_model.h"
#include "flash1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA545(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,545};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_boolean tmp29;
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
  RELATIONHYSTERESIS(tmp8, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 2, (-((tmp8?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp9, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp10, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp12 = (tmp10?(-data->localData[0]->realVars[322] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp12)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp13, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp15 = (modelica_boolean)tmp13;
  if(tmp15)
  {
    tmp16 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp14, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp16 = (tmp14?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp16)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp17, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp19 = (modelica_boolean)tmp17;
  if(tmp19)
  {
    tmp20 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp18, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp20 = (tmp18?(-data->localData[0]->realVars[323] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp20)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp21, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp23 = (modelica_boolean)tmp21;
  if(tmp23)
  {
    tmp24 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp22, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp24 = (tmp22?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp24)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp25, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp27 = (modelica_boolean)tmp25;
  if(tmp27)
  {
    tmp28 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp26, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp28 = (tmp26?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp28)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp29, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 4, (-((tmp29?1.0:-0.0))), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp30, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp31, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp33 = (tmp31?(-data->localData[0]->realVars[324] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp33)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp34, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp36 = (modelica_boolean)tmp34;
  if(tmp36)
  {
    tmp37 = (-data->localData[0]->realVars[322] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp35, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp37 = (tmp35?-0.0:(-data->localData[0]->realVars[322] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 3, (-(tmp37)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp38, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 0, (-((tmp38?1.0:-0.0))), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp39, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp41 = (modelica_boolean)tmp39;
  if(tmp41)
  {
    tmp42 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp40, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp42 = (tmp40?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp42)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp43, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp45 = (modelica_boolean)tmp43;
  if(tmp45)
  {
    tmp46 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp44, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp46 = (tmp44?(-data->localData[0]->realVars[323] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 4, (-(tmp46)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp47, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp49 = (modelica_boolean)tmp47;
  if(tmp49)
  {
    tmp50 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp48, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp50 = (tmp48?(-data->localData[0]->realVars[324] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp50)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp51, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(4, 1, (-((tmp51?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb545(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,545};
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
  RELATIONHYSTERESIS(tmp52, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp55 = (tmp53?data->localData[0]->realVars[252] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp55, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp56, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp57, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp59 = (tmp57?data->localData[0]->realVars[255] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp59, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp60, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = data->localData[0]->realVars[252] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp61, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp63 = (tmp61?data->localData[0]->realVars[256] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[252] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp63, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp64, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp65, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp67 = (tmp65?data->localData[0]->realVars[254] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp67, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp68, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = (-data->localData[0]->realVars[259] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp69, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp71 = (tmp69?data->localData[0]->realVars[257] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[259] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp71, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData545(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[263].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[263].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[263].attribute /* MatStm5.compMasFrac[3,2] */.max;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[261].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[261].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[261].attribute /* MatStm5.compMasFrac[2,2] */.max;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[262].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[262].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[262].attribute /* MatStm5.compMasFrac[3,1] */.max;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[258].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[258].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[258].attribute /* MatStm5.compMasFrac[1,1] */.max;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[260].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[260].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[260].attribute /* MatStm5.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA476(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,476};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_boolean tmp80;
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
  modelica_boolean tmp97;
  modelica_real tmp98;
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  modelica_real tmp107;
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  modelica_real tmp115;
  RELATIONHYSTERESIS(tmp72, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp74 = (modelica_boolean)tmp72;
  if(tmp74)
  {
    tmp75 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp73, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp75 = (tmp73?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp75)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp76, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp78 = (modelica_boolean)tmp76;
  if(tmp78)
  {
    tmp79 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp77, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp79 = (tmp77?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp79)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp80, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(0, 4, (-((tmp80?1.0:-0.0))), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp81, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp81?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp82, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp84 = (modelica_boolean)tmp82;
  if(tmp84)
  {
    tmp85 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp83, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp85 = (tmp83?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp85)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp86, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp88 = (modelica_boolean)tmp86;
  if(tmp88)
  {
    tmp89 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp87, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp89 = (tmp87?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp89)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp90, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp92 = (modelica_boolean)tmp90;
  if(tmp92)
  {
    tmp93 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp91, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp93 = (tmp91?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp93)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp94, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp94?1.0:-0.0))), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp95, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp97 = (modelica_boolean)tmp95;
  if(tmp97)
  {
    tmp98 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp96, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp98 = (tmp96?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp98)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp99, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp101 = (modelica_boolean)tmp99;
  if(tmp101)
  {
    tmp102 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp100, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp102 = (tmp100?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp102)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp103, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(3, 1, (-((tmp103?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp104, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp106 = (modelica_boolean)tmp104;
  if(tmp106)
  {
    tmp107 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp105, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp107 = (tmp105?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp107)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp108, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp110 = (modelica_boolean)tmp108;
  if(tmp110)
  {
    tmp111 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp109, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp111 = (tmp109?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp111)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp112, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp114 = (modelica_boolean)tmp112;
  if(tmp114)
  {
    tmp115 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp113, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp115 = (tmp113?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp115)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb476(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,476};
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
  RELATIONHYSTERESIS(tmp116, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp118 = (modelica_boolean)tmp116;
  if(tmp118)
  {
    tmp119 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp117, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp119 = (tmp117?data->localData[0]->realVars[166] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp119, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp120, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp122 = (modelica_boolean)tmp120;
  if(tmp122)
  {
    tmp123 = (-data->localData[0]->realVars[171] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp121, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp123 = (tmp121?data->localData[0]->realVars[169] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[171] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp123, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp124, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp126 = (modelica_boolean)tmp124;
  if(tmp126)
  {
    tmp127 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp125, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp127 = (tmp125?data->localData[0]->realVars[167] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp127, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp128, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp130 = (modelica_boolean)tmp128;
  if(tmp130)
  {
    tmp131 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp129, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp131 = (tmp129?data->localData[0]->realVars[164] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp131, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp132, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp134 = (modelica_boolean)tmp132;
  if(tmp134)
  {
    tmp135 = data->localData[0]->realVars[164] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp133, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp135 = (tmp133?data->localData[0]->realVars[168] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[164] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp135, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData476(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[170].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[170].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[170].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[174].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[174].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[174].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[172].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[172].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[172].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[173].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[173].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[173].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[175].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[175].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[175].attribute /* MatStm2.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA398(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,398};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp147;
  modelica_boolean tmp148;
  modelica_boolean tmp149;
  modelica_boolean tmp150;
  modelica_real tmp151;
  modelica_boolean tmp152;
  modelica_boolean tmp153;
  modelica_boolean tmp154;
  modelica_boolean tmp155;
  modelica_real tmp156;
  modelica_boolean tmp157;
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
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  modelica_boolean tmp178;
  modelica_real tmp179;
  tmp136 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp138 = (modelica_boolean)tmp136;
  if(tmp138)
  {
    tmp139 = (-data->localData[0]->realVars[145] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp137 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp139 = (tmp137?-0.0:(-data->localData[0]->realVars[145] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp139)), 0, linearSystemData, threadData);
  tmp140 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp142 = (modelica_boolean)tmp140;
  if(tmp142)
  {
    tmp143 = -0.0;
  }
  else
  {
    tmp141 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp143 = (tmp141?(-data->localData[0]->realVars[147] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp143)), 1, linearSystemData, threadData);
  tmp144 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp146 = (modelica_boolean)tmp144;
  if(tmp146)
  {
    tmp147 = 0.0;
  }
  else
  {
    tmp145 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp147 = (tmp145?(-data->localData[0]->realVars[145] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp147)), 2, linearSystemData, threadData);
  tmp148 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp150 = (modelica_boolean)tmp148;
  if(tmp150)
  {
    tmp151 = 0.0;
  }
  else
  {
    tmp149 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp151 = (tmp149?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp151)), 3, linearSystemData, threadData);
  tmp152 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp152?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp153 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp155 = (modelica_boolean)tmp153;
  if(tmp155)
  {
    tmp156 = 0.0;
  }
  else
  {
    tmp154 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp156 = (tmp154?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp156)), 5, linearSystemData, threadData);
  tmp157 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp157?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp158 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp160 = (modelica_boolean)tmp158;
  if(tmp160)
  {
    tmp161 = 0.0;
  }
  else
  {
    tmp159 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp161 = (tmp159?(-data->localData[0]->realVars[146] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp161)), 7, linearSystemData, threadData);
  tmp162 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp162?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp163 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp165 = (modelica_boolean)tmp163;
  if(tmp165)
  {
    tmp166 = 0.0;
  }
  else
  {
    tmp164 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp166 = (tmp164?(-data->localData[0]->realVars[147] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp166)), 9, linearSystemData, threadData);
  tmp167 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp169 = (modelica_boolean)tmp167;
  if(tmp169)
  {
    tmp170 = -1.0;
  }
  else
  {
    tmp168 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp170 = (tmp168?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp170)), 10, linearSystemData, threadData);
  tmp171 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp173 = (modelica_boolean)tmp171;
  if(tmp173)
  {
    tmp174 = 0.0;
  }
  else
  {
    tmp172 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp174 = (tmp172?(-data->localData[0]->realVars[146] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp174)), 11, linearSystemData, threadData);
  tmp175 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 3, (-((tmp175?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp176 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp178 = (modelica_boolean)tmp176;
  if(tmp178)
  {
    tmp179 = 0.0;
  }
  else
  {
    tmp177 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp179 = (tmp177?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp179)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb398(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,398};
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
  tmp180 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp182 = (modelica_boolean)tmp180;
  if(tmp182)
  {
    tmp183 = data->localData[0]->realVars[75] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp181 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp183 = (tmp181?data->localData[0]->realVars[79] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[75] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp183, linearSystemData, threadData);
  tmp184 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp186 = (modelica_boolean)tmp184;
  if(tmp186)
  {
    tmp187 = 0.0;
  }
  else
  {
    tmp185 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp187 = (tmp185?data->localData[0]->realVars[75] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp187, linearSystemData, threadData);
  tmp188 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp190 = (modelica_boolean)tmp188;
  if(tmp190)
  {
    tmp191 = 0.0;
  }
  else
  {
    tmp189 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp191 = (tmp189?data->localData[0]->realVars[77] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp191, linearSystemData, threadData);
  tmp192 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp194 = (modelica_boolean)tmp192;
  if(tmp194)
  {
    tmp195 = (-data->localData[0]->realVars[82] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp193 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp195 = (tmp193?data->localData[0]->realVars[80] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[82] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp195, linearSystemData, threadData);
  tmp196 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp198 = (modelica_boolean)tmp196;
  if(tmp198)
  {
    tmp199 = 0.0;
  }
  else
  {
    tmp197 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp199 = (tmp197?data->localData[0]->realVars[78] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp199, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData398(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[81].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[81].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[81].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[84].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[84].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[84].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[86].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[86].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[86].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[83].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[83].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[83].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[85].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[85].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[85].attribute /* MatStm1.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA274(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,274};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp200;
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
  modelica_boolean tmp216;
  modelica_real tmp217;
  modelica_boolean tmp218;
  modelica_boolean tmp219;
  modelica_boolean tmp220;
  modelica_boolean tmp221;
  modelica_real tmp222;
  modelica_boolean tmp223;
  modelica_boolean tmp224;
  modelica_boolean tmp225;
  modelica_real tmp226;
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
  modelica_boolean tmp238;
  modelica_real tmp239;
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  modelica_real tmp243;
  tmp200 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(0, 0, (-((tmp200?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp201 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp203 = (modelica_boolean)tmp201;
  if(tmp203)
  {
    tmp204 = 0.0;
  }
  else
  {
    tmp202 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp204 = (tmp202?(-data->localData[0]->realVars[322] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp204)), 1, linearSystemData, threadData);
  tmp205 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp207 = (modelica_boolean)tmp205;
  if(tmp207)
  {
    tmp208 = 0.0;
  }
  else
  {
    tmp206 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp208 = (tmp206?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp208)), 2, linearSystemData, threadData);
  tmp209 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp211 = (modelica_boolean)tmp209;
  if(tmp211)
  {
    tmp212 = 0.0;
  }
  else
  {
    tmp210 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp212 = (tmp210?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp212)), 3, linearSystemData, threadData);
  tmp213 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp213?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp214 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp216 = (modelica_boolean)tmp214;
  if(tmp216)
  {
    tmp217 = 0.0;
  }
  else
  {
    tmp215 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp217 = (tmp215?(-data->localData[0]->realVars[323] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp217)), 5, linearSystemData, threadData);
  tmp218 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp218?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp219 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp221 = (modelica_boolean)tmp219;
  if(tmp221)
  {
    tmp222 = 0.0;
  }
  else
  {
    tmp220 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp222 = (tmp220?(-data->localData[0]->realVars[324] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp222)), 7, linearSystemData, threadData);
  tmp223 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp225 = (modelica_boolean)tmp223;
  if(tmp225)
  {
    tmp226 = 0.0;
  }
  else
  {
    tmp224 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp226 = (tmp224?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp226)), 8, linearSystemData, threadData);
  tmp227 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp229 = (modelica_boolean)tmp227;
  if(tmp229)
  {
    tmp230 = -1.0;
  }
  else
  {
    tmp228 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp230 = (tmp228?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp230)), 9, linearSystemData, threadData);
  tmp231 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp233 = (modelica_boolean)tmp231;
  if(tmp233)
  {
    tmp234 = 0.0;
  }
  else
  {
    tmp232 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp234 = (tmp232?(-data->localData[0]->realVars[323] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp234)), 10, linearSystemData, threadData);
  tmp235 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(3, 4, (-((tmp235?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp236 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp238 = (modelica_boolean)tmp236;
  if(tmp238)
  {
    tmp239 = -0.0;
  }
  else
  {
    tmp237 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp239 = (tmp237?(-data->localData[0]->realVars[324] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp239)), 12, linearSystemData, threadData);
  tmp240 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp242 = (modelica_boolean)tmp240;
  if(tmp242)
  {
    tmp243 = (-data->localData[0]->realVars[322] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    tmp241 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp243 = (tmp241?-0.0:(-data->localData[0]->realVars[322] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp243)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb274(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,274};
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
  tmp244 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp246 = (modelica_boolean)tmp244;
  if(tmp246)
  {
    tmp247 = 0.0;
  }
  else
  {
    tmp245 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp247 = (tmp245?data->localData[0]->realVars[252] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp247, linearSystemData, threadData);
  tmp248 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp250 = (modelica_boolean)tmp248;
  if(tmp250)
  {
    tmp251 = 0.0;
  }
  else
  {
    tmp249 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp251 = (tmp249?data->localData[0]->realVars[254] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp251, linearSystemData, threadData);
  tmp252 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp254 = (modelica_boolean)tmp252;
  if(tmp254)
  {
    tmp255 = (-data->localData[0]->realVars[259] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp253 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp255 = (tmp253?data->localData[0]->realVars[257] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[259] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp255, linearSystemData, threadData);
  tmp256 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp258 = (modelica_boolean)tmp256;
  if(tmp258)
  {
    tmp259 = 0.0;
  }
  else
  {
    tmp257 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp259 = (tmp257?data->localData[0]->realVars[255] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp259, linearSystemData, threadData);
  tmp260 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp262 = (modelica_boolean)tmp260;
  if(tmp262)
  {
    tmp263 = data->localData[0]->realVars[252] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp261 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp263 = (tmp261?data->localData[0]->realVars[256] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[252] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp263, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData274(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[262].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[262].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[262].attribute /* MatStm5.compMasFrac[3,1] */.max;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[258].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[258].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[258].attribute /* MatStm5.compMasFrac[1,1] */.max;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[261].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[261].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[261].attribute /* MatStm5.compMasFrac[2,2] */.max;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[263].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[263].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[263].attribute /* MatStm5.compMasFrac[3,2] */.max;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[260].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[260].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[260].attribute /* MatStm5.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA221(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,221};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  modelica_real tmp268;
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  modelica_boolean tmp271;
  modelica_real tmp272;
  modelica_boolean tmp273;
  modelica_boolean tmp274;
  modelica_boolean tmp275;
  modelica_real tmp276;
  modelica_boolean tmp277;
  modelica_boolean tmp278;
  modelica_boolean tmp279;
  modelica_boolean tmp280;
  modelica_real tmp281;
  modelica_boolean tmp282;
  modelica_boolean tmp283;
  modelica_boolean tmp284;
  modelica_real tmp285;
  modelica_boolean tmp286;
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  modelica_boolean tmp289;
  modelica_real tmp290;
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
  modelica_real tmp306;
  modelica_boolean tmp307;
  tmp264 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 0, (-((tmp264?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp265 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp267 = (modelica_boolean)tmp265;
  if(tmp267)
  {
    tmp268 = 0.0;
  }
  else
  {
    tmp266 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp268 = (tmp266?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp268)), 1, linearSystemData, threadData);
  tmp269 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp271 = (modelica_boolean)tmp269;
  if(tmp271)
  {
    tmp272 = 0.0;
  }
  else
  {
    tmp270 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp272 = (tmp270?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp272)), 2, linearSystemData, threadData);
  tmp273 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp275 = (modelica_boolean)tmp273;
  if(tmp275)
  {
    tmp276 = 0.0;
  }
  else
  {
    tmp274 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp276 = (tmp274?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp276)), 3, linearSystemData, threadData);
  tmp277 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 2, (-((tmp277?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp278 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp280 = (modelica_boolean)tmp278;
  if(tmp280)
  {
    tmp281 = -1.0;
  }
  else
  {
    tmp279 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp281 = (tmp279?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp281)), 5, linearSystemData, threadData);
  tmp282 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp284 = (modelica_boolean)tmp282;
  if(tmp284)
  {
    tmp285 = 0.0;
  }
  else
  {
    tmp283 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp285 = (tmp283?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp285)), 6, linearSystemData, threadData);
  tmp286 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp286?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp287 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp289 = (modelica_boolean)tmp287;
  if(tmp289)
  {
    tmp290 = 0.0;
  }
  else
  {
    tmp288 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp290 = (tmp288?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp290)), 8, linearSystemData, threadData);
  tmp291 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp293 = (modelica_boolean)tmp291;
  if(tmp293)
  {
    tmp294 = 0.0;
  }
  else
  {
    tmp292 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp294 = (tmp292?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp294)), 9, linearSystemData, threadData);
  tmp295 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp297 = (modelica_boolean)tmp295;
  if(tmp297)
  {
    tmp298 = -0.0;
  }
  else
  {
    tmp296 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp298 = (tmp296?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp298)), 10, linearSystemData, threadData);
  tmp299 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp301 = (modelica_boolean)tmp299;
  if(tmp301)
  {
    tmp302 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp300 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp302 = (tmp300?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 3, (-(tmp302)), 11, linearSystemData, threadData);
  tmp303 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp305 = (modelica_boolean)tmp303;
  if(tmp305)
  {
    tmp306 = 0.0;
  }
  else
  {
    tmp304 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp306 = (tmp304?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp306)), 12, linearSystemData, threadData);
  tmp307 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 4, (-((tmp307?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb221(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,221};
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
  tmp308 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp310 = (modelica_boolean)tmp308;
  if(tmp310)
  {
    tmp311 = 0.0;
  }
  else
  {
    tmp309 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp311 = (tmp309?data->localData[0]->realVars[166] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp311, linearSystemData, threadData);
  tmp312 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp314 = (modelica_boolean)tmp312;
  if(tmp314)
  {
    tmp315 = 0.0;
  }
  else
  {
    tmp313 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp315 = (tmp313?data->localData[0]->realVars[167] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp315, linearSystemData, threadData);
  tmp316 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp318 = (modelica_boolean)tmp316;
  if(tmp318)
  {
    tmp319 = 0.0;
  }
  else
  {
    tmp317 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp319 = (tmp317?data->localData[0]->realVars[164] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp319, linearSystemData, threadData);
  tmp320 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp322 = (modelica_boolean)tmp320;
  if(tmp322)
  {
    tmp323 = data->localData[0]->realVars[164] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp321 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp323 = (tmp321?data->localData[0]->realVars[168] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[164] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp323, linearSystemData, threadData);
  tmp324 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp326 = (modelica_boolean)tmp324;
  if(tmp326)
  {
    tmp327 = (-data->localData[0]->realVars[171] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp325 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp327 = (tmp325?data->localData[0]->realVars[169] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[171] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp327, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData221(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[175].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[175].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[175].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[174].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[174].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[174].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[172].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[172].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[172].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[170].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[170].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[170].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[173].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[173].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[173].attribute /* MatStm2.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA114(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,114};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp328;
  modelica_boolean tmp329;
  modelica_boolean tmp330;
  modelica_real tmp331;
  modelica_boolean tmp332;
  modelica_boolean tmp333;
  modelica_boolean tmp334;
  modelica_real tmp335;
  modelica_boolean tmp336;
  modelica_boolean tmp337;
  modelica_boolean tmp338;
  modelica_boolean tmp339;
  modelica_boolean tmp340;
  modelica_real tmp341;
  modelica_boolean tmp342;
  modelica_boolean tmp343;
  modelica_boolean tmp344;
  modelica_real tmp345;
  modelica_boolean tmp346;
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
  modelica_boolean tmp358;
  modelica_real tmp359;
  modelica_boolean tmp360;
  modelica_boolean tmp361;
  modelica_boolean tmp362;
  modelica_real tmp363;
  modelica_boolean tmp364;
  modelica_boolean tmp365;
  modelica_boolean tmp366;
  modelica_real tmp367;
  modelica_boolean tmp368;
  modelica_boolean tmp369;
  modelica_boolean tmp370;
  modelica_real tmp371;
  tmp328 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp330 = (modelica_boolean)tmp328;
  if(tmp330)
  {
    tmp331 = 0.0;
  }
  else
  {
    tmp329 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp331 = (tmp329?(-data->localData[0]->realVars[146] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp331)), 0, linearSystemData, threadData);
  tmp332 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp334 = (modelica_boolean)tmp332;
  if(tmp334)
  {
    tmp335 = 0.0;
  }
  else
  {
    tmp333 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp335 = (tmp333?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp335)), 1, linearSystemData, threadData);
  tmp336 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp336?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp337 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp337?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp338 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp340 = (modelica_boolean)tmp338;
  if(tmp340)
  {
    tmp341 = 0.0;
  }
  else
  {
    tmp339 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp341 = (tmp339?(-data->localData[0]->realVars[147] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp341)), 4, linearSystemData, threadData);
  tmp342 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp344 = (modelica_boolean)tmp342;
  if(tmp344)
  {
    tmp345 = 0.0;
  }
  else
  {
    tmp343 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp345 = (tmp343?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp345)), 5, linearSystemData, threadData);
  tmp346 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp346?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp347 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp349 = (modelica_boolean)tmp347;
  if(tmp349)
  {
    tmp350 = -1.0;
  }
  else
  {
    tmp348 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp350 = (tmp348?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp350)), 7, linearSystemData, threadData);
  tmp351 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp353 = (modelica_boolean)tmp351;
  if(tmp353)
  {
    tmp354 = 0.0;
  }
  else
  {
    tmp352 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp354 = (tmp352?(-data->localData[0]->realVars[146] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp354)), 8, linearSystemData, threadData);
  tmp355 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp355?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp356 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp358 = (modelica_boolean)tmp356;
  if(tmp358)
  {
    tmp359 = 0.0;
  }
  else
  {
    tmp357 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp359 = (tmp357?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp359)), 10, linearSystemData, threadData);
  tmp360 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp362 = (modelica_boolean)tmp360;
  if(tmp362)
  {
    tmp363 = 0.0;
  }
  else
  {
    tmp361 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp363 = (tmp361?(-data->localData[0]->realVars[145] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp363)), 11, linearSystemData, threadData);
  tmp364 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp366 = (modelica_boolean)tmp364;
  if(tmp366)
  {
    tmp367 = -0.0;
  }
  else
  {
    tmp365 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp367 = (tmp365?(-data->localData[0]->realVars[147] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp367)), 12, linearSystemData, threadData);
  tmp368 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp370 = (modelica_boolean)tmp368;
  if(tmp370)
  {
    tmp371 = (-data->localData[0]->realVars[145] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp369 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp371 = (tmp369?-0.0:(-data->localData[0]->realVars[145] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 2, (-(tmp371)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb114(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,114};
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
  tmp372 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp374 = (modelica_boolean)tmp372;
  if(tmp374)
  {
    tmp375 = 0.0;
  }
  else
  {
    tmp373 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp375 = (tmp373?data->localData[0]->realVars[77] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp375, linearSystemData, threadData);
  tmp376 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp378 = (modelica_boolean)tmp376;
  if(tmp378)
  {
    tmp379 = (-data->localData[0]->realVars[82] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp377 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp379 = (tmp377?data->localData[0]->realVars[80] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[82] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp379, linearSystemData, threadData);
  tmp380 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp382 = (modelica_boolean)tmp380;
  if(tmp382)
  {
    tmp383 = 0.0;
  }
  else
  {
    tmp381 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp383 = (tmp381?data->localData[0]->realVars[78] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp383, linearSystemData, threadData);
  tmp384 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp386 = (modelica_boolean)tmp384;
  if(tmp386)
  {
    tmp387 = 0.0;
  }
  else
  {
    tmp385 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp387 = (tmp385?data->localData[0]->realVars[75] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp387, linearSystemData, threadData);
  tmp388 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp390 = (modelica_boolean)tmp388;
  if(tmp390)
  {
    tmp391 = data->localData[0]->realVars[75] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp389 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp391 = (tmp389?data->localData[0]->realVars[79] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[75] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp391, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData114(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[85].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[85].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[85].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[83].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[83].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[83].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[81].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[81].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[81].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[84].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[84].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[84].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[86].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[86].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[86].attribute /* MatStm1.compMasFrac[3,2] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void flash1_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 545;
  linearSystemData[5].size = 5;
  linearSystemData[5].nnz = 14;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA545;
  linearSystemData[5].setb = setLinearVectorb545;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData545;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 476;
  linearSystemData[4].size = 5;
  linearSystemData[4].nnz = 14;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA476;
  linearSystemData[4].setb = setLinearVectorb476;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData476;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 398;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA398;
  linearSystemData[3].setb = setLinearVectorb398;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData398;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 274;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA274;
  linearSystemData[2].setb = setLinearVectorb274;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData274;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 221;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA221;
  linearSystemData[1].setb = setLinearVectorb221;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData221;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 114;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA114;
  linearSystemData[0].setb = setLinearVectorb114;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData114;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

