/* Linear Systems */
#include "heater1_model.h"
#include "heater1_12jac.h"
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
  modelica_boolean tmp330;
  modelica_boolean tmp331;
  modelica_boolean tmp332;
  modelica_boolean tmp333;
  modelica_real tmp334;
  modelica_boolean tmp335;
  modelica_boolean tmp336;
  modelica_boolean tmp337;
  modelica_real tmp338;
  modelica_boolean tmp339;
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
  modelica_boolean tmp360;
  modelica_boolean tmp361;
  modelica_boolean tmp362;
  modelica_real tmp363;
  modelica_boolean tmp364;
  modelica_boolean tmp365;
  modelica_boolean tmp366;
  modelica_real tmp367;
  modelica_boolean tmp368;
  modelica_boolean tmp369;
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  modelica_real tmp372;
  modelica_boolean tmp373;
  RELATIONHYSTERESIS(tmp330, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp330?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp331, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp333 = (modelica_boolean)tmp331;
  if(tmp333)
  {
    tmp334 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp332, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp334 = (tmp332?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp334)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp335, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp337 = (modelica_boolean)tmp335;
  if(tmp337)
  {
    tmp338 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp336, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp338 = (tmp336?(-data->localData[0]->realVars[181] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp338)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp339, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 2, (-((tmp339?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp340, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp342 = (modelica_boolean)tmp340;
  if(tmp342)
  {
    tmp343 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp341, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp343 = (tmp341?(-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp343)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp344, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp346 = (modelica_boolean)tmp344;
  if(tmp346)
  {
    tmp347 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp345, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp347 = (tmp345?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp347)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp348, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp350 = (modelica_boolean)tmp348;
  if(tmp350)
  {
    tmp351 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp349, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp351 = (tmp349?(-data->localData[0]->realVars[182] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp351)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp352, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp354 = (modelica_boolean)tmp352;
  if(tmp354)
  {
    tmp355 = (-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp353, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp355 = (tmp353?-0.0:(-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 3, (-(tmp355)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp356, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp358 = (modelica_boolean)tmp356;
  if(tmp358)
  {
    tmp359 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp357, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp359 = (tmp357?(-data->localData[0]->realVars[181] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp359)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp360, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp362 = (modelica_boolean)tmp360;
  if(tmp362)
  {
    tmp363 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp361, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp363 = (tmp361?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp363)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp364, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp366 = (modelica_boolean)tmp364;
  if(tmp366)
  {
    tmp367 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp365, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp367 = (tmp365?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp367)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp368, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 4, (-((tmp368?1.0:-0.0))), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp369, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp371 = (modelica_boolean)tmp369;
  if(tmp371)
  {
    tmp372 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp370, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp372 = (tmp370?(-data->localData[0]->realVars[182] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp372)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp373, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(4, 1, (-((tmp373?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb304(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,304};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp374;
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  modelica_real tmp377;
  modelica_boolean tmp378;
  modelica_boolean tmp379;
  modelica_boolean tmp380;
  modelica_real tmp381;
  modelica_boolean tmp382;
  modelica_boolean tmp383;
  modelica_boolean tmp384;
  modelica_real tmp385;
  modelica_boolean tmp386;
  modelica_boolean tmp387;
  modelica_boolean tmp388;
  modelica_real tmp389;
  modelica_boolean tmp390;
  modelica_boolean tmp391;
  modelica_boolean tmp392;
  modelica_real tmp393;
  RELATIONHYSTERESIS(tmp374, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp376 = (modelica_boolean)tmp374;
  if(tmp376)
  {
    tmp377 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp375, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp377 = (tmp375?data->localData[0]->realVars[112] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp377, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp378, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp380 = (modelica_boolean)tmp378;
  if(tmp380)
  {
    tmp381 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp379, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp381 = (tmp379?data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp381, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp382, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp384 = (modelica_boolean)tmp382;
  if(tmp384)
  {
    tmp385 = data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp383, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp385 = (tmp383?data->localData[0]->realVars[114] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp385, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp386, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp388 = (modelica_boolean)tmp386;
  if(tmp388)
  {
    tmp389 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp387, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp389 = (tmp387?data->localData[0]->realVars[113] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp389, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp390, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp392 = (modelica_boolean)tmp390;
  if(tmp392)
  {
    tmp393 = (-data->localData[0]->realVars[117] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp391, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp393 = (tmp391?data->localData[0]->realVars[115] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[117] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp393, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData304(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[121].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[121].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[121].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA238(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,238};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp405;
  modelica_boolean tmp406;
  modelica_real tmp407;
  modelica_boolean tmp408;
  modelica_boolean tmp409;
  modelica_boolean tmp410;
  modelica_boolean tmp411;
  modelica_real tmp412;
  modelica_boolean tmp413;
  modelica_boolean tmp414;
  modelica_boolean tmp415;
  modelica_real tmp416;
  modelica_boolean tmp417;
  modelica_boolean tmp418;
  modelica_boolean tmp419;
  modelica_real tmp420;
  modelica_boolean tmp421;
  modelica_boolean tmp422;
  modelica_boolean tmp423;
  modelica_real tmp424;
  modelica_boolean tmp425;
  modelica_boolean tmp426;
  modelica_boolean tmp427;
  modelica_real tmp428;
  modelica_boolean tmp429;
  modelica_boolean tmp430;
  modelica_boolean tmp431;
  modelica_real tmp432;
  modelica_boolean tmp433;
  modelica_boolean tmp434;
  modelica_boolean tmp435;
  modelica_boolean tmp436;
  modelica_real tmp437;
  tmp394 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp396 = (modelica_boolean)tmp394;
  if(tmp396)
  {
    tmp397 = 0.0;
  }
  else
  {
    tmp395 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp397 = (tmp395?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp397)), 0, linearSystemData, threadData);
  tmp398 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp400 = (modelica_boolean)tmp398;
  if(tmp400)
  {
    tmp401 = 0.0;
  }
  else
  {
    tmp399 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp401 = (tmp399?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp401)), 1, linearSystemData, threadData);
  tmp402 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp402?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp403 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp403?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp404 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp406 = (modelica_boolean)tmp404;
  if(tmp406)
  {
    tmp407 = 0.0;
  }
  else
  {
    tmp405 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp407 = (tmp405?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp407)), 4, linearSystemData, threadData);
  tmp408 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp408?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp409 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp411 = (modelica_boolean)tmp409;
  if(tmp411)
  {
    tmp412 = 0.0;
  }
  else
  {
    tmp410 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp412 = (tmp410?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp412)), 6, linearSystemData, threadData);
  tmp413 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp415 = (modelica_boolean)tmp413;
  if(tmp415)
  {
    tmp416 = -1.0;
  }
  else
  {
    tmp414 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp416 = (tmp414?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp416)), 7, linearSystemData, threadData);
  tmp417 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp419 = (modelica_boolean)tmp417;
  if(tmp419)
  {
    tmp420 = 0.0;
  }
  else
  {
    tmp418 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp420 = (tmp418?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp420)), 8, linearSystemData, threadData);
  tmp421 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp423 = (modelica_boolean)tmp421;
  if(tmp423)
  {
    tmp424 = -0.0;
  }
  else
  {
    tmp422 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp424 = (tmp422?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp424)), 9, linearSystemData, threadData);
  tmp425 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp427 = (modelica_boolean)tmp425;
  if(tmp427)
  {
    tmp428 = (-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp426 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp428 = (tmp426?-0.0:(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp428)), 10, linearSystemData, threadData);
  tmp429 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp431 = (modelica_boolean)tmp429;
  if(tmp431)
  {
    tmp432 = 0.0;
  }
  else
  {
    tmp430 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp432 = (tmp430?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp432)), 11, linearSystemData, threadData);
  tmp433 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp433?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp434 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp436 = (modelica_boolean)tmp434;
  if(tmp436)
  {
    tmp437 = 0.0;
  }
  else
  {
    tmp435 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp437 = (tmp435?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp437)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb238(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,238};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp438;
  modelica_boolean tmp439;
  modelica_boolean tmp440;
  modelica_real tmp441;
  modelica_boolean tmp442;
  modelica_boolean tmp443;
  modelica_boolean tmp444;
  modelica_real tmp445;
  modelica_boolean tmp446;
  modelica_boolean tmp447;
  modelica_boolean tmp448;
  modelica_real tmp449;
  modelica_boolean tmp450;
  modelica_boolean tmp451;
  modelica_boolean tmp452;
  modelica_real tmp453;
  modelica_boolean tmp454;
  modelica_boolean tmp455;
  modelica_boolean tmp456;
  modelica_real tmp457;
  tmp438 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp440 = (modelica_boolean)tmp438;
  if(tmp440)
  {
    tmp441 = 0.0;
  }
  else
  {
    tmp439 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp441 = (tmp439?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp441, linearSystemData, threadData);
  tmp442 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp444 = (modelica_boolean)tmp442;
  if(tmp444)
  {
    tmp445 = (-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp443 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp445 = (tmp443?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp445, linearSystemData, threadData);
  tmp446 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp448 = (modelica_boolean)tmp446;
  if(tmp448)
  {
    tmp449 = 0.0;
  }
  else
  {
    tmp447 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp449 = (tmp447?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp449, linearSystemData, threadData);
  tmp450 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp452 = (modelica_boolean)tmp450;
  if(tmp452)
  {
    tmp453 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp451 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp453 = (tmp451?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp453, linearSystemData, threadData);
  tmp454 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp456 = (modelica_boolean)tmp454;
  if(tmp456)
  {
    tmp457 = 0.0;
  }
  else
  {
    tmp455 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp457 = (tmp455?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp457, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData238(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA147(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,147};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp458;
  modelica_boolean tmp459;
  modelica_boolean tmp460;
  modelica_real tmp461;
  modelica_boolean tmp462;
  modelica_boolean tmp463;
  modelica_boolean tmp464;
  modelica_real tmp465;
  modelica_boolean tmp466;
  modelica_boolean tmp467;
  modelica_boolean tmp468;
  modelica_real tmp469;
  modelica_boolean tmp470;
  modelica_boolean tmp471;
  modelica_boolean tmp472;
  modelica_boolean tmp473;
  modelica_real tmp474;
  modelica_boolean tmp475;
  modelica_boolean tmp476;
  modelica_boolean tmp477;
  modelica_boolean tmp478;
  modelica_real tmp479;
  modelica_boolean tmp480;
  modelica_boolean tmp481;
  modelica_boolean tmp482;
  modelica_real tmp483;
  modelica_boolean tmp484;
  modelica_boolean tmp485;
  modelica_boolean tmp486;
  modelica_real tmp487;
  modelica_boolean tmp488;
  modelica_boolean tmp489;
  modelica_boolean tmp490;
  modelica_boolean tmp491;
  modelica_real tmp492;
  modelica_boolean tmp493;
  modelica_boolean tmp494;
  modelica_boolean tmp495;
  modelica_real tmp496;
  modelica_boolean tmp497;
  modelica_boolean tmp498;
  modelica_boolean tmp499;
  modelica_real tmp500;
  modelica_boolean tmp501;
  tmp458 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp460 = (modelica_boolean)tmp458;
  if(tmp460)
  {
    tmp461 = -0.0;
  }
  else
  {
    tmp459 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp461 = (tmp459?(-data->localData[0]->realVars[182] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp461)), 0, linearSystemData, threadData);
  tmp462 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp464 = (modelica_boolean)tmp462;
  if(tmp464)
  {
    tmp465 = (-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp463 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp465 = (tmp463?-0.0:(-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 4, (-(tmp465)), 1, linearSystemData, threadData);
  tmp466 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp468 = (modelica_boolean)tmp466;
  if(tmp468)
  {
    tmp469 = 0.0;
  }
  else
  {
    tmp467 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp469 = (tmp467?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp469)), 2, linearSystemData, threadData);
  tmp470 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp470?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp471 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp473 = (modelica_boolean)tmp471;
  if(tmp473)
  {
    tmp474 = 0.0;
  }
  else
  {
    tmp472 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp474 = (tmp472?(-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp474)), 4, linearSystemData, threadData);
  tmp475 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp475?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp476 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp478 = (modelica_boolean)tmp476;
  if(tmp478)
  {
    tmp479 = 0.0;
  }
  else
  {
    tmp477 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp479 = (tmp477?(-data->localData[0]->realVars[181] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp479)), 6, linearSystemData, threadData);
  tmp480 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp482 = (modelica_boolean)tmp480;
  if(tmp482)
  {
    tmp483 = 0.0;
  }
  else
  {
    tmp481 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp483 = (tmp481?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp483)), 7, linearSystemData, threadData);
  tmp484 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp486 = (modelica_boolean)tmp484;
  if(tmp486)
  {
    tmp487 = -1.0;
  }
  else
  {
    tmp485 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp487 = (tmp485?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp487)), 8, linearSystemData, threadData);
  tmp488 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp488?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp489 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp491 = (modelica_boolean)tmp489;
  if(tmp491)
  {
    tmp492 = 0.0;
  }
  else
  {
    tmp490 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp492 = (tmp490?(-data->localData[0]->realVars[181] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp492)), 10, linearSystemData, threadData);
  tmp493 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp495 = (modelica_boolean)tmp493;
  if(tmp495)
  {
    tmp496 = 0.0;
  }
  else
  {
    tmp494 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp496 = (tmp494?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp496)), 11, linearSystemData, threadData);
  tmp497 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp499 = (modelica_boolean)tmp497;
  if(tmp499)
  {
    tmp500 = 0.0;
  }
  else
  {
    tmp498 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp500 = (tmp498?(-data->localData[0]->realVars[182] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp500)), 12, linearSystemData, threadData);
  tmp501 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 2, (-((tmp501?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb147(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,147};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp502;
  modelica_boolean tmp503;
  modelica_boolean tmp504;
  modelica_real tmp505;
  modelica_boolean tmp506;
  modelica_boolean tmp507;
  modelica_boolean tmp508;
  modelica_real tmp509;
  modelica_boolean tmp510;
  modelica_boolean tmp511;
  modelica_boolean tmp512;
  modelica_real tmp513;
  modelica_boolean tmp514;
  modelica_boolean tmp515;
  modelica_boolean tmp516;
  modelica_real tmp517;
  modelica_boolean tmp518;
  modelica_boolean tmp519;
  modelica_boolean tmp520;
  modelica_real tmp521;
  tmp502 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp504 = (modelica_boolean)tmp502;
  if(tmp504)
  {
    tmp505 = data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp503 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp505 = (tmp503?data->localData[0]->realVars[114] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp505, linearSystemData, threadData);
  tmp506 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp508 = (modelica_boolean)tmp506;
  if(tmp508)
  {
    tmp509 = 0.0;
  }
  else
  {
    tmp507 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp509 = (tmp507?data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp509, linearSystemData, threadData);
  tmp510 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp512 = (modelica_boolean)tmp510;
  if(tmp512)
  {
    tmp513 = 0.0;
  }
  else
  {
    tmp511 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp513 = (tmp511?data->localData[0]->realVars[113] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp513, linearSystemData, threadData);
  tmp514 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp516 = (modelica_boolean)tmp514;
  if(tmp516)
  {
    tmp517 = 0.0;
  }
  else
  {
    tmp515 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp517 = (tmp515?data->localData[0]->realVars[112] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp517, linearSystemData, threadData);
  tmp518 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp520 = (modelica_boolean)tmp518;
  if(tmp520)
  {
    tmp521 = (-data->localData[0]->realVars[117] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp519 = GreaterEq(data->localData[0]->realVars[7] /* Heater1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp521 = (tmp519?data->localData[0]->realVars[115] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[117] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp521, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData147(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[121].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[121].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[121].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA83(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,83};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp522;
  modelica_boolean tmp523;
  modelica_boolean tmp524;
  modelica_real tmp525;
  modelica_boolean tmp526;
  modelica_boolean tmp527;
  modelica_boolean tmp528;
  modelica_real tmp529;
  modelica_boolean tmp530;
  modelica_boolean tmp531;
  modelica_boolean tmp532;
  modelica_real tmp533;
  modelica_boolean tmp534;
  modelica_boolean tmp535;
  modelica_boolean tmp536;
  modelica_real tmp537;
  modelica_boolean tmp538;
  modelica_boolean tmp539;
  modelica_boolean tmp540;
  modelica_boolean tmp541;
  modelica_real tmp542;
  modelica_boolean tmp543;
  modelica_boolean tmp544;
  modelica_boolean tmp545;
  modelica_boolean tmp546;
  modelica_real tmp547;
  modelica_boolean tmp548;
  modelica_boolean tmp549;
  modelica_boolean tmp550;
  modelica_real tmp551;
  modelica_boolean tmp552;
  modelica_boolean tmp553;
  modelica_boolean tmp554;
  modelica_real tmp555;
  modelica_boolean tmp556;
  modelica_boolean tmp557;
  modelica_boolean tmp558;
  modelica_boolean tmp559;
  modelica_real tmp560;
  modelica_boolean tmp561;
  modelica_boolean tmp562;
  modelica_boolean tmp563;
  modelica_boolean tmp564;
  modelica_real tmp565;
  tmp522 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp524 = (modelica_boolean)tmp522;
  if(tmp524)
  {
    tmp525 = (-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp523 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp525 = (tmp523?-0.0:(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 3, (-(tmp525)), 0, linearSystemData, threadData);
  tmp526 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp528 = (modelica_boolean)tmp526;
  if(tmp528)
  {
    tmp529 = -0.0;
  }
  else
  {
    tmp527 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp529 = (tmp527?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp529)), 1, linearSystemData, threadData);
  tmp530 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp532 = (modelica_boolean)tmp530;
  if(tmp532)
  {
    tmp533 = 0.0;
  }
  else
  {
    tmp531 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp533 = (tmp531?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp533)), 2, linearSystemData, threadData);
  tmp534 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp536 = (modelica_boolean)tmp534;
  if(tmp536)
  {
    tmp537 = 0.0;
  }
  else
  {
    tmp535 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp537 = (tmp535?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp537)), 3, linearSystemData, threadData);
  tmp538 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp538?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp539 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp541 = (modelica_boolean)tmp539;
  if(tmp541)
  {
    tmp542 = 0.0;
  }
  else
  {
    tmp540 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp542 = (tmp540?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp542)), 5, linearSystemData, threadData);
  tmp543 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp543?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp544 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp546 = (modelica_boolean)tmp544;
  if(tmp546)
  {
    tmp547 = -1.0;
  }
  else
  {
    tmp545 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp547 = (tmp545?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp547)), 7, linearSystemData, threadData);
  tmp548 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp550 = (modelica_boolean)tmp548;
  if(tmp550)
  {
    tmp551 = 0.0;
  }
  else
  {
    tmp549 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp551 = (tmp549?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp551)), 8, linearSystemData, threadData);
  tmp552 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp554 = (modelica_boolean)tmp552;
  if(tmp554)
  {
    tmp555 = 0.0;
  }
  else
  {
    tmp553 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp555 = (tmp553?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp555)), 9, linearSystemData, threadData);
  tmp556 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp556?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp557 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp559 = (modelica_boolean)tmp557;
  if(tmp559)
  {
    tmp560 = 0.0;
  }
  else
  {
    tmp558 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp560 = (tmp558?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp560)), 11, linearSystemData, threadData);
  tmp561 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp561?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp562 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp564 = (modelica_boolean)tmp562;
  if(tmp564)
  {
    tmp565 = 0.0;
  }
  else
  {
    tmp563 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp565 = (tmp563?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp565)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb83(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,83};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp566;
  modelica_boolean tmp567;
  modelica_boolean tmp568;
  modelica_real tmp569;
  modelica_boolean tmp570;
  modelica_boolean tmp571;
  modelica_boolean tmp572;
  modelica_real tmp573;
  modelica_boolean tmp574;
  modelica_boolean tmp575;
  modelica_boolean tmp576;
  modelica_real tmp577;
  modelica_boolean tmp578;
  modelica_boolean tmp579;
  modelica_boolean tmp580;
  modelica_real tmp581;
  modelica_boolean tmp582;
  modelica_boolean tmp583;
  modelica_boolean tmp584;
  modelica_real tmp585;
  tmp566 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp568 = (modelica_boolean)tmp566;
  if(tmp568)
  {
    tmp569 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp567 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp569 = (tmp567?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp569, linearSystemData, threadData);
  tmp570 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp572 = (modelica_boolean)tmp570;
  if(tmp572)
  {
    tmp573 = 0.0;
  }
  else
  {
    tmp571 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp573 = (tmp571?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp573, linearSystemData, threadData);
  tmp574 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp576 = (modelica_boolean)tmp574;
  if(tmp576)
  {
    tmp577 = 0.0;
  }
  else
  {
    tmp575 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp577 = (tmp575?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp577, linearSystemData, threadData);
  tmp578 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp580 = (modelica_boolean)tmp578;
  if(tmp580)
  {
    tmp581 = 0.0;
  }
  else
  {
    tmp579 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp581 = (tmp579?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp581, linearSystemData, threadData);
  tmp582 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp584 = (modelica_boolean)tmp582;
  if(tmp584)
  {
    tmp585 = (-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp583 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp585 = (tmp583?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp585, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData83(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void heater1_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
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

