/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
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
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  modelica_boolean tmp67;
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
  modelica_real tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  modelica_real tmp85;
  RELATIONHYSTERESIS(tmp42, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp44 = (modelica_boolean)tmp42;
  if(tmp44)
  {
    tmp45 = (-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp43, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp45 = (tmp43?-0.0:(-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 2, (-(tmp45)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp46, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp48 = (modelica_boolean)tmp46;
  if(tmp48)
  {
    tmp49 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp47, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp49 = (tmp47?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp49)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp50, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp52 = (modelica_boolean)tmp50;
  if(tmp52)
  {
    tmp53 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp51, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp53 = (tmp51?(-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp53)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp54, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp56 = (modelica_boolean)tmp54;
  if(tmp56)
  {
    tmp57 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp55, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp57 = (tmp55?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp57)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp58, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 4, (-((tmp58?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp59, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp61 = (modelica_boolean)tmp59;
  if(tmp61)
  {
    tmp62 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp60, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp62 = (tmp60?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp62)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp63, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp65 = (modelica_boolean)tmp63;
  if(tmp65)
  {
    tmp66 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp64, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp66 = (tmp64?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp66)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp67, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 3, (-((tmp67?1.0:-0.0))), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp68, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp69, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp71 = (tmp69?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp71)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp72, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp74 = (modelica_boolean)tmp72;
  if(tmp74)
  {
    tmp75 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp73, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp75 = (tmp73?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp75)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp76, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 1, (-((tmp76?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp77, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp79 = (modelica_boolean)tmp77;
  if(tmp79)
  {
    tmp80 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp78, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp80 = (tmp78?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp80)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp81, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(4, 0, (-((tmp81?1.0:-0.0))), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp82, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp84 = (modelica_boolean)tmp82;
  if(tmp84)
  {
    tmp85 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp83, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp85 = (tmp83?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp85)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb428(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,428};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  RELATIONHYSTERESIS(tmp86, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp88 = (modelica_boolean)tmp86;
  if(tmp88)
  {
    tmp89 = data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp87, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp89 = (tmp87?data->localData[0]->realVars[200] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp89, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp90, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp92 = (modelica_boolean)tmp90;
  if(tmp92)
  {
    tmp93 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp91, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp93 = (tmp91?data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp93, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp94, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp96 = (modelica_boolean)tmp94;
  if(tmp96)
  {
    tmp97 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp95, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp97 = (tmp95?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp97, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp98, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp100 = (modelica_boolean)tmp98;
  if(tmp100)
  {
    tmp101 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp99, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp101 = (tmp99?data->localData[0]->realVars[198] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp101, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp102, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp104 = (modelica_boolean)tmp102;
  if(tmp104)
  {
    tmp105 = (-data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp103, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp105 = (tmp103?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp105, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData428(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA379(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,379};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  modelica_real tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  modelica_real tmp123;
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  modelica_real tmp128;
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  modelica_real tmp132;
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  modelica_real tmp137;
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  modelica_real tmp141;
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  modelica_boolean tmp144;
  modelica_real tmp145;
  modelica_boolean tmp146;
  modelica_boolean tmp147;
  modelica_boolean tmp148;
  modelica_real tmp149;
  tmp106 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp108 = (modelica_boolean)tmp106;
  if(tmp108)
  {
    tmp109 = 0.0;
  }
  else
  {
    tmp107 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp109 = (tmp107?(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp109)), 0, linearSystemData, threadData);
  tmp110 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp110?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp111 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp113 = (modelica_boolean)tmp111;
  if(tmp113)
  {
    tmp114 = 0.0;
  }
  else
  {
    tmp112 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp114 = (tmp112?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp114)), 2, linearSystemData, threadData);
  tmp115 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp117 = (modelica_boolean)tmp115;
  if(tmp117)
  {
    tmp118 = 0.0;
  }
  else
  {
    tmp116 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp118 = (tmp116?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp118)), 3, linearSystemData, threadData);
  tmp119 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp119?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp120 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp122 = (modelica_boolean)tmp120;
  if(tmp122)
  {
    tmp123 = 0.0;
  }
  else
  {
    tmp121 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp123 = (tmp121?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp123)), 5, linearSystemData, threadData);
  tmp124 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp124?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp125 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp127 = (modelica_boolean)tmp125;
  if(tmp127)
  {
    tmp128 = -1.0;
  }
  else
  {
    tmp126 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp128 = (tmp126?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp128)), 7, linearSystemData, threadData);
  tmp129 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp131 = (modelica_boolean)tmp129;
  if(tmp131)
  {
    tmp132 = 0.0;
  }
  else
  {
    tmp130 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp132 = (tmp130?(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp132)), 8, linearSystemData, threadData);
  tmp133 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp133?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp134 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp136 = (modelica_boolean)tmp134;
  if(tmp136)
  {
    tmp137 = 0.0;
  }
  else
  {
    tmp135 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp137 = (tmp135?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp137)), 10, linearSystemData, threadData);
  tmp138 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp140 = (modelica_boolean)tmp138;
  if(tmp140)
  {
    tmp141 = 0.0;
  }
  else
  {
    tmp139 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp141 = (tmp139?(-data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp141)), 11, linearSystemData, threadData);
  tmp142 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp144 = (modelica_boolean)tmp142;
  if(tmp144)
  {
    tmp145 = -0.0;
  }
  else
  {
    tmp143 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp145 = (tmp143?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp145)), 12, linearSystemData, threadData);
  tmp146 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp148 = (modelica_boolean)tmp146;
  if(tmp148)
  {
    tmp149 = (-data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp147 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp149 = (tmp147?-0.0:(-data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 2, (-(tmp149)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb379(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,379};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp165;
  modelica_boolean tmp166;
  modelica_boolean tmp167;
  modelica_boolean tmp168;
  modelica_real tmp169;
  tmp150 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp152 = (modelica_boolean)tmp150;
  if(tmp152)
  {
    tmp153 = 0.0;
  }
  else
  {
    tmp151 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp153 = (tmp151?data->localData[0]->realVars[108] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp153, linearSystemData, threadData);
  tmp154 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp156 = (modelica_boolean)tmp154;
  if(tmp156)
  {
    tmp157 = (-data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp155 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp157 = (tmp155?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp157, linearSystemData, threadData);
  tmp158 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp160 = (modelica_boolean)tmp158;
  if(tmp160)
  {
    tmp161 = 0.0;
  }
  else
  {
    tmp159 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp161 = (tmp159?data->localData[0]->realVars[109] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp161, linearSystemData, threadData);
  tmp162 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp164 = (modelica_boolean)tmp162;
  if(tmp164)
  {
    tmp165 = 0.0;
  }
  else
  {
    tmp163 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp165 = (tmp163?data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp165, linearSystemData, threadData);
  tmp166 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp168 = (modelica_boolean)tmp166;
  if(tmp168)
  {
    tmp169 = data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp167 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp169 = (tmp167?data->localData[0]->realVars[110] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp169, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData379(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[112].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[112].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[112].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  modelica_boolean tmp172;
  modelica_real tmp173;
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  modelica_real tmp177;
  modelica_boolean tmp178;
  modelica_boolean tmp179;
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  modelica_real tmp182;
  modelica_boolean tmp183;
  modelica_boolean tmp184;
  modelica_boolean tmp185;
  modelica_real tmp186;
  modelica_boolean tmp187;
  modelica_boolean tmp188;
  modelica_boolean tmp189;
  modelica_real tmp190;
  modelica_boolean tmp191;
  modelica_boolean tmp192;
  modelica_boolean tmp193;
  modelica_boolean tmp194;
  modelica_boolean tmp195;
  modelica_real tmp196;
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
  modelica_boolean tmp208;
  modelica_real tmp209;
  modelica_boolean tmp210;
  modelica_boolean tmp211;
  modelica_boolean tmp212;
  modelica_real tmp213;
  tmp170 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp172 = (modelica_boolean)tmp170;
  if(tmp172)
  {
    tmp173 = -1.0;
  }
  else
  {
    tmp171 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp173 = (tmp171?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp173)), 0, linearSystemData, threadData);
  tmp174 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp176 = (modelica_boolean)tmp174;
  if(tmp176)
  {
    tmp177 = 0.0;
  }
  else
  {
    tmp175 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp177 = (tmp175?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp177)), 1, linearSystemData, threadData);
  tmp178 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp178?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp179 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp181 = (modelica_boolean)tmp179;
  if(tmp181)
  {
    tmp182 = 0.0;
  }
  else
  {
    tmp180 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp182 = (tmp180?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp182)), 3, linearSystemData, threadData);
  tmp183 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp185 = (modelica_boolean)tmp183;
  if(tmp185)
  {
    tmp186 = 0.0;
  }
  else
  {
    tmp184 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp186 = (tmp184?(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp186)), 4, linearSystemData, threadData);
  tmp187 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp189 = (modelica_boolean)tmp187;
  if(tmp189)
  {
    tmp190 = 0.0;
  }
  else
  {
    tmp188 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp190 = (tmp188?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp190)), 5, linearSystemData, threadData);
  tmp191 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp191?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp192 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp192?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp193 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp195 = (modelica_boolean)tmp193;
  if(tmp195)
  {
    tmp196 = 0.0;
  }
  else
  {
    tmp194 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp196 = (tmp194?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp196)), 8, linearSystemData, threadData);
  tmp197 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp199 = (modelica_boolean)tmp197;
  if(tmp199)
  {
    tmp200 = 0.0;
  }
  else
  {
    tmp198 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp200 = (tmp198?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp200)), 9, linearSystemData, threadData);
  tmp201 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp203 = (modelica_boolean)tmp201;
  if(tmp203)
  {
    tmp204 = 0.0;
  }
  else
  {
    tmp202 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp204 = (tmp202?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp204)), 10, linearSystemData, threadData);
  tmp205 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 2, (-((tmp205?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp206 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp208 = (modelica_boolean)tmp206;
  if(tmp208)
  {
    tmp209 = (-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp207 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp209 = (tmp207?-0.0:(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp209)), 12, linearSystemData, threadData);
  tmp210 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp212 = (modelica_boolean)tmp210;
  if(tmp212)
  {
    tmp213 = -0.0;
  }
  else
  {
    tmp211 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp213 = (tmp211?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp213)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  tmp214 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp216 = (modelica_boolean)tmp214;
  if(tmp216)
  {
    tmp217 = 0.0;
  }
  else
  {
    tmp215 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp217 = (tmp215?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp217, linearSystemData, threadData);
  tmp218 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp220 = (modelica_boolean)tmp218;
  if(tmp220)
  {
    tmp221 = 0.0;
  }
  else
  {
    tmp219 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp221 = (tmp219?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp221, linearSystemData, threadData);
  tmp222 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp224 = (modelica_boolean)tmp222;
  if(tmp224)
  {
    tmp225 = 0.0;
  }
  else
  {
    tmp223 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp225 = (tmp223?data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp225, linearSystemData, threadData);
  tmp226 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp228 = (modelica_boolean)tmp226;
  if(tmp228)
  {
    tmp229 = (-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp227 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp229 = (tmp227?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp229, linearSystemData, threadData);
  tmp230 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp232 = (modelica_boolean)tmp230;
  if(tmp232)
  {
    tmp233 = data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp231 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp233 = (tmp231?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp233, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData325(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp234;
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  modelica_real tmp238;
  modelica_boolean tmp239;
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  modelica_real tmp242;
  modelica_boolean tmp243;
  modelica_boolean tmp244;
  modelica_boolean tmp245;
  modelica_real tmp246;
  modelica_boolean tmp247;
  modelica_boolean tmp248;
  modelica_boolean tmp249;
  modelica_boolean tmp250;
  modelica_boolean tmp251;
  modelica_real tmp252;
  modelica_boolean tmp253;
  modelica_boolean tmp254;
  modelica_boolean tmp255;
  modelica_real tmp256;
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
  modelica_real tmp272;
  modelica_boolean tmp273;
  modelica_boolean tmp274;
  modelica_boolean tmp275;
  modelica_boolean tmp276;
  modelica_real tmp277;
  tmp234 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp234?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp235 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp237 = (modelica_boolean)tmp235;
  if(tmp237)
  {
    tmp238 = 0.0;
  }
  else
  {
    tmp236 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp238 = (tmp236?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp238)), 1, linearSystemData, threadData);
  tmp239 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp241 = (modelica_boolean)tmp239;
  if(tmp241)
  {
    tmp242 = 0.0;
  }
  else
  {
    tmp240 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp242 = (tmp240?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp242)), 2, linearSystemData, threadData);
  tmp243 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp245 = (modelica_boolean)tmp243;
  if(tmp245)
  {
    tmp246 = 0.0;
  }
  else
  {
    tmp244 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp246 = (tmp244?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp246)), 3, linearSystemData, threadData);
  tmp247 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp247?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp248 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp248?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp249 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp251 = (modelica_boolean)tmp249;
  if(tmp251)
  {
    tmp252 = 0.0;
  }
  else
  {
    tmp250 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp252 = (tmp250?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp252)), 6, linearSystemData, threadData);
  tmp253 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp255 = (modelica_boolean)tmp253;
  if(tmp255)
  {
    tmp256 = -1.0;
  }
  else
  {
    tmp254 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp256 = (tmp254?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp256)), 7, linearSystemData, threadData);
  tmp257 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp259 = (modelica_boolean)tmp257;
  if(tmp259)
  {
    tmp260 = 0.0;
  }
  else
  {
    tmp258 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp260 = (tmp258?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp260)), 8, linearSystemData, threadData);
  tmp261 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp263 = (modelica_boolean)tmp261;
  if(tmp263)
  {
    tmp264 = -0.0;
  }
  else
  {
    tmp262 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp264 = (tmp262?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp264)), 9, linearSystemData, threadData);
  tmp265 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp267 = (modelica_boolean)tmp265;
  if(tmp267)
  {
    tmp268 = (-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp266 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp268 = (tmp266?-0.0:(-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp268)), 10, linearSystemData, threadData);
  tmp269 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp271 = (modelica_boolean)tmp269;
  if(tmp271)
  {
    tmp272 = 0.0;
  }
  else
  {
    tmp270 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp272 = (tmp270?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp272)), 11, linearSystemData, threadData);
  tmp273 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp273?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp274 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp276 = (modelica_boolean)tmp274;
  if(tmp276)
  {
    tmp277 = 0.0;
  }
  else
  {
    tmp275 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp277 = (tmp275?(-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp277)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp289;
  modelica_boolean tmp290;
  modelica_boolean tmp291;
  modelica_boolean tmp292;
  modelica_real tmp293;
  modelica_boolean tmp294;
  modelica_boolean tmp295;
  modelica_boolean tmp296;
  modelica_real tmp297;
  tmp278 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp280 = (modelica_boolean)tmp278;
  if(tmp280)
  {
    tmp281 = (-data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp279 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp281 = (tmp279?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp281, linearSystemData, threadData);
  tmp282 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp284 = (modelica_boolean)tmp282;
  if(tmp284)
  {
    tmp285 = 0.0;
  }
  else
  {
    tmp283 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp285 = (tmp283?data->localData[0]->realVars[198] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp285, linearSystemData, threadData);
  tmp286 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp288 = (modelica_boolean)tmp286;
  if(tmp288)
  {
    tmp289 = 0.0;
  }
  else
  {
    tmp287 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp289 = (tmp287?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp289, linearSystemData, threadData);
  tmp290 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp292 = (modelica_boolean)tmp290;
  if(tmp292)
  {
    tmp293 = data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp291 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp293 = (tmp291?data->localData[0]->realVars[200] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp293, linearSystemData, threadData);
  tmp294 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp296 = (modelica_boolean)tmp294;
  if(tmp296)
  {
    tmp297 = 0.0;
  }
  else
  {
    tmp295 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp297 = (tmp295?data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp297, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData226(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA166(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,166};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp327;
  modelica_boolean tmp328;
  modelica_real tmp329;
  modelica_boolean tmp330;
  modelica_boolean tmp331;
  modelica_boolean tmp332;
  modelica_real tmp333;
  modelica_boolean tmp334;
  modelica_boolean tmp335;
  modelica_boolean tmp336;
  modelica_real tmp337;
  modelica_boolean tmp338;
  modelica_boolean tmp339;
  modelica_boolean tmp340;
  modelica_real tmp341;
  tmp298 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp298?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp299 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp301 = (modelica_boolean)tmp299;
  if(tmp301)
  {
    tmp302 = 0.0;
  }
  else
  {
    tmp300 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp302 = (tmp300?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp302)), 1, linearSystemData, threadData);
  tmp303 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp305 = (modelica_boolean)tmp303;
  if(tmp305)
  {
    tmp306 = 0.0;
  }
  else
  {
    tmp304 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp306 = (tmp304?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp306)), 2, linearSystemData, threadData);
  tmp307 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp309 = (modelica_boolean)tmp307;
  if(tmp309)
  {
    tmp310 = 0.0;
  }
  else
  {
    tmp308 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp310 = (tmp308?(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp310)), 3, linearSystemData, threadData);
  tmp311 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp311?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp312 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp314 = (modelica_boolean)tmp312;
  if(tmp314)
  {
    tmp315 = 0.0;
  }
  else
  {
    tmp313 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp315 = (tmp313?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp315)), 5, linearSystemData, threadData);
  tmp316 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp318 = (modelica_boolean)tmp316;
  if(tmp318)
  {
    tmp319 = -1.0;
  }
  else
  {
    tmp317 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp319 = (tmp317?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp319)), 6, linearSystemData, threadData);
  tmp320 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp322 = (modelica_boolean)tmp320;
  if(tmp322)
  {
    tmp323 = 0.0;
  }
  else
  {
    tmp321 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp323 = (tmp321?(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp323)), 7, linearSystemData, threadData);
  tmp324 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp324?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp325 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp325?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp326 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp328 = (modelica_boolean)tmp326;
  if(tmp328)
  {
    tmp329 = 0.0;
  }
  else
  {
    tmp327 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp329 = (tmp327?(-data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp329)), 10, linearSystemData, threadData);
  tmp330 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp332 = (modelica_boolean)tmp330;
  if(tmp332)
  {
    tmp333 = 0.0;
  }
  else
  {
    tmp331 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp333 = (tmp331?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp333)), 11, linearSystemData, threadData);
  tmp334 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp336 = (modelica_boolean)tmp334;
  if(tmp336)
  {
    tmp337 = -0.0;
  }
  else
  {
    tmp335 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp337 = (tmp335?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp337)), 12, linearSystemData, threadData);
  tmp338 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp340 = (modelica_boolean)tmp338;
  if(tmp340)
  {
    tmp341 = (-data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp339 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp341 = (tmp339?-0.0:(-data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp341)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb166(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,166};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  tmp342 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp344 = (modelica_boolean)tmp342;
  if(tmp344)
  {
    tmp345 = (-data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp343 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp345 = (tmp343?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp345, linearSystemData, threadData);
  tmp346 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp348 = (modelica_boolean)tmp346;
  if(tmp348)
  {
    tmp349 = 0.0;
  }
  else
  {
    tmp347 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp349 = (tmp347?data->localData[0]->realVars[108] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp349, linearSystemData, threadData);
  tmp350 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp352 = (modelica_boolean)tmp350;
  if(tmp352)
  {
    tmp353 = 0.0;
  }
  else
  {
    tmp351 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp353 = (tmp351?data->localData[0]->realVars[109] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp353, linearSystemData, threadData);
  tmp354 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp356 = (modelica_boolean)tmp354;
  if(tmp356)
  {
    tmp357 = 0.0;
  }
  else
  {
    tmp355 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp357 = (tmp355?data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp357, linearSystemData, threadData);
  tmp358 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp360 = (modelica_boolean)tmp358;
  if(tmp360)
  {
    tmp361 = data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp359 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp361 = (tmp359?data->localData[0]->realVars[110] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp361, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData166(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[112].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[112].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[112].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA111(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,111};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  modelica_boolean tmp364;
  modelica_boolean tmp365;
  modelica_real tmp366;
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  modelica_boolean tmp369;
  modelica_real tmp370;
  modelica_boolean tmp371;
  modelica_boolean tmp372;
  modelica_boolean tmp373;
  modelica_real tmp374;
  modelica_boolean tmp375;
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
  modelica_boolean tmp391;
  modelica_real tmp392;
  modelica_boolean tmp393;
  modelica_boolean tmp394;
  modelica_boolean tmp395;
  modelica_boolean tmp396;
  modelica_real tmp397;
  modelica_boolean tmp398;
  modelica_boolean tmp399;
  modelica_boolean tmp400;
  modelica_real tmp401;
  modelica_boolean tmp402;
  modelica_boolean tmp403;
  modelica_boolean tmp404;
  modelica_real tmp405;
  tmp362 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp362?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp363 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp365 = (modelica_boolean)tmp363;
  if(tmp365)
  {
    tmp366 = 0.0;
  }
  else
  {
    tmp364 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp366 = (tmp364?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp366)), 1, linearSystemData, threadData);
  tmp367 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp369 = (modelica_boolean)tmp367;
  if(tmp369)
  {
    tmp370 = 0.0;
  }
  else
  {
    tmp368 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp370 = (tmp368?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp370)), 2, linearSystemData, threadData);
  tmp371 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp373 = (modelica_boolean)tmp371;
  if(tmp373)
  {
    tmp374 = 0.0;
  }
  else
  {
    tmp372 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp374 = (tmp372?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp374)), 3, linearSystemData, threadData);
  tmp375 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp375?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp376 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp378 = (modelica_boolean)tmp376;
  if(tmp378)
  {
    tmp379 = -1.0;
  }
  else
  {
    tmp377 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp379 = (tmp377?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp379)), 5, linearSystemData, threadData);
  tmp380 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp382 = (modelica_boolean)tmp380;
  if(tmp382)
  {
    tmp383 = 0.0;
  }
  else
  {
    tmp381 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp383 = (tmp381?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp383)), 6, linearSystemData, threadData);
  tmp384 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp386 = (modelica_boolean)tmp384;
  if(tmp386)
  {
    tmp387 = 0.0;
  }
  else
  {
    tmp385 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp387 = (tmp385?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp387)), 7, linearSystemData, threadData);
  tmp388 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp388?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp389 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp391 = (modelica_boolean)tmp389;
  if(tmp391)
  {
    tmp392 = 0.0;
  }
  else
  {
    tmp390 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp392 = (tmp390?(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp392)), 9, linearSystemData, threadData);
  tmp393 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp393?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp394 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp396 = (modelica_boolean)tmp394;
  if(tmp396)
  {
    tmp397 = 0.0;
  }
  else
  {
    tmp395 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp397 = (tmp395?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp397)), 11, linearSystemData, threadData);
  tmp398 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp400 = (modelica_boolean)tmp398;
  if(tmp400)
  {
    tmp401 = (-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp399 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp401 = (tmp399?-0.0:(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp401)), 12, linearSystemData, threadData);
  tmp402 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp404 = (modelica_boolean)tmp402;
  if(tmp404)
  {
    tmp405 = -0.0;
  }
  else
  {
    tmp403 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp405 = (tmp403?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp405)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb111(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,111};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp406;
  modelica_boolean tmp407;
  modelica_boolean tmp408;
  modelica_real tmp409;
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
  modelica_real tmp421;
  modelica_boolean tmp422;
  modelica_boolean tmp423;
  modelica_boolean tmp424;
  modelica_real tmp425;
  tmp406 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp408 = (modelica_boolean)tmp406;
  if(tmp408)
  {
    tmp409 = (-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp407 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp409 = (tmp407?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp409, linearSystemData, threadData);
  tmp410 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp412 = (modelica_boolean)tmp410;
  if(tmp412)
  {
    tmp413 = 0.0;
  }
  else
  {
    tmp411 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp413 = (tmp411?data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp413, linearSystemData, threadData);
  tmp414 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp416 = (modelica_boolean)tmp414;
  if(tmp416)
  {
    tmp417 = 0.0;
  }
  else
  {
    tmp415 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp417 = (tmp415?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp417, linearSystemData, threadData);
  tmp418 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp420 = (modelica_boolean)tmp418;
  if(tmp420)
  {
    tmp421 = 0.0;
  }
  else
  {
    tmp419 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp421 = (tmp419?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp421, linearSystemData, threadData);
  tmp422 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp424 = (modelica_boolean)tmp422;
  if(tmp424)
  {
    tmp425 = data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp423 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp425 = (tmp423?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp425, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData111(void *inData, threadData_t *threadData, void *systemData)
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

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
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
  linearSystemData[4].equationIndex = 379;
  linearSystemData[4].size = 5;
  linearSystemData[4].nnz = 14;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA379;
  linearSystemData[4].setb = setLinearVectorb379;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData379;
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
  linearSystemData[1].equationIndex = 166;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA166;
  linearSystemData[1].setb = setLinearVectorb166;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData166;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 111;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA111;
  linearSystemData[0].setb = setLinearVectorb111;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData111;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

