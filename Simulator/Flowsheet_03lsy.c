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
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
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
  modelica_real tmp16;
  modelica_boolean tmp17;
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
  modelica_real tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_real tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp0?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp3 = (modelica_boolean)tmp1;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp2, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp4 = (tmp2?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp4)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp6, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp8 = (tmp6?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp8)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp9, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp10, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp12 = (tmp10?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp12)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp13, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp15 = (modelica_boolean)tmp13;
  if(tmp15)
  {
    tmp16 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp14, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp16 = (tmp14?(-data->localData[0]->realVars[182] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp16)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp17, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp17?1.0:-0.0))), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp18, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp20 = (modelica_boolean)tmp18;
  if(tmp20)
  {
    tmp21 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp19, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp21 = (tmp19?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp21)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp22, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(2, 1, (-((tmp22?1.0:-0.0))), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp23, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp25 = (modelica_boolean)tmp23;
  if(tmp25)
  {
    tmp26 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp24, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp26 = (tmp24?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp26)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp27, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp29 = (modelica_boolean)tmp27;
  if(tmp29)
  {
    tmp30 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp28, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp30 = (tmp28?(-data->localData[0]->realVars[182] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp30)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp31, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp33 = (modelica_boolean)tmp31;
  if(tmp33)
  {
    tmp34 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp32, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp34 = (tmp32?(-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp34)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp35, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(3, 2, (-((tmp35?1.0:-0.0))), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp36, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp38 = (modelica_boolean)tmp36;
  if(tmp38)
  {
    tmp39 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp37, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp39 = (tmp37?(-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp39)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp40, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp42 = (modelica_boolean)tmp40;
  if(tmp42)
  {
    tmp43 = (-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp41, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp43 = (tmp41?-0.0:(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 4, (-(tmp43)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb804(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,804};
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
  RELATIONHYSTERESIS(tmp44, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp46 = (modelica_boolean)tmp44;
  if(tmp46)
  {
    tmp47 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp45, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp47 = (tmp45?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp47, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp48, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp50 = (modelica_boolean)tmp48;
  if(tmp50)
  {
    tmp51 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp49, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp51 = (tmp49?data->localData[0]->realVars[114] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp51, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp52, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp55 = (tmp53?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp55, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp56, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = (-data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp57, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp59 = (tmp57?data->localData[0]->realVars[116] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp59, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp60, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp61, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp63 = (tmp61?data->localData[0]->realVars[115] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp63, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData804(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA746(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,746};
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
  modelica_real tmp75;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_real tmp84;
  modelica_boolean tmp85;
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
  modelica_real tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp64, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = (-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp65, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp67 = (tmp65?-0.0:(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 3, (-(tmp67)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp68, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp69, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp71 = (tmp69?(-data->localData[0]->realVars[271] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp71)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp72, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp74 = (modelica_boolean)tmp72;
  if(tmp74)
  {
    tmp75 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp73, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp75 = (tmp73?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp75)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp76, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp78 = (modelica_boolean)tmp76;
  if(tmp78)
  {
    tmp79 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp77, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp79 = (tmp77?(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp79)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp80, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(1, 4, (-((tmp80?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp81, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp83 = (modelica_boolean)tmp81;
  if(tmp83)
  {
    tmp84 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp82, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp84 = (tmp82?(-data->localData[0]->realVars[270] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp84)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp85, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp85?1.0:-0.0))), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp86, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp88 = (modelica_boolean)tmp86;
  if(tmp88)
  {
    tmp89 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp87, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp89 = (tmp87?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp89)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp90, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp92 = (modelica_boolean)tmp90;
  if(tmp92)
  {
    tmp93 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp91, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp93 = (tmp91?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp93)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp94, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(3, 0, (-((tmp94?1.0:-0.0))), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp95, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp97 = (modelica_boolean)tmp95;
  if(tmp97)
  {
    tmp98 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp96, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp98 = (tmp96?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp98)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp99, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp101 = (modelica_boolean)tmp99;
  if(tmp101)
  {
    tmp102 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp100, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp102 = (tmp100?(-data->localData[0]->realVars[270] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp102)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp103, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp105 = (modelica_boolean)tmp103;
  if(tmp105)
  {
    tmp106 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp104, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp106 = (tmp104?(-data->localData[0]->realVars[271] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp106)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp107, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(4, 1, (-((tmp107?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb746(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,746};
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
  RELATIONHYSTERESIS(tmp108, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp110 = (modelica_boolean)tmp108;
  if(tmp110)
  {
    tmp111 = data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp109, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp111 = (tmp109?data->localData[0]->realVars[203] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp111, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp112, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp114 = (modelica_boolean)tmp112;
  if(tmp114)
  {
    tmp115 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp113, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp115 = (tmp113?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp115, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp116, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp118 = (modelica_boolean)tmp116;
  if(tmp118)
  {
    tmp119 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp117, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp119 = (tmp117?data->localData[0]->realVars[202] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp119, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp120, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp122 = (modelica_boolean)tmp120;
  if(tmp122)
  {
    tmp123 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp121, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp123 = (tmp121?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp123, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp124, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp126 = (modelica_boolean)tmp124;
  if(tmp126)
  {
    tmp127 = (-data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp125, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp127 = (tmp125?data->localData[0]->realVars[204] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp127, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData746(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA666(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,666};
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
  RELATIONHYSTERESIS(tmp128, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 2, (-((tmp128?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp129, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp131 = (modelica_boolean)tmp129;
  if(tmp131)
  {
    tmp132 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp130, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp132 = (tmp130?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp132)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp133, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp135 = (modelica_boolean)tmp133;
  if(tmp135)
  {
    tmp136 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp134, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp136 = (tmp134?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp136)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp137, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp139 = (modelica_boolean)tmp137;
  if(tmp139)
  {
    tmp140 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp138, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp140 = (tmp138?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp140)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp141, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp143 = (modelica_boolean)tmp141;
  if(tmp143)
  {
    tmp144 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp142, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp144 = (tmp142?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp144)), 4, linearSystemData, threadData);
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
  linearSystemData->setAElement(1, 3, (-(tmp148)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp149, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 4, (-((tmp149?1.0:-0.0))), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp150, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp152 = (modelica_boolean)tmp150;
  if(tmp152)
  {
    tmp153 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp151, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp153 = (tmp151?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp153)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp154, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 3, (-((tmp154?1.0:-0.0))), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp155, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp157 = (modelica_boolean)tmp155;
  if(tmp157)
  {
    tmp158 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp156, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp158 = (tmp156?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp158)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp159, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 1, (-((tmp159?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp160, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp162 = (modelica_boolean)tmp160;
  if(tmp162)
  {
    tmp163 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp161, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp163 = (tmp161?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 4, (-(tmp163)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp164, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp166 = (modelica_boolean)tmp164;
  if(tmp166)
  {
    tmp167 = (-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp165, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp167 = (tmp165?-0.0:(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp167)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp168, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp170 = (modelica_boolean)tmp168;
  if(tmp170)
  {
    tmp171 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp169, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp171 = (tmp169?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp171)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb666(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,666};
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
  RELATIONHYSTERESIS(tmp172, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp174 = (modelica_boolean)tmp172;
  if(tmp174)
  {
    tmp175 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp173, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp175 = (tmp173?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp175, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp176, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp178 = (modelica_boolean)tmp176;
  if(tmp178)
  {
    tmp179 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp177, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp179 = (tmp177?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp179, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp180, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp182 = (modelica_boolean)tmp180;
  if(tmp182)
  {
    tmp183 = (-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp181, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp183 = (tmp181?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp183, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp184, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp186 = (modelica_boolean)tmp184;
  if(tmp186)
  {
    tmp187 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp185, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp187 = (tmp185?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp187, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp188, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp190 = (modelica_boolean)tmp188;
  if(tmp190)
  {
    tmp191 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp189, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp191 = (tmp189?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp191, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData666(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.max;
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
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA572(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,572};
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
  tmp192 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp194 = (modelica_boolean)tmp192;
  if(tmp194)
  {
    tmp195 = 0.0;
  }
  else
  {
    tmp193 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp195 = (tmp193?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp195)), 0, linearSystemData, threadData);
  tmp196 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp196?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp197 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp199 = (modelica_boolean)tmp197;
  if(tmp199)
  {
    tmp200 = 0.0;
  }
  else
  {
    tmp198 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp200 = (tmp198?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp200)), 2, linearSystemData, threadData);
  tmp201 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp203 = (modelica_boolean)tmp201;
  if(tmp203)
  {
    tmp204 = -1.0;
  }
  else
  {
    tmp202 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp204 = (tmp202?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp204)), 3, linearSystemData, threadData);
  tmp205 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp207 = (modelica_boolean)tmp205;
  if(tmp207)
  {
    tmp208 = -0.0;
  }
  else
  {
    tmp206 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp208 = (tmp206?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp208)), 4, linearSystemData, threadData);
  tmp209 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp211 = (modelica_boolean)tmp209;
  if(tmp211)
  {
    tmp212 = (-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    tmp210 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp212 = (tmp210?-0.0:(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 4, (-(tmp212)), 5, linearSystemData, threadData);
  tmp213 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp215 = (modelica_boolean)tmp213;
  if(tmp215)
  {
    tmp216 = 0.0;
  }
  else
  {
    tmp214 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp216 = (tmp214?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp216)), 6, linearSystemData, threadData);
  tmp217 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp217?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp218 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp220 = (modelica_boolean)tmp218;
  if(tmp220)
  {
    tmp221 = 0.0;
  }
  else
  {
    tmp219 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp221 = (tmp219?(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp221)), 8, linearSystemData, threadData);
  tmp222 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp222?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp223 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp225 = (modelica_boolean)tmp223;
  if(tmp225)
  {
    tmp226 = 0.0;
  }
  else
  {
    tmp224 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp226 = (tmp224?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp226)), 10, linearSystemData, threadData);
  tmp227 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp229 = (modelica_boolean)tmp227;
  if(tmp229)
  {
    tmp230 = 0.0;
  }
  else
  {
    tmp228 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp230 = (tmp228?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp230)), 11, linearSystemData, threadData);
  tmp231 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp233 = (modelica_boolean)tmp231;
  if(tmp233)
  {
    tmp234 = 0.0;
  }
  else
  {
    tmp232 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp234 = (tmp232?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp234)), 12, linearSystemData, threadData);
  tmp235 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp235?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb572(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,572};
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
  tmp236 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp238 = (modelica_boolean)tmp236;
  if(tmp238)
  {
    tmp239 = 0.0;
  }
  else
  {
    tmp237 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp239 = (tmp237?data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp239, linearSystemData, threadData);
  tmp240 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp242 = (modelica_boolean)tmp240;
  if(tmp242)
  {
    tmp243 = data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp241 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp243 = (tmp241?data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp243, linearSystemData, threadData);
  tmp244 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp246 = (modelica_boolean)tmp244;
  if(tmp246)
  {
    tmp247 = 0.0;
  }
  else
  {
    tmp245 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp247 = (tmp245?data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp247, linearSystemData, threadData);
  tmp248 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp250 = (modelica_boolean)tmp248;
  if(tmp250)
  {
    tmp251 = 0.0;
  }
  else
  {
    tmp249 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp251 = (tmp249?data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp251, linearSystemData, threadData);
  tmp252 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp254 = (modelica_boolean)tmp252;
  if(tmp254)
  {
    tmp255 = (-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp253 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp255 = (tmp253?data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp255, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData572(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.max;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.max;
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
}

OMC_DISABLE_OPT
void setLinearMatrixA518(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,518};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  modelica_real tmp259;
  modelica_boolean tmp260;
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
  modelica_real tmp272;
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
  modelica_boolean tmp298;
  modelica_real tmp299;
  tmp256 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp258 = (modelica_boolean)tmp256;
  if(tmp258)
  {
    tmp259 = 0.0;
  }
  else
  {
    tmp257 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp259 = (tmp257?(-data->localData[0]->realVars[360] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp259)), 0, linearSystemData, threadData);
  tmp260 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp260?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp261 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp263 = (modelica_boolean)tmp261;
  if(tmp263)
  {
    tmp264 = -1.0;
  }
  else
  {
    tmp262 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp264 = (tmp262?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp264)), 2, linearSystemData, threadData);
  tmp265 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp267 = (modelica_boolean)tmp265;
  if(tmp267)
  {
    tmp268 = 0.0;
  }
  else
  {
    tmp266 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp268 = (tmp266?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp268)), 3, linearSystemData, threadData);
  tmp269 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp271 = (modelica_boolean)tmp269;
  if(tmp271)
  {
    tmp272 = (-data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp270 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp272 = (tmp270?-0.0:(-data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 3, (-(tmp272)), 4, linearSystemData, threadData);
  tmp273 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp275 = (modelica_boolean)tmp273;
  if(tmp275)
  {
    tmp276 = -0.0;
  }
  else
  {
    tmp274 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp276 = (tmp274?(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp276)), 5, linearSystemData, threadData);
  tmp277 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp279 = (modelica_boolean)tmp277;
  if(tmp279)
  {
    tmp280 = 0.0;
  }
  else
  {
    tmp278 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp280 = (tmp278?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp280)), 6, linearSystemData, threadData);
  tmp281 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp283 = (modelica_boolean)tmp281;
  if(tmp283)
  {
    tmp284 = 0.0;
  }
  else
  {
    tmp282 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp284 = (tmp282?(-data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp284)), 7, linearSystemData, threadData);
  tmp285 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(2, 4, (-((tmp285?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp286 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp288 = (modelica_boolean)tmp286;
  if(tmp288)
  {
    tmp289 = 0.0;
  }
  else
  {
    tmp287 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp289 = (tmp287?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp289)), 9, linearSystemData, threadData);
  tmp290 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp290?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp291 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp293 = (modelica_boolean)tmp291;
  if(tmp293)
  {
    tmp294 = 0.0;
  }
  else
  {
    tmp292 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp294 = (tmp292?(-data->localData[0]->realVars[360] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp294)), 11, linearSystemData, threadData);
  tmp295 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp295?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp296 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp298 = (modelica_boolean)tmp296;
  if(tmp298)
  {
    tmp299 = 0.0;
  }
  else
  {
    tmp297 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp299 = (tmp297?(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp299)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb518(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,518};
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
  tmp300 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp302 = (modelica_boolean)tmp300;
  if(tmp302)
  {
    tmp303 = 0.0;
  }
  else
  {
    tmp301 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp303 = (tmp301?data->localData[0]->realVars[292] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp303, linearSystemData, threadData);
  tmp304 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp306 = (modelica_boolean)tmp304;
  if(tmp306)
  {
    tmp307 = data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp305 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp307 = (tmp305?data->localData[0]->realVars[293] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp307, linearSystemData, threadData);
  tmp308 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp310 = (modelica_boolean)tmp308;
  if(tmp310)
  {
    tmp311 = 0.0;
  }
  else
  {
    tmp309 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp311 = (tmp309?data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp311, linearSystemData, threadData);
  tmp312 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp314 = (modelica_boolean)tmp312;
  if(tmp314)
  {
    tmp315 = 0.0;
  }
  else
  {
    tmp313 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp315 = (tmp313?data->localData[0]->realVars[291] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp315, linearSystemData, threadData);
  tmp316 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp318 = (modelica_boolean)tmp316;
  if(tmp318)
  {
    tmp319 = (-data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp317 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp319 = (tmp317?data->localData[0]->realVars[294] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp319, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData518(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[298].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[298].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[298].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[295].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[295].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[295].attribute /* MatStm4.compMasFrac[1,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA374(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,374};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp320;
  modelica_boolean tmp321;
  modelica_boolean tmp322;
  modelica_real tmp323;
  modelica_boolean tmp324;
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
  modelica_real tmp336;
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
  tmp320 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp322 = (modelica_boolean)tmp320;
  if(tmp322)
  {
    tmp323 = 0.0;
  }
  else
  {
    tmp321 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp323 = (tmp321?(-data->localData[0]->realVars[182] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp323)), 0, linearSystemData, threadData);
  tmp324 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp324?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp325 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp327 = (modelica_boolean)tmp325;
  if(tmp327)
  {
    tmp328 = -1.0;
  }
  else
  {
    tmp326 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp328 = (tmp326?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp328)), 2, linearSystemData, threadData);
  tmp329 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp331 = (modelica_boolean)tmp329;
  if(tmp331)
  {
    tmp332 = 0.0;
  }
  else
  {
    tmp330 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp332 = (tmp330?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp332)), 3, linearSystemData, threadData);
  tmp333 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp335 = (modelica_boolean)tmp333;
  if(tmp335)
  {
    tmp336 = (-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp334 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp336 = (tmp334?-0.0:(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 3, (-(tmp336)), 4, linearSystemData, threadData);
  tmp337 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp339 = (modelica_boolean)tmp337;
  if(tmp339)
  {
    tmp340 = -0.0;
  }
  else
  {
    tmp338 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp340 = (tmp338?(-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp340)), 5, linearSystemData, threadData);
  tmp341 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp343 = (modelica_boolean)tmp341;
  if(tmp343)
  {
    tmp344 = 0.0;
  }
  else
  {
    tmp342 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp344 = (tmp342?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp344)), 6, linearSystemData, threadData);
  tmp345 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp347 = (modelica_boolean)tmp345;
  if(tmp347)
  {
    tmp348 = 0.0;
  }
  else
  {
    tmp346 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp348 = (tmp346?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp348)), 7, linearSystemData, threadData);
  tmp349 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 4, (-((tmp349?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp350 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp352 = (modelica_boolean)tmp350;
  if(tmp352)
  {
    tmp353 = 0.0;
  }
  else
  {
    tmp351 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp353 = (tmp351?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp353)), 9, linearSystemData, threadData);
  tmp354 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp354?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp355 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp357 = (modelica_boolean)tmp355;
  if(tmp357)
  {
    tmp358 = 0.0;
  }
  else
  {
    tmp356 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp358 = (tmp356?(-data->localData[0]->realVars[182] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp358)), 11, linearSystemData, threadData);
  tmp359 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp359?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp360 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp362 = (modelica_boolean)tmp360;
  if(tmp362)
  {
    tmp363 = 0.0;
  }
  else
  {
    tmp361 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp363 = (tmp361?(-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp363)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb374(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,374};
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
  tmp364 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp366 = (modelica_boolean)tmp364;
  if(tmp366)
  {
    tmp367 = 0.0;
  }
  else
  {
    tmp365 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp367 = (tmp365?data->localData[0]->realVars[114] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp367, linearSystemData, threadData);
  tmp368 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp370 = (modelica_boolean)tmp368;
  if(tmp370)
  {
    tmp371 = data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp369 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp371 = (tmp369?data->localData[0]->realVars[115] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp371, linearSystemData, threadData);
  tmp372 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp374 = (modelica_boolean)tmp372;
  if(tmp374)
  {
    tmp375 = 0.0;
  }
  else
  {
    tmp373 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp375 = (tmp373?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp375, linearSystemData, threadData);
  tmp376 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp378 = (modelica_boolean)tmp376;
  if(tmp378)
  {
    tmp379 = 0.0;
  }
  else
  {
    tmp377 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp379 = (tmp377?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp379, linearSystemData, threadData);
  tmp380 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp382 = (modelica_boolean)tmp380;
  if(tmp382)
  {
    tmp383 = (-data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp381 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp383 = (tmp381?data->localData[0]->realVars[116] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp383, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData374(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA313(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,313};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp395;
  modelica_boolean tmp396;
  modelica_real tmp397;
  modelica_boolean tmp398;
  modelica_boolean tmp399;
  modelica_boolean tmp400;
  modelica_boolean tmp401;
  modelica_real tmp402;
  modelica_boolean tmp403;
  modelica_boolean tmp404;
  modelica_boolean tmp405;
  modelica_real tmp406;
  modelica_boolean tmp407;
  modelica_boolean tmp408;
  modelica_boolean tmp409;
  modelica_real tmp410;
  modelica_boolean tmp411;
  modelica_boolean tmp412;
  modelica_boolean tmp413;
  modelica_real tmp414;
  modelica_boolean tmp415;
  modelica_boolean tmp416;
  modelica_boolean tmp417;
  modelica_real tmp418;
  modelica_boolean tmp419;
  modelica_boolean tmp420;
  modelica_boolean tmp421;
  modelica_real tmp422;
  modelica_boolean tmp423;
  modelica_boolean tmp424;
  modelica_boolean tmp425;
  modelica_boolean tmp426;
  modelica_real tmp427;
  tmp384 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp386 = (modelica_boolean)tmp384;
  if(tmp386)
  {
    tmp387 = 0.0;
  }
  else
  {
    tmp385 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp387 = (tmp385?(-data->localData[0]->realVars[270] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp387)), 0, linearSystemData, threadData);
  tmp388 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp390 = (modelica_boolean)tmp388;
  if(tmp390)
  {
    tmp391 = 0.0;
  }
  else
  {
    tmp389 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp391 = (tmp389?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp391)), 1, linearSystemData, threadData);
  tmp392 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp392?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp393 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp393?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp394 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp396 = (modelica_boolean)tmp394;
  if(tmp396)
  {
    tmp397 = 0.0;
  }
  else
  {
    tmp395 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp397 = (tmp395?(-data->localData[0]->realVars[271] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp397)), 4, linearSystemData, threadData);
  tmp398 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp398?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp399 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp401 = (modelica_boolean)tmp399;
  if(tmp401)
  {
    tmp402 = 0.0;
  }
  else
  {
    tmp400 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp402 = (tmp400?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp402)), 6, linearSystemData, threadData);
  tmp403 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp405 = (modelica_boolean)tmp403;
  if(tmp405)
  {
    tmp406 = -1.0;
  }
  else
  {
    tmp404 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp406 = (tmp404?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp406)), 7, linearSystemData, threadData);
  tmp407 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp409 = (modelica_boolean)tmp407;
  if(tmp409)
  {
    tmp410 = 0.0;
  }
  else
  {
    tmp408 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp410 = (tmp408?(-data->localData[0]->realVars[270] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp410)), 8, linearSystemData, threadData);
  tmp411 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp413 = (modelica_boolean)tmp411;
  if(tmp413)
  {
    tmp414 = -0.0;
  }
  else
  {
    tmp412 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp414 = (tmp412?(-data->localData[0]->realVars[271] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp414)), 9, linearSystemData, threadData);
  tmp415 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp417 = (modelica_boolean)tmp415;
  if(tmp417)
  {
    tmp418 = (-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp416 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp418 = (tmp416?-0.0:(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp418)), 10, linearSystemData, threadData);
  tmp419 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp421 = (modelica_boolean)tmp419;
  if(tmp421)
  {
    tmp422 = 0.0;
  }
  else
  {
    tmp420 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp422 = (tmp420?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp422)), 11, linearSystemData, threadData);
  tmp423 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp423?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp424 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp426 = (modelica_boolean)tmp424;
  if(tmp426)
  {
    tmp427 = 0.0;
  }
  else
  {
    tmp425 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp427 = (tmp425?(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp427)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb313(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,313};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp440;
  modelica_boolean tmp441;
  modelica_boolean tmp442;
  modelica_real tmp443;
  modelica_boolean tmp444;
  modelica_boolean tmp445;
  modelica_boolean tmp446;
  modelica_real tmp447;
  tmp428 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp430 = (modelica_boolean)tmp428;
  if(tmp430)
  {
    tmp431 = 0.0;
  }
  else
  {
    tmp429 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp431 = (tmp429?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp431, linearSystemData, threadData);
  tmp432 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp434 = (modelica_boolean)tmp432;
  if(tmp434)
  {
    tmp435 = (-data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp433 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp435 = (tmp433?data->localData[0]->realVars[204] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp435, linearSystemData, threadData);
  tmp436 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp438 = (modelica_boolean)tmp436;
  if(tmp438)
  {
    tmp439 = 0.0;
  }
  else
  {
    tmp437 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp439 = (tmp437?data->localData[0]->realVars[202] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp439, linearSystemData, threadData);
  tmp440 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp442 = (modelica_boolean)tmp440;
  if(tmp442)
  {
    tmp443 = data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp441 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp443 = (tmp441?data->localData[0]->realVars[203] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp443, linearSystemData, threadData);
  tmp444 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp446 = (modelica_boolean)tmp444;
  if(tmp446)
  {
    tmp447 = 0.0;
  }
  else
  {
    tmp445 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp447 = (tmp445?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp447, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData313(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
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
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA260(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,260};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp448;
  modelica_boolean tmp449;
  modelica_boolean tmp450;
  modelica_boolean tmp451;
  modelica_real tmp452;
  modelica_boolean tmp453;
  modelica_boolean tmp454;
  modelica_boolean tmp455;
  modelica_real tmp456;
  modelica_boolean tmp457;
  modelica_boolean tmp458;
  modelica_boolean tmp459;
  modelica_real tmp460;
  modelica_boolean tmp461;
  modelica_boolean tmp462;
  modelica_boolean tmp463;
  modelica_boolean tmp464;
  modelica_real tmp465;
  modelica_boolean tmp466;
  modelica_boolean tmp467;
  modelica_boolean tmp468;
  modelica_real tmp469;
  modelica_boolean tmp470;
  modelica_boolean tmp471;
  modelica_boolean tmp472;
  modelica_real tmp473;
  modelica_boolean tmp474;
  modelica_boolean tmp475;
  modelica_boolean tmp476;
  modelica_boolean tmp477;
  modelica_boolean tmp478;
  modelica_real tmp479;
  modelica_boolean tmp480;
  modelica_boolean tmp481;
  modelica_boolean tmp482;
  modelica_real tmp483;
  modelica_boolean tmp484;
  modelica_boolean tmp485;
  modelica_boolean tmp486;
  modelica_real tmp487;
  modelica_boolean tmp488;
  modelica_boolean tmp489;
  modelica_boolean tmp490;
  modelica_real tmp491;
  tmp448 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp448?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp449 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp451 = (modelica_boolean)tmp449;
  if(tmp451)
  {
    tmp452 = 0.0;
  }
  else
  {
    tmp450 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp452 = (tmp450?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp452)), 1, linearSystemData, threadData);
  tmp453 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp455 = (modelica_boolean)tmp453;
  if(tmp455)
  {
    tmp456 = 0.0;
  }
  else
  {
    tmp454 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp456 = (tmp454?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp456)), 2, linearSystemData, threadData);
  tmp457 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp459 = (modelica_boolean)tmp457;
  if(tmp459)
  {
    tmp460 = 0.0;
  }
  else
  {
    tmp458 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp460 = (tmp458?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp460)), 3, linearSystemData, threadData);
  tmp461 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp461?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp462 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp464 = (modelica_boolean)tmp462;
  if(tmp464)
  {
    tmp465 = 0.0;
  }
  else
  {
    tmp463 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp465 = (tmp463?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp465)), 5, linearSystemData, threadData);
  tmp466 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp468 = (modelica_boolean)tmp466;
  if(tmp468)
  {
    tmp469 = -1.0;
  }
  else
  {
    tmp467 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp469 = (tmp467?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp469)), 6, linearSystemData, threadData);
  tmp470 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp472 = (modelica_boolean)tmp470;
  if(tmp472)
  {
    tmp473 = 0.0;
  }
  else
  {
    tmp471 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp473 = (tmp471?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp473)), 7, linearSystemData, threadData);
  tmp474 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp474?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp475 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp475?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp476 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp478 = (modelica_boolean)tmp476;
  if(tmp478)
  {
    tmp479 = 0.0;
  }
  else
  {
    tmp477 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp479 = (tmp477?(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp479)), 10, linearSystemData, threadData);
  tmp480 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp482 = (modelica_boolean)tmp480;
  if(tmp482)
  {
    tmp483 = 0.0;
  }
  else
  {
    tmp481 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp483 = (tmp481?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp483)), 11, linearSystemData, threadData);
  tmp484 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp486 = (modelica_boolean)tmp484;
  if(tmp486)
  {
    tmp487 = -0.0;
  }
  else
  {
    tmp485 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp487 = (tmp485?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp487)), 12, linearSystemData, threadData);
  tmp488 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp490 = (modelica_boolean)tmp488;
  if(tmp490)
  {
    tmp491 = (-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    tmp489 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp491 = (tmp489?-0.0:(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp491)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb260(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,260};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp504;
  modelica_boolean tmp505;
  modelica_boolean tmp506;
  modelica_real tmp507;
  modelica_boolean tmp508;
  modelica_boolean tmp509;
  modelica_boolean tmp510;
  modelica_real tmp511;
  tmp492 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp494 = (modelica_boolean)tmp492;
  if(tmp494)
  {
    tmp495 = (-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp493 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp495 = (tmp493?data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp495, linearSystemData, threadData);
  tmp496 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp498 = (modelica_boolean)tmp496;
  if(tmp498)
  {
    tmp499 = 0.0;
  }
  else
  {
    tmp497 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp499 = (tmp497?data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp499, linearSystemData, threadData);
  tmp500 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp502 = (modelica_boolean)tmp500;
  if(tmp502)
  {
    tmp503 = 0.0;
  }
  else
  {
    tmp501 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp503 = (tmp501?data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp503, linearSystemData, threadData);
  tmp504 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp506 = (modelica_boolean)tmp504;
  if(tmp506)
  {
    tmp507 = 0.0;
  }
  else
  {
    tmp505 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp507 = (tmp505?data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp507, linearSystemData, threadData);
  tmp508 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp510 = (modelica_boolean)tmp508;
  if(tmp510)
  {
    tmp511 = data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp509 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp511 = (tmp509?data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp511, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData260(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
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
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.max;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp512;
  modelica_boolean tmp513;
  modelica_boolean tmp514;
  modelica_boolean tmp515;
  modelica_real tmp516;
  modelica_boolean tmp517;
  modelica_boolean tmp518;
  modelica_boolean tmp519;
  modelica_real tmp520;
  modelica_boolean tmp521;
  modelica_boolean tmp522;
  modelica_boolean tmp523;
  modelica_real tmp524;
  modelica_boolean tmp525;
  modelica_boolean tmp526;
  modelica_boolean tmp527;
  modelica_boolean tmp528;
  modelica_real tmp529;
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
  modelica_boolean tmp541;
  modelica_real tmp542;
  modelica_boolean tmp543;
  modelica_boolean tmp544;
  modelica_boolean tmp545;
  modelica_boolean tmp546;
  modelica_real tmp547;
  modelica_boolean tmp548;
  modelica_boolean tmp549;
  modelica_boolean tmp550;
  modelica_real tmp551;
  modelica_boolean tmp552;
  modelica_boolean tmp553;
  modelica_boolean tmp554;
  modelica_real tmp555;
  tmp512 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp512?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp513 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp515 = (modelica_boolean)tmp513;
  if(tmp515)
  {
    tmp516 = 0.0;
  }
  else
  {
    tmp514 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp516 = (tmp514?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp516)), 1, linearSystemData, threadData);
  tmp517 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp519 = (modelica_boolean)tmp517;
  if(tmp519)
  {
    tmp520 = 0.0;
  }
  else
  {
    tmp518 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp520 = (tmp518?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp520)), 2, linearSystemData, threadData);
  tmp521 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp523 = (modelica_boolean)tmp521;
  if(tmp523)
  {
    tmp524 = 0.0;
  }
  else
  {
    tmp522 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp524 = (tmp522?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp524)), 3, linearSystemData, threadData);
  tmp525 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp525?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp526 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp528 = (modelica_boolean)tmp526;
  if(tmp528)
  {
    tmp529 = -1.0;
  }
  else
  {
    tmp527 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp529 = (tmp527?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp529)), 5, linearSystemData, threadData);
  tmp530 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp532 = (modelica_boolean)tmp530;
  if(tmp532)
  {
    tmp533 = 0.0;
  }
  else
  {
    tmp531 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp533 = (tmp531?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp533)), 6, linearSystemData, threadData);
  tmp534 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp536 = (modelica_boolean)tmp534;
  if(tmp536)
  {
    tmp537 = 0.0;
  }
  else
  {
    tmp535 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp537 = (tmp535?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp537)), 7, linearSystemData, threadData);
  tmp538 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp538?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp539 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp541 = (modelica_boolean)tmp539;
  if(tmp541)
  {
    tmp542 = 0.0;
  }
  else
  {
    tmp540 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp542 = (tmp540?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp542)), 9, linearSystemData, threadData);
  tmp543 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp543?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp544 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp546 = (modelica_boolean)tmp544;
  if(tmp546)
  {
    tmp547 = 0.0;
  }
  else
  {
    tmp545 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp547 = (tmp545?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp547)), 11, linearSystemData, threadData);
  tmp548 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp550 = (modelica_boolean)tmp548;
  if(tmp550)
  {
    tmp551 = (-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp549 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp551 = (tmp549?-0.0:(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp551)), 12, linearSystemData, threadData);
  tmp552 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp554 = (modelica_boolean)tmp552;
  if(tmp554)
  {
    tmp555 = -0.0;
  }
  else
  {
    tmp553 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp555 = (tmp553?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp555)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp556;
  modelica_boolean tmp557;
  modelica_boolean tmp558;
  modelica_real tmp559;
  modelica_boolean tmp560;
  modelica_boolean tmp561;
  modelica_boolean tmp562;
  modelica_real tmp563;
  modelica_boolean tmp564;
  modelica_boolean tmp565;
  modelica_boolean tmp566;
  modelica_real tmp567;
  modelica_boolean tmp568;
  modelica_boolean tmp569;
  modelica_boolean tmp570;
  modelica_real tmp571;
  modelica_boolean tmp572;
  modelica_boolean tmp573;
  modelica_boolean tmp574;
  modelica_real tmp575;
  tmp556 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp558 = (modelica_boolean)tmp556;
  if(tmp558)
  {
    tmp559 = (-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp557 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp559 = (tmp557?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp559, linearSystemData, threadData);
  tmp560 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp562 = (modelica_boolean)tmp560;
  if(tmp562)
  {
    tmp563 = 0.0;
  }
  else
  {
    tmp561 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp563 = (tmp561?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp563, linearSystemData, threadData);
  tmp564 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp566 = (modelica_boolean)tmp564;
  if(tmp566)
  {
    tmp567 = 0.0;
  }
  else
  {
    tmp565 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp567 = (tmp565?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp567, linearSystemData, threadData);
  tmp568 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp570 = (modelica_boolean)tmp568;
  if(tmp570)
  {
    tmp571 = 0.0;
  }
  else
  {
    tmp569 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp571 = (tmp569?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp571, linearSystemData, threadData);
  tmp572 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp574 = (modelica_boolean)tmp572;
  if(tmp574)
  {
    tmp575 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp573 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp575 = (tmp573?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp575, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData226(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.max;
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
void setLinearMatrixA125(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,125};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp576;
  modelica_boolean tmp577;
  modelica_boolean tmp578;
  modelica_real tmp579;
  modelica_boolean tmp580;
  modelica_boolean tmp581;
  modelica_boolean tmp582;
  modelica_boolean tmp583;
  modelica_boolean tmp584;
  modelica_real tmp585;
  modelica_boolean tmp586;
  modelica_boolean tmp587;
  modelica_boolean tmp588;
  modelica_real tmp589;
  modelica_boolean tmp590;
  modelica_boolean tmp591;
  modelica_boolean tmp592;
  modelica_real tmp593;
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
  modelica_boolean tmp609;
  modelica_real tmp610;
  modelica_boolean tmp611;
  modelica_boolean tmp612;
  modelica_boolean tmp613;
  modelica_boolean tmp614;
  modelica_real tmp615;
  modelica_boolean tmp616;
  modelica_boolean tmp617;
  modelica_boolean tmp618;
  modelica_real tmp619;
  tmp576 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp578 = (modelica_boolean)tmp576;
  if(tmp578)
  {
    tmp579 = 0.0;
  }
  else
  {
    tmp577 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp579 = (tmp577?(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp579)), 0, linearSystemData, threadData);
  tmp580 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp580?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp581 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp581?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp582 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp584 = (modelica_boolean)tmp582;
  if(tmp584)
  {
    tmp585 = 0.0;
  }
  else
  {
    tmp583 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp585 = (tmp583?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp585)), 3, linearSystemData, threadData);
  tmp586 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp588 = (modelica_boolean)tmp586;
  if(tmp588)
  {
    tmp589 = -1.0;
  }
  else
  {
    tmp587 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp589 = (tmp587?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp589)), 4, linearSystemData, threadData);
  tmp590 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp592 = (modelica_boolean)tmp590;
  if(tmp592)
  {
    tmp593 = 0.0;
  }
  else
  {
    tmp591 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp593 = (tmp591?(-data->localData[0]->realVars[360] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp593)), 5, linearSystemData, threadData);
  tmp594 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp596 = (modelica_boolean)tmp594;
  if(tmp596)
  {
    tmp597 = -0.0;
  }
  else
  {
    tmp595 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp597 = (tmp595?(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp597)), 6, linearSystemData, threadData);
  tmp598 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp600 = (modelica_boolean)tmp598;
  if(tmp600)
  {
    tmp601 = (-data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp599 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp601 = (tmp599?-0.0:(-data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 3, (-(tmp601)), 7, linearSystemData, threadData);
  tmp602 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp604 = (modelica_boolean)tmp602;
  if(tmp604)
  {
    tmp605 = 0.0;
  }
  else
  {
    tmp603 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp605 = (tmp603?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp605)), 8, linearSystemData, threadData);
  tmp606 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 2, (-((tmp606?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp607 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp609 = (modelica_boolean)tmp607;
  if(tmp609)
  {
    tmp610 = 0.0;
  }
  else
  {
    tmp608 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp610 = (tmp608?(-data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp610)), 10, linearSystemData, threadData);
  tmp611 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp611?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp612 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp614 = (modelica_boolean)tmp612;
  if(tmp614)
  {
    tmp615 = 0.0;
  }
  else
  {
    tmp613 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp615 = (tmp613?(-data->localData[0]->realVars[360] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp615)), 12, linearSystemData, threadData);
  tmp616 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp618 = (modelica_boolean)tmp616;
  if(tmp618)
  {
    tmp619 = 0.0;
  }
  else
  {
    tmp617 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp619 = (tmp617?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp619)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb125(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,125};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp620;
  modelica_boolean tmp621;
  modelica_boolean tmp622;
  modelica_real tmp623;
  modelica_boolean tmp624;
  modelica_boolean tmp625;
  modelica_boolean tmp626;
  modelica_real tmp627;
  modelica_boolean tmp628;
  modelica_boolean tmp629;
  modelica_boolean tmp630;
  modelica_real tmp631;
  modelica_boolean tmp632;
  modelica_boolean tmp633;
  modelica_boolean tmp634;
  modelica_real tmp635;
  modelica_boolean tmp636;
  modelica_boolean tmp637;
  modelica_boolean tmp638;
  modelica_real tmp639;
  tmp620 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp622 = (modelica_boolean)tmp620;
  if(tmp622)
  {
    tmp623 = (-data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp621 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp623 = (tmp621?data->localData[0]->realVars[294] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp623, linearSystemData, threadData);
  tmp624 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp626 = (modelica_boolean)tmp624;
  if(tmp626)
  {
    tmp627 = 0.0;
  }
  else
  {
    tmp625 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp627 = (tmp625?data->localData[0]->realVars[292] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp627, linearSystemData, threadData);
  tmp628 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp630 = (modelica_boolean)tmp628;
  if(tmp630)
  {
    tmp631 = data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp629 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp631 = (tmp629?data->localData[0]->realVars[293] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp631, linearSystemData, threadData);
  tmp632 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp634 = (modelica_boolean)tmp632;
  if(tmp634)
  {
    tmp635 = 0.0;
  }
  else
  {
    tmp633 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp635 = (tmp633?data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp635, linearSystemData, threadData);
  tmp636 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp638 = (modelica_boolean)tmp636;
  if(tmp638)
  {
    tmp639 = 0.0;
  }
  else
  {
    tmp637 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp639 = (tmp637?data->localData[0]->realVars[291] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp639, linearSystemData, threadData);
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
  linearSystemData[8].equationIndex = 746;
  linearSystemData[8].size = 5;
  linearSystemData[8].nnz = 14;
  linearSystemData[8].method = 0;
  linearSystemData[8].strictTearingFunctionCall = NULL;
  linearSystemData[8].setA = setLinearMatrixA746;
  linearSystemData[8].setb = setLinearVectorb746;
  linearSystemData[8].initializeStaticLSData = initializeStaticLSData746;
  linearSystemData[8].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 7, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[7].equationIndex = 666;
  linearSystemData[7].size = 5;
  linearSystemData[7].nnz = 14;
  linearSystemData[7].method = 0;
  linearSystemData[7].strictTearingFunctionCall = NULL;
  linearSystemData[7].setA = setLinearMatrixA666;
  linearSystemData[7].setb = setLinearVectorb666;
  linearSystemData[7].initializeStaticLSData = initializeStaticLSData666;
  linearSystemData[7].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 6, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[6].equationIndex = 572;
  linearSystemData[6].size = 5;
  linearSystemData[6].nnz = 14;
  linearSystemData[6].method = 0;
  linearSystemData[6].strictTearingFunctionCall = NULL;
  linearSystemData[6].setA = setLinearMatrixA572;
  linearSystemData[6].setb = setLinearVectorb572;
  linearSystemData[6].initializeStaticLSData = initializeStaticLSData572;
  linearSystemData[6].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 518;
  linearSystemData[5].size = 5;
  linearSystemData[5].nnz = 14;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA518;
  linearSystemData[5].setb = setLinearVectorb518;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData518;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 374;
  linearSystemData[4].size = 5;
  linearSystemData[4].nnz = 14;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA374;
  linearSystemData[4].setb = setLinearVectorb374;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData374;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 313;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA313;
  linearSystemData[3].setb = setLinearVectorb313;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData313;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 260;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA260;
  linearSystemData[2].setb = setLinearVectorb260;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData260;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 226;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA226;
  linearSystemData[1].setb = setLinearVectorb226;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData226;
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

