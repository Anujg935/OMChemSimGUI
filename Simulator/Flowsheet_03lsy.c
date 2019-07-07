/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA108(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,108};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  modelica_real tmp104;
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
  modelica_boolean tmp116;
  modelica_real tmp117;
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  modelica_real tmp122;
  modelica_boolean tmp123;
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_real tmp126;
  tmp101 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp103 = (modelica_boolean)tmp101;
  if(tmp103)
  {
    tmp104 = -0.0;
  }
  else
  {
    tmp102 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp104 = (tmp102?(-data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp104)), 0, linearSystemData, threadData);
  tmp105 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp107 = (modelica_boolean)tmp105;
  if(tmp107)
  {
    tmp108 = (-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp106 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp108 = (tmp106?-0.0:(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 2, (-(tmp108)), 1, linearSystemData, threadData);
  tmp109 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp111 = (modelica_boolean)tmp109;
  if(tmp111)
  {
    tmp112 = 0.0;
  }
  else
  {
    tmp110 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp112 = (tmp110?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp112)), 2, linearSystemData, threadData);
  tmp113 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp113?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp114 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp116 = (modelica_boolean)tmp114;
  if(tmp116)
  {
    tmp117 = 0.0;
  }
  else
  {
    tmp115 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp117 = (tmp115?(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp117)), 4, linearSystemData, threadData);
  tmp118 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp118?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp119 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp121 = (modelica_boolean)tmp119;
  if(tmp121)
  {
    tmp122 = 0.0;
  }
  else
  {
    tmp120 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp122 = (tmp120?(-data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp122)), 6, linearSystemData, threadData);
  tmp123 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp125 = (modelica_boolean)tmp123;
  if(tmp125)
  {
    tmp126 = -1.0;
  }
  else
  {
    tmp124 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp126 = (tmp124?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp126)), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb108(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,108};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  modelica_boolean tmp129;
  modelica_real tmp130;
  modelica_boolean tmp131;
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  modelica_real tmp134;
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  modelica_real tmp138;
  tmp127 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp129 = (modelica_boolean)tmp127;
  if(tmp129)
  {
    tmp130 = data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp128 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp130 = (tmp128?data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */:data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp130, linearSystemData, threadData);
  tmp131 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp133 = (modelica_boolean)tmp131;
  if(tmp133)
  {
    tmp134 = 0.0;
  }
  else
  {
    tmp132 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp134 = (tmp132?data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp134, linearSystemData, threadData);
  tmp135 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp137 = (modelica_boolean)tmp135;
  if(tmp137)
  {
    tmp138 = 0.0;
  }
  else
  {
    tmp136 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp138 = (tmp136?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp138, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData108(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[13].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[13].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[13].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[14].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[14].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[14].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[12].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[12].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[12].attribute /* MatStm1.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA47(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,47};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  modelica_real tmp142;
  modelica_boolean tmp143;
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  modelica_real tmp146;
  modelica_boolean tmp147;
  modelica_boolean tmp148;
  modelica_boolean tmp149;
  modelica_real tmp150;
  modelica_boolean tmp151;
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
  tmp139 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp141 = (modelica_boolean)tmp139;
  if(tmp141)
  {
    tmp142 = (-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp140 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp142 = (tmp140?-0.0:(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp142)), 0, linearSystemData, threadData);
  tmp143 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp145 = (modelica_boolean)tmp143;
  if(tmp145)
  {
    tmp146 = -0.0;
  }
  else
  {
    tmp144 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp146 = (tmp144?(-data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp146)), 1, linearSystemData, threadData);
  tmp147 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp149 = (modelica_boolean)tmp147;
  if(tmp149)
  {
    tmp150 = 0.0;
  }
  else
  {
    tmp148 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp150 = (tmp148?(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp150)), 2, linearSystemData, threadData);
  tmp151 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp151?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp152 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp154 = (modelica_boolean)tmp152;
  if(tmp154)
  {
    tmp155 = 0.0;
  }
  else
  {
    tmp153 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp155 = (tmp153?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp155)), 4, linearSystemData, threadData);
  tmp156 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp158 = (modelica_boolean)tmp156;
  if(tmp158)
  {
    tmp159 = -1.0;
  }
  else
  {
    tmp157 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp159 = (tmp157?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp159)), 5, linearSystemData, threadData);
  tmp160 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp162 = (modelica_boolean)tmp160;
  if(tmp162)
  {
    tmp163 = 0.0;
  }
  else
  {
    tmp161 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp163 = (tmp161?(-data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp163)), 6, linearSystemData, threadData);
  tmp164 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp164?1.0:-0.0))), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb47(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,47};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  modelica_boolean tmp167;
  modelica_real tmp168;
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  modelica_real tmp172;
  modelica_boolean tmp173;
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  modelica_real tmp176;
  tmp165 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp167 = (modelica_boolean)tmp165;
  if(tmp167)
  {
    tmp168 = data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp166 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp168 = (tmp166?data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */:data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp168, linearSystemData, threadData);
  tmp169 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp171 = (modelica_boolean)tmp169;
  if(tmp171)
  {
    tmp172 = 0.0;
  }
  else
  {
    tmp170 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp172 = (tmp170?data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp172, linearSystemData, threadData);
  tmp173 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp175 = (modelica_boolean)tmp173;
  if(tmp175)
  {
    tmp176 = 0.0;
  }
  else
  {
    tmp174 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp176 = (tmp174?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp176, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData47(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[12].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[12].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[12].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[14].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[14].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[14].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[13].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[13].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[13].attribute /* MatStm1.compMasFrac[2,1] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 108;
  linearSystemData[1].size = 3;
  linearSystemData[1].nnz = 8;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA108;
  linearSystemData[1].setb = setLinearVectorb108;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData108;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 47;
  linearSystemData[0].size = 3;
  linearSystemData[0].nnz = 8;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA47;
  linearSystemData[0].setb = setLinearVectorb47;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData47;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

