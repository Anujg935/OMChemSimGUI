/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA304(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,304};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp332;
  modelica_boolean tmp333;
  modelica_boolean tmp334;
  modelica_boolean tmp335;
  modelica_real tmp336;
  modelica_boolean tmp337;
  modelica_boolean tmp338;
  modelica_boolean tmp339;
  modelica_real tmp340;
  modelica_boolean tmp341;
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
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  modelica_boolean tmp364;
  modelica_real tmp365;
  modelica_boolean tmp366;
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  modelica_real tmp369;
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  modelica_boolean tmp372;
  modelica_boolean tmp373;
  modelica_real tmp374;
  modelica_boolean tmp375;
  RELATIONHYSTERESIS(tmp332, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp332?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp333, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp335 = (modelica_boolean)tmp333;
  if(tmp335)
  {
    tmp336 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp334, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp336 = (tmp334?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp336)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp337, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp339 = (modelica_boolean)tmp337;
  if(tmp339)
  {
    tmp340 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp338, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp340 = (tmp338?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp340)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp341, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 2, (-((tmp341?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp342, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp344 = (modelica_boolean)tmp342;
  if(tmp344)
  {
    tmp345 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp343, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp345 = (tmp343?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp345)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp346, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp348 = (modelica_boolean)tmp346;
  if(tmp348)
  {
    tmp349 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp347, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp349 = (tmp347?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp349)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp350, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp352 = (modelica_boolean)tmp350;
  if(tmp352)
  {
    tmp353 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp351, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp353 = (tmp351?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp353)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp354, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp356 = (modelica_boolean)tmp354;
  if(tmp356)
  {
    tmp357 = (-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp355, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp357 = (tmp355?-0.0:(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 3, (-(tmp357)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp358, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp360 = (modelica_boolean)tmp358;
  if(tmp360)
  {
    tmp361 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp359, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp361 = (tmp359?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp361)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp362, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp364 = (modelica_boolean)tmp362;
  if(tmp364)
  {
    tmp365 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp363, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp365 = (tmp363?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp365)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp366, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp368 = (modelica_boolean)tmp366;
  if(tmp368)
  {
    tmp369 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp367, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp369 = (tmp367?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp369)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp370, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 4, (-((tmp370?1.0:-0.0))), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp371, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp373 = (modelica_boolean)tmp371;
  if(tmp373)
  {
    tmp374 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp372, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp374 = (tmp372?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp374)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp375, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(4, 1, (-((tmp375?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb304(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,304};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp391;
  modelica_boolean tmp392;
  modelica_boolean tmp393;
  modelica_boolean tmp394;
  modelica_real tmp395;
  RELATIONHYSTERESIS(tmp376, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp378 = (modelica_boolean)tmp376;
  if(tmp378)
  {
    tmp379 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp377, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp379 = (tmp377?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp379, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp380, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp382 = (modelica_boolean)tmp380;
  if(tmp382)
  {
    tmp383 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp381, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp383 = (tmp381?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp383, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp384, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp386 = (modelica_boolean)tmp384;
  if(tmp386)
  {
    tmp387 = data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp385, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp387 = (tmp385?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp387, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp388, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp390 = (modelica_boolean)tmp388;
  if(tmp390)
  {
    tmp391 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp389, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp391 = (tmp389?data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp391, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp392, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp394 = (modelica_boolean)tmp392;
  if(tmp394)
  {
    tmp395 = (-data->localData[0]->realVars[27] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp393, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp395 = (tmp393?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[27] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp395, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData304(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA238(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,238};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp396;
  modelica_boolean tmp397;
  modelica_boolean tmp398;
  modelica_real tmp399;
  modelica_boolean tmp400;
  modelica_boolean tmp401;
  modelica_boolean tmp402;
  modelica_real tmp403;
  modelica_boolean tmp404;
  modelica_boolean tmp405;
  modelica_boolean tmp406;
  modelica_boolean tmp407;
  modelica_boolean tmp408;
  modelica_real tmp409;
  modelica_boolean tmp410;
  modelica_boolean tmp411;
  modelica_boolean tmp412;
  modelica_boolean tmp413;
  modelica_real tmp414;
  modelica_boolean tmp415;
  modelica_boolean tmp416;
  modelica_boolean tmp417;
  modelica_real tmp418;
  modelica_boolean tmp419;
  modelica_boolean tmp420;
  modelica_boolean tmp421;
  modelica_real tmp422;
  modelica_boolean tmp423;
  modelica_boolean tmp424;
  modelica_boolean tmp425;
  modelica_real tmp426;
  modelica_boolean tmp427;
  modelica_boolean tmp428;
  modelica_boolean tmp429;
  modelica_real tmp430;
  modelica_boolean tmp431;
  modelica_boolean tmp432;
  modelica_boolean tmp433;
  modelica_real tmp434;
  modelica_boolean tmp435;
  modelica_boolean tmp436;
  modelica_boolean tmp437;
  modelica_boolean tmp438;
  modelica_real tmp439;
  tmp396 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp398 = (modelica_boolean)tmp396;
  if(tmp398)
  {
    tmp399 = 0.0;
  }
  else
  {
    tmp397 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp399 = (tmp397?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp399)), 0, linearSystemData, threadData);
  tmp400 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp402 = (modelica_boolean)tmp400;
  if(tmp402)
  {
    tmp403 = 0.0;
  }
  else
  {
    tmp401 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp403 = (tmp401?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp403)), 1, linearSystemData, threadData);
  tmp404 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp404?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp405 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp405?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp406 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp408 = (modelica_boolean)tmp406;
  if(tmp408)
  {
    tmp409 = 0.0;
  }
  else
  {
    tmp407 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp409 = (tmp407?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp409)), 4, linearSystemData, threadData);
  tmp410 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp410?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp411 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp413 = (modelica_boolean)tmp411;
  if(tmp413)
  {
    tmp414 = 0.0;
  }
  else
  {
    tmp412 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp414 = (tmp412?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp414)), 6, linearSystemData, threadData);
  tmp415 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp417 = (modelica_boolean)tmp415;
  if(tmp417)
  {
    tmp418 = -1.0;
  }
  else
  {
    tmp416 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp418 = (tmp416?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp418)), 7, linearSystemData, threadData);
  tmp419 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp421 = (modelica_boolean)tmp419;
  if(tmp421)
  {
    tmp422 = 0.0;
  }
  else
  {
    tmp420 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp422 = (tmp420?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp422)), 8, linearSystemData, threadData);
  tmp423 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp425 = (modelica_boolean)tmp423;
  if(tmp425)
  {
    tmp426 = -0.0;
  }
  else
  {
    tmp424 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp426 = (tmp424?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp426)), 9, linearSystemData, threadData);
  tmp427 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp429 = (modelica_boolean)tmp427;
  if(tmp429)
  {
    tmp430 = (-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp428 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp430 = (tmp428?-0.0:(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp430)), 10, linearSystemData, threadData);
  tmp431 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp433 = (modelica_boolean)tmp431;
  if(tmp433)
  {
    tmp434 = 0.0;
  }
  else
  {
    tmp432 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp434 = (tmp432?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp434)), 11, linearSystemData, threadData);
  tmp435 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp435?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp436 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp438 = (modelica_boolean)tmp436;
  if(tmp438)
  {
    tmp439 = 0.0;
  }
  else
  {
    tmp437 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp439 = (tmp437?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp439)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb238(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,238};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp440;
  modelica_boolean tmp441;
  modelica_boolean tmp442;
  modelica_real tmp443;
  modelica_boolean tmp444;
  modelica_boolean tmp445;
  modelica_boolean tmp446;
  modelica_real tmp447;
  modelica_boolean tmp448;
  modelica_boolean tmp449;
  modelica_boolean tmp450;
  modelica_real tmp451;
  modelica_boolean tmp452;
  modelica_boolean tmp453;
  modelica_boolean tmp454;
  modelica_real tmp455;
  modelica_boolean tmp456;
  modelica_boolean tmp457;
  modelica_boolean tmp458;
  modelica_real tmp459;
  tmp440 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp442 = (modelica_boolean)tmp440;
  if(tmp442)
  {
    tmp443 = 0.0;
  }
  else
  {
    tmp441 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp443 = (tmp441?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp443, linearSystemData, threadData);
  tmp444 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp446 = (modelica_boolean)tmp444;
  if(tmp446)
  {
    tmp447 = (-data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp445 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp447 = (tmp445?data->localData[0]->realVars[114] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp447, linearSystemData, threadData);
  tmp448 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp450 = (modelica_boolean)tmp448;
  if(tmp450)
  {
    tmp451 = 0.0;
  }
  else
  {
    tmp449 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp451 = (tmp449?data->localData[0]->realVars[112] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp451, linearSystemData, threadData);
  tmp452 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp454 = (modelica_boolean)tmp452;
  if(tmp454)
  {
    tmp455 = data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp453 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp455 = (tmp453?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp455, linearSystemData, threadData);
  tmp456 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp458 = (modelica_boolean)tmp456;
  if(tmp458)
  {
    tmp459 = 0.0;
  }
  else
  {
    tmp457 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp459 = (tmp457?data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp459, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData238(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA147(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,147};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp460;
  modelica_boolean tmp461;
  modelica_boolean tmp462;
  modelica_real tmp463;
  modelica_boolean tmp464;
  modelica_boolean tmp465;
  modelica_boolean tmp466;
  modelica_real tmp467;
  modelica_boolean tmp468;
  modelica_boolean tmp469;
  modelica_boolean tmp470;
  modelica_real tmp471;
  modelica_boolean tmp472;
  modelica_boolean tmp473;
  modelica_boolean tmp474;
  modelica_boolean tmp475;
  modelica_real tmp476;
  modelica_boolean tmp477;
  modelica_boolean tmp478;
  modelica_boolean tmp479;
  modelica_boolean tmp480;
  modelica_real tmp481;
  modelica_boolean tmp482;
  modelica_boolean tmp483;
  modelica_boolean tmp484;
  modelica_real tmp485;
  modelica_boolean tmp486;
  modelica_boolean tmp487;
  modelica_boolean tmp488;
  modelica_real tmp489;
  modelica_boolean tmp490;
  modelica_boolean tmp491;
  modelica_boolean tmp492;
  modelica_boolean tmp493;
  modelica_real tmp494;
  modelica_boolean tmp495;
  modelica_boolean tmp496;
  modelica_boolean tmp497;
  modelica_real tmp498;
  modelica_boolean tmp499;
  modelica_boolean tmp500;
  modelica_boolean tmp501;
  modelica_real tmp502;
  modelica_boolean tmp503;
  tmp460 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp462 = (modelica_boolean)tmp460;
  if(tmp462)
  {
    tmp463 = -0.0;
  }
  else
  {
    tmp461 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp463 = (tmp461?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp463)), 0, linearSystemData, threadData);
  tmp464 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp466 = (modelica_boolean)tmp464;
  if(tmp466)
  {
    tmp467 = (-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp465 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp467 = (tmp465?-0.0:(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 4, (-(tmp467)), 1, linearSystemData, threadData);
  tmp468 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp470 = (modelica_boolean)tmp468;
  if(tmp470)
  {
    tmp471 = 0.0;
  }
  else
  {
    tmp469 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp471 = (tmp469?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp471)), 2, linearSystemData, threadData);
  tmp472 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp472?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp473 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp475 = (modelica_boolean)tmp473;
  if(tmp475)
  {
    tmp476 = 0.0;
  }
  else
  {
    tmp474 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp476 = (tmp474?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp476)), 4, linearSystemData, threadData);
  tmp477 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp477?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp478 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp480 = (modelica_boolean)tmp478;
  if(tmp480)
  {
    tmp481 = 0.0;
  }
  else
  {
    tmp479 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp481 = (tmp479?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp481)), 6, linearSystemData, threadData);
  tmp482 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp484 = (modelica_boolean)tmp482;
  if(tmp484)
  {
    tmp485 = 0.0;
  }
  else
  {
    tmp483 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp485 = (tmp483?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp485)), 7, linearSystemData, threadData);
  tmp486 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp488 = (modelica_boolean)tmp486;
  if(tmp488)
  {
    tmp489 = -1.0;
  }
  else
  {
    tmp487 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp489 = (tmp487?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp489)), 8, linearSystemData, threadData);
  tmp490 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp490?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp491 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp493 = (modelica_boolean)tmp491;
  if(tmp493)
  {
    tmp494 = 0.0;
  }
  else
  {
    tmp492 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp494 = (tmp492?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp494)), 10, linearSystemData, threadData);
  tmp495 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp497 = (modelica_boolean)tmp495;
  if(tmp497)
  {
    tmp498 = 0.0;
  }
  else
  {
    tmp496 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp498 = (tmp496?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp498)), 11, linearSystemData, threadData);
  tmp499 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp501 = (modelica_boolean)tmp499;
  if(tmp501)
  {
    tmp502 = 0.0;
  }
  else
  {
    tmp500 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp502 = (tmp500?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp502)), 12, linearSystemData, threadData);
  tmp503 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 2, (-((tmp503?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb147(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,147};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp504;
  modelica_boolean tmp505;
  modelica_boolean tmp506;
  modelica_real tmp507;
  modelica_boolean tmp508;
  modelica_boolean tmp509;
  modelica_boolean tmp510;
  modelica_real tmp511;
  modelica_boolean tmp512;
  modelica_boolean tmp513;
  modelica_boolean tmp514;
  modelica_real tmp515;
  modelica_boolean tmp516;
  modelica_boolean tmp517;
  modelica_boolean tmp518;
  modelica_real tmp519;
  modelica_boolean tmp520;
  modelica_boolean tmp521;
  modelica_boolean tmp522;
  modelica_real tmp523;
  tmp504 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp506 = (modelica_boolean)tmp504;
  if(tmp506)
  {
    tmp507 = data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp505 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp507 = (tmp505?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp507, linearSystemData, threadData);
  tmp508 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp510 = (modelica_boolean)tmp508;
  if(tmp510)
  {
    tmp511 = 0.0;
  }
  else
  {
    tmp509 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp511 = (tmp509?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp511, linearSystemData, threadData);
  tmp512 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp514 = (modelica_boolean)tmp512;
  if(tmp514)
  {
    tmp515 = 0.0;
  }
  else
  {
    tmp513 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp515 = (tmp513?data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp515, linearSystemData, threadData);
  tmp516 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp518 = (modelica_boolean)tmp516;
  if(tmp518)
  {
    tmp519 = 0.0;
  }
  else
  {
    tmp517 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp519 = (tmp517?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp519, linearSystemData, threadData);
  tmp520 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */);
  tmp522 = (modelica_boolean)tmp520;
  if(tmp522)
  {
    tmp523 = (-data->localData[0]->realVars[27] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp521 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[17] /* MatStm1.Pdew variable */);
    tmp523 = (tmp521?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[27] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp523, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData147(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA83(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,83};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp524;
  modelica_boolean tmp525;
  modelica_boolean tmp526;
  modelica_real tmp527;
  modelica_boolean tmp528;
  modelica_boolean tmp529;
  modelica_boolean tmp530;
  modelica_real tmp531;
  modelica_boolean tmp532;
  modelica_boolean tmp533;
  modelica_boolean tmp534;
  modelica_real tmp535;
  modelica_boolean tmp536;
  modelica_boolean tmp537;
  modelica_boolean tmp538;
  modelica_real tmp539;
  modelica_boolean tmp540;
  modelica_boolean tmp541;
  modelica_boolean tmp542;
  modelica_boolean tmp543;
  modelica_real tmp544;
  modelica_boolean tmp545;
  modelica_boolean tmp546;
  modelica_boolean tmp547;
  modelica_boolean tmp548;
  modelica_real tmp549;
  modelica_boolean tmp550;
  modelica_boolean tmp551;
  modelica_boolean tmp552;
  modelica_real tmp553;
  modelica_boolean tmp554;
  modelica_boolean tmp555;
  modelica_boolean tmp556;
  modelica_real tmp557;
  modelica_boolean tmp558;
  modelica_boolean tmp559;
  modelica_boolean tmp560;
  modelica_boolean tmp561;
  modelica_real tmp562;
  modelica_boolean tmp563;
  modelica_boolean tmp564;
  modelica_boolean tmp565;
  modelica_boolean tmp566;
  modelica_real tmp567;
  tmp524 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp526 = (modelica_boolean)tmp524;
  if(tmp526)
  {
    tmp527 = (-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp525 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp527 = (tmp525?-0.0:(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 3, (-(tmp527)), 0, linearSystemData, threadData);
  tmp528 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp530 = (modelica_boolean)tmp528;
  if(tmp530)
  {
    tmp531 = -0.0;
  }
  else
  {
    tmp529 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp531 = (tmp529?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp531)), 1, linearSystemData, threadData);
  tmp532 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp534 = (modelica_boolean)tmp532;
  if(tmp534)
  {
    tmp535 = 0.0;
  }
  else
  {
    tmp533 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp535 = (tmp533?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp535)), 2, linearSystemData, threadData);
  tmp536 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp538 = (modelica_boolean)tmp536;
  if(tmp538)
  {
    tmp539 = 0.0;
  }
  else
  {
    tmp537 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp539 = (tmp537?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp539)), 3, linearSystemData, threadData);
  tmp540 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp540?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp541 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp543 = (modelica_boolean)tmp541;
  if(tmp543)
  {
    tmp544 = 0.0;
  }
  else
  {
    tmp542 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp544 = (tmp542?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp544)), 5, linearSystemData, threadData);
  tmp545 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp545?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp546 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp548 = (modelica_boolean)tmp546;
  if(tmp548)
  {
    tmp549 = -1.0;
  }
  else
  {
    tmp547 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp549 = (tmp547?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp549)), 7, linearSystemData, threadData);
  tmp550 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp552 = (modelica_boolean)tmp550;
  if(tmp552)
  {
    tmp553 = 0.0;
  }
  else
  {
    tmp551 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp553 = (tmp551?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp553)), 8, linearSystemData, threadData);
  tmp554 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp556 = (modelica_boolean)tmp554;
  if(tmp556)
  {
    tmp557 = 0.0;
  }
  else
  {
    tmp555 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp557 = (tmp555?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp557)), 9, linearSystemData, threadData);
  tmp558 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp558?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp559 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp561 = (modelica_boolean)tmp559;
  if(tmp561)
  {
    tmp562 = 0.0;
  }
  else
  {
    tmp560 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp562 = (tmp560?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp562)), 11, linearSystemData, threadData);
  tmp563 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp563?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp564 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp566 = (modelica_boolean)tmp564;
  if(tmp566)
  {
    tmp567 = 0.0;
  }
  else
  {
    tmp565 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp567 = (tmp565?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp567)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb83(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,83};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp568;
  modelica_boolean tmp569;
  modelica_boolean tmp570;
  modelica_real tmp571;
  modelica_boolean tmp572;
  modelica_boolean tmp573;
  modelica_boolean tmp574;
  modelica_real tmp575;
  modelica_boolean tmp576;
  modelica_boolean tmp577;
  modelica_boolean tmp578;
  modelica_real tmp579;
  modelica_boolean tmp580;
  modelica_boolean tmp581;
  modelica_boolean tmp582;
  modelica_real tmp583;
  modelica_boolean tmp584;
  modelica_boolean tmp585;
  modelica_boolean tmp586;
  modelica_real tmp587;
  tmp568 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp570 = (modelica_boolean)tmp568;
  if(tmp570)
  {
    tmp571 = data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp569 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp571 = (tmp569?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp571, linearSystemData, threadData);
  tmp572 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp574 = (modelica_boolean)tmp572;
  if(tmp574)
  {
    tmp575 = 0.0;
  }
  else
  {
    tmp573 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp575 = (tmp573?data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp575, linearSystemData, threadData);
  tmp576 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp578 = (modelica_boolean)tmp576;
  if(tmp578)
  {
    tmp579 = 0.0;
  }
  else
  {
    tmp577 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp579 = (tmp577?data->localData[0]->realVars[112] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp579, linearSystemData, threadData);
  tmp580 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp582 = (modelica_boolean)tmp580;
  if(tmp582)
  {
    tmp583 = 0.0;
  }
  else
  {
    tmp581 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp583 = (tmp581?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp583, linearSystemData, threadData);
  tmp584 = GreaterEq(101321.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp586 = (modelica_boolean)tmp584;
  if(tmp586)
  {
    tmp587 = (-data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp585 = GreaterEq(101321.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp587 = (tmp585?data->localData[0]->realVars[114] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp587, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData83(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,1] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 304;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA304;
  linearSystemData[3].setb = setLinearVectorb304;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData304;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 238;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA238;
  linearSystemData[2].setb = setLinearVectorb238;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData238;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 147;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA147;
  linearSystemData[1].setb = setLinearVectorb147;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData147;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 83;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA83;
  linearSystemData[0].setb = setLinearVectorb83;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData83;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

