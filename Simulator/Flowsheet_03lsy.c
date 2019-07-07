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
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
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
  modelica_real tmp25;
  tmp0 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = -0.0;
  }
  else
  {
    tmp1 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?(-data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp3)), 0, linearSystemData, threadData);
  tmp4 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = (-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp5 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?-0.0:(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 2, (-(tmp7)), 1, linearSystemData, threadData);
  tmp8 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = 0.0;
  }
  else
  {
    tmp9 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp11 = (tmp9?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp11)), 2, linearSystemData, threadData);
  tmp12 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp12?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp13 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp15 = (modelica_boolean)tmp13;
  if(tmp15)
  {
    tmp16 = 0.0;
  }
  else
  {
    tmp14 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp16 = (tmp14?(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp16)), 4, linearSystemData, threadData);
  tmp17 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp17?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp18 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp20 = (modelica_boolean)tmp18;
  if(tmp20)
  {
    tmp21 = 0.0;
  }
  else
  {
    tmp19 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp21 = (tmp19?(-data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp21)), 6, linearSystemData, threadData);
  tmp22 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp24 = (modelica_boolean)tmp22;
  if(tmp24)
  {
    tmp25 = -1.0;
  }
  else
  {
    tmp23 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp25 = (tmp23?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp25)), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb108(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,108};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  tmp26 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp27 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp29 = (tmp27?data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */:data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp29, linearSystemData, threadData);
  tmp30 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = 0.0;
  }
  else
  {
    tmp31 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp33 = (tmp31?data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp33, linearSystemData, threadData);
  tmp34 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp36 = (modelica_boolean)tmp34;
  if(tmp36)
  {
    tmp37 = 0.0;
  }
  else
  {
    tmp35 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp37 = (tmp35?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp37, linearSystemData, threadData);
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
  modelica_boolean tmp53;
  modelica_real tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_real tmp58;
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  modelica_boolean tmp63;
  tmp38 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp40 = (modelica_boolean)tmp38;
  if(tmp40)
  {
    tmp41 = (-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp39 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp41 = (tmp39?-0.0:(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp41)), 0, linearSystemData, threadData);
  tmp42 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp44 = (modelica_boolean)tmp42;
  if(tmp44)
  {
    tmp45 = -0.0;
  }
  else
  {
    tmp43 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp45 = (tmp43?(-data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp45)), 1, linearSystemData, threadData);
  tmp46 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp48 = (modelica_boolean)tmp46;
  if(tmp48)
  {
    tmp49 = 0.0;
  }
  else
  {
    tmp47 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp49 = (tmp47?(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp49)), 2, linearSystemData, threadData);
  tmp50 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp50?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp51 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp53 = (modelica_boolean)tmp51;
  if(tmp53)
  {
    tmp54 = 0.0;
  }
  else
  {
    tmp52 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp54 = (tmp52?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp54)), 4, linearSystemData, threadData);
  tmp55 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp57 = (modelica_boolean)tmp55;
  if(tmp57)
  {
    tmp58 = -1.0;
  }
  else
  {
    tmp56 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp58 = (tmp56?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp58)), 5, linearSystemData, threadData);
  tmp59 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp61 = (modelica_boolean)tmp59;
  if(tmp61)
  {
    tmp62 = 0.0;
  }
  else
  {
    tmp60 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp62 = (tmp60?(-data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp62)), 6, linearSystemData, threadData);
  tmp63 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp63?1.0:-0.0))), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb47(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,47};
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
  tmp64 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp65 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp67 = (tmp65?data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */:data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp67, linearSystemData, threadData);
  tmp68 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = 0.0;
  }
  else
  {
    tmp69 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp71 = (tmp69?data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp71, linearSystemData, threadData);
  tmp72 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp74 = (modelica_boolean)tmp72;
  if(tmp74)
  {
    tmp75 = 0.0;
  }
  else
  {
    tmp73 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp75 = (tmp73?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp75, linearSystemData, threadData);
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

