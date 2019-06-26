/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA206(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,206};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  RELATIONHYSTERESIS(tmp223, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp225 = (modelica_boolean)tmp223;
  if(tmp225)
  {
    tmp226 = (-data->localData[0]->realVars[60] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp224, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[13] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp226 = (tmp224?-0.0:(-data->localData[0]->realVars[60] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp226)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp227, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp229 = (modelica_boolean)tmp227;
  if(tmp229)
  {
    tmp230 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp228, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[13] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp230 = (tmp228?(-data->localData[0]->realVars[61] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp230)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp231, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp233 = (modelica_boolean)tmp231;
  if(tmp233)
  {
    tmp234 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp232, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[13] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp234 = (tmp232?(-data->localData[0]->realVars[60] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp234)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp235, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 1, (-((tmp235?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp236, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp238 = (modelica_boolean)tmp236;
  if(tmp238)
  {
    tmp239 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp237, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[13] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp239 = (tmp237?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp239)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp240, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp242 = (modelica_boolean)tmp240;
  if(tmp242)
  {
    tmp243 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp241, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[13] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp243 = (tmp241?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp243)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp244, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp246 = (modelica_boolean)tmp244;
  if(tmp246)
  {
    tmp247 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp245, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[13] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp247 = (tmp245?(-data->localData[0]->realVars[62] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp247)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp248, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp248?1.0:-0.0))), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb206(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,206};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  RELATIONHYSTERESIS(tmp249, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp251 = (modelica_boolean)tmp249;
  if(tmp251)
  {
    tmp252 = data->localData[0]->realVars[15] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp250, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[13] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp252 = (tmp250?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[2,1] variable */:data->localData[0]->realVars[15] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp252, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp253, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp255 = (modelica_boolean)tmp253;
  if(tmp255)
  {
    tmp256 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp254, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[13] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp256 = (tmp254?data->localData[0]->realVars[15] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp256, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp257, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp259 = (modelica_boolean)tmp257;
  if(tmp259)
  {
    tmp260 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp258, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[13] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp260 = (tmp258?data->localData[0]->realVars[17] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp260, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData206(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[18].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[18].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[18].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA163(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,163};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp261;
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  modelica_real tmp265;
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  modelica_real tmp269;
  modelica_boolean tmp270;
  modelica_boolean tmp271;
  modelica_boolean tmp272;
  modelica_real tmp273;
  modelica_boolean tmp274;
  modelica_boolean tmp275;
  modelica_boolean tmp276;
  modelica_boolean tmp277;
  modelica_real tmp278;
  modelica_boolean tmp279;
  modelica_boolean tmp280;
  modelica_boolean tmp281;
  modelica_real tmp282;
  modelica_boolean tmp283;
  modelica_boolean tmp284;
  modelica_boolean tmp285;
  modelica_real tmp286;
  tmp261 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 0, (-((tmp261?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp262 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp264 = (modelica_boolean)tmp262;
  if(tmp264)
  {
    tmp265 = 0.0;
  }
  else
  {
    tmp263 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp265 = (tmp263?(-data->localData[0]->realVars[123] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp265)), 1, linearSystemData, threadData);
  tmp266 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp268 = (modelica_boolean)tmp266;
  if(tmp268)
  {
    tmp269 = -1.0;
  }
  else
  {
    tmp267 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp269 = (tmp267?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp269)), 2, linearSystemData, threadData);
  tmp270 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp272 = (modelica_boolean)tmp270;
  if(tmp272)
  {
    tmp273 = 0.0;
  }
  else
  {
    tmp271 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp273 = (tmp271?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp273)), 3, linearSystemData, threadData);
  tmp274 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp274?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp275 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp277 = (modelica_boolean)tmp275;
  if(tmp277)
  {
    tmp278 = 0.0;
  }
  else
  {
    tmp276 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp278 = (tmp276?(-data->localData[0]->realVars[121] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp278)), 5, linearSystemData, threadData);
  tmp279 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp281 = (modelica_boolean)tmp279;
  if(tmp281)
  {
    tmp282 = -0.0;
  }
  else
  {
    tmp280 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp282 = (tmp280?(-data->localData[0]->realVars[122] /* MatStm2.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp282)), 6, linearSystemData, threadData);
  tmp283 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp285 = (modelica_boolean)tmp283;
  if(tmp285)
  {
    tmp286 = (-data->localData[0]->realVars[121] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp284 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp286 = (tmp284?-0.0:(-data->localData[0]->realVars[121] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 2, (-(tmp286)), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb163(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,163};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  modelica_boolean tmp289;
  modelica_real tmp290;
  modelica_boolean tmp291;
  modelica_boolean tmp292;
  modelica_boolean tmp293;
  modelica_real tmp294;
  modelica_boolean tmp295;
  modelica_boolean tmp296;
  modelica_boolean tmp297;
  modelica_real tmp298;
  tmp287 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp289 = (modelica_boolean)tmp287;
  if(tmp289)
  {
    tmp290 = 0.0;
  }
  else
  {
    tmp288 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp290 = (tmp288?data->localData[0]->realVars[78] /* MatStm2.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp290, linearSystemData, threadData);
  tmp291 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp293 = (modelica_boolean)tmp291;
  if(tmp293)
  {
    tmp294 = 0.0;
  }
  else
  {
    tmp292 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp294 = (tmp292?data->localData[0]->realVars[76] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp294, linearSystemData, threadData);
  tmp295 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp297 = (modelica_boolean)tmp295;
  if(tmp297)
  {
    tmp298 = data->localData[0]->realVars[76] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp296 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp298 = (tmp296?data->localData[0]->realVars[77] /* MatStm2.compMasFlo[2,1] variable */:data->localData[0]->realVars[76] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp298, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData163(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[80].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[80].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[80].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[81].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[81].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[81].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[79].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[79].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[79].attribute /* MatStm2.compMasFrac[1,1] */.max;
}


/*
equation index: 138
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[90] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[93] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[126] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 139
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 1.0 - 0.01 * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[101] /* MatStm2.liqPhasMolFrac variable */ = 1.0 - ((0.01) * (data->localData[0]->realVars[126] /* MatStm2.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 140
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[2] = 100.0 * MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[125] /* MatStm2.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[101] /* MatStm2.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 141
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[89] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[92] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[125] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc148(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,148};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[126] /* MatStm2.totMolFlo[3] variable */ = xloc[0];
  /* local constraints */
  Flowsheet_eqFunction_138(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_139(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_140(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_141(data, threadData);
  res[0] = data->localData[0]->realVars[90] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[89] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[88] /* MatStm2.compMolFlo[1,1] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData148(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.totMolFlo[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[126].attribute /* MatStm2.totMolFlo[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[126].attribute /* MatStm2.totMolFlo[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[126].attribute /* MatStm2.totMolFlo[3] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA98(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,98};
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
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
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
  tmp0 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[13] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp3)), 0, linearSystemData, threadData);
  tmp4 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = 0.0;
  }
  else
  {
    tmp5 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[13] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?(-data->localData[0]->realVars[60] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp7)), 1, linearSystemData, threadData);
  tmp8 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp8?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp9 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 0, (-((tmp9?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp10 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  tmp12 = (modelica_boolean)tmp10;
  if(tmp12)
  {
    tmp13 = -1.0;
  }
  else
  {
    tmp11 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[13] /* MatStm1.Pdew variable */);
    tmp13 = (tmp11?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp13)), 4, linearSystemData, threadData);
  tmp14 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  tmp16 = (modelica_boolean)tmp14;
  if(tmp16)
  {
    tmp17 = 0.0;
  }
  else
  {
    tmp15 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[13] /* MatStm1.Pdew variable */);
    tmp17 = (tmp15?(-data->localData[0]->realVars[62] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp17)), 5, linearSystemData, threadData);
  tmp18 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  tmp20 = (modelica_boolean)tmp18;
  if(tmp20)
  {
    tmp21 = -0.0;
  }
  else
  {
    tmp19 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[13] /* MatStm1.Pdew variable */);
    tmp21 = (tmp19?(-data->localData[0]->realVars[61] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp21)), 6, linearSystemData, threadData);
  tmp22 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  tmp24 = (modelica_boolean)tmp22;
  if(tmp24)
  {
    tmp25 = (-data->localData[0]->realVars[60] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp23 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[13] /* MatStm1.Pdew variable */);
    tmp25 = (tmp23?-0.0:(-data->localData[0]->realVars[60] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 1, (-(tmp25)), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb98(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,98};
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
  tmp26 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = 0.0;
  }
  else
  {
    tmp27 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[13] /* MatStm1.Pdew variable */);
    tmp29 = (tmp27?data->localData[0]->realVars[15] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp29, linearSystemData, threadData);
  tmp30 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = 0.0;
  }
  else
  {
    tmp31 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[13] /* MatStm1.Pdew variable */);
    tmp33 = (tmp31?data->localData[0]->realVars[17] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp33, linearSystemData, threadData);
  tmp34 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  tmp36 = (modelica_boolean)tmp34;
  if(tmp36)
  {
    tmp37 = data->localData[0]->realVars[15] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp35 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[13] /* MatStm1.Pdew variable */);
    tmp37 = (tmp35?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[2,1] variable */:data->localData[0]->realVars[15] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp37, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData98(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[18].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[18].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[18].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA48(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,48};
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
  modelica_boolean tmp49;
  modelica_real tmp50;
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
  tmp38 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp40 = (modelica_boolean)tmp38;
  if(tmp40)
  {
    tmp41 = (-data->localData[0]->realVars[121] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp39 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp41 = (tmp39?-0.0:(-data->localData[0]->realVars[121] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 1, (-(tmp41)), 0, linearSystemData, threadData);
  tmp42 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp44 = (modelica_boolean)tmp42;
  if(tmp44)
  {
    tmp45 = -0.0;
  }
  else
  {
    tmp43 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp45 = (tmp43?(-data->localData[0]->realVars[122] /* MatStm2.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp45)), 1, linearSystemData, threadData);
  tmp46 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 0, (-((tmp46?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp47 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp49 = (modelica_boolean)tmp47;
  if(tmp49)
  {
    tmp50 = 0.0;
  }
  else
  {
    tmp48 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp50 = (tmp48?(-data->localData[0]->realVars[121] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp50)), 3, linearSystemData, threadData);
  tmp51 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp53 = (modelica_boolean)tmp51;
  if(tmp53)
  {
    tmp54 = 0.0;
  }
  else
  {
    tmp52 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp54 = (tmp52?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp54)), 4, linearSystemData, threadData);
  tmp55 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp57 = (modelica_boolean)tmp55;
  if(tmp57)
  {
    tmp58 = 0.0;
  }
  else
  {
    tmp56 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp58 = (tmp56?(-data->localData[0]->realVars[123] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp58)), 5, linearSystemData, threadData);
  tmp59 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp61 = (modelica_boolean)tmp59;
  if(tmp61)
  {
    tmp62 = -1.0;
  }
  else
  {
    tmp60 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp62 = (tmp60?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp62)), 6, linearSystemData, threadData);
  tmp63 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp63?1.0:-0.0))), 7, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb48(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,48};
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
  tmp64 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = data->localData[0]->realVars[76] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp65 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp67 = (tmp65?data->localData[0]->realVars[77] /* MatStm2.compMasFlo[2,1] variable */:data->localData[0]->realVars[76] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp67, linearSystemData, threadData);
  tmp68 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = 0.0;
  }
  else
  {
    tmp69 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp71 = (tmp69?data->localData[0]->realVars[76] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp71, linearSystemData, threadData);
  tmp72 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp74 = (modelica_boolean)tmp72;
  if(tmp74)
  {
    tmp75 = 0.0;
  }
  else
  {
    tmp73 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp75 = (tmp73?data->localData[0]->realVars[78] /* MatStm2.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp75, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData48(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[81].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[81].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[81].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[79].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[79].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[79].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[80].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[80].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[80].attribute /* MatStm2.compMasFrac[2,1] */.max;
}


/*
equation index: 32
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[89] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[92] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[125] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 0.01 * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[101] /* MatStm2.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[125] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[3] = 100.0 - 100.0 * MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[126] /* MatStm2.totMolFlo[3] variable */ = 100.0 - ((100.0) * (data->localData[0]->realVars[101] /* MatStm2.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[90] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[93] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[126] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc42(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,42};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[125] /* MatStm2.totMolFlo[2] variable */ = xloc[0];
  /* local constraints */
  Flowsheet_eqFunction_32(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_33(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_34(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_35(data, threadData);
  res[0] = data->localData[0]->realVars[90] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[89] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[88] /* MatStm2.compMolFlo[1,1] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData42(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.totMolFlo[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[125].attribute /* MatStm2.totMolFlo[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[125].attribute /* MatStm2.totMolFlo[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[125].attribute /* MatStm2.totMolFlo[2] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 206;
  linearSystemData[5].size = 3;
  linearSystemData[5].nnz = 8;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA206;
  linearSystemData[5].setb = setLinearVectorb206;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData206;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 163;
  linearSystemData[4].size = 3;
  linearSystemData[4].nnz = 8;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA163;
  linearSystemData[4].setb = setLinearVectorb163;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData163;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[3].equationIndex = 148;
  linearSystemData[3].size = 1;
  linearSystemData[3].nnz = 0;
  linearSystemData[3].method = 1;
  linearSystemData[3].residualFunc = residualFunc148;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].analyticalJacobianColumn = Flowsheet_functionJacLSJac2_column;
  linearSystemData[3].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianLSJac2;
  linearSystemData[3].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[3].setA = NULL;//setLinearMatrixA148;
  linearSystemData[3].setb = NULL; //setLinearVectorb148;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData148;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 98;
  linearSystemData[2].size = 3;
  linearSystemData[2].nnz = 8;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA98;
  linearSystemData[2].setb = setLinearVectorb98;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData98;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 48;
  linearSystemData[1].size = 3;
  linearSystemData[1].nnz = 8;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA48;
  linearSystemData[1].setb = setLinearVectorb48;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData48;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 42;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;
  linearSystemData[0].residualFunc = residualFunc42;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = Flowsheet_functionJacLSJac0_column;
  linearSystemData[0].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianLSJac0;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;//setLinearMatrixA42;
  linearSystemData[0].setb = NULL; //setLinearVectorb42;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData42;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

