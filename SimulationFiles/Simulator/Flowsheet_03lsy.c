/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA430(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,430};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_real tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_real tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_real tmp52;
  modelica_boolean tmp53;
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
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_real tmp70;
  modelica_boolean tmp71;
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
  RELATIONHYSTERESIS(tmp40, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp40?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp41, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp43 = (modelica_boolean)tmp41;
  if(tmp43)
  {
    tmp44 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp42, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp44 = (tmp42?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp44)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp45, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp47 = (modelica_boolean)tmp45;
  if(tmp47)
  {
    tmp48 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp46, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp48 = (tmp46?(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp48)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp49, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp51 = (modelica_boolean)tmp49;
  if(tmp51)
  {
    tmp52 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp50, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp52 = (tmp50?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp52)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp53, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 1, (-((tmp53?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp54, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp56 = (modelica_boolean)tmp54;
  if(tmp56)
  {
    tmp57 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp55, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp57 = (tmp55?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp57)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp58, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp60 = (modelica_boolean)tmp58;
  if(tmp60)
  {
    tmp61 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp59, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp61 = (tmp59?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp61)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp62, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp64 = (modelica_boolean)tmp62;
  if(tmp64)
  {
    tmp65 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp63, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp65 = (tmp63?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp65)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp66, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 3, (-((tmp66?1.0:-0.0))), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp67, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp69 = (modelica_boolean)tmp67;
  if(tmp69)
  {
    tmp70 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp68, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp70 = (tmp68?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp70)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp71, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 2, (-((tmp71?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp72, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp74 = (modelica_boolean)tmp72;
  if(tmp74)
  {
    tmp75 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp73, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp75 = (tmp73?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp75)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp76, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp78 = (modelica_boolean)tmp76;
  if(tmp78)
  {
    tmp79 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp77, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp79 = (tmp77?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp79)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp80, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp82 = (modelica_boolean)tmp80;
  if(tmp82)
  {
    tmp83 = (-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp81, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp83 = (tmp81?-0.0:(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 4, (-(tmp83)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb430(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,430};
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
  modelica_real tmp103;
  RELATIONHYSTERESIS(tmp84, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp86 = (modelica_boolean)tmp84;
  if(tmp86)
  {
    tmp87 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp85, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp87 = (tmp85?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp87, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp88, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp90 = (modelica_boolean)tmp88;
  if(tmp90)
  {
    tmp91 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp89, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp91 = (tmp89?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp91, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp92, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp94 = (modelica_boolean)tmp92;
  if(tmp94)
  {
    tmp95 = (-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp93, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp95 = (tmp93?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp95, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp96, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp98 = (modelica_boolean)tmp96;
  if(tmp98)
  {
    tmp99 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp97, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp99 = (tmp97?data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp99, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp100, 101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp102 = (modelica_boolean)tmp100;
  if(tmp102)
  {
    tmp103 = data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp101, 101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp103 = (tmp101?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp103, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData430(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
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
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA378(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,378};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  modelica_real tmp108;
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  modelica_real tmp112;
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  modelica_real tmp116;
  modelica_boolean tmp117;
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
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  modelica_real tmp134;
  modelica_boolean tmp135;
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
  tmp104 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp104?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp105 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp107 = (modelica_boolean)tmp105;
  if(tmp107)
  {
    tmp108 = 0.0;
  }
  else
  {
    tmp106 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp108 = (tmp106?(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp108)), 1, linearSystemData, threadData);
  tmp109 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp111 = (modelica_boolean)tmp109;
  if(tmp111)
  {
    tmp112 = 0.0;
  }
  else
  {
    tmp110 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp112 = (tmp110?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp112)), 2, linearSystemData, threadData);
  tmp113 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp115 = (modelica_boolean)tmp113;
  if(tmp115)
  {
    tmp116 = 0.0;
  }
  else
  {
    tmp114 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp116 = (tmp114?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp116)), 3, linearSystemData, threadData);
  tmp117 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp117?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp118 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp120 = (modelica_boolean)tmp118;
  if(tmp120)
  {
    tmp121 = -1.0;
  }
  else
  {
    tmp119 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp121 = (tmp119?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp121)), 5, linearSystemData, threadData);
  tmp122 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp124 = (modelica_boolean)tmp122;
  if(tmp124)
  {
    tmp125 = 0.0;
  }
  else
  {
    tmp123 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp125 = (tmp123?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp125)), 6, linearSystemData, threadData);
  tmp126 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp128 = (modelica_boolean)tmp126;
  if(tmp128)
  {
    tmp129 = 0.0;
  }
  else
  {
    tmp127 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp129 = (tmp127?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp129)), 7, linearSystemData, threadData);
  tmp130 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp130?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp131 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp133 = (modelica_boolean)tmp131;
  if(tmp133)
  {
    tmp134 = 0.0;
  }
  else
  {
    tmp132 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp134 = (tmp132?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp134)), 9, linearSystemData, threadData);
  tmp135 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp135?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp136 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp138 = (modelica_boolean)tmp136;
  if(tmp138)
  {
    tmp139 = 0.0;
  }
  else
  {
    tmp137 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp139 = (tmp137?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp139)), 11, linearSystemData, threadData);
  tmp140 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp142 = (modelica_boolean)tmp140;
  if(tmp142)
  {
    tmp143 = (-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp141 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp143 = (tmp141?-0.0:(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp143)), 12, linearSystemData, threadData);
  tmp144 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp146 = (modelica_boolean)tmp144;
  if(tmp146)
  {
    tmp147 = -0.0;
  }
  else
  {
    tmp145 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp147 = (tmp145?(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp147)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb378(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,378};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp159;
  modelica_boolean tmp160;
  modelica_boolean tmp161;
  modelica_boolean tmp162;
  modelica_real tmp163;
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  modelica_real tmp167;
  tmp148 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp150 = (modelica_boolean)tmp148;
  if(tmp150)
  {
    tmp151 = (-data->localData[0]->realVars[204] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp149 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp151 = (tmp149?data->localData[0]->realVars[202] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[204] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp151, linearSystemData, threadData);
  tmp152 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp154 = (modelica_boolean)tmp152;
  if(tmp154)
  {
    tmp155 = 0.0;
  }
  else
  {
    tmp153 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp155 = (tmp153?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp155, linearSystemData, threadData);
  tmp156 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp158 = (modelica_boolean)tmp156;
  if(tmp158)
  {
    tmp159 = 0.0;
  }
  else
  {
    tmp157 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp159 = (tmp157?data->localData[0]->realVars[200] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp159, linearSystemData, threadData);
  tmp160 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp162 = (modelica_boolean)tmp160;
  if(tmp162)
  {
    tmp163 = 0.0;
  }
  else
  {
    tmp161 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp163 = (tmp161?data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp163, linearSystemData, threadData);
  tmp164 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp166 = (modelica_boolean)tmp164;
  if(tmp166)
  {
    tmp167 = data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp165 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp167 = (tmp165?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp167, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData378(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[203].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[203].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[203].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp168;
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  modelica_real tmp171;
  modelica_boolean tmp172;
  modelica_boolean tmp173;
  modelica_boolean tmp174;
  modelica_real tmp175;
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  modelica_boolean tmp178;
  modelica_boolean tmp179;
  modelica_real tmp180;
  modelica_boolean tmp181;
  modelica_boolean tmp182;
  modelica_boolean tmp183;
  modelica_real tmp184;
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  modelica_boolean tmp187;
  modelica_boolean tmp188;
  modelica_real tmp189;
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  modelica_boolean tmp192;
  modelica_boolean tmp193;
  modelica_real tmp194;
  modelica_boolean tmp195;
  modelica_boolean tmp196;
  modelica_boolean tmp197;
  modelica_real tmp198;
  modelica_boolean tmp199;
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
  tmp168 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp170 = (modelica_boolean)tmp168;
  if(tmp170)
  {
    tmp171 = -1.0;
  }
  else
  {
    tmp169 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp171 = (tmp169?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp171)), 0, linearSystemData, threadData);
  tmp172 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp174 = (modelica_boolean)tmp172;
  if(tmp174)
  {
    tmp175 = 0.0;
  }
  else
  {
    tmp173 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp175 = (tmp173?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp175)), 1, linearSystemData, threadData);
  tmp176 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp176?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp177 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp179 = (modelica_boolean)tmp177;
  if(tmp179)
  {
    tmp180 = 0.0;
  }
  else
  {
    tmp178 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp180 = (tmp178?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp180)), 3, linearSystemData, threadData);
  tmp181 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp183 = (modelica_boolean)tmp181;
  if(tmp183)
  {
    tmp184 = 0.0;
  }
  else
  {
    tmp182 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp184 = (tmp182?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp184)), 4, linearSystemData, threadData);
  tmp185 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp185?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp186 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp188 = (modelica_boolean)tmp186;
  if(tmp188)
  {
    tmp189 = 0.0;
  }
  else
  {
    tmp187 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp189 = (tmp187?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp189)), 6, linearSystemData, threadData);
  tmp190 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp190?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp191 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp193 = (modelica_boolean)tmp191;
  if(tmp193)
  {
    tmp194 = 0.0;
  }
  else
  {
    tmp192 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp194 = (tmp192?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp194)), 8, linearSystemData, threadData);
  tmp195 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp197 = (modelica_boolean)tmp195;
  if(tmp197)
  {
    tmp198 = 0.0;
  }
  else
  {
    tmp196 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp198 = (tmp196?(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp198)), 9, linearSystemData, threadData);
  tmp199 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp199?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp200 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp202 = (modelica_boolean)tmp200;
  if(tmp202)
  {
    tmp203 = 0.0;
  }
  else
  {
    tmp201 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp203 = (tmp201?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp203)), 11, linearSystemData, threadData);
  tmp204 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp206 = (modelica_boolean)tmp204;
  if(tmp206)
  {
    tmp207 = (-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp205 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp207 = (tmp205?-0.0:(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp207)), 12, linearSystemData, threadData);
  tmp208 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp210 = (modelica_boolean)tmp208;
  if(tmp210)
  {
    tmp211 = -0.0;
  }
  else
  {
    tmp209 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp211 = (tmp209?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp211)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp212;
  modelica_boolean tmp213;
  modelica_boolean tmp214;
  modelica_real tmp215;
  modelica_boolean tmp216;
  modelica_boolean tmp217;
  modelica_boolean tmp218;
  modelica_real tmp219;
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
  modelica_real tmp231;
  tmp212 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp214 = (modelica_boolean)tmp212;
  if(tmp214)
  {
    tmp215 = 0.0;
  }
  else
  {
    tmp213 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp215 = (tmp213?data->localData[0]->realVars[110] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp215, linearSystemData, threadData);
  tmp216 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp218 = (modelica_boolean)tmp216;
  if(tmp218)
  {
    tmp219 = (-data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp217 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp219 = (tmp217?data->localData[0]->realVars[112] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp219, linearSystemData, threadData);
  tmp220 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp222 = (modelica_boolean)tmp220;
  if(tmp222)
  {
    tmp223 = 0.0;
  }
  else
  {
    tmp221 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp223 = (tmp221?data->localData[0]->realVars[109] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp223, linearSystemData, threadData);
  tmp224 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp226 = (modelica_boolean)tmp224;
  if(tmp226)
  {
    tmp227 = 0.0;
  }
  else
  {
    tmp225 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp227 = (tmp225?data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp227, linearSystemData, threadData);
  tmp228 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp230 = (modelica_boolean)tmp228;
  if(tmp230)
  {
    tmp231 = data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp229 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp231 = (tmp229?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp231, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData325(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[113].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[113].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[113].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA210(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,210};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  modelica_boolean tmp234;
  modelica_real tmp235;
  modelica_boolean tmp236;
  modelica_boolean tmp237;
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
  modelica_boolean tmp258;
  modelica_boolean tmp259;
  modelica_boolean tmp260;
  modelica_real tmp261;
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  modelica_real tmp266;
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  modelica_real tmp271;
  modelica_boolean tmp272;
  modelica_boolean tmp273;
  modelica_boolean tmp274;
  modelica_real tmp275;
  tmp232 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp234 = (modelica_boolean)tmp232;
  if(tmp234)
  {
    tmp235 = 0.0;
  }
  else
  {
    tmp233 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp235 = (tmp233?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp235)), 0, linearSystemData, threadData);
  tmp236 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp236?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp237 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp237?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp238 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp240 = (modelica_boolean)tmp238;
  if(tmp240)
  {
    tmp241 = 0.0;
  }
  else
  {
    tmp239 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp241 = (tmp239?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp241)), 3, linearSystemData, threadData);
  tmp242 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp244 = (modelica_boolean)tmp242;
  if(tmp244)
  {
    tmp245 = -1.0;
  }
  else
  {
    tmp243 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp245 = (tmp243?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp245)), 4, linearSystemData, threadData);
  tmp246 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp248 = (modelica_boolean)tmp246;
  if(tmp248)
  {
    tmp249 = 0.0;
  }
  else
  {
    tmp247 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp249 = (tmp247?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp249)), 5, linearSystemData, threadData);
  tmp250 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp252 = (modelica_boolean)tmp250;
  if(tmp252)
  {
    tmp253 = -0.0;
  }
  else
  {
    tmp251 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp253 = (tmp251?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp253)), 6, linearSystemData, threadData);
  tmp254 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp256 = (modelica_boolean)tmp254;
  if(tmp256)
  {
    tmp257 = (-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp255 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp257 = (tmp255?-0.0:(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 3, (-(tmp257)), 7, linearSystemData, threadData);
  tmp258 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp260 = (modelica_boolean)tmp258;
  if(tmp260)
  {
    tmp261 = 0.0;
  }
  else
  {
    tmp259 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp261 = (tmp259?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp261)), 8, linearSystemData, threadData);
  tmp262 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 2, (-((tmp262?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp263 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp265 = (modelica_boolean)tmp263;
  if(tmp265)
  {
    tmp266 = 0.0;
  }
  else
  {
    tmp264 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp266 = (tmp264?(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp266)), 10, linearSystemData, threadData);
  tmp267 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp267?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp268 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp270 = (modelica_boolean)tmp268;
  if(tmp270)
  {
    tmp271 = 0.0;
  }
  else
  {
    tmp269 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp271 = (tmp269?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp271)), 12, linearSystemData, threadData);
  tmp272 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp274 = (modelica_boolean)tmp272;
  if(tmp274)
  {
    tmp275 = 0.0;
  }
  else
  {
    tmp273 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp275 = (tmp273?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp275)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb210(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,210};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp287;
  modelica_boolean tmp288;
  modelica_boolean tmp289;
  modelica_boolean tmp290;
  modelica_real tmp291;
  modelica_boolean tmp292;
  modelica_boolean tmp293;
  modelica_boolean tmp294;
  modelica_real tmp295;
  tmp276 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp278 = (modelica_boolean)tmp276;
  if(tmp278)
  {
    tmp279 = (-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp277 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp279 = (tmp277?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp279, linearSystemData, threadData);
  tmp280 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp282 = (modelica_boolean)tmp280;
  if(tmp282)
  {
    tmp283 = 0.0;
  }
  else
  {
    tmp281 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp283 = (tmp281?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp283, linearSystemData, threadData);
  tmp284 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp286 = (modelica_boolean)tmp284;
  if(tmp286)
  {
    tmp287 = data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp285 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp287 = (tmp285?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp287, linearSystemData, threadData);
  tmp288 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp290 = (modelica_boolean)tmp288;
  if(tmp290)
  {
    tmp291 = 0.0;
  }
  else
  {
    tmp289 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp291 = (tmp289?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp291, linearSystemData, threadData);
  tmp292 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp294 = (modelica_boolean)tmp292;
  if(tmp294)
  {
    tmp295 = 0.0;
  }
  else
  {
    tmp293 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp295 = (tmp293?data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp295, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData210(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA169(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,169};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp296;
  modelica_boolean tmp297;
  modelica_boolean tmp298;
  modelica_boolean tmp299;
  modelica_real tmp300;
  modelica_boolean tmp301;
  modelica_boolean tmp302;
  modelica_boolean tmp303;
  modelica_real tmp304;
  modelica_boolean tmp305;
  modelica_boolean tmp306;
  modelica_boolean tmp307;
  modelica_real tmp308;
  modelica_boolean tmp309;
  modelica_boolean tmp310;
  modelica_boolean tmp311;
  modelica_boolean tmp312;
  modelica_boolean tmp313;
  modelica_real tmp314;
  modelica_boolean tmp315;
  modelica_boolean tmp316;
  modelica_boolean tmp317;
  modelica_real tmp318;
  modelica_boolean tmp319;
  modelica_boolean tmp320;
  modelica_boolean tmp321;
  modelica_real tmp322;
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
  modelica_real tmp339;
  tmp296 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp296?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp297 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp299 = (modelica_boolean)tmp297;
  if(tmp299)
  {
    tmp300 = 0.0;
  }
  else
  {
    tmp298 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp300 = (tmp298?(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp300)), 1, linearSystemData, threadData);
  tmp301 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp303 = (modelica_boolean)tmp301;
  if(tmp303)
  {
    tmp304 = 0.0;
  }
  else
  {
    tmp302 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp304 = (tmp302?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp304)), 2, linearSystemData, threadData);
  tmp305 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp307 = (modelica_boolean)tmp305;
  if(tmp307)
  {
    tmp308 = 0.0;
  }
  else
  {
    tmp306 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp308 = (tmp306?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp308)), 3, linearSystemData, threadData);
  tmp309 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp309?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp310 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp310?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp311 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp313 = (modelica_boolean)tmp311;
  if(tmp313)
  {
    tmp314 = 0.0;
  }
  else
  {
    tmp312 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp314 = (tmp312?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp314)), 6, linearSystemData, threadData);
  tmp315 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp317 = (modelica_boolean)tmp315;
  if(tmp317)
  {
    tmp318 = -1.0;
  }
  else
  {
    tmp316 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp318 = (tmp316?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp318)), 7, linearSystemData, threadData);
  tmp319 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp321 = (modelica_boolean)tmp319;
  if(tmp321)
  {
    tmp322 = 0.0;
  }
  else
  {
    tmp320 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp322 = (tmp320?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp322)), 8, linearSystemData, threadData);
  tmp323 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp325 = (modelica_boolean)tmp323;
  if(tmp325)
  {
    tmp326 = -0.0;
  }
  else
  {
    tmp324 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp326 = (tmp324?(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp326)), 9, linearSystemData, threadData);
  tmp327 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp329 = (modelica_boolean)tmp327;
  if(tmp329)
  {
    tmp330 = (-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp328 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp330 = (tmp328?-0.0:(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp330)), 10, linearSystemData, threadData);
  tmp331 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp333 = (modelica_boolean)tmp331;
  if(tmp333)
  {
    tmp334 = 0.0;
  }
  else
  {
    tmp332 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp334 = (tmp332?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp334)), 11, linearSystemData, threadData);
  tmp335 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp335?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp336 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp338 = (modelica_boolean)tmp336;
  if(tmp338)
  {
    tmp339 = 0.0;
  }
  else
  {
    tmp337 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp339 = (tmp337?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp339)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb169(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,169};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp340;
  modelica_boolean tmp341;
  modelica_boolean tmp342;
  modelica_real tmp343;
  modelica_boolean tmp344;
  modelica_boolean tmp345;
  modelica_boolean tmp346;
  modelica_real tmp347;
  modelica_boolean tmp348;
  modelica_boolean tmp349;
  modelica_boolean tmp350;
  modelica_real tmp351;
  modelica_boolean tmp352;
  modelica_boolean tmp353;
  modelica_boolean tmp354;
  modelica_real tmp355;
  modelica_boolean tmp356;
  modelica_boolean tmp357;
  modelica_boolean tmp358;
  modelica_real tmp359;
  tmp340 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp342 = (modelica_boolean)tmp340;
  if(tmp342)
  {
    tmp343 = (-data->localData[0]->realVars[204] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp341 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp343 = (tmp341?data->localData[0]->realVars[202] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[204] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp343, linearSystemData, threadData);
  tmp344 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp346 = (modelica_boolean)tmp344;
  if(tmp346)
  {
    tmp347 = 0.0;
  }
  else
  {
    tmp345 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp347 = (tmp345?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp347, linearSystemData, threadData);
  tmp348 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp350 = (modelica_boolean)tmp348;
  if(tmp350)
  {
    tmp351 = 0.0;
  }
  else
  {
    tmp349 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp351 = (tmp349?data->localData[0]->realVars[200] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp351, linearSystemData, threadData);
  tmp352 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp354 = (modelica_boolean)tmp352;
  if(tmp354)
  {
    tmp355 = data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp353 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp355 = (tmp353?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp355, linearSystemData, threadData);
  tmp356 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp358 = (modelica_boolean)tmp356;
  if(tmp358)
  {
    tmp359 = 0.0;
  }
  else
  {
    tmp357 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp359 = (tmp357?data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp359, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData169(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[203].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[203].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[203].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA115(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,115};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp360;
  modelica_boolean tmp361;
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  modelica_real tmp364;
  modelica_boolean tmp365;
  modelica_boolean tmp366;
  modelica_boolean tmp367;
  modelica_real tmp368;
  modelica_boolean tmp369;
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  modelica_real tmp372;
  modelica_boolean tmp373;
  modelica_boolean tmp374;
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  modelica_boolean tmp377;
  modelica_real tmp378;
  modelica_boolean tmp379;
  modelica_boolean tmp380;
  modelica_boolean tmp381;
  modelica_real tmp382;
  modelica_boolean tmp383;
  modelica_boolean tmp384;
  modelica_boolean tmp385;
  modelica_real tmp386;
  modelica_boolean tmp387;
  modelica_boolean tmp388;
  modelica_boolean tmp389;
  modelica_real tmp390;
  modelica_boolean tmp391;
  modelica_boolean tmp392;
  modelica_boolean tmp393;
  modelica_real tmp394;
  modelica_boolean tmp395;
  modelica_boolean tmp396;
  modelica_boolean tmp397;
  modelica_real tmp398;
  modelica_boolean tmp399;
  modelica_boolean tmp400;
  modelica_boolean tmp401;
  modelica_real tmp402;
  modelica_boolean tmp403;
  tmp360 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp360?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp361 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp363 = (modelica_boolean)tmp361;
  if(tmp363)
  {
    tmp364 = 0.0;
  }
  else
  {
    tmp362 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp364 = (tmp362?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp364)), 1, linearSystemData, threadData);
  tmp365 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp367 = (modelica_boolean)tmp365;
  if(tmp367)
  {
    tmp368 = 0.0;
  }
  else
  {
    tmp366 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp368 = (tmp366?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp368)), 2, linearSystemData, threadData);
  tmp369 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp371 = (modelica_boolean)tmp369;
  if(tmp371)
  {
    tmp372 = 0.0;
  }
  else
  {
    tmp370 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp372 = (tmp370?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp372)), 3, linearSystemData, threadData);
  tmp373 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp373?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp374 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp374?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp375 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp377 = (modelica_boolean)tmp375;
  if(tmp377)
  {
    tmp378 = -1.0;
  }
  else
  {
    tmp376 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp378 = (tmp376?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp378)), 6, linearSystemData, threadData);
  tmp379 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp381 = (modelica_boolean)tmp379;
  if(tmp381)
  {
    tmp382 = 0.0;
  }
  else
  {
    tmp380 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp382 = (tmp380?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp382)), 7, linearSystemData, threadData);
  tmp383 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp385 = (modelica_boolean)tmp383;
  if(tmp385)
  {
    tmp386 = 0.0;
  }
  else
  {
    tmp384 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp386 = (tmp384?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp386)), 8, linearSystemData, threadData);
  tmp387 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp389 = (modelica_boolean)tmp387;
  if(tmp389)
  {
    tmp390 = (-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp388 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp390 = (tmp388?-0.0:(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 1, (-(tmp390)), 9, linearSystemData, threadData);
  tmp391 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp393 = (modelica_boolean)tmp391;
  if(tmp393)
  {
    tmp394 = -0.0;
  }
  else
  {
    tmp392 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp394 = (tmp392?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp394)), 10, linearSystemData, threadData);
  tmp395 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp397 = (modelica_boolean)tmp395;
  if(tmp397)
  {
    tmp398 = 0.0;
  }
  else
  {
    tmp396 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp398 = (tmp396?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp398)), 11, linearSystemData, threadData);
  tmp399 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp401 = (modelica_boolean)tmp399;
  if(tmp401)
  {
    tmp402 = 0.0;
  }
  else
  {
    tmp400 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp402 = (tmp400?(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp402)), 12, linearSystemData, threadData);
  tmp403 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 2, (-((tmp403?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb115(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,115};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp404;
  modelica_boolean tmp405;
  modelica_boolean tmp406;
  modelica_real tmp407;
  modelica_boolean tmp408;
  modelica_boolean tmp409;
  modelica_boolean tmp410;
  modelica_real tmp411;
  modelica_boolean tmp412;
  modelica_boolean tmp413;
  modelica_boolean tmp414;
  modelica_real tmp415;
  modelica_boolean tmp416;
  modelica_boolean tmp417;
  modelica_boolean tmp418;
  modelica_real tmp419;
  modelica_boolean tmp420;
  modelica_boolean tmp421;
  modelica_boolean tmp422;
  modelica_real tmp423;
  tmp404 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp406 = (modelica_boolean)tmp404;
  if(tmp406)
  {
    tmp407 = (-data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp405 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp407 = (tmp405?data->localData[0]->realVars[112] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp407, linearSystemData, threadData);
  tmp408 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp410 = (modelica_boolean)tmp408;
  if(tmp410)
  {
    tmp411 = 0.0;
  }
  else
  {
    tmp409 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp411 = (tmp409?data->localData[0]->realVars[109] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp411, linearSystemData, threadData);
  tmp412 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp414 = (modelica_boolean)tmp412;
  if(tmp414)
  {
    tmp415 = 0.0;
  }
  else
  {
    tmp413 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp415 = (tmp413?data->localData[0]->realVars[110] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp415, linearSystemData, threadData);
  tmp416 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp418 = (modelica_boolean)tmp416;
  if(tmp418)
  {
    tmp419 = data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp417 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp419 = (tmp417?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp419, linearSystemData, threadData);
  tmp420 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp422 = (modelica_boolean)tmp420;
  if(tmp422)
  {
    tmp423 = 0.0;
  }
  else
  {
    tmp421 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp423 = (tmp421?data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp423, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData115(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[113].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[113].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[113].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,2] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 430;
  linearSystemData[5].size = 5;
  linearSystemData[5].nnz = 14;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA430;
  linearSystemData[5].setb = setLinearVectorb430;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData430;
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
  linearSystemData[2].equationIndex = 210;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA210;
  linearSystemData[2].setb = setLinearVectorb210;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData210;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 169;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA169;
  linearSystemData[1].setb = setLinearVectorb169;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData169;
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

