/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA804(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,804};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
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
  modelica_real tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_real tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_real tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  RELATIONHYSTERESIS(tmp12, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp14 = (modelica_boolean)tmp12;
  if(tmp14)
  {
    tmp15 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp13, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp15 = (tmp13?(-data->localData[0]->realVars[270] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp15)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp16, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(0, 2, (-((tmp16?1.0:-0.0))), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp17, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp19 = (modelica_boolean)tmp17;
  if(tmp19)
  {
    tmp20 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp18, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp20 = (tmp18?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp20)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp21, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp23 = (modelica_boolean)tmp21;
  if(tmp23)
  {
    tmp24 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp22, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp24 = (tmp22?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp24)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp25, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp27 = (modelica_boolean)tmp25;
  if(tmp27)
  {
    tmp28 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp26, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp28 = (tmp26?(-data->localData[0]->realVars[271] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp28)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp29, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp31 = (modelica_boolean)tmp29;
  if(tmp31)
  {
    tmp32 = (-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp30, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp32 = (tmp30?-0.0:(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 4, (-(tmp32)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp33, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp35 = (modelica_boolean)tmp33;
  if(tmp35)
  {
    tmp36 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp34, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp36 = (tmp34?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp36)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp37, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(2, 3, (-((tmp37?1.0:-0.0))), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp38, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp40 = (modelica_boolean)tmp38;
  if(tmp40)
  {
    tmp41 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp39, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp41 = (tmp39?(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp41)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp42, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp44 = (modelica_boolean)tmp42;
  if(tmp44)
  {
    tmp45 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp43, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp45 = (tmp43?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp45)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp46, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(3, 1, (-((tmp46?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp47, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp49 = (modelica_boolean)tmp47;
  if(tmp49)
  {
    tmp50 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp48, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp50 = (tmp48?(-data->localData[0]->realVars[270] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp50)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp51, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(4, 0, (-((tmp51?1.0:-0.0))), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp52, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp55 = (tmp53?(-data->localData[0]->realVars[271] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp55)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb804(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,804};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  RELATIONHYSTERESIS(tmp56, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp57, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp59 = (tmp57?data->localData[0]->realVars[202] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp59, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp60, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp61, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp63 = (tmp61?data->localData[0]->realVars[203] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp63, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp64, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp65, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp67 = (tmp65?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp67, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp68, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp69, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp71 = (tmp69?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp71, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp72, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp74 = (modelica_boolean)tmp72;
  if(tmp74)
  {
    tmp75 = (-data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp73, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp75 = (tmp73?data->localData[0]->realVars[204] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp75, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData804(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA745(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,745};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_real tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_real tmp84;
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  modelica_real tmp88;
  modelica_boolean tmp89;
  modelica_boolean tmp90;
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
  modelica_real tmp110;
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_real tmp114;
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  modelica_real tmp119;
  RELATIONHYSTERESIS(tmp76, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(0, 3, (-((tmp76?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp77, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp79 = (modelica_boolean)tmp77;
  if(tmp79)
  {
    tmp80 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp78, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp80 = (tmp78?(-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp80)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp81, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp83 = (modelica_boolean)tmp81;
  if(tmp83)
  {
    tmp84 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp82, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp84 = (tmp82?(-data->localData[0]->realVars[182] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp84)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp85, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp87 = (modelica_boolean)tmp85;
  if(tmp87)
  {
    tmp88 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp86, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp88 = (tmp86?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp88)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp89, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(1, 4, (-((tmp89?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp90, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(2, 0, (-((tmp90?1.0:-0.0))), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp91, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp93 = (modelica_boolean)tmp91;
  if(tmp93)
  {
    tmp94 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp92, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp94 = (tmp92?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp94)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp95, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp97 = (modelica_boolean)tmp95;
  if(tmp97)
  {
    tmp98 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp96, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp98 = (tmp96?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp98)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp99, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp101 = (modelica_boolean)tmp99;
  if(tmp101)
  {
    tmp102 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp100, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp102 = (tmp100?(-data->localData[0]->realVars[182] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp102)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp103, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp105 = (modelica_boolean)tmp103;
  if(tmp105)
  {
    tmp106 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp104, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp106 = (tmp104?(-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp106)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp107, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp109 = (modelica_boolean)tmp107;
  if(tmp109)
  {
    tmp110 = (-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp108, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp110 = (tmp108?-0.0:(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp110)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp111, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp113 = (modelica_boolean)tmp111;
  if(tmp113)
  {
    tmp114 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp112, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp114 = (tmp112?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp114)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp115, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(4, 1, (-((tmp115?1.0:-0.0))), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp116, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp118 = (modelica_boolean)tmp116;
  if(tmp118)
  {
    tmp119 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp117, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp119 = (tmp117?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp119)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb745(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,745};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  modelica_real tmp139;
  RELATIONHYSTERESIS(tmp120, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp122 = (modelica_boolean)tmp120;
  if(tmp122)
  {
    tmp123 = (-data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp121, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp123 = (tmp121?data->localData[0]->realVars[116] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp123, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp124, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp126 = (modelica_boolean)tmp124;
  if(tmp126)
  {
    tmp127 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp125, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp127 = (tmp125?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp127, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp128, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp130 = (modelica_boolean)tmp128;
  if(tmp130)
  {
    tmp131 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp129, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp131 = (tmp129?data->localData[0]->realVars[114] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp131, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp132, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp134 = (modelica_boolean)tmp132;
  if(tmp134)
  {
    tmp135 = data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp133, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp135 = (tmp133?data->localData[0]->realVars[115] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp135, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp136, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp138 = (modelica_boolean)tmp136;
  if(tmp138)
  {
    tmp139 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp137, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp139 = (tmp137?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp139, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData745(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA625(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,625};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp174;
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  modelica_boolean tmp178;
  modelica_real tmp179;
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  modelica_boolean tmp182;
  modelica_real tmp183;
  RELATIONHYSTERESIS(tmp140, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp142 = (modelica_boolean)tmp140;
  if(tmp142)
  {
    tmp143 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp141, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp143 = (tmp141?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp143)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp144, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 4, (-((tmp144?1.0:-0.0))), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp145, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp147 = (modelica_boolean)tmp145;
  if(tmp147)
  {
    tmp148 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp146, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp148 = (tmp146?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp148)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp149, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp149?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp150, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp152 = (modelica_boolean)tmp150;
  if(tmp152)
  {
    tmp153 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp151, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp153 = (tmp151?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp153)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp154, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp156 = (modelica_boolean)tmp154;
  if(tmp156)
  {
    tmp157 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp155, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp157 = (tmp155?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp157)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp158, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 1, (-((tmp158?1.0:-0.0))), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp159, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp161 = (modelica_boolean)tmp159;
  if(tmp161)
  {
    tmp162 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp160, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp162 = (tmp160?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp162)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp163, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp165 = (modelica_boolean)tmp163;
  if(tmp165)
  {
    tmp166 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp164, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp166 = (tmp164?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp166)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp167, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp169 = (modelica_boolean)tmp167;
  if(tmp169)
  {
    tmp170 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp168, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp170 = (tmp168?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp170)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp171, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp173 = (modelica_boolean)tmp171;
  if(tmp173)
  {
    tmp174 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp172, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp174 = (tmp172?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp174)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp175, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 2, (-((tmp175?1.0:-0.0))), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp176, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp178 = (modelica_boolean)tmp176;
  if(tmp178)
  {
    tmp179 = (-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp177, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp179 = (tmp177?-0.0:(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp179)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp180, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp182 = (modelica_boolean)tmp180;
  if(tmp182)
  {
    tmp183 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp181, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp183 = (tmp181?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp183)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb625(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,625};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  modelica_boolean tmp202;
  modelica_real tmp203;
  RELATIONHYSTERESIS(tmp184, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp186 = (modelica_boolean)tmp184;
  if(tmp186)
  {
    tmp187 = (-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp185, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp187 = (tmp185?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp187, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp188, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp190 = (modelica_boolean)tmp188;
  if(tmp190)
  {
    tmp191 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp189, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp191 = (tmp189?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp191, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp192, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp194 = (modelica_boolean)tmp192;
  if(tmp194)
  {
    tmp195 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp193, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp195 = (tmp193?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp195, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp196, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp198 = (modelica_boolean)tmp196;
  if(tmp198)
  {
    tmp199 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp197, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp199 = (tmp197?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp199, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp200, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp202 = (modelica_boolean)tmp200;
  if(tmp202)
  {
    tmp203 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp201, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp203 = (tmp201?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp203, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData625(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA574(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,574};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp204;
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  modelica_real tmp207;
  modelica_boolean tmp208;
  modelica_boolean tmp209;
  modelica_boolean tmp210;
  modelica_boolean tmp211;
  modelica_boolean tmp212;
  modelica_real tmp213;
  modelica_boolean tmp214;
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  modelica_real tmp217;
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
  modelica_real tmp233;
  modelica_boolean tmp234;
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  modelica_real tmp237;
  modelica_boolean tmp238;
  modelica_boolean tmp239;
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  modelica_real tmp243;
  modelica_boolean tmp244;
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  modelica_real tmp247;
  tmp204 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp206 = (modelica_boolean)tmp204;
  if(tmp206)
  {
    tmp207 = 0.0;
  }
  else
  {
    tmp205 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp207 = (tmp205?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp207)), 0, linearSystemData, threadData);
  tmp208 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp208?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp209 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp209?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp210 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp212 = (modelica_boolean)tmp210;
  if(tmp212)
  {
    tmp213 = -1.0;
  }
  else
  {
    tmp211 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp213 = (tmp211?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp213)), 3, linearSystemData, threadData);
  tmp214 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp216 = (modelica_boolean)tmp214;
  if(tmp216)
  {
    tmp217 = 0.0;
  }
  else
  {
    tmp215 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp217 = (tmp215?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp217)), 4, linearSystemData, threadData);
  tmp218 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp220 = (modelica_boolean)tmp218;
  if(tmp220)
  {
    tmp221 = 0.0;
  }
  else
  {
    tmp219 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp221 = (tmp219?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp221)), 5, linearSystemData, threadData);
  tmp222 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp224 = (modelica_boolean)tmp222;
  if(tmp224)
  {
    tmp225 = (-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    tmp223 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp225 = (tmp223?-0.0:(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 2, (-(tmp225)), 6, linearSystemData, threadData);
  tmp226 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp228 = (modelica_boolean)tmp226;
  if(tmp228)
  {
    tmp229 = -0.0;
  }
  else
  {
    tmp227 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp229 = (tmp227?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp229)), 7, linearSystemData, threadData);
  tmp230 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp232 = (modelica_boolean)tmp230;
  if(tmp232)
  {
    tmp233 = 0.0;
  }
  else
  {
    tmp231 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp233 = (tmp231?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp233)), 8, linearSystemData, threadData);
  tmp234 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp236 = (modelica_boolean)tmp234;
  if(tmp236)
  {
    tmp237 = 0.0;
  }
  else
  {
    tmp235 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp237 = (tmp235?(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp237)), 9, linearSystemData, threadData);
  tmp238 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(3, 3, (-((tmp238?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp239 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp239?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp240 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp242 = (modelica_boolean)tmp240;
  if(tmp242)
  {
    tmp243 = 0.0;
  }
  else
  {
    tmp241 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp243 = (tmp241?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp243)), 12, linearSystemData, threadData);
  tmp244 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp246 = (modelica_boolean)tmp244;
  if(tmp246)
  {
    tmp247 = 0.0;
  }
  else
  {
    tmp245 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp247 = (tmp245?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp247)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb574(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,574};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  modelica_real tmp267;
  tmp248 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp250 = (modelica_boolean)tmp248;
  if(tmp250)
  {
    tmp251 = (-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp249 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp251 = (tmp249?data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp251, linearSystemData, threadData);
  tmp252 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp254 = (modelica_boolean)tmp252;
  if(tmp254)
  {
    tmp255 = 0.0;
  }
  else
  {
    tmp253 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp255 = (tmp253?data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp255, linearSystemData, threadData);
  tmp256 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp258 = (modelica_boolean)tmp256;
  if(tmp258)
  {
    tmp259 = data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp257 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp259 = (tmp257?data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp259, linearSystemData, threadData);
  tmp260 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp262 = (modelica_boolean)tmp260;
  if(tmp262)
  {
    tmp263 = 0.0;
  }
  else
  {
    tmp261 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp263 = (tmp261?data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp263, linearSystemData, threadData);
  tmp264 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp266 = (modelica_boolean)tmp264;
  if(tmp266)
  {
    tmp267 = 0.0;
  }
  else
  {
    tmp265 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp267 = (tmp265?data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp267, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData574(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.max;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.max;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.max;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.max;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA519(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,519};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  modelica_real tmp271;
  modelica_boolean tmp272;
  modelica_boolean tmp273;
  modelica_boolean tmp274;
  modelica_boolean tmp275;
  modelica_real tmp276;
  modelica_boolean tmp277;
  modelica_boolean tmp278;
  modelica_boolean tmp279;
  modelica_real tmp280;
  modelica_boolean tmp281;
  modelica_boolean tmp282;
  modelica_boolean tmp283;
  modelica_real tmp284;
  modelica_boolean tmp285;
  modelica_boolean tmp286;
  modelica_boolean tmp287;
  modelica_real tmp288;
  modelica_boolean tmp289;
  modelica_boolean tmp290;
  modelica_boolean tmp291;
  modelica_real tmp292;
  modelica_boolean tmp293;
  modelica_boolean tmp294;
  modelica_boolean tmp295;
  modelica_boolean tmp296;
  modelica_real tmp297;
  modelica_boolean tmp298;
  modelica_boolean tmp299;
  modelica_boolean tmp300;
  modelica_boolean tmp301;
  modelica_real tmp302;
  modelica_boolean tmp303;
  modelica_boolean tmp304;
  modelica_boolean tmp305;
  modelica_real tmp306;
  modelica_boolean tmp307;
  modelica_boolean tmp308;
  modelica_boolean tmp309;
  modelica_real tmp310;
  modelica_boolean tmp311;
  tmp268 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp270 = (modelica_boolean)tmp268;
  if(tmp270)
  {
    tmp271 = 0.0;
  }
  else
  {
    tmp269 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp271 = (tmp269?(-data->localData[0]->realVars[360] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp271)), 0, linearSystemData, threadData);
  tmp272 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp272?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp273 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp275 = (modelica_boolean)tmp273;
  if(tmp275)
  {
    tmp276 = 0.0;
  }
  else
  {
    tmp274 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp276 = (tmp274?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp276)), 2, linearSystemData, threadData);
  tmp277 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp279 = (modelica_boolean)tmp277;
  if(tmp279)
  {
    tmp280 = -1.0;
  }
  else
  {
    tmp278 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp280 = (tmp278?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp280)), 3, linearSystemData, threadData);
  tmp281 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp283 = (modelica_boolean)tmp281;
  if(tmp283)
  {
    tmp284 = -0.0;
  }
  else
  {
    tmp282 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp284 = (tmp282?(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp284)), 4, linearSystemData, threadData);
  tmp285 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp287 = (modelica_boolean)tmp285;
  if(tmp287)
  {
    tmp288 = (-data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp286 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp288 = (tmp286?-0.0:(-data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 4, (-(tmp288)), 5, linearSystemData, threadData);
  tmp289 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp291 = (modelica_boolean)tmp289;
  if(tmp291)
  {
    tmp292 = 0.0;
  }
  else
  {
    tmp290 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp292 = (tmp290?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp292)), 6, linearSystemData, threadData);
  tmp293 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp293?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp294 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp296 = (modelica_boolean)tmp294;
  if(tmp296)
  {
    tmp297 = 0.0;
  }
  else
  {
    tmp295 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp297 = (tmp295?(-data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp297)), 8, linearSystemData, threadData);
  tmp298 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp298?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp299 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp301 = (modelica_boolean)tmp299;
  if(tmp301)
  {
    tmp302 = 0.0;
  }
  else
  {
    tmp300 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp302 = (tmp300?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp302)), 10, linearSystemData, threadData);
  tmp303 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp305 = (modelica_boolean)tmp303;
  if(tmp305)
  {
    tmp306 = 0.0;
  }
  else
  {
    tmp304 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp306 = (tmp304?(-data->localData[0]->realVars[360] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp306)), 11, linearSystemData, threadData);
  tmp307 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp309 = (modelica_boolean)tmp307;
  if(tmp309)
  {
    tmp310 = 0.0;
  }
  else
  {
    tmp308 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp310 = (tmp308?(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp310)), 12, linearSystemData, threadData);
  tmp311 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp311?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb519(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,519};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp328;
  modelica_boolean tmp329;
  modelica_boolean tmp330;
  modelica_real tmp331;
  tmp312 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp314 = (modelica_boolean)tmp312;
  if(tmp314)
  {
    tmp315 = 0.0;
  }
  else
  {
    tmp313 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp315 = (tmp313?data->localData[0]->realVars[292] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp315, linearSystemData, threadData);
  tmp316 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp318 = (modelica_boolean)tmp316;
  if(tmp318)
  {
    tmp319 = data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp317 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp319 = (tmp317?data->localData[0]->realVars[293] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp319, linearSystemData, threadData);
  tmp320 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp322 = (modelica_boolean)tmp320;
  if(tmp322)
  {
    tmp323 = 0.0;
  }
  else
  {
    tmp321 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp323 = (tmp321?data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp323, linearSystemData, threadData);
  tmp324 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp326 = (modelica_boolean)tmp324;
  if(tmp326)
  {
    tmp327 = 0.0;
  }
  else
  {
    tmp325 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp327 = (tmp325?data->localData[0]->realVars[291] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp327, linearSystemData, threadData);
  tmp328 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp330 = (modelica_boolean)tmp328;
  if(tmp330)
  {
    tmp331 = (-data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp329 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp331 = (tmp329?data->localData[0]->realVars[294] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp331, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData519(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[298].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[298].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[298].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[295].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[295].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[295].attribute /* MatStm4.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA375(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,375};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp332;
  modelica_boolean tmp333;
  modelica_boolean tmp334;
  modelica_real tmp335;
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
  modelica_boolean tmp348;
  modelica_real tmp349;
  modelica_boolean tmp350;
  modelica_boolean tmp351;
  modelica_boolean tmp352;
  modelica_real tmp353;
  modelica_boolean tmp354;
  modelica_boolean tmp355;
  modelica_boolean tmp356;
  modelica_boolean tmp357;
  modelica_real tmp358;
  modelica_boolean tmp359;
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
  modelica_boolean tmp372;
  modelica_boolean tmp373;
  modelica_boolean tmp374;
  modelica_real tmp375;
  tmp332 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp334 = (modelica_boolean)tmp332;
  if(tmp334)
  {
    tmp335 = 0.0;
  }
  else
  {
    tmp333 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp335 = (tmp333?(-data->localData[0]->realVars[270] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp335)), 0, linearSystemData, threadData);
  tmp336 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp336?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp337 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp339 = (modelica_boolean)tmp337;
  if(tmp339)
  {
    tmp340 = 0.0;
  }
  else
  {
    tmp338 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp340 = (tmp338?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp340)), 2, linearSystemData, threadData);
  tmp341 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp343 = (modelica_boolean)tmp341;
  if(tmp343)
  {
    tmp344 = 0.0;
  }
  else
  {
    tmp342 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp344 = (tmp342?(-data->localData[0]->realVars[271] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp344)), 3, linearSystemData, threadData);
  tmp345 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp345?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp346 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp348 = (modelica_boolean)tmp346;
  if(tmp348)
  {
    tmp349 = 0.0;
  }
  else
  {
    tmp347 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp349 = (tmp347?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp349)), 5, linearSystemData, threadData);
  tmp350 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp352 = (modelica_boolean)tmp350;
  if(tmp352)
  {
    tmp353 = -1.0;
  }
  else
  {
    tmp351 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp353 = (tmp351?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp353)), 6, linearSystemData, threadData);
  tmp354 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp354?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp355 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp357 = (modelica_boolean)tmp355;
  if(tmp357)
  {
    tmp358 = 0.0;
  }
  else
  {
    tmp356 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp358 = (tmp356?(-data->localData[0]->realVars[270] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp358)), 8, linearSystemData, threadData);
  tmp359 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp359?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp360 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp362 = (modelica_boolean)tmp360;
  if(tmp362)
  {
    tmp363 = 0.0;
  }
  else
  {
    tmp361 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp363 = (tmp361?(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp363)), 10, linearSystemData, threadData);
  tmp364 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp366 = (modelica_boolean)tmp364;
  if(tmp366)
  {
    tmp367 = 0.0;
  }
  else
  {
    tmp365 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp367 = (tmp365?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp367)), 11, linearSystemData, threadData);
  tmp368 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp370 = (modelica_boolean)tmp368;
  if(tmp370)
  {
    tmp371 = -0.0;
  }
  else
  {
    tmp369 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp371 = (tmp369?(-data->localData[0]->realVars[271] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp371)), 12, linearSystemData, threadData);
  tmp372 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp374 = (modelica_boolean)tmp372;
  if(tmp374)
  {
    tmp375 = (-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp373 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp375 = (tmp373?-0.0:(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp375)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb375(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,375};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp392;
  modelica_boolean tmp393;
  modelica_boolean tmp394;
  modelica_real tmp395;
  tmp376 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp378 = (modelica_boolean)tmp376;
  if(tmp378)
  {
    tmp379 = 0.0;
  }
  else
  {
    tmp377 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp379 = (tmp377?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp379, linearSystemData, threadData);
  tmp380 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp382 = (modelica_boolean)tmp380;
  if(tmp382)
  {
    tmp383 = (-data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp381 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp383 = (tmp381?data->localData[0]->realVars[204] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp383, linearSystemData, threadData);
  tmp384 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp386 = (modelica_boolean)tmp384;
  if(tmp386)
  {
    tmp387 = 0.0;
  }
  else
  {
    tmp385 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp387 = (tmp385?data->localData[0]->realVars[202] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp387, linearSystemData, threadData);
  tmp388 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp390 = (modelica_boolean)tmp388;
  if(tmp390)
  {
    tmp391 = 0.0;
  }
  else
  {
    tmp389 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp391 = (tmp389?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp391, linearSystemData, threadData);
  tmp392 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp394 = (modelica_boolean)tmp392;
  if(tmp394)
  {
    tmp395 = data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp393 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp395 = (tmp393?data->localData[0]->realVars[203] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp395, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData375(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA316(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,316};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp396;
  modelica_boolean tmp397;
  modelica_boolean tmp398;
  modelica_real tmp399;
  modelica_boolean tmp400;
  modelica_boolean tmp401;
  modelica_boolean tmp402;
  modelica_boolean tmp403;
  modelica_real tmp404;
  modelica_boolean tmp405;
  modelica_boolean tmp406;
  modelica_boolean tmp407;
  modelica_real tmp408;
  modelica_boolean tmp409;
  modelica_boolean tmp410;
  modelica_boolean tmp411;
  modelica_boolean tmp412;
  modelica_real tmp413;
  modelica_boolean tmp414;
  modelica_boolean tmp415;
  modelica_boolean tmp416;
  modelica_real tmp417;
  modelica_boolean tmp418;
  modelica_boolean tmp419;
  modelica_boolean tmp420;
  modelica_boolean tmp421;
  modelica_real tmp422;
  modelica_boolean tmp423;
  modelica_boolean tmp424;
  modelica_boolean tmp425;
  modelica_boolean tmp426;
  modelica_real tmp427;
  modelica_boolean tmp428;
  modelica_boolean tmp429;
  modelica_boolean tmp430;
  modelica_real tmp431;
  modelica_boolean tmp432;
  modelica_boolean tmp433;
  modelica_boolean tmp434;
  modelica_real tmp435;
  modelica_boolean tmp436;
  modelica_boolean tmp437;
  modelica_boolean tmp438;
  modelica_real tmp439;
  tmp396 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp398 = (modelica_boolean)tmp396;
  if(tmp398)
  {
    tmp399 = 0.0;
  }
  else
  {
    tmp397 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp399 = (tmp397?(-data->localData[0]->realVars[182] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp399)), 0, linearSystemData, threadData);
  tmp400 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp400?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp401 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp403 = (modelica_boolean)tmp401;
  if(tmp403)
  {
    tmp404 = 0.0;
  }
  else
  {
    tmp402 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp404 = (tmp402?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp404)), 2, linearSystemData, threadData);
  tmp405 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp407 = (modelica_boolean)tmp405;
  if(tmp407)
  {
    tmp408 = 0.0;
  }
  else
  {
    tmp406 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp408 = (tmp406?(-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp408)), 3, linearSystemData, threadData);
  tmp409 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp409?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp410 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp412 = (modelica_boolean)tmp410;
  if(tmp412)
  {
    tmp413 = 0.0;
  }
  else
  {
    tmp411 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp413 = (tmp411?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp413)), 5, linearSystemData, threadData);
  tmp414 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp416 = (modelica_boolean)tmp414;
  if(tmp416)
  {
    tmp417 = -1.0;
  }
  else
  {
    tmp415 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp417 = (tmp415?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp417)), 6, linearSystemData, threadData);
  tmp418 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp418?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp419 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp421 = (modelica_boolean)tmp419;
  if(tmp421)
  {
    tmp422 = 0.0;
  }
  else
  {
    tmp420 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp422 = (tmp420?(-data->localData[0]->realVars[182] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp422)), 8, linearSystemData, threadData);
  tmp423 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp423?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp424 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp426 = (modelica_boolean)tmp424;
  if(tmp426)
  {
    tmp427 = 0.0;
  }
  else
  {
    tmp425 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp427 = (tmp425?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp427)), 10, linearSystemData, threadData);
  tmp428 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp430 = (modelica_boolean)tmp428;
  if(tmp430)
  {
    tmp431 = 0.0;
  }
  else
  {
    tmp429 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp431 = (tmp429?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp431)), 11, linearSystemData, threadData);
  tmp432 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp434 = (modelica_boolean)tmp432;
  if(tmp434)
  {
    tmp435 = -0.0;
  }
  else
  {
    tmp433 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp435 = (tmp433?(-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp435)), 12, linearSystemData, threadData);
  tmp436 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp438 = (modelica_boolean)tmp436;
  if(tmp438)
  {
    tmp439 = (-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp437 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp439 = (tmp437?-0.0:(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp439)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb316(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,316};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp440;
  modelica_boolean tmp441;
  modelica_boolean tmp442;
  modelica_real tmp443;
  modelica_boolean tmp444;
  modelica_boolean tmp445;
  modelica_boolean tmp446;
  modelica_real tmp447;
  modelica_boolean tmp448;
  modelica_boolean tmp449;
  modelica_boolean tmp450;
  modelica_real tmp451;
  modelica_boolean tmp452;
  modelica_boolean tmp453;
  modelica_boolean tmp454;
  modelica_real tmp455;
  modelica_boolean tmp456;
  modelica_boolean tmp457;
  modelica_boolean tmp458;
  modelica_real tmp459;
  tmp440 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp442 = (modelica_boolean)tmp440;
  if(tmp442)
  {
    tmp443 = 0.0;
  }
  else
  {
    tmp441 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp443 = (tmp441?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp443, linearSystemData, threadData);
  tmp444 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp446 = (modelica_boolean)tmp444;
  if(tmp446)
  {
    tmp447 = (-data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp445 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp447 = (tmp445?data->localData[0]->realVars[116] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp447, linearSystemData, threadData);
  tmp448 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp450 = (modelica_boolean)tmp448;
  if(tmp450)
  {
    tmp451 = 0.0;
  }
  else
  {
    tmp449 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp451 = (tmp449?data->localData[0]->realVars[114] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp451, linearSystemData, threadData);
  tmp452 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp454 = (modelica_boolean)tmp452;
  if(tmp454)
  {
    tmp455 = 0.0;
  }
  else
  {
    tmp453 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp455 = (tmp453?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp455, linearSystemData, threadData);
  tmp456 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp458 = (modelica_boolean)tmp456;
  if(tmp458)
  {
    tmp459 = data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp457 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp459 = (tmp457?data->localData[0]->realVars[115] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp459, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData316(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA244(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,244};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp460;
  modelica_boolean tmp461;
  modelica_boolean tmp462;
  modelica_boolean tmp463;
  modelica_real tmp464;
  modelica_boolean tmp465;
  modelica_boolean tmp466;
  modelica_boolean tmp467;
  modelica_real tmp468;
  modelica_boolean tmp469;
  modelica_boolean tmp470;
  modelica_boolean tmp471;
  modelica_real tmp472;
  modelica_boolean tmp473;
  modelica_boolean tmp474;
  modelica_boolean tmp475;
  modelica_boolean tmp476;
  modelica_real tmp477;
  modelica_boolean tmp478;
  modelica_boolean tmp479;
  modelica_boolean tmp480;
  modelica_real tmp481;
  modelica_boolean tmp482;
  modelica_boolean tmp483;
  modelica_boolean tmp484;
  modelica_real tmp485;
  modelica_boolean tmp486;
  modelica_boolean tmp487;
  modelica_boolean tmp488;
  modelica_boolean tmp489;
  modelica_boolean tmp490;
  modelica_real tmp491;
  modelica_boolean tmp492;
  modelica_boolean tmp493;
  modelica_boolean tmp494;
  modelica_real tmp495;
  modelica_boolean tmp496;
  modelica_boolean tmp497;
  modelica_boolean tmp498;
  modelica_real tmp499;
  modelica_boolean tmp500;
  modelica_boolean tmp501;
  modelica_boolean tmp502;
  modelica_real tmp503;
  tmp460 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp460?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp461 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp463 = (modelica_boolean)tmp461;
  if(tmp463)
  {
    tmp464 = 0.0;
  }
  else
  {
    tmp462 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp464 = (tmp462?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp464)), 1, linearSystemData, threadData);
  tmp465 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp467 = (modelica_boolean)tmp465;
  if(tmp467)
  {
    tmp468 = 0.0;
  }
  else
  {
    tmp466 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp468 = (tmp466?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp468)), 2, linearSystemData, threadData);
  tmp469 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp471 = (modelica_boolean)tmp469;
  if(tmp471)
  {
    tmp472 = 0.0;
  }
  else
  {
    tmp470 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp472 = (tmp470?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp472)), 3, linearSystemData, threadData);
  tmp473 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp473?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp474 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp476 = (modelica_boolean)tmp474;
  if(tmp476)
  {
    tmp477 = 0.0;
  }
  else
  {
    tmp475 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp477 = (tmp475?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp477)), 5, linearSystemData, threadData);
  tmp478 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp480 = (modelica_boolean)tmp478;
  if(tmp480)
  {
    tmp481 = -1.0;
  }
  else
  {
    tmp479 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp481 = (tmp479?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp481)), 6, linearSystemData, threadData);
  tmp482 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp484 = (modelica_boolean)tmp482;
  if(tmp484)
  {
    tmp485 = 0.0;
  }
  else
  {
    tmp483 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp485 = (tmp483?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp485)), 7, linearSystemData, threadData);
  tmp486 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp486?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp487 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp487?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp488 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp490 = (modelica_boolean)tmp488;
  if(tmp490)
  {
    tmp491 = 0.0;
  }
  else
  {
    tmp489 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp491 = (tmp489?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp491)), 10, linearSystemData, threadData);
  tmp492 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp494 = (modelica_boolean)tmp492;
  if(tmp494)
  {
    tmp495 = 0.0;
  }
  else
  {
    tmp493 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp495 = (tmp493?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp495)), 11, linearSystemData, threadData);
  tmp496 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp498 = (modelica_boolean)tmp496;
  if(tmp498)
  {
    tmp499 = -0.0;
  }
  else
  {
    tmp497 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp499 = (tmp497?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp499)), 12, linearSystemData, threadData);
  tmp500 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp502 = (modelica_boolean)tmp500;
  if(tmp502)
  {
    tmp503 = (-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp501 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp503 = (tmp501?-0.0:(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp503)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb244(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,244};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp504;
  modelica_boolean tmp505;
  modelica_boolean tmp506;
  modelica_real tmp507;
  modelica_boolean tmp508;
  modelica_boolean tmp509;
  modelica_boolean tmp510;
  modelica_real tmp511;
  modelica_boolean tmp512;
  modelica_boolean tmp513;
  modelica_boolean tmp514;
  modelica_real tmp515;
  modelica_boolean tmp516;
  modelica_boolean tmp517;
  modelica_boolean tmp518;
  modelica_real tmp519;
  modelica_boolean tmp520;
  modelica_boolean tmp521;
  modelica_boolean tmp522;
  modelica_real tmp523;
  tmp504 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp506 = (modelica_boolean)tmp504;
  if(tmp506)
  {
    tmp507 = (-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp505 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp507 = (tmp505?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp507, linearSystemData, threadData);
  tmp508 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp510 = (modelica_boolean)tmp508;
  if(tmp510)
  {
    tmp511 = 0.0;
  }
  else
  {
    tmp509 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp511 = (tmp509?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp511, linearSystemData, threadData);
  tmp512 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp514 = (modelica_boolean)tmp512;
  if(tmp514)
  {
    tmp515 = 0.0;
  }
  else
  {
    tmp513 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp515 = (tmp513?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp515, linearSystemData, threadData);
  tmp516 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp518 = (modelica_boolean)tmp516;
  if(tmp518)
  {
    tmp519 = 0.0;
  }
  else
  {
    tmp517 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp519 = (tmp517?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp519, linearSystemData, threadData);
  tmp520 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp522 = (modelica_boolean)tmp520;
  if(tmp522)
  {
    tmp523 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp521 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp523 = (tmp521?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp523, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData244(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA179(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,179};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp524;
  modelica_boolean tmp525;
  modelica_boolean tmp526;
  modelica_real tmp527;
  modelica_boolean tmp528;
  modelica_boolean tmp529;
  modelica_boolean tmp530;
  modelica_boolean tmp531;
  modelica_boolean tmp532;
  modelica_real tmp533;
  modelica_boolean tmp534;
  modelica_boolean tmp535;
  modelica_boolean tmp536;
  modelica_real tmp537;
  modelica_boolean tmp538;
  modelica_boolean tmp539;
  modelica_boolean tmp540;
  modelica_real tmp541;
  modelica_boolean tmp542;
  modelica_boolean tmp543;
  modelica_boolean tmp544;
  modelica_real tmp545;
  modelica_boolean tmp546;
  modelica_boolean tmp547;
  modelica_boolean tmp548;
  modelica_real tmp549;
  modelica_boolean tmp550;
  modelica_boolean tmp551;
  modelica_boolean tmp552;
  modelica_real tmp553;
  modelica_boolean tmp554;
  modelica_boolean tmp555;
  modelica_boolean tmp556;
  modelica_boolean tmp557;
  modelica_real tmp558;
  modelica_boolean tmp559;
  modelica_boolean tmp560;
  modelica_boolean tmp561;
  modelica_boolean tmp562;
  modelica_real tmp563;
  modelica_boolean tmp564;
  modelica_boolean tmp565;
  modelica_boolean tmp566;
  modelica_real tmp567;
  tmp524 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp526 = (modelica_boolean)tmp524;
  if(tmp526)
  {
    tmp527 = 0.0;
  }
  else
  {
    tmp525 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp527 = (tmp525?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp527)), 0, linearSystemData, threadData);
  tmp528 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp528?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp529 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp529?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp530 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp532 = (modelica_boolean)tmp530;
  if(tmp532)
  {
    tmp533 = 0.0;
  }
  else
  {
    tmp531 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp533 = (tmp531?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp533)), 3, linearSystemData, threadData);
  tmp534 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp536 = (modelica_boolean)tmp534;
  if(tmp536)
  {
    tmp537 = -1.0;
  }
  else
  {
    tmp535 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp537 = (tmp535?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp537)), 4, linearSystemData, threadData);
  tmp538 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp540 = (modelica_boolean)tmp538;
  if(tmp540)
  {
    tmp541 = 0.0;
  }
  else
  {
    tmp539 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp541 = (tmp539?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp541)), 5, linearSystemData, threadData);
  tmp542 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp544 = (modelica_boolean)tmp542;
  if(tmp544)
  {
    tmp545 = -0.0;
  }
  else
  {
    tmp543 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp545 = (tmp543?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp545)), 6, linearSystemData, threadData);
  tmp546 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp548 = (modelica_boolean)tmp546;
  if(tmp548)
  {
    tmp549 = (-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    tmp547 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp549 = (tmp547?-0.0:(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 3, (-(tmp549)), 7, linearSystemData, threadData);
  tmp550 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp552 = (modelica_boolean)tmp550;
  if(tmp552)
  {
    tmp553 = 0.0;
  }
  else
  {
    tmp551 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp553 = (tmp551?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp553)), 8, linearSystemData, threadData);
  tmp554 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(3, 2, (-((tmp554?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp555 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp557 = (modelica_boolean)tmp555;
  if(tmp557)
  {
    tmp558 = 0.0;
  }
  else
  {
    tmp556 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp558 = (tmp556?(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp558)), 10, linearSystemData, threadData);
  tmp559 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp559?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp560 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp562 = (modelica_boolean)tmp560;
  if(tmp562)
  {
    tmp563 = 0.0;
  }
  else
  {
    tmp561 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp563 = (tmp561?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp563)), 12, linearSystemData, threadData);
  tmp564 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp566 = (modelica_boolean)tmp564;
  if(tmp566)
  {
    tmp567 = 0.0;
  }
  else
  {
    tmp565 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp567 = (tmp565?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp567)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb179(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,179};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp568;
  modelica_boolean tmp569;
  modelica_boolean tmp570;
  modelica_real tmp571;
  modelica_boolean tmp572;
  modelica_boolean tmp573;
  modelica_boolean tmp574;
  modelica_real tmp575;
  modelica_boolean tmp576;
  modelica_boolean tmp577;
  modelica_boolean tmp578;
  modelica_real tmp579;
  modelica_boolean tmp580;
  modelica_boolean tmp581;
  modelica_boolean tmp582;
  modelica_real tmp583;
  modelica_boolean tmp584;
  modelica_boolean tmp585;
  modelica_boolean tmp586;
  modelica_real tmp587;
  tmp568 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp570 = (modelica_boolean)tmp568;
  if(tmp570)
  {
    tmp571 = (-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp569 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp571 = (tmp569?data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp571, linearSystemData, threadData);
  tmp572 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp574 = (modelica_boolean)tmp572;
  if(tmp574)
  {
    tmp575 = 0.0;
  }
  else
  {
    tmp573 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp575 = (tmp573?data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp575, linearSystemData, threadData);
  tmp576 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp578 = (modelica_boolean)tmp576;
  if(tmp578)
  {
    tmp579 = data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp577 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp579 = (tmp577?data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp579, linearSystemData, threadData);
  tmp580 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp582 = (modelica_boolean)tmp580;
  if(tmp582)
  {
    tmp583 = 0.0;
  }
  else
  {
    tmp581 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp583 = (tmp581?data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp583, linearSystemData, threadData);
  tmp584 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp586 = (modelica_boolean)tmp584;
  if(tmp586)
  {
    tmp587 = 0.0;
  }
  else
  {
    tmp585 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp587 = (tmp585?data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp587, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData179(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.max;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.max;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.max;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.max;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA125(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,125};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp588;
  modelica_boolean tmp589;
  modelica_boolean tmp590;
  modelica_real tmp591;
  modelica_boolean tmp592;
  modelica_boolean tmp593;
  modelica_boolean tmp594;
  modelica_boolean tmp595;
  modelica_boolean tmp596;
  modelica_real tmp597;
  modelica_boolean tmp598;
  modelica_boolean tmp599;
  modelica_boolean tmp600;
  modelica_real tmp601;
  modelica_boolean tmp602;
  modelica_boolean tmp603;
  modelica_boolean tmp604;
  modelica_real tmp605;
  modelica_boolean tmp606;
  modelica_boolean tmp607;
  modelica_boolean tmp608;
  modelica_real tmp609;
  modelica_boolean tmp610;
  modelica_boolean tmp611;
  modelica_boolean tmp612;
  modelica_real tmp613;
  modelica_boolean tmp614;
  modelica_boolean tmp615;
  modelica_boolean tmp616;
  modelica_real tmp617;
  modelica_boolean tmp618;
  modelica_boolean tmp619;
  modelica_boolean tmp620;
  modelica_boolean tmp621;
  modelica_real tmp622;
  modelica_boolean tmp623;
  modelica_boolean tmp624;
  modelica_boolean tmp625;
  modelica_boolean tmp626;
  modelica_real tmp627;
  modelica_boolean tmp628;
  modelica_boolean tmp629;
  modelica_boolean tmp630;
  modelica_real tmp631;
  tmp588 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp590 = (modelica_boolean)tmp588;
  if(tmp590)
  {
    tmp591 = 0.0;
  }
  else
  {
    tmp589 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp591 = (tmp589?(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp591)), 0, linearSystemData, threadData);
  tmp592 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp592?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp593 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp593?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp594 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp596 = (modelica_boolean)tmp594;
  if(tmp596)
  {
    tmp597 = 0.0;
  }
  else
  {
    tmp595 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp597 = (tmp595?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp597)), 3, linearSystemData, threadData);
  tmp598 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp600 = (modelica_boolean)tmp598;
  if(tmp600)
  {
    tmp601 = -1.0;
  }
  else
  {
    tmp599 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp601 = (tmp599?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp601)), 4, linearSystemData, threadData);
  tmp602 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp604 = (modelica_boolean)tmp602;
  if(tmp604)
  {
    tmp605 = 0.0;
  }
  else
  {
    tmp603 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp605 = (tmp603?(-data->localData[0]->realVars[360] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp605)), 5, linearSystemData, threadData);
  tmp606 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp608 = (modelica_boolean)tmp606;
  if(tmp608)
  {
    tmp609 = -0.0;
  }
  else
  {
    tmp607 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp609 = (tmp607?(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp609)), 6, linearSystemData, threadData);
  tmp610 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp612 = (modelica_boolean)tmp610;
  if(tmp612)
  {
    tmp613 = (-data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp611 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp613 = (tmp611?-0.0:(-data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 3, (-(tmp613)), 7, linearSystemData, threadData);
  tmp614 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp616 = (modelica_boolean)tmp614;
  if(tmp616)
  {
    tmp617 = 0.0;
  }
  else
  {
    tmp615 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp617 = (tmp615?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp617)), 8, linearSystemData, threadData);
  tmp618 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 2, (-((tmp618?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp619 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp621 = (modelica_boolean)tmp619;
  if(tmp621)
  {
    tmp622 = 0.0;
  }
  else
  {
    tmp620 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp622 = (tmp620?(-data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp622)), 10, linearSystemData, threadData);
  tmp623 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp623?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp624 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp626 = (modelica_boolean)tmp624;
  if(tmp626)
  {
    tmp627 = 0.0;
  }
  else
  {
    tmp625 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp627 = (tmp625?(-data->localData[0]->realVars[360] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp627)), 12, linearSystemData, threadData);
  tmp628 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp630 = (modelica_boolean)tmp628;
  if(tmp630)
  {
    tmp631 = 0.0;
  }
  else
  {
    tmp629 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp631 = (tmp629?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp631)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb125(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,125};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp632;
  modelica_boolean tmp633;
  modelica_boolean tmp634;
  modelica_real tmp635;
  modelica_boolean tmp636;
  modelica_boolean tmp637;
  modelica_boolean tmp638;
  modelica_real tmp639;
  modelica_boolean tmp640;
  modelica_boolean tmp641;
  modelica_boolean tmp642;
  modelica_real tmp643;
  modelica_boolean tmp644;
  modelica_boolean tmp645;
  modelica_boolean tmp646;
  modelica_real tmp647;
  modelica_boolean tmp648;
  modelica_boolean tmp649;
  modelica_boolean tmp650;
  modelica_real tmp651;
  tmp632 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp634 = (modelica_boolean)tmp632;
  if(tmp634)
  {
    tmp635 = (-data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp633 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp635 = (tmp633?data->localData[0]->realVars[294] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp635, linearSystemData, threadData);
  tmp636 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp638 = (modelica_boolean)tmp636;
  if(tmp638)
  {
    tmp639 = 0.0;
  }
  else
  {
    tmp637 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp639 = (tmp637?data->localData[0]->realVars[292] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp639, linearSystemData, threadData);
  tmp640 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp642 = (modelica_boolean)tmp640;
  if(tmp642)
  {
    tmp643 = data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp641 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp643 = (tmp641?data->localData[0]->realVars[293] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp643, linearSystemData, threadData);
  tmp644 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp646 = (modelica_boolean)tmp644;
  if(tmp646)
  {
    tmp647 = 0.0;
  }
  else
  {
    tmp645 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp647 = (tmp645?data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp647, linearSystemData, threadData);
  tmp648 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp650 = (modelica_boolean)tmp648;
  if(tmp650)
  {
    tmp651 = 0.0;
  }
  else
  {
    tmp649 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp651 = (tmp649?data->localData[0]->realVars[291] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp651, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData125(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[295].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[295].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[295].attribute /* MatStm4.compMasFrac[1,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[298].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[298].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[298].attribute /* MatStm4.compMasFrac[2,2] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 9, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[9].equationIndex = 804;
  linearSystemData[9].size = 5;
  linearSystemData[9].nnz = 14;
  linearSystemData[9].method = 0;
  linearSystemData[9].strictTearingFunctionCall = NULL;
  linearSystemData[9].setA = setLinearMatrixA804;
  linearSystemData[9].setb = setLinearVectorb804;
  linearSystemData[9].initializeStaticLSData = initializeStaticLSData804;
  linearSystemData[9].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 8, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[8].equationIndex = 745;
  linearSystemData[8].size = 5;
  linearSystemData[8].nnz = 14;
  linearSystemData[8].method = 0;
  linearSystemData[8].strictTearingFunctionCall = NULL;
  linearSystemData[8].setA = setLinearMatrixA745;
  linearSystemData[8].setb = setLinearVectorb745;
  linearSystemData[8].initializeStaticLSData = initializeStaticLSData745;
  linearSystemData[8].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 7, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[7].equationIndex = 625;
  linearSystemData[7].size = 5;
  linearSystemData[7].nnz = 14;
  linearSystemData[7].method = 0;
  linearSystemData[7].strictTearingFunctionCall = NULL;
  linearSystemData[7].setA = setLinearMatrixA625;
  linearSystemData[7].setb = setLinearVectorb625;
  linearSystemData[7].initializeStaticLSData = initializeStaticLSData625;
  linearSystemData[7].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 6, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[6].equationIndex = 574;
  linearSystemData[6].size = 5;
  linearSystemData[6].nnz = 14;
  linearSystemData[6].method = 0;
  linearSystemData[6].strictTearingFunctionCall = NULL;
  linearSystemData[6].setA = setLinearMatrixA574;
  linearSystemData[6].setb = setLinearVectorb574;
  linearSystemData[6].initializeStaticLSData = initializeStaticLSData574;
  linearSystemData[6].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 519;
  linearSystemData[5].size = 5;
  linearSystemData[5].nnz = 14;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA519;
  linearSystemData[5].setb = setLinearVectorb519;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData519;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 375;
  linearSystemData[4].size = 5;
  linearSystemData[4].nnz = 14;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA375;
  linearSystemData[4].setb = setLinearVectorb375;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData375;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 316;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA316;
  linearSystemData[3].setb = setLinearVectorb316;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData316;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 244;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA244;
  linearSystemData[2].setb = setLinearVectorb244;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData244;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 179;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA179;
  linearSystemData[1].setb = setLinearVectorb179;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData179;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 125;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA125;
  linearSystemData[0].setb = setLinearVectorb125;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData125;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

