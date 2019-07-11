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
  modelica_boolean tmp37;
  modelica_real tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
  tmp22 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp24 = (modelica_boolean)tmp22;
  if(tmp24)
  {
    tmp25 = -0.0;
  }
  else
  {
    tmp23 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp25 = (tmp23?(-data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp25)), 0, linearSystemData, threadData);
  tmp26 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = (-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp27 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp29 = (tmp27?-0.0:(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 2, (-(tmp29)), 1, linearSystemData, threadData);
  tmp30 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = 0.0;
  }
  else
  {
    tmp31 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp33 = (tmp31?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp33)), 2, linearSystemData, threadData);
  tmp34 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp34?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp35 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp37 = (modelica_boolean)tmp35;
  if(tmp37)
  {
    tmp38 = 0.0;
  }
  else
  {
    tmp36 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp38 = (tmp36?(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp38)), 4, linearSystemData, threadData);
  tmp39 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp39?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp40 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp42 = (modelica_boolean)tmp40;
  if(tmp42)
  {
    tmp43 = 0.0;
  }
  else
  {
    tmp41 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp43 = (tmp41?(-data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp43)), 6, linearSystemData, threadData);
  tmp44 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp46 = (modelica_boolean)tmp44;
  if(tmp46)
  {
    tmp47 = -1.0;
  }
  else
  {
    tmp45 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp47 = (tmp45?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp47)), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb108(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,108};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  tmp48 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp50 = (modelica_boolean)tmp48;
  if(tmp50)
  {
    tmp51 = data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp49 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp51 = (tmp49?data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */:data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp51, linearSystemData, threadData);
  tmp52 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = 0.0;
  }
  else
  {
    tmp53 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp55 = (tmp53?data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp55, linearSystemData, threadData);
  tmp56 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = 0.0;
  }
  else
  {
    tmp57 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp59 = (tmp57?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp59, linearSystemData, threadData);
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
  modelica_boolean tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_real tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_real tmp84;
  modelica_boolean tmp85;
  tmp60 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = (-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp61 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp63 = (tmp61?-0.0:(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp63)), 0, linearSystemData, threadData);
  tmp64 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = -0.0;
  }
  else
  {
    tmp65 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp67 = (tmp65?(-data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp67)), 1, linearSystemData, threadData);
  tmp68 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = 0.0;
  }
  else
  {
    tmp69 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp71 = (tmp69?(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp71)), 2, linearSystemData, threadData);
  tmp72 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp72?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp73 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp75 = (modelica_boolean)tmp73;
  if(tmp75)
  {
    tmp76 = 0.0;
  }
  else
  {
    tmp74 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp76 = (tmp74?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp76)), 4, linearSystemData, threadData);
  tmp77 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp79 = (modelica_boolean)tmp77;
  if(tmp79)
  {
    tmp80 = -1.0;
  }
  else
  {
    tmp78 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp80 = (tmp78?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp80)), 5, linearSystemData, threadData);
  tmp81 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp83 = (modelica_boolean)tmp81;
  if(tmp83)
  {
    tmp84 = 0.0;
  }
  else
  {
    tmp82 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp84 = (tmp82?(-data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp84)), 6, linearSystemData, threadData);
  tmp85 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp85?1.0:-0.0))), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb47(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,47};
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
  tmp86 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp88 = (modelica_boolean)tmp86;
  if(tmp88)
  {
    tmp89 = data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp87 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp89 = (tmp87?data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */:data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp89, linearSystemData, threadData);
  tmp90 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp92 = (modelica_boolean)tmp90;
  if(tmp92)
  {
    tmp93 = 0.0;
  }
  else
  {
    tmp91 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp93 = (tmp91?data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp93, linearSystemData, threadData);
  tmp94 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp96 = (modelica_boolean)tmp94;
  if(tmp96)
  {
    tmp97 = 0.0;
  }
  else
  {
    tmp95 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp97 = (tmp95?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp97, linearSystemData, threadData);
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

