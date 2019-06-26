/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA306(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,306};
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
  modelica_real tmp342;
  modelica_boolean tmp343;
  modelica_boolean tmp344;
  modelica_boolean tmp345;
  modelica_boolean tmp346;
  modelica_real tmp347;
  modelica_boolean tmp348;
  modelica_boolean tmp349;
  modelica_boolean tmp350;
  modelica_boolean tmp351;
  modelica_real tmp352;
  modelica_boolean tmp353;
  modelica_boolean tmp354;
  modelica_boolean tmp355;
  modelica_real tmp356;
  modelica_boolean tmp357;
  modelica_boolean tmp358;
  modelica_boolean tmp359;
  modelica_real tmp360;
  modelica_boolean tmp361;
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  modelica_real tmp364;
  modelica_boolean tmp365;
  modelica_boolean tmp366;
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  modelica_real tmp369;
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  modelica_boolean tmp372;
  modelica_real tmp373;
  RELATIONHYSTERESIS(tmp330, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp330?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp331, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp333 = (modelica_boolean)tmp331;
  if(tmp333)
  {
    tmp334 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp332, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp334 = (tmp332?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp334)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp335, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp337 = (modelica_boolean)tmp335;
  if(tmp337)
  {
    tmp338 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp336, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp338 = (tmp336?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp338)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp339, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp341 = (modelica_boolean)tmp339;
  if(tmp341)
  {
    tmp342 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp340, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp342 = (tmp340?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp342)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp343, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp343?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp344, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp346 = (modelica_boolean)tmp344;
  if(tmp346)
  {
    tmp347 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp345, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp347 = (tmp345?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp347)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp348, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp348?1.0:-0.0))), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp349, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp351 = (modelica_boolean)tmp349;
  if(tmp351)
  {
    tmp352 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp350, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp352 = (tmp350?(-data->localData[0]->realVars[182] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp352)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp353, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp355 = (modelica_boolean)tmp353;
  if(tmp355)
  {
    tmp356 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp354, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp356 = (tmp354?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp356)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp357, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp359 = (modelica_boolean)tmp357;
  if(tmp359)
  {
    tmp360 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp358, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp360 = (tmp358?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp360)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp361, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp363 = (modelica_boolean)tmp361;
  if(tmp363)
  {
    tmp364 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp362, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp364 = (tmp362?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp364)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp365, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 4, (-((tmp365?1.0:-0.0))), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp366, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp368 = (modelica_boolean)tmp366;
  if(tmp368)
  {
    tmp369 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp367, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp369 = (tmp367?(-data->localData[0]->realVars[182] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp369)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp370, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp372 = (modelica_boolean)tmp370;
  if(tmp372)
  {
    tmp373 = (-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp371, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp373 = (tmp371?-0.0:(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp373)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb306(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,306};
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
  RELATIONHYSTERESIS(tmp374, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp376 = (modelica_boolean)tmp374;
  if(tmp376)
  {
    tmp377 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp375, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp377 = (tmp375?data->localData[0]->realVars[110] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp377, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp378, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp380 = (modelica_boolean)tmp378;
  if(tmp380)
  {
    tmp381 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp379, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp381 = (tmp379?data->localData[0]->realVars[112] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp381, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp382, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp384 = (modelica_boolean)tmp382;
  if(tmp384)
  {
    tmp385 = (-data->localData[0]->realVars[117] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp383, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp385 = (tmp383?data->localData[0]->realVars[115] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[117] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp385, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp386, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp388 = (modelica_boolean)tmp386;
  if(tmp388)
  {
    tmp389 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp387, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp389 = (tmp387?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp389, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp390, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp392 = (modelica_boolean)tmp390;
  if(tmp392)
  {
    tmp393 = data->localData[0]->realVars[110] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp391, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp393 = (tmp391?data->localData[0]->realVars[114] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[110] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp393, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData306(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,1] */.max;
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
  modelica_real tmp405;
  modelica_boolean tmp406;
  modelica_boolean tmp407;
  modelica_boolean tmp408;
  modelica_boolean tmp409;
  modelica_real tmp410;
  modelica_boolean tmp411;
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
  modelica_boolean tmp424;
  modelica_boolean tmp425;
  modelica_boolean tmp426;
  modelica_real tmp427;
  modelica_boolean tmp428;
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
    tmp401 = -1.0;
  }
  else
  {
    tmp399 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp401 = (tmp399?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp401)), 1, linearSystemData, threadData);
  tmp402 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp404 = (modelica_boolean)tmp402;
  if(tmp404)
  {
    tmp405 = 0.0;
  }
  else
  {
    tmp403 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp405 = (tmp403?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp405)), 2, linearSystemData, threadData);
  tmp406 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp406?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp407 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp409 = (modelica_boolean)tmp407;
  if(tmp409)
  {
    tmp410 = 0.0;
  }
  else
  {
    tmp408 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp410 = (tmp408?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp410)), 4, linearSystemData, threadData);
  tmp411 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp411?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp412 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp414 = (modelica_boolean)tmp412;
  if(tmp414)
  {
    tmp415 = 0.0;
  }
  else
  {
    tmp413 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp415 = (tmp413?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp415)), 6, linearSystemData, threadData);
  tmp416 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp418 = (modelica_boolean)tmp416;
  if(tmp418)
  {
    tmp419 = (-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp417 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp419 = (tmp417?-0.0:(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 2, (-(tmp419)), 7, linearSystemData, threadData);
  tmp420 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp422 = (modelica_boolean)tmp420;
  if(tmp422)
  {
    tmp423 = -0.0;
  }
  else
  {
    tmp421 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp423 = (tmp421?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp423)), 8, linearSystemData, threadData);
  tmp424 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp426 = (modelica_boolean)tmp424;
  if(tmp426)
  {
    tmp427 = 0.0;
  }
  else
  {
    tmp425 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp427 = (tmp425?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp427)), 9, linearSystemData, threadData);
  tmp428 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp428?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp429 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp431 = (modelica_boolean)tmp429;
  if(tmp431)
  {
    tmp432 = 0.0;
  }
  else
  {
    tmp430 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp432 = (tmp430?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 4, (-(tmp432)), 11, linearSystemData, threadData);
  tmp433 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp433?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp434 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp436 = (modelica_boolean)tmp434;
  if(tmp436)
  {
    tmp437 = 0.0;
  }
  else
  {
    tmp435 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp437 = (tmp435?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp437)), 13, linearSystemData, threadData);
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
    tmp441 = (tmp439?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp441, linearSystemData, threadData);
  tmp442 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp444 = (modelica_boolean)tmp442;
  if(tmp444)
  {
    tmp445 = 0.0;
  }
  else
  {
    tmp443 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp445 = (tmp443?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp445, linearSystemData, threadData);
  tmp446 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp448 = (modelica_boolean)tmp446;
  if(tmp448)
  {
    tmp449 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp447 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp449 = (tmp447?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp449, linearSystemData, threadData);
  tmp450 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp452 = (modelica_boolean)tmp450;
  if(tmp452)
  {
    tmp453 = 0.0;
  }
  else
  {
    tmp451 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp453 = (tmp451?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp453, linearSystemData, threadData);
  tmp454 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp456 = (modelica_boolean)tmp454;
  if(tmp456)
  {
    tmp457 = (-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp455 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp457 = (tmp455?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp457, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData238(void *inData, threadData_t *threadData, void *systemData)
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
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.max;
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
  modelica_real tmp473;
  modelica_boolean tmp474;
  modelica_boolean tmp475;
  modelica_boolean tmp476;
  modelica_boolean tmp477;
  modelica_real tmp478;
  modelica_boolean tmp479;
  modelica_boolean tmp480;
  modelica_boolean tmp481;
  modelica_boolean tmp482;
  modelica_real tmp483;
  modelica_boolean tmp484;
  modelica_boolean tmp485;
  modelica_boolean tmp486;
  modelica_boolean tmp487;
  modelica_real tmp488;
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
  modelica_boolean tmp500;
  modelica_real tmp501;
  tmp458 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp460 = (modelica_boolean)tmp458;
  if(tmp460)
  {
    tmp461 = (-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp459 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp461 = (tmp459?-0.0:(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp461)), 0, linearSystemData, threadData);
  tmp462 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp464 = (modelica_boolean)tmp462;
  if(tmp464)
  {
    tmp465 = -0.0;
  }
  else
  {
    tmp463 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp465 = (tmp463?(-data->localData[0]->realVars[182] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp465)), 1, linearSystemData, threadData);
  tmp466 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp468 = (modelica_boolean)tmp466;
  if(tmp468)
  {
    tmp469 = 0.0;
  }
  else
  {
    tmp467 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp469 = (tmp467?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp469)), 2, linearSystemData, threadData);
  tmp470 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp472 = (modelica_boolean)tmp470;
  if(tmp472)
  {
    tmp473 = 0.0;
  }
  else
  {
    tmp471 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp473 = (tmp471?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp473)), 3, linearSystemData, threadData);
  tmp474 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp474?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp475 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp477 = (modelica_boolean)tmp475;
  if(tmp477)
  {
    tmp478 = 0.0;
  }
  else
  {
    tmp476 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp478 = (tmp476?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp478)), 5, linearSystemData, threadData);
  tmp479 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp479?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp480 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp482 = (modelica_boolean)tmp480;
  if(tmp482)
  {
    tmp483 = 0.0;
  }
  else
  {
    tmp481 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp483 = (tmp481?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp483)), 7, linearSystemData, threadData);
  tmp484 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp484?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp485 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp487 = (modelica_boolean)tmp485;
  if(tmp487)
  {
    tmp488 = 0.0;
  }
  else
  {
    tmp486 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp488 = (tmp486?(-data->localData[0]->realVars[182] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp488)), 9, linearSystemData, threadData);
  tmp489 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp491 = (modelica_boolean)tmp489;
  if(tmp491)
  {
    tmp492 = -1.0;
  }
  else
  {
    tmp490 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp492 = (tmp490?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp492)), 10, linearSystemData, threadData);
  tmp493 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp495 = (modelica_boolean)tmp493;
  if(tmp495)
  {
    tmp496 = 0.0;
  }
  else
  {
    tmp494 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp496 = (tmp494?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp496)), 11, linearSystemData, threadData);
  tmp497 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 3, (-((tmp497?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp498 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp500 = (modelica_boolean)tmp498;
  if(tmp500)
  {
    tmp501 = 0.0;
  }
  else
  {
    tmp499 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp501 = (tmp499?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp501)), 13, linearSystemData, threadData);
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
  tmp502 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp504 = (modelica_boolean)tmp502;
  if(tmp504)
  {
    tmp505 = data->localData[0]->realVars[110] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp503 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp505 = (tmp503?data->localData[0]->realVars[114] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[110] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp505, linearSystemData, threadData);
  tmp506 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp508 = (modelica_boolean)tmp506;
  if(tmp508)
  {
    tmp509 = 0.0;
  }
  else
  {
    tmp507 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp509 = (tmp507?data->localData[0]->realVars[110] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp509, linearSystemData, threadData);
  tmp510 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp512 = (modelica_boolean)tmp510;
  if(tmp512)
  {
    tmp513 = 0.0;
  }
  else
  {
    tmp511 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp513 = (tmp511?data->localData[0]->realVars[112] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp513, linearSystemData, threadData);
  tmp514 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp516 = (modelica_boolean)tmp514;
  if(tmp516)
  {
    tmp517 = (-data->localData[0]->realVars[117] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp515 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp517 = (tmp515?data->localData[0]->realVars[115] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[117] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp517, linearSystemData, threadData);
  tmp518 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm2.Pbubl variable */);
  tmp520 = (modelica_boolean)tmp518;
  if(tmp520)
  {
    tmp521 = 0.0;
  }
  else
  {
    tmp519 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm2.Pdew variable */);
    tmp521 = (tmp519?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp521, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData147(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,1] */.max;
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
  modelica_boolean tmp551;
  modelica_real tmp552;
  modelica_boolean tmp553;
  modelica_boolean tmp554;
  modelica_boolean tmp555;
  modelica_real tmp556;
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
  linearSystemData->setAElement(0, 0, (-(tmp525)), 0, linearSystemData, threadData);
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
    tmp533 = (tmp531?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp533)), 2, linearSystemData, threadData);
  tmp534 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp536 = (modelica_boolean)tmp534;
  if(tmp536)
  {
    tmp537 = 0.0;
  }
  else
  {
    tmp535 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp537 = (tmp535?-0.0:1.0);
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
    tmp542 = (tmp540?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp542)), 5, linearSystemData, threadData);
  tmp543 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp543?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp544 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp546 = (modelica_boolean)tmp544;
  if(tmp546)
  {
    tmp547 = 0.0;
  }
  else
  {
    tmp545 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp547 = (tmp545?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp547)), 7, linearSystemData, threadData);
  tmp548 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp548?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp549 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp551 = (modelica_boolean)tmp549;
  if(tmp551)
  {
    tmp552 = 0.0;
  }
  else
  {
    tmp550 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp552 = (tmp550?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp552)), 9, linearSystemData, threadData);
  tmp553 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp555 = (modelica_boolean)tmp553;
  if(tmp555)
  {
    tmp556 = -1.0;
  }
  else
  {
    tmp554 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp556 = (tmp554?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp556)), 10, linearSystemData, threadData);
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
  linearSystemData->setAElement(4, 1, (-(tmp560)), 11, linearSystemData, threadData);
  tmp561 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 3, (-((tmp561?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp562 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp564 = (modelica_boolean)tmp562;
  if(tmp564)
  {
    tmp565 = 0.0;
  }
  else
  {
    tmp563 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp565 = (tmp563?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp565)), 13, linearSystemData, threadData);
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
    tmp577 = (tmp575?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp577, linearSystemData, threadData);
  tmp578 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp580 = (modelica_boolean)tmp578;
  if(tmp580)
  {
    tmp581 = (-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp579 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp581 = (tmp579?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp581, linearSystemData, threadData);
  tmp582 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp584 = (modelica_boolean)tmp582;
  if(tmp584)
  {
    tmp585 = 0.0;
  }
  else
  {
    tmp583 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp585 = (tmp583?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp585, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData83(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
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
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 306;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA306;
  linearSystemData[3].setb = setLinearVectorb306;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData306;
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

