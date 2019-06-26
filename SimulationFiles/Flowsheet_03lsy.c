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
  modelica_real tmp344;
  modelica_boolean tmp345;
  modelica_boolean tmp346;
  modelica_boolean tmp347;
  modelica_boolean tmp348;
  modelica_real tmp349;
  modelica_boolean tmp350;
  modelica_boolean tmp351;
  modelica_boolean tmp352;
  modelica_boolean tmp353;
  modelica_real tmp354;
  modelica_boolean tmp355;
  modelica_boolean tmp356;
  modelica_boolean tmp357;
  modelica_real tmp358;
  modelica_boolean tmp359;
  modelica_boolean tmp360;
  modelica_boolean tmp361;
  modelica_real tmp362;
  modelica_boolean tmp363;
  modelica_boolean tmp364;
  modelica_boolean tmp365;
  modelica_real tmp366;
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  modelica_boolean tmp369;
  modelica_boolean tmp370;
  modelica_real tmp371;
  modelica_boolean tmp372;
  modelica_boolean tmp373;
  modelica_boolean tmp374;
  modelica_real tmp375;
  RELATIONHYSTERESIS(tmp332, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp332?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp333, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp335 = (modelica_boolean)tmp333;
  if(tmp335)
  {
    tmp336 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp334, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp336 = (tmp334?(-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp336)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp337, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp339 = (modelica_boolean)tmp337;
  if(tmp339)
  {
    tmp340 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp338, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp340 = (tmp338?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp340)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp341, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp343 = (modelica_boolean)tmp341;
  if(tmp343)
  {
    tmp344 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp342, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp344 = (tmp342?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp344)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp345, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp345?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp346, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp348 = (modelica_boolean)tmp346;
  if(tmp348)
  {
    tmp349 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp347, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp349 = (tmp347?(-data->localData[0]->realVars[181] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp349)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp350, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp350?1.0:-0.0))), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp351, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp353 = (modelica_boolean)tmp351;
  if(tmp353)
  {
    tmp354 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp352, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp354 = (tmp352?(-data->localData[0]->realVars[182] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp354)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp355, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp357 = (modelica_boolean)tmp355;
  if(tmp357)
  {
    tmp358 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp356, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp358 = (tmp356?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp358)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp359, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp361 = (modelica_boolean)tmp359;
  if(tmp361)
  {
    tmp362 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp360, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp362 = (tmp360?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp362)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp363, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp365 = (modelica_boolean)tmp363;
  if(tmp365)
  {
    tmp366 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp364, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp366 = (tmp364?(-data->localData[0]->realVars[181] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp366)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp367, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 4, (-((tmp367?1.0:-0.0))), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp368, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp370 = (modelica_boolean)tmp368;
  if(tmp370)
  {
    tmp371 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp369, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp371 = (tmp369?(-data->localData[0]->realVars[182] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp371)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp372, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp374 = (modelica_boolean)tmp372;
  if(tmp374)
  {
    tmp375 = (-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp373, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp375 = (tmp373?-0.0:(-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp375)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb306(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,306};
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
  RELATIONHYSTERESIS(tmp376, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp378 = (modelica_boolean)tmp376;
  if(tmp378)
  {
    tmp379 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp377, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp379 = (tmp377?data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp379, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp380, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp382 = (modelica_boolean)tmp380;
  if(tmp382)
  {
    tmp383 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp381, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp383 = (tmp381?data->localData[0]->realVars[112] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp383, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp384, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp386 = (modelica_boolean)tmp384;
  if(tmp386)
  {
    tmp387 = (-data->localData[0]->realVars[117] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp385, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp387 = (tmp385?data->localData[0]->realVars[115] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[117] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp387, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp388, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp390 = (modelica_boolean)tmp388;
  if(tmp390)
  {
    tmp391 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp389, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp391 = (tmp389?data->localData[0]->realVars[113] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp391, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp392, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp394 = (modelica_boolean)tmp392;
  if(tmp394)
  {
    tmp395 = data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp393, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp395 = (tmp393?data->localData[0]->realVars[114] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp395, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData306(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[121].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[121].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[121].attribute /* MatStm3.compMasFrac[3,2] */.max;
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
  modelica_real tmp407;
  modelica_boolean tmp408;
  modelica_boolean tmp409;
  modelica_boolean tmp410;
  modelica_boolean tmp411;
  modelica_real tmp412;
  modelica_boolean tmp413;
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
  modelica_boolean tmp426;
  modelica_boolean tmp427;
  modelica_boolean tmp428;
  modelica_real tmp429;
  modelica_boolean tmp430;
  modelica_boolean tmp431;
  modelica_boolean tmp432;
  modelica_boolean tmp433;
  modelica_real tmp434;
  modelica_boolean tmp435;
  modelica_boolean tmp436;
  modelica_boolean tmp437;
  modelica_boolean tmp438;
  modelica_real tmp439;
  tmp396 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp398 = (modelica_boolean)tmp396;
  if(tmp398)
  {
    tmp399 = 0.0;
  }
  else
  {
    tmp397 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp399 = (tmp397?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp399)), 0, linearSystemData, threadData);
  tmp400 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp402 = (modelica_boolean)tmp400;
  if(tmp402)
  {
    tmp403 = -1.0;
  }
  else
  {
    tmp401 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp403 = (tmp401?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp403)), 1, linearSystemData, threadData);
  tmp404 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp406 = (modelica_boolean)tmp404;
  if(tmp406)
  {
    tmp407 = 0.0;
  }
  else
  {
    tmp405 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp407 = (tmp405?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp407)), 2, linearSystemData, threadData);
  tmp408 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp408?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp409 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp411 = (modelica_boolean)tmp409;
  if(tmp411)
  {
    tmp412 = 0.0;
  }
  else
  {
    tmp410 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp412 = (tmp410?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp412)), 4, linearSystemData, threadData);
  tmp413 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp413?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp414 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp416 = (modelica_boolean)tmp414;
  if(tmp416)
  {
    tmp417 = 0.0;
  }
  else
  {
    tmp415 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp417 = (tmp415?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp417)), 6, linearSystemData, threadData);
  tmp418 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp420 = (modelica_boolean)tmp418;
  if(tmp420)
  {
    tmp421 = (-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp419 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp421 = (tmp419?-0.0:(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 2, (-(tmp421)), 7, linearSystemData, threadData);
  tmp422 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp424 = (modelica_boolean)tmp422;
  if(tmp424)
  {
    tmp425 = -0.0;
  }
  else
  {
    tmp423 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp425 = (tmp423?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp425)), 8, linearSystemData, threadData);
  tmp426 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp428 = (modelica_boolean)tmp426;
  if(tmp428)
  {
    tmp429 = 0.0;
  }
  else
  {
    tmp427 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp429 = (tmp427?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp429)), 9, linearSystemData, threadData);
  tmp430 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp430?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp431 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp433 = (modelica_boolean)tmp431;
  if(tmp433)
  {
    tmp434 = 0.0;
  }
  else
  {
    tmp432 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp434 = (tmp432?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 4, (-(tmp434)), 11, linearSystemData, threadData);
  tmp435 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp435?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp436 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp438 = (modelica_boolean)tmp436;
  if(tmp438)
  {
    tmp439 = 0.0;
  }
  else
  {
    tmp437 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp439 = (tmp437?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp439)), 13, linearSystemData, threadData);
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
  tmp440 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp442 = (modelica_boolean)tmp440;
  if(tmp442)
  {
    tmp443 = 0.0;
  }
  else
  {
    tmp441 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp443 = (tmp441?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp443, linearSystemData, threadData);
  tmp444 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp446 = (modelica_boolean)tmp444;
  if(tmp446)
  {
    tmp447 = 0.0;
  }
  else
  {
    tmp445 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp447 = (tmp445?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp447, linearSystemData, threadData);
  tmp448 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp450 = (modelica_boolean)tmp448;
  if(tmp450)
  {
    tmp451 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp449 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp451 = (tmp449?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp451, linearSystemData, threadData);
  tmp452 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp454 = (modelica_boolean)tmp452;
  if(tmp454)
  {
    tmp455 = 0.0;
  }
  else
  {
    tmp453 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp455 = (tmp453?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp455, linearSystemData, threadData);
  tmp456 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp458 = (modelica_boolean)tmp456;
  if(tmp458)
  {
    tmp459 = (-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp457 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp459 = (tmp457?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp459, linearSystemData, threadData);
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
  modelica_real tmp475;
  modelica_boolean tmp476;
  modelica_boolean tmp477;
  modelica_boolean tmp478;
  modelica_boolean tmp479;
  modelica_real tmp480;
  modelica_boolean tmp481;
  modelica_boolean tmp482;
  modelica_boolean tmp483;
  modelica_boolean tmp484;
  modelica_real tmp485;
  modelica_boolean tmp486;
  modelica_boolean tmp487;
  modelica_boolean tmp488;
  modelica_boolean tmp489;
  modelica_real tmp490;
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
  modelica_boolean tmp502;
  modelica_real tmp503;
  tmp460 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp462 = (modelica_boolean)tmp460;
  if(tmp462)
  {
    tmp463 = (-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp461 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp463 = (tmp461?-0.0:(-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp463)), 0, linearSystemData, threadData);
  tmp464 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp466 = (modelica_boolean)tmp464;
  if(tmp466)
  {
    tmp467 = -0.0;
  }
  else
  {
    tmp465 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp467 = (tmp465?(-data->localData[0]->realVars[182] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp467)), 1, linearSystemData, threadData);
  tmp468 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp470 = (modelica_boolean)tmp468;
  if(tmp470)
  {
    tmp471 = 0.0;
  }
  else
  {
    tmp469 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp471 = (tmp469?(-data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp471)), 2, linearSystemData, threadData);
  tmp472 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp474 = (modelica_boolean)tmp472;
  if(tmp474)
  {
    tmp475 = 0.0;
  }
  else
  {
    tmp473 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp475 = (tmp473?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp475)), 3, linearSystemData, threadData);
  tmp476 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp476?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp477 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp479 = (modelica_boolean)tmp477;
  if(tmp479)
  {
    tmp480 = 0.0;
  }
  else
  {
    tmp478 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp480 = (tmp478?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp480)), 5, linearSystemData, threadData);
  tmp481 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp481?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp482 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp484 = (modelica_boolean)tmp482;
  if(tmp484)
  {
    tmp485 = 0.0;
  }
  else
  {
    tmp483 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp485 = (tmp483?(-data->localData[0]->realVars[181] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp485)), 7, linearSystemData, threadData);
  tmp486 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp486?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp487 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp489 = (modelica_boolean)tmp487;
  if(tmp489)
  {
    tmp490 = 0.0;
  }
  else
  {
    tmp488 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp490 = (tmp488?(-data->localData[0]->realVars[182] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp490)), 9, linearSystemData, threadData);
  tmp491 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp493 = (modelica_boolean)tmp491;
  if(tmp493)
  {
    tmp494 = -1.0;
  }
  else
  {
    tmp492 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp494 = (tmp492?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp494)), 10, linearSystemData, threadData);
  tmp495 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp497 = (modelica_boolean)tmp495;
  if(tmp497)
  {
    tmp498 = 0.0;
  }
  else
  {
    tmp496 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp498 = (tmp496?(-data->localData[0]->realVars[181] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp498)), 11, linearSystemData, threadData);
  tmp499 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 3, (-((tmp499?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp500 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp502 = (modelica_boolean)tmp500;
  if(tmp502)
  {
    tmp503 = 0.0;
  }
  else
  {
    tmp501 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp503 = (tmp501?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp503)), 13, linearSystemData, threadData);
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
  tmp504 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp506 = (modelica_boolean)tmp504;
  if(tmp506)
  {
    tmp507 = data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp505 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp507 = (tmp505?data->localData[0]->realVars[114] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp507, linearSystemData, threadData);
  tmp508 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp510 = (modelica_boolean)tmp508;
  if(tmp510)
  {
    tmp511 = 0.0;
  }
  else
  {
    tmp509 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp511 = (tmp509?data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp511, linearSystemData, threadData);
  tmp512 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp514 = (modelica_boolean)tmp512;
  if(tmp514)
  {
    tmp515 = 0.0;
  }
  else
  {
    tmp513 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp515 = (tmp513?data->localData[0]->realVars[112] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp515, linearSystemData, threadData);
  tmp516 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp518 = (modelica_boolean)tmp516;
  if(tmp518)
  {
    tmp519 = (-data->localData[0]->realVars[117] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp517 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp519 = (tmp517?data->localData[0]->realVars[115] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[117] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp519, linearSystemData, threadData);
  tmp520 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */);
  tmp522 = (modelica_boolean)tmp520;
  if(tmp522)
  {
    tmp523 = 0.0;
  }
  else
  {
    tmp521 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[107] /* MatStm3.Pdew variable */);
    tmp523 = (tmp521?data->localData[0]->realVars[113] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp523, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData147(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[121].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[121].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[121].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm3.compMasFrac[3,1] */.max;
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
  modelica_boolean tmp553;
  modelica_real tmp554;
  modelica_boolean tmp555;
  modelica_boolean tmp556;
  modelica_boolean tmp557;
  modelica_real tmp558;
  modelica_boolean tmp559;
  modelica_boolean tmp560;
  modelica_boolean tmp561;
  modelica_real tmp562;
  modelica_boolean tmp563;
  modelica_boolean tmp564;
  modelica_boolean tmp565;
  modelica_boolean tmp566;
  modelica_real tmp567;
  tmp524 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp526 = (modelica_boolean)tmp524;
  if(tmp526)
  {
    tmp527 = (-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp525 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp527 = (tmp525?-0.0:(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp527)), 0, linearSystemData, threadData);
  tmp528 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp530 = (modelica_boolean)tmp528;
  if(tmp530)
  {
    tmp531 = -0.0;
  }
  else
  {
    tmp529 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp531 = (tmp529?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp531)), 1, linearSystemData, threadData);
  tmp532 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp534 = (modelica_boolean)tmp532;
  if(tmp534)
  {
    tmp535 = 0.0;
  }
  else
  {
    tmp533 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp535 = (tmp533?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp535)), 2, linearSystemData, threadData);
  tmp536 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp538 = (modelica_boolean)tmp536;
  if(tmp538)
  {
    tmp539 = 0.0;
  }
  else
  {
    tmp537 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp539 = (tmp537?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp539)), 3, linearSystemData, threadData);
  tmp540 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp540?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp541 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp543 = (modelica_boolean)tmp541;
  if(tmp543)
  {
    tmp544 = 0.0;
  }
  else
  {
    tmp542 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp544 = (tmp542?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp544)), 5, linearSystemData, threadData);
  tmp545 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp545?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp546 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp548 = (modelica_boolean)tmp546;
  if(tmp548)
  {
    tmp549 = 0.0;
  }
  else
  {
    tmp547 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp549 = (tmp547?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp549)), 7, linearSystemData, threadData);
  tmp550 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp550?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp551 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp553 = (modelica_boolean)tmp551;
  if(tmp553)
  {
    tmp554 = 0.0;
  }
  else
  {
    tmp552 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp554 = (tmp552?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp554)), 9, linearSystemData, threadData);
  tmp555 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp557 = (modelica_boolean)tmp555;
  if(tmp557)
  {
    tmp558 = -1.0;
  }
  else
  {
    tmp556 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp558 = (tmp556?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp558)), 10, linearSystemData, threadData);
  tmp559 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp561 = (modelica_boolean)tmp559;
  if(tmp561)
  {
    tmp562 = 0.0;
  }
  else
  {
    tmp560 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp562 = (tmp560?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp562)), 11, linearSystemData, threadData);
  tmp563 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 3, (-((tmp563?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp564 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp566 = (modelica_boolean)tmp564;
  if(tmp566)
  {
    tmp567 = 0.0;
  }
  else
  {
    tmp565 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp567 = (tmp565?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp567)), 13, linearSystemData, threadData);
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
  tmp568 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp570 = (modelica_boolean)tmp568;
  if(tmp570)
  {
    tmp571 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp569 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp571 = (tmp569?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp571, linearSystemData, threadData);
  tmp572 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp574 = (modelica_boolean)tmp572;
  if(tmp574)
  {
    tmp575 = 0.0;
  }
  else
  {
    tmp573 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp575 = (tmp573?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp575, linearSystemData, threadData);
  tmp576 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp578 = (modelica_boolean)tmp576;
  if(tmp578)
  {
    tmp579 = 0.0;
  }
  else
  {
    tmp577 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp579 = (tmp577?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp579, linearSystemData, threadData);
  tmp580 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp582 = (modelica_boolean)tmp580;
  if(tmp582)
  {
    tmp583 = (-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp581 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp583 = (tmp581?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp583, linearSystemData, threadData);
  tmp584 = GreaterEq(101325.0,data->localData[0]->realVars[17] /* MatStm1.Pbubl variable */);
  tmp586 = (modelica_boolean)tmp584;
  if(tmp586)
  {
    tmp587 = 0.0;
  }
  else
  {
    tmp585 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pdew variable */);
    tmp587 = (tmp585?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp587, linearSystemData, threadData);
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

