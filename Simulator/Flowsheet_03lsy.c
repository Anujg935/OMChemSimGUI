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
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_real tmp49;
  tmp24 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp26 = (modelica_boolean)tmp24;
  if(tmp26)
  {
    tmp27 = -0.0;
  }
  else
  {
    tmp25 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp27 = (tmp25?(-data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp27)), 0, linearSystemData, threadData);
  tmp28 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp30 = (modelica_boolean)tmp28;
  if(tmp30)
  {
    tmp31 = (-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp29 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp31 = (tmp29?-0.0:(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 2, (-(tmp31)), 1, linearSystemData, threadData);
  tmp32 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp34 = (modelica_boolean)tmp32;
  if(tmp34)
  {
    tmp35 = 0.0;
  }
  else
  {
    tmp33 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp35 = (tmp33?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp35)), 2, linearSystemData, threadData);
  tmp36 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp36?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp37 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp39 = (modelica_boolean)tmp37;
  if(tmp39)
  {
    tmp40 = 0.0;
  }
  else
  {
    tmp38 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp40 = (tmp38?(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp40)), 4, linearSystemData, threadData);
  tmp41 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp41?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp42 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp44 = (modelica_boolean)tmp42;
  if(tmp44)
  {
    tmp45 = 0.0;
  }
  else
  {
    tmp43 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp45 = (tmp43?(-data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp45)), 6, linearSystemData, threadData);
  tmp46 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp48 = (modelica_boolean)tmp46;
  if(tmp48)
  {
    tmp49 = -1.0;
  }
  else
  {
    tmp47 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp49 = (tmp47?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp49)), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb108(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,108};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp61;
  tmp50 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp52 = (modelica_boolean)tmp50;
  if(tmp52)
  {
    tmp53 = data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp51 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp53 = (tmp51?data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */:data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp53, linearSystemData, threadData);
  tmp54 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp56 = (modelica_boolean)tmp54;
  if(tmp56)
  {
    tmp57 = 0.0;
  }
  else
  {
    tmp55 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp57 = (tmp55?data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp57, linearSystemData, threadData);
  tmp58 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp60 = (modelica_boolean)tmp58;
  if(tmp60)
  {
    tmp61 = 0.0;
  }
  else
  {
    tmp59 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp61 = (tmp59?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp61, linearSystemData, threadData);
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
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_real tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_real tmp73;
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_real tmp78;
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  modelica_real tmp82;
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  modelica_real tmp86;
  modelica_boolean tmp87;
  tmp62 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp64 = (modelica_boolean)tmp62;
  if(tmp64)
  {
    tmp65 = (-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp63 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp65 = (tmp63?-0.0:(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp65)), 0, linearSystemData, threadData);
  tmp66 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp68 = (modelica_boolean)tmp66;
  if(tmp68)
  {
    tmp69 = -0.0;
  }
  else
  {
    tmp67 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp69 = (tmp67?(-data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp69)), 1, linearSystemData, threadData);
  tmp70 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp72 = (modelica_boolean)tmp70;
  if(tmp72)
  {
    tmp73 = 0.0;
  }
  else
  {
    tmp71 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp73 = (tmp71?(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp73)), 2, linearSystemData, threadData);
  tmp74 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp74?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp75 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp77 = (modelica_boolean)tmp75;
  if(tmp77)
  {
    tmp78 = 0.0;
  }
  else
  {
    tmp76 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp78 = (tmp76?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp78)), 4, linearSystemData, threadData);
  tmp79 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp81 = (modelica_boolean)tmp79;
  if(tmp81)
  {
    tmp82 = -1.0;
  }
  else
  {
    tmp80 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp82 = (tmp80?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp82)), 5, linearSystemData, threadData);
  tmp83 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp85 = (modelica_boolean)tmp83;
  if(tmp85)
  {
    tmp86 = 0.0;
  }
  else
  {
    tmp84 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp86 = (tmp84?(-data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp86)), 6, linearSystemData, threadData);
  tmp87 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp87?1.0:-0.0))), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb47(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,47};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  tmp88 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp90 = (modelica_boolean)tmp88;
  if(tmp90)
  {
    tmp91 = data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp89 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp91 = (tmp89?data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */:data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp91, linearSystemData, threadData);
  tmp92 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp94 = (modelica_boolean)tmp92;
  if(tmp94)
  {
    tmp95 = 0.0;
  }
  else
  {
    tmp93 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp95 = (tmp93?data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp95, linearSystemData, threadData);
  tmp96 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp98 = (modelica_boolean)tmp96;
  if(tmp98)
  {
    tmp99 = 0.0;
  }
  else
  {
    tmp97 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp99 = (tmp97?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp99, linearSystemData, threadData);
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

