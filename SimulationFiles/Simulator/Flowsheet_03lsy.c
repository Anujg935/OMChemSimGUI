/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA152(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,152};
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
  modelica_boolean tmp41;
  modelica_real tmp42;
  modelica_boolean tmp43;
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 0, (-((tmp0?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp3 = (modelica_boolean)tmp1;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp2 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp4 = (tmp2?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp4)), 1, linearSystemData, threadData);
  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = 0.0;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp8 = (tmp6?(-data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp8)), 2, linearSystemData, threadData);
  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = 0.0;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp12 = (tmp10?(-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp12)), 3, linearSystemData, threadData);
  tmp13 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp13?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp14 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp16 = (modelica_boolean)tmp14;
  if(tmp16)
  {
    tmp17 = 0.0;
  }
  else
  {
    tmp15 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp17 = (tmp15?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp17)), 5, linearSystemData, threadData);
  tmp18 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp20 = (modelica_boolean)tmp18;
  if(tmp20)
  {
    tmp21 = (-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp19 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp21 = (tmp19?-0.0:(-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 2, (-(tmp21)), 6, linearSystemData, threadData);
  tmp22 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp24 = (modelica_boolean)tmp22;
  if(tmp24)
  {
    tmp25 = -0.0;
  }
  else
  {
    tmp23 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp25 = (tmp23?(-data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp25)), 7, linearSystemData, threadData);
  tmp26 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = 0.0;
  }
  else
  {
    tmp27 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp29 = (tmp27?(-data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp29)), 8, linearSystemData, threadData);
  tmp30 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = -1.0;
  }
  else
  {
    tmp31 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp33 = (tmp31?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp33)), 9, linearSystemData, threadData);
  tmp34 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp36 = (modelica_boolean)tmp34;
  if(tmp36)
  {
    tmp37 = 0.0;
  }
  else
  {
    tmp35 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp37 = (tmp35?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp37)), 10, linearSystemData, threadData);
  tmp38 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 4, (-((tmp38?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp39 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp41 = (modelica_boolean)tmp39;
  if(tmp41)
  {
    tmp42 = 0.0;
  }
  else
  {
    tmp40 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp42 = (tmp40?(-data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp42)), 12, linearSystemData, threadData);
  tmp43 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp43?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb152(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,152};
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
  tmp44 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp46 = (modelica_boolean)tmp44;
  if(tmp46)
  {
    tmp47 = 0.0;
  }
  else
  {
    tmp45 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp47 = (tmp45?data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp47, linearSystemData, threadData);
  tmp48 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp50 = (modelica_boolean)tmp48;
  if(tmp50)
  {
    tmp51 = 0.0;
  }
  else
  {
    tmp49 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp51 = (tmp49?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp51, linearSystemData, threadData);
  tmp52 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp53 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp55 = (tmp53?data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp55, linearSystemData, threadData);
  tmp56 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = 0.0;
  }
  else
  {
    tmp57 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp59 = (tmp57?data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp59, linearSystemData, threadData);
  tmp60 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = (-data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp61 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp63 = (tmp61?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp63, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData152(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[17].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[17].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[17].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[21].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[21].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[21].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA77(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,77};
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
  modelica_real tmp106;
  modelica_boolean tmp107;
  tmp64 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = (-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp65 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp67 = (tmp65?-0.0:(-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 3, (-(tmp67)), 0, linearSystemData, threadData);
  tmp68 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = -0.0;
  }
  else
  {
    tmp69 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp71 = (tmp69?(-data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp71)), 1, linearSystemData, threadData);
  tmp72 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp74 = (modelica_boolean)tmp72;
  if(tmp74)
  {
    tmp75 = 0.0;
  }
  else
  {
    tmp73 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp75 = (tmp73?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp75)), 2, linearSystemData, threadData);
  tmp76 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp78 = (modelica_boolean)tmp76;
  if(tmp78)
  {
    tmp79 = 0.0;
  }
  else
  {
    tmp77 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp79 = (tmp77?(-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp79)), 3, linearSystemData, threadData);
  tmp80 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp80?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp81 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp81?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp82 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp84 = (modelica_boolean)tmp82;
  if(tmp84)
  {
    tmp85 = 0.0;
  }
  else
  {
    tmp83 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp85 = (tmp83?(-data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp85)), 6, linearSystemData, threadData);
  tmp86 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp88 = (modelica_boolean)tmp86;
  if(tmp88)
  {
    tmp89 = -1.0;
  }
  else
  {
    tmp87 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp89 = (tmp87?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp89)), 7, linearSystemData, threadData);
  tmp90 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp92 = (modelica_boolean)tmp90;
  if(tmp92)
  {
    tmp93 = 0.0;
  }
  else
  {
    tmp91 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp93 = (tmp91?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp93)), 8, linearSystemData, threadData);
  tmp94 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp94?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp95 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp97 = (modelica_boolean)tmp95;
  if(tmp97)
  {
    tmp98 = 0.0;
  }
  else
  {
    tmp96 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp98 = (tmp96?(-data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp98)), 10, linearSystemData, threadData);
  tmp99 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp101 = (modelica_boolean)tmp99;
  if(tmp101)
  {
    tmp102 = 0.0;
  }
  else
  {
    tmp100 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp102 = (tmp100?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp102)), 11, linearSystemData, threadData);
  tmp103 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp105 = (modelica_boolean)tmp103;
  if(tmp105)
  {
    tmp106 = 0.0;
  }
  else
  {
    tmp104 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp106 = (tmp104?(-data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp106)), 12, linearSystemData, threadData);
  tmp107 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 2, (-((tmp107?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb77(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,77};
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
  tmp108 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp110 = (modelica_boolean)tmp108;
  if(tmp110)
  {
    tmp111 = data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp109 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp111 = (tmp109?data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp111, linearSystemData, threadData);
  tmp112 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp114 = (modelica_boolean)tmp112;
  if(tmp114)
  {
    tmp115 = 0.0;
  }
  else
  {
    tmp113 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp115 = (tmp113?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp115, linearSystemData, threadData);
  tmp116 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp118 = (modelica_boolean)tmp116;
  if(tmp118)
  {
    tmp119 = 0.0;
  }
  else
  {
    tmp117 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp119 = (tmp117?data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp119, linearSystemData, threadData);
  tmp120 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp122 = (modelica_boolean)tmp120;
  if(tmp122)
  {
    tmp123 = 0.0;
  }
  else
  {
    tmp121 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp123 = (tmp121?data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp123, linearSystemData, threadData);
  tmp124 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp126 = (modelica_boolean)tmp124;
  if(tmp126)
  {
    tmp127 = (-data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp125 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp127 = (tmp125?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp127, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData77(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[17].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[17].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[17].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[21].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[21].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[21].attribute /* MatStm1.compMasFrac[3,1] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 152;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA152;
  linearSystemData[1].setb = setLinearVectorb152;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData152;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 77;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA77;
  linearSystemData[0].setb = setLinearVectorb77;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData77;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

