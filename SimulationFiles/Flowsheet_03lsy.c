/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA102(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,102};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
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
  modelica_real tmp25;
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = -1.0;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp3)), 0, linearSystemData, threadData);
  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 1, (-((tmp4?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = 0.0;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp8 = (tmp6?(-data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp8)), 2, linearSystemData, threadData);
  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = 0.0;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp12 = (tmp10?(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp12)), 3, linearSystemData, threadData);
  tmp13 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp15 = (modelica_boolean)tmp13;
  if(tmp15)
  {
    tmp16 = 0.0;
  }
  else
  {
    tmp14 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp16 = (tmp14?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp16)), 4, linearSystemData, threadData);
  tmp17 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 2, (-((tmp17?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp18 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp20 = (modelica_boolean)tmp18;
  if(tmp20)
  {
    tmp21 = (-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp19 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp21 = (tmp19?-0.0:(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 0, (-(tmp21)), 6, linearSystemData, threadData);
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
  linearSystemData->setAElement(2, 1, (-(tmp25)), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb102(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,102};
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
  tmp26 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = 0.0;
  }
  else
  {
    tmp27 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp29 = (tmp27?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp29, linearSystemData, threadData);
  tmp30 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = 0.0;
  }
  else
  {
    tmp31 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp33 = (tmp31?data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp33, linearSystemData, threadData);
  tmp34 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp36 = (modelica_boolean)tmp34;
  if(tmp36)
  {
    tmp37 = data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp35 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp37 = (tmp35?data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */:data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp37, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData102(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[12].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[12].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[12].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[13].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[13].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[13].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[14].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[14].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[14].attribute /* MatStm1.compMasFrac[3,1] */.max;
}


/*
equation index: 78
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 0.01 * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 80
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[3] = 100.0 - 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */ = 100.0 - ((100.0) * (data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 81
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc88(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,88};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */ = xloc[0];
  /* local constraints */
  Flowsheet_eqFunction_78(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_79(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_80(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_81(data, threadData);
  res[0] = data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[21] /* MatStm1.compMolFlo[1,1] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData88(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.totMolFlo[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[58].attribute /* MatStm1.totMolFlo[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[58].attribute /* MatStm1.totMolFlo[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[58].attribute /* MatStm1.totMolFlo[2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA43(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,43};
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
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?-0.0:(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp3)), 0, linearSystemData, threadData);
  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = -0.0;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?(-data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp7)), 1, linearSystemData, threadData);
  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = 0.0;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp11 = (tmp9?(-data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp11)), 2, linearSystemData, threadData);
  tmp12 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp12?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp13 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp15 = (modelica_boolean)tmp13;
  if(tmp15)
  {
    tmp16 = 0.0;
  }
  else
  {
    tmp14 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp16 = (tmp14?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp16)), 4, linearSystemData, threadData);
  tmp17 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp19 = (modelica_boolean)tmp17;
  if(tmp19)
  {
    tmp20 = -1.0;
  }
  else
  {
    tmp18 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp20 = (tmp18?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp20)), 5, linearSystemData, threadData);
  tmp21 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp23 = (modelica_boolean)tmp21;
  if(tmp23)
  {
    tmp24 = 0.0;
  }
  else
  {
    tmp22 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp24 = (tmp22?(-data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp24)), 6, linearSystemData, threadData);
  tmp25 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp25?1.0:-0.0))), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb43(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,43};
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
  tmp26 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp27 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp29 = (tmp27?data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */:data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp29, linearSystemData, threadData);
  tmp30 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = 0.0;
  }
  else
  {
    tmp31 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp33 = (tmp31?data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp33, linearSystemData, threadData);
  tmp34 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp36 = (modelica_boolean)tmp34;
  if(tmp36)
  {
    tmp37 = 0.0;
  }
  else
  {
    tmp35 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp37 = (tmp35?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp37, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData43(void *inData, threadData_t *threadData, void *systemData)
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


/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 0.01 * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[3] = 100.0 - 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */ = 100.0 - ((100.0) * (data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc37(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,37};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */ = xloc[0];
  /* local constraints */
  Flowsheet_eqFunction_27(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_28(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_29(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_30(data, threadData);
  res[0] = data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[21] /* MatStm1.compMolFlo[1,1] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData37(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.totMolFlo[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[58].attribute /* MatStm1.totMolFlo[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[58].attribute /* MatStm1.totMolFlo[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[58].attribute /* MatStm1.totMolFlo[2] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 102;
  linearSystemData[3].size = 3;
  linearSystemData[3].nnz = 8;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA102;
  linearSystemData[3].setb = setLinearVectorb102;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData102;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 88;
  linearSystemData[2].size = 1;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;
  linearSystemData[2].residualFunc = residualFunc88;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = Flowsheet_functionJacLSJac1_column;
  linearSystemData[2].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianLSJac1;
  linearSystemData[2].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[2].setA = NULL;//setLinearMatrixA88;
  linearSystemData[2].setb = NULL; //setLinearVectorb88;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData88;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 43;
  linearSystemData[1].size = 3;
  linearSystemData[1].nnz = 8;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA43;
  linearSystemData[1].setb = setLinearVectorb43;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData43;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 37;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;
  linearSystemData[0].residualFunc = residualFunc37;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = Flowsheet_functionJacLSJac0_column;
  linearSystemData[0].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianLSJac0;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;//setLinearMatrixA37;
  linearSystemData[0].setb = NULL; //setLinearVectorb37;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData37;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

