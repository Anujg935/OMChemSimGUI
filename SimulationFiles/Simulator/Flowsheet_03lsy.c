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
  modelica_boolean tmp20;
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
  modelica_boolean tmp61;
  modelica_real tmp62;
  modelica_boolean tmp63;
  tmp20 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 0, (-((tmp20?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp21 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp23 = (modelica_boolean)tmp21;
  if(tmp23)
  {
    tmp24 = 0.0;
  }
  else
  {
    tmp22 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp24 = (tmp22?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp24)), 1, linearSystemData, threadData);
  tmp25 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp27 = (modelica_boolean)tmp25;
  if(tmp27)
  {
    tmp28 = 0.0;
  }
  else
  {
    tmp26 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp28 = (tmp26?(-data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp28)), 2, linearSystemData, threadData);
  tmp29 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp31 = (modelica_boolean)tmp29;
  if(tmp31)
  {
    tmp32 = 0.0;
  }
  else
  {
    tmp30 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp32 = (tmp30?(-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp32)), 3, linearSystemData, threadData);
  tmp33 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp33?1.0:-0.0))), 4, linearSystemData, threadData);
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
  linearSystemData->setAElement(1, 4, (-(tmp37)), 5, linearSystemData, threadData);
  tmp38 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp40 = (modelica_boolean)tmp38;
  if(tmp40)
  {
    tmp41 = (-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp39 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp41 = (tmp39?-0.0:(-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 2, (-(tmp41)), 6, linearSystemData, threadData);
  tmp42 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp44 = (modelica_boolean)tmp42;
  if(tmp44)
  {
    tmp45 = -0.0;
  }
  else
  {
    tmp43 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp45 = (tmp43?(-data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp45)), 7, linearSystemData, threadData);
  tmp46 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp48 = (modelica_boolean)tmp46;
  if(tmp48)
  {
    tmp49 = 0.0;
  }
  else
  {
    tmp47 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp49 = (tmp47?(-data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp49)), 8, linearSystemData, threadData);
  tmp50 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp52 = (modelica_boolean)tmp50;
  if(tmp52)
  {
    tmp53 = -1.0;
  }
  else
  {
    tmp51 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp53 = (tmp51?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp53)), 9, linearSystemData, threadData);
  tmp54 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp56 = (modelica_boolean)tmp54;
  if(tmp56)
  {
    tmp57 = 0.0;
  }
  else
  {
    tmp55 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp57 = (tmp55?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp57)), 10, linearSystemData, threadData);
  tmp58 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 4, (-((tmp58?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp59 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp61 = (modelica_boolean)tmp59;
  if(tmp61)
  {
    tmp62 = 0.0;
  }
  else
  {
    tmp60 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp62 = (tmp60?(-data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp62)), 12, linearSystemData, threadData);
  tmp63 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp63?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb152(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,152};
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
  modelica_real tmp83;
  tmp64 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = 0.0;
  }
  else
  {
    tmp65 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp67 = (tmp65?data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp67, linearSystemData, threadData);
  tmp68 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = 0.0;
  }
  else
  {
    tmp69 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp71 = (tmp69?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp71, linearSystemData, threadData);
  tmp72 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp74 = (modelica_boolean)tmp72;
  if(tmp74)
  {
    tmp75 = data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp73 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp75 = (tmp73?data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp75, linearSystemData, threadData);
  tmp76 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp78 = (modelica_boolean)tmp76;
  if(tmp78)
  {
    tmp79 = 0.0;
  }
  else
  {
    tmp77 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp79 = (tmp77?data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp79, linearSystemData, threadData);
  tmp80 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp82 = (modelica_boolean)tmp80;
  if(tmp82)
  {
    tmp83 = (-data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp81 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp83 = (tmp81?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp83, linearSystemData, threadData);
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
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_real tmp87;
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  modelica_real tmp91;
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  modelica_real tmp95;
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  modelica_real tmp99;
  modelica_boolean tmp100;
  modelica_boolean tmp101;
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
  modelica_real tmp113;
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  modelica_real tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  modelica_real tmp122;
  modelica_boolean tmp123;
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_real tmp126;
  modelica_boolean tmp127;
  tmp84 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp86 = (modelica_boolean)tmp84;
  if(tmp86)
  {
    tmp87 = (-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp85 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp87 = (tmp85?-0.0:(-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 3, (-(tmp87)), 0, linearSystemData, threadData);
  tmp88 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp90 = (modelica_boolean)tmp88;
  if(tmp90)
  {
    tmp91 = -0.0;
  }
  else
  {
    tmp89 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp91 = (tmp89?(-data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp91)), 1, linearSystemData, threadData);
  tmp92 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp94 = (modelica_boolean)tmp92;
  if(tmp94)
  {
    tmp95 = 0.0;
  }
  else
  {
    tmp93 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp95 = (tmp93?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp95)), 2, linearSystemData, threadData);
  tmp96 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp98 = (modelica_boolean)tmp96;
  if(tmp98)
  {
    tmp99 = 0.0;
  }
  else
  {
    tmp97 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp99 = (tmp97?(-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp99)), 3, linearSystemData, threadData);
  tmp100 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp100?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp101 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp101?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp102 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp104 = (modelica_boolean)tmp102;
  if(tmp104)
  {
    tmp105 = 0.0;
  }
  else
  {
    tmp103 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp105 = (tmp103?(-data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp105)), 6, linearSystemData, threadData);
  tmp106 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp108 = (modelica_boolean)tmp106;
  if(tmp108)
  {
    tmp109 = -1.0;
  }
  else
  {
    tmp107 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp109 = (tmp107?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp109)), 7, linearSystemData, threadData);
  tmp110 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp112 = (modelica_boolean)tmp110;
  if(tmp112)
  {
    tmp113 = 0.0;
  }
  else
  {
    tmp111 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp113 = (tmp111?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp113)), 8, linearSystemData, threadData);
  tmp114 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp114?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp115 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp117 = (modelica_boolean)tmp115;
  if(tmp117)
  {
    tmp118 = 0.0;
  }
  else
  {
    tmp116 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp118 = (tmp116?(-data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp118)), 10, linearSystemData, threadData);
  tmp119 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp121 = (modelica_boolean)tmp119;
  if(tmp121)
  {
    tmp122 = 0.0;
  }
  else
  {
    tmp120 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp122 = (tmp120?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp122)), 11, linearSystemData, threadData);
  tmp123 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp125 = (modelica_boolean)tmp123;
  if(tmp125)
  {
    tmp126 = 0.0;
  }
  else
  {
    tmp124 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp126 = (tmp124?(-data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp126)), 12, linearSystemData, threadData);
  tmp127 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 2, (-((tmp127?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb77(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,77};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  modelica_real tmp143;
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  modelica_real tmp147;
  tmp128 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp130 = (modelica_boolean)tmp128;
  if(tmp130)
  {
    tmp131 = data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp129 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp131 = (tmp129?data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp131, linearSystemData, threadData);
  tmp132 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp134 = (modelica_boolean)tmp132;
  if(tmp134)
  {
    tmp135 = 0.0;
  }
  else
  {
    tmp133 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp135 = (tmp133?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp135, linearSystemData, threadData);
  tmp136 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp138 = (modelica_boolean)tmp136;
  if(tmp138)
  {
    tmp139 = 0.0;
  }
  else
  {
    tmp137 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp139 = (tmp137?data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp139, linearSystemData, threadData);
  tmp140 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp142 = (modelica_boolean)tmp140;
  if(tmp142)
  {
    tmp143 = 0.0;
  }
  else
  {
    tmp141 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp143 = (tmp141?data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp143, linearSystemData, threadData);
  tmp144 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp146 = (modelica_boolean)tmp144;
  if(tmp146)
  {
    tmp147 = (-data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp145 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp147 = (tmp145?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp147, linearSystemData, threadData);
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

