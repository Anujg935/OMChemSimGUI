/* Linear Systems */
#include "mixer1_model.h"
#include "mixer1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA428(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,428};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp438;
  modelica_boolean tmp439;
  modelica_boolean tmp440;
  modelica_real tmp441;
  modelica_boolean tmp442;
  modelica_boolean tmp443;
  modelica_boolean tmp444;
  modelica_boolean tmp445;
  modelica_real tmp446;
  modelica_boolean tmp447;
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
  modelica_boolean tmp460;
  modelica_boolean tmp461;
  modelica_boolean tmp462;
  modelica_boolean tmp463;
  modelica_real tmp464;
  modelica_boolean tmp465;
  modelica_boolean tmp466;
  modelica_boolean tmp467;
  modelica_real tmp468;
  modelica_boolean tmp469;
  modelica_boolean tmp470;
  modelica_boolean tmp471;
  modelica_boolean tmp472;
  modelica_real tmp473;
  modelica_boolean tmp474;
  modelica_boolean tmp475;
  modelica_boolean tmp476;
  modelica_real tmp477;
  modelica_boolean tmp478;
  modelica_boolean tmp479;
  modelica_boolean tmp480;
  modelica_real tmp481;
  RELATIONHYSTERESIS(tmp438, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp440 = (modelica_boolean)tmp438;
  if(tmp440)
  {
    tmp441 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp439, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp441 = (tmp439?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp441)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp442, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 4, (-((tmp442?1.0:-0.0))), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp443, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp445 = (modelica_boolean)tmp443;
  if(tmp445)
  {
    tmp446 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp444, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp446 = (tmp444?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp446)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp447, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp447?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp448, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp450 = (modelica_boolean)tmp448;
  if(tmp450)
  {
    tmp451 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp449, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp451 = (tmp449?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp451)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp452, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp454 = (modelica_boolean)tmp452;
  if(tmp454)
  {
    tmp455 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp453, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp455 = (tmp453?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp455)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp456, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp458 = (modelica_boolean)tmp456;
  if(tmp458)
  {
    tmp459 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp457, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp459 = (tmp457?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp459)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp460, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp460?1.0:-0.0))), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp461, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp463 = (modelica_boolean)tmp461;
  if(tmp463)
  {
    tmp464 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp462, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp464 = (tmp462?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp464)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp465, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp467 = (modelica_boolean)tmp465;
  if(tmp467)
  {
    tmp468 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp466, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp468 = (tmp466?(-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp468)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp469, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 1, (-((tmp469?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp470, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp472 = (modelica_boolean)tmp470;
  if(tmp472)
  {
    tmp473 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp471, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp473 = (tmp471?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp473)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp474, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp476 = (modelica_boolean)tmp474;
  if(tmp476)
  {
    tmp477 = (-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp475, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp477 = (tmp475?-0.0:(-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp477)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp478, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp480 = (modelica_boolean)tmp478;
  if(tmp480)
  {
    tmp481 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp479, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp481 = (tmp479?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp481)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb428(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,428};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp493;
  modelica_boolean tmp494;
  modelica_boolean tmp495;
  modelica_boolean tmp496;
  modelica_real tmp497;
  modelica_boolean tmp498;
  modelica_boolean tmp499;
  modelica_boolean tmp500;
  modelica_real tmp501;
  RELATIONHYSTERESIS(tmp482, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp484 = (modelica_boolean)tmp482;
  if(tmp484)
  {
    tmp485 = (-data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp483, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp485 = (tmp483?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp485, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp486, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp488 = (modelica_boolean)tmp486;
  if(tmp488)
  {
    tmp489 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp487, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp489 = (tmp487?data->localData[0]->realVars[198] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp489, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp490, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp492 = (modelica_boolean)tmp490;
  if(tmp492)
  {
    tmp493 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp491, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp493 = (tmp491?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp493, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp494, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp496 = (modelica_boolean)tmp494;
  if(tmp496)
  {
    tmp497 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp495, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp497 = (tmp495?data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp497, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp498, 101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp500 = (modelica_boolean)tmp498;
  if(tmp500)
  {
    tmp501 = data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp499, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp501 = (tmp499?data->localData[0]->realVars[200] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp501, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData428(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA378(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,378};
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
  modelica_boolean tmp513;
  modelica_real tmp514;
  modelica_boolean tmp515;
  modelica_boolean tmp516;
  modelica_boolean tmp517;
  modelica_real tmp518;
  modelica_boolean tmp519;
  modelica_boolean tmp520;
  modelica_boolean tmp521;
  modelica_boolean tmp522;
  modelica_real tmp523;
  modelica_boolean tmp524;
  modelica_boolean tmp525;
  modelica_boolean tmp526;
  modelica_boolean tmp527;
  modelica_real tmp528;
  modelica_boolean tmp529;
  modelica_boolean tmp530;
  modelica_boolean tmp531;
  modelica_real tmp532;
  modelica_boolean tmp533;
  modelica_boolean tmp534;
  modelica_boolean tmp535;
  modelica_boolean tmp536;
  modelica_real tmp537;
  modelica_boolean tmp538;
  modelica_boolean tmp539;
  modelica_boolean tmp540;
  modelica_real tmp541;
  modelica_boolean tmp542;
  modelica_boolean tmp543;
  modelica_boolean tmp544;
  modelica_real tmp545;
  tmp502 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp504 = (modelica_boolean)tmp502;
  if(tmp504)
  {
    tmp505 = -1.0;
  }
  else
  {
    tmp503 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp505 = (tmp503?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp505)), 0, linearSystemData, threadData);
  tmp506 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp508 = (modelica_boolean)tmp506;
  if(tmp508)
  {
    tmp509 = 0.0;
  }
  else
  {
    tmp507 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp509 = (tmp507?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp509)), 1, linearSystemData, threadData);
  tmp510 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp510?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp511 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp513 = (modelica_boolean)tmp511;
  if(tmp513)
  {
    tmp514 = 0.0;
  }
  else
  {
    tmp512 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp514 = (tmp512?(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp514)), 3, linearSystemData, threadData);
  tmp515 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp517 = (modelica_boolean)tmp515;
  if(tmp517)
  {
    tmp518 = 0.0;
  }
  else
  {
    tmp516 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp518 = (tmp516?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp518)), 4, linearSystemData, threadData);
  tmp519 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp519?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp520 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp522 = (modelica_boolean)tmp520;
  if(tmp522)
  {
    tmp523 = 0.0;
  }
  else
  {
    tmp521 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp523 = (tmp521?(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp523)), 6, linearSystemData, threadData);
  tmp524 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp524?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp525 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp527 = (modelica_boolean)tmp525;
  if(tmp527)
  {
    tmp528 = 0.0;
  }
  else
  {
    tmp526 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp528 = (tmp526?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp528)), 8, linearSystemData, threadData);
  tmp529 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp531 = (modelica_boolean)tmp529;
  if(tmp531)
  {
    tmp532 = 0.0;
  }
  else
  {
    tmp530 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp532 = (tmp530?(-data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp532)), 9, linearSystemData, threadData);
  tmp533 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp533?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp534 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp536 = (modelica_boolean)tmp534;
  if(tmp536)
  {
    tmp537 = 0.0;
  }
  else
  {
    tmp535 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp537 = (tmp535?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp537)), 11, linearSystemData, threadData);
  tmp538 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp540 = (modelica_boolean)tmp538;
  if(tmp540)
  {
    tmp541 = (-data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp539 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp541 = (tmp539?-0.0:(-data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp541)), 12, linearSystemData, threadData);
  tmp542 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp544 = (modelica_boolean)tmp542;
  if(tmp544)
  {
    tmp545 = -0.0;
  }
  else
  {
    tmp543 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp545 = (tmp543?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp545)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb378(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,378};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp561;
  modelica_boolean tmp562;
  modelica_boolean tmp563;
  modelica_boolean tmp564;
  modelica_real tmp565;
  tmp546 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp548 = (modelica_boolean)tmp546;
  if(tmp548)
  {
    tmp549 = 0.0;
  }
  else
  {
    tmp547 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp549 = (tmp547?data->localData[0]->realVars[109] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp549, linearSystemData, threadData);
  tmp550 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp552 = (modelica_boolean)tmp550;
  if(tmp552)
  {
    tmp553 = (-data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp551 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp553 = (tmp551?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp553, linearSystemData, threadData);
  tmp554 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp556 = (modelica_boolean)tmp554;
  if(tmp556)
  {
    tmp557 = 0.0;
  }
  else
  {
    tmp555 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp557 = (tmp555?data->localData[0]->realVars[108] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp557, linearSystemData, threadData);
  tmp558 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp560 = (modelica_boolean)tmp558;
  if(tmp560)
  {
    tmp561 = 0.0;
  }
  else
  {
    tmp559 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp561 = (tmp559?data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp561, linearSystemData, threadData);
  tmp562 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp564 = (modelica_boolean)tmp562;
  if(tmp564)
  {
    tmp565 = data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp563 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp565 = (tmp563?data->localData[0]->realVars[110] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp565, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData378(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[112].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[112].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[112].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp566;
  modelica_boolean tmp567;
  modelica_boolean tmp568;
  modelica_boolean tmp569;
  modelica_real tmp570;
  modelica_boolean tmp571;
  modelica_boolean tmp572;
  modelica_boolean tmp573;
  modelica_real tmp574;
  modelica_boolean tmp575;
  modelica_boolean tmp576;
  modelica_boolean tmp577;
  modelica_real tmp578;
  modelica_boolean tmp579;
  modelica_boolean tmp580;
  modelica_boolean tmp581;
  modelica_boolean tmp582;
  modelica_real tmp583;
  modelica_boolean tmp584;
  modelica_boolean tmp585;
  modelica_boolean tmp586;
  modelica_real tmp587;
  modelica_boolean tmp588;
  modelica_boolean tmp589;
  modelica_boolean tmp590;
  modelica_real tmp591;
  modelica_boolean tmp592;
  modelica_boolean tmp593;
  modelica_boolean tmp594;
  modelica_boolean tmp595;
  modelica_real tmp596;
  modelica_boolean tmp597;
  modelica_boolean tmp598;
  modelica_boolean tmp599;
  modelica_boolean tmp600;
  modelica_real tmp601;
  modelica_boolean tmp602;
  modelica_boolean tmp603;
  modelica_boolean tmp604;
  modelica_real tmp605;
  modelica_boolean tmp606;
  modelica_boolean tmp607;
  modelica_boolean tmp608;
  modelica_real tmp609;
  tmp566 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp566?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp567 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp569 = (modelica_boolean)tmp567;
  if(tmp569)
  {
    tmp570 = 0.0;
  }
  else
  {
    tmp568 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp570 = (tmp568?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp570)), 1, linearSystemData, threadData);
  tmp571 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp573 = (modelica_boolean)tmp571;
  if(tmp573)
  {
    tmp574 = 0.0;
  }
  else
  {
    tmp572 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp574 = (tmp572?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp574)), 2, linearSystemData, threadData);
  tmp575 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp577 = (modelica_boolean)tmp575;
  if(tmp577)
  {
    tmp578 = 0.0;
  }
  else
  {
    tmp576 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp578 = (tmp576?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp578)), 3, linearSystemData, threadData);
  tmp579 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp579?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp580 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp582 = (modelica_boolean)tmp580;
  if(tmp582)
  {
    tmp583 = -1.0;
  }
  else
  {
    tmp581 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp583 = (tmp581?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp583)), 5, linearSystemData, threadData);
  tmp584 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp586 = (modelica_boolean)tmp584;
  if(tmp586)
  {
    tmp587 = 0.0;
  }
  else
  {
    tmp585 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp587 = (tmp585?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp587)), 6, linearSystemData, threadData);
  tmp588 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp590 = (modelica_boolean)tmp588;
  if(tmp590)
  {
    tmp591 = 0.0;
  }
  else
  {
    tmp589 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp591 = (tmp589?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp591)), 7, linearSystemData, threadData);
  tmp592 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp592?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp593 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp595 = (modelica_boolean)tmp593;
  if(tmp595)
  {
    tmp596 = 0.0;
  }
  else
  {
    tmp594 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp596 = (tmp594?(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp596)), 9, linearSystemData, threadData);
  tmp597 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp597?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp598 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp600 = (modelica_boolean)tmp598;
  if(tmp600)
  {
    tmp601 = 0.0;
  }
  else
  {
    tmp599 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp601 = (tmp599?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp601)), 11, linearSystemData, threadData);
  tmp602 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp604 = (modelica_boolean)tmp602;
  if(tmp604)
  {
    tmp605 = (-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp603 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp605 = (tmp603?-0.0:(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp605)), 12, linearSystemData, threadData);
  tmp606 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp608 = (modelica_boolean)tmp606;
  if(tmp608)
  {
    tmp609 = -0.0;
  }
  else
  {
    tmp607 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp609 = (tmp607?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp609)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp610;
  modelica_boolean tmp611;
  modelica_boolean tmp612;
  modelica_real tmp613;
  modelica_boolean tmp614;
  modelica_boolean tmp615;
  modelica_boolean tmp616;
  modelica_real tmp617;
  modelica_boolean tmp618;
  modelica_boolean tmp619;
  modelica_boolean tmp620;
  modelica_real tmp621;
  modelica_boolean tmp622;
  modelica_boolean tmp623;
  modelica_boolean tmp624;
  modelica_real tmp625;
  modelica_boolean tmp626;
  modelica_boolean tmp627;
  modelica_boolean tmp628;
  modelica_real tmp629;
  tmp610 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp612 = (modelica_boolean)tmp610;
  if(tmp612)
  {
    tmp613 = (-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp611 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp613 = (tmp611?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp613, linearSystemData, threadData);
  tmp614 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp616 = (modelica_boolean)tmp614;
  if(tmp616)
  {
    tmp617 = 0.0;
  }
  else
  {
    tmp615 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp617 = (tmp615?data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp617, linearSystemData, threadData);
  tmp618 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp620 = (modelica_boolean)tmp618;
  if(tmp620)
  {
    tmp621 = 0.0;
  }
  else
  {
    tmp619 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp621 = (tmp619?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp621, linearSystemData, threadData);
  tmp622 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp624 = (modelica_boolean)tmp622;
  if(tmp624)
  {
    tmp625 = 0.0;
  }
  else
  {
    tmp623 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp625 = (tmp623?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp625, linearSystemData, threadData);
  tmp626 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp628 = (modelica_boolean)tmp626;
  if(tmp628)
  {
    tmp629 = data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp627 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp629 = (tmp627?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp629, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData325(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp630;
  modelica_boolean tmp631;
  modelica_boolean tmp632;
  modelica_real tmp633;
  modelica_boolean tmp634;
  modelica_boolean tmp635;
  modelica_boolean tmp636;
  modelica_boolean tmp637;
  modelica_real tmp638;
  modelica_boolean tmp639;
  modelica_boolean tmp640;
  modelica_boolean tmp641;
  modelica_real tmp642;
  modelica_boolean tmp643;
  modelica_boolean tmp644;
  modelica_boolean tmp645;
  modelica_real tmp646;
  modelica_boolean tmp647;
  modelica_boolean tmp648;
  modelica_boolean tmp649;
  modelica_real tmp650;
  modelica_boolean tmp651;
  modelica_boolean tmp652;
  modelica_boolean tmp653;
  modelica_real tmp654;
  modelica_boolean tmp655;
  modelica_boolean tmp656;
  modelica_boolean tmp657;
  modelica_boolean tmp658;
  modelica_real tmp659;
  modelica_boolean tmp660;
  modelica_boolean tmp661;
  modelica_boolean tmp662;
  modelica_real tmp663;
  modelica_boolean tmp664;
  modelica_boolean tmp665;
  modelica_boolean tmp666;
  modelica_boolean tmp667;
  modelica_real tmp668;
  modelica_boolean tmp669;
  modelica_boolean tmp670;
  modelica_boolean tmp671;
  modelica_boolean tmp672;
  modelica_real tmp673;
  tmp630 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp632 = (modelica_boolean)tmp630;
  if(tmp632)
  {
    tmp633 = 0.0;
  }
  else
  {
    tmp631 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp633 = (tmp631?(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp633)), 0, linearSystemData, threadData);
  tmp634 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp634?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp635 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp637 = (modelica_boolean)tmp635;
  if(tmp637)
  {
    tmp638 = 0.0;
  }
  else
  {
    tmp636 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp638 = (tmp636?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp638)), 2, linearSystemData, threadData);
  tmp639 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp641 = (modelica_boolean)tmp639;
  if(tmp641)
  {
    tmp642 = -1.0;
  }
  else
  {
    tmp640 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp642 = (tmp640?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp642)), 3, linearSystemData, threadData);
  tmp643 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp645 = (modelica_boolean)tmp643;
  if(tmp645)
  {
    tmp646 = -0.0;
  }
  else
  {
    tmp644 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp646 = (tmp644?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp646)), 4, linearSystemData, threadData);
  tmp647 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp649 = (modelica_boolean)tmp647;
  if(tmp649)
  {
    tmp650 = (-data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp648 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp650 = (tmp648?-0.0:(-data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 4, (-(tmp650)), 5, linearSystemData, threadData);
  tmp651 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp653 = (modelica_boolean)tmp651;
  if(tmp653)
  {
    tmp654 = 0.0;
  }
  else
  {
    tmp652 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp654 = (tmp652?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp654)), 6, linearSystemData, threadData);
  tmp655 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp655?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp656 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp658 = (modelica_boolean)tmp656;
  if(tmp658)
  {
    tmp659 = 0.0;
  }
  else
  {
    tmp657 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp659 = (tmp657?(-data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp659)), 8, linearSystemData, threadData);
  tmp660 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp662 = (modelica_boolean)tmp660;
  if(tmp662)
  {
    tmp663 = 0.0;
  }
  else
  {
    tmp661 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp663 = (tmp661?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp663)), 9, linearSystemData, threadData);
  tmp664 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp664?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp665 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp667 = (modelica_boolean)tmp665;
  if(tmp667)
  {
    tmp668 = 0.0;
  }
  else
  {
    tmp666 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp668 = (tmp666?(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp668)), 11, linearSystemData, threadData);
  tmp669 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp669?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp670 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp672 = (modelica_boolean)tmp670;
  if(tmp672)
  {
    tmp673 = 0.0;
  }
  else
  {
    tmp671 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp673 = (tmp671?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp673)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp674;
  modelica_boolean tmp675;
  modelica_boolean tmp676;
  modelica_real tmp677;
  modelica_boolean tmp678;
  modelica_boolean tmp679;
  modelica_boolean tmp680;
  modelica_real tmp681;
  modelica_boolean tmp682;
  modelica_boolean tmp683;
  modelica_boolean tmp684;
  modelica_real tmp685;
  modelica_boolean tmp686;
  modelica_boolean tmp687;
  modelica_boolean tmp688;
  modelica_real tmp689;
  modelica_boolean tmp690;
  modelica_boolean tmp691;
  modelica_boolean tmp692;
  modelica_real tmp693;
  tmp674 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp676 = (modelica_boolean)tmp674;
  if(tmp676)
  {
    tmp677 = 0.0;
  }
  else
  {
    tmp675 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp677 = (tmp675?data->localData[0]->realVars[109] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp677, linearSystemData, threadData);
  tmp678 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp680 = (modelica_boolean)tmp678;
  if(tmp680)
  {
    tmp681 = data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp679 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp681 = (tmp679?data->localData[0]->realVars[110] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp681, linearSystemData, threadData);
  tmp682 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp684 = (modelica_boolean)tmp682;
  if(tmp684)
  {
    tmp685 = 0.0;
  }
  else
  {
    tmp683 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp685 = (tmp683?data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp685, linearSystemData, threadData);
  tmp686 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp688 = (modelica_boolean)tmp686;
  if(tmp688)
  {
    tmp689 = 0.0;
  }
  else
  {
    tmp687 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp689 = (tmp687?data->localData[0]->realVars[108] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp689, linearSystemData, threadData);
  tmp690 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp692 = (modelica_boolean)tmp690;
  if(tmp692)
  {
    tmp693 = (-data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp691 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp693 = (tmp691?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp693, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData226(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[112].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[112].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[112].attribute /* MatStm2.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA192(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,192};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp694;
  modelica_boolean tmp695;
  modelica_boolean tmp696;
  modelica_boolean tmp697;
  modelica_real tmp698;
  modelica_boolean tmp699;
  modelica_boolean tmp700;
  modelica_boolean tmp701;
  modelica_real tmp702;
  modelica_boolean tmp703;
  modelica_boolean tmp704;
  modelica_boolean tmp705;
  modelica_real tmp706;
  modelica_boolean tmp707;
  modelica_boolean tmp708;
  modelica_boolean tmp709;
  modelica_boolean tmp710;
  modelica_real tmp711;
  modelica_boolean tmp712;
  modelica_boolean tmp713;
  modelica_boolean tmp714;
  modelica_real tmp715;
  modelica_boolean tmp716;
  modelica_boolean tmp717;
  modelica_boolean tmp718;
  modelica_real tmp719;
  modelica_boolean tmp720;
  modelica_boolean tmp721;
  modelica_boolean tmp722;
  modelica_boolean tmp723;
  modelica_real tmp724;
  modelica_boolean tmp725;
  modelica_boolean tmp726;
  modelica_boolean tmp727;
  modelica_boolean tmp728;
  modelica_real tmp729;
  modelica_boolean tmp730;
  modelica_boolean tmp731;
  modelica_boolean tmp732;
  modelica_real tmp733;
  modelica_boolean tmp734;
  modelica_boolean tmp735;
  modelica_boolean tmp736;
  modelica_real tmp737;
  tmp694 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp694?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp695 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp697 = (modelica_boolean)tmp695;
  if(tmp697)
  {
    tmp698 = 0.0;
  }
  else
  {
    tmp696 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp698 = (tmp696?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp698)), 1, linearSystemData, threadData);
  tmp699 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp701 = (modelica_boolean)tmp699;
  if(tmp701)
  {
    tmp702 = 0.0;
  }
  else
  {
    tmp700 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp702 = (tmp700?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp702)), 2, linearSystemData, threadData);
  tmp703 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp705 = (modelica_boolean)tmp703;
  if(tmp705)
  {
    tmp706 = 0.0;
  }
  else
  {
    tmp704 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp706 = (tmp704?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp706)), 3, linearSystemData, threadData);
  tmp707 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp707?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp708 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp710 = (modelica_boolean)tmp708;
  if(tmp710)
  {
    tmp711 = -1.0;
  }
  else
  {
    tmp709 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp711 = (tmp709?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp711)), 5, linearSystemData, threadData);
  tmp712 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp714 = (modelica_boolean)tmp712;
  if(tmp714)
  {
    tmp715 = 0.0;
  }
  else
  {
    tmp713 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp715 = (tmp713?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp715)), 6, linearSystemData, threadData);
  tmp716 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp718 = (modelica_boolean)tmp716;
  if(tmp718)
  {
    tmp719 = 0.0;
  }
  else
  {
    tmp717 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp719 = (tmp717?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp719)), 7, linearSystemData, threadData);
  tmp720 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp720?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp721 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp723 = (modelica_boolean)tmp721;
  if(tmp723)
  {
    tmp724 = 0.0;
  }
  else
  {
    tmp722 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp724 = (tmp722?(-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp724)), 9, linearSystemData, threadData);
  tmp725 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp725?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp726 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp728 = (modelica_boolean)tmp726;
  if(tmp728)
  {
    tmp729 = 0.0;
  }
  else
  {
    tmp727 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp729 = (tmp727?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp729)), 11, linearSystemData, threadData);
  tmp730 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp732 = (modelica_boolean)tmp730;
  if(tmp732)
  {
    tmp733 = (-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp731 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp733 = (tmp731?-0.0:(-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp733)), 12, linearSystemData, threadData);
  tmp734 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp736 = (modelica_boolean)tmp734;
  if(tmp736)
  {
    tmp737 = -0.0;
  }
  else
  {
    tmp735 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp737 = (tmp735?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp737)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb192(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,192};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp738;
  modelica_boolean tmp739;
  modelica_boolean tmp740;
  modelica_real tmp741;
  modelica_boolean tmp742;
  modelica_boolean tmp743;
  modelica_boolean tmp744;
  modelica_real tmp745;
  modelica_boolean tmp746;
  modelica_boolean tmp747;
  modelica_boolean tmp748;
  modelica_real tmp749;
  modelica_boolean tmp750;
  modelica_boolean tmp751;
  modelica_boolean tmp752;
  modelica_real tmp753;
  modelica_boolean tmp754;
  modelica_boolean tmp755;
  modelica_boolean tmp756;
  modelica_real tmp757;
  tmp738 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp740 = (modelica_boolean)tmp738;
  if(tmp740)
  {
    tmp741 = (-data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp739 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp741 = (tmp739?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp741, linearSystemData, threadData);
  tmp742 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp744 = (modelica_boolean)tmp742;
  if(tmp744)
  {
    tmp745 = 0.0;
  }
  else
  {
    tmp743 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp745 = (tmp743?data->localData[0]->realVars[198] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp745, linearSystemData, threadData);
  tmp746 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp748 = (modelica_boolean)tmp746;
  if(tmp748)
  {
    tmp749 = 0.0;
  }
  else
  {
    tmp747 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp749 = (tmp747?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp749, linearSystemData, threadData);
  tmp750 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp752 = (modelica_boolean)tmp750;
  if(tmp752)
  {
    tmp753 = 0.0;
  }
  else
  {
    tmp751 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp753 = (tmp751?data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp753, linearSystemData, threadData);
  tmp754 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
  tmp756 = (modelica_boolean)tmp754;
  if(tmp756)
  {
    tmp757 = data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp755 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
    tmp757 = (tmp755?data->localData[0]->realVars[200] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp757, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData192(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA115(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,115};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp758;
  modelica_boolean tmp759;
  modelica_boolean tmp760;
  modelica_boolean tmp761;
  modelica_real tmp762;
  modelica_boolean tmp763;
  modelica_boolean tmp764;
  modelica_boolean tmp765;
  modelica_real tmp766;
  modelica_boolean tmp767;
  modelica_boolean tmp768;
  modelica_boolean tmp769;
  modelica_real tmp770;
  modelica_boolean tmp771;
  modelica_boolean tmp772;
  modelica_boolean tmp773;
  modelica_boolean tmp774;
  modelica_boolean tmp775;
  modelica_real tmp776;
  modelica_boolean tmp777;
  modelica_boolean tmp778;
  modelica_boolean tmp779;
  modelica_real tmp780;
  modelica_boolean tmp781;
  modelica_boolean tmp782;
  modelica_boolean tmp783;
  modelica_real tmp784;
  modelica_boolean tmp785;
  modelica_boolean tmp786;
  modelica_boolean tmp787;
  modelica_real tmp788;
  modelica_boolean tmp789;
  modelica_boolean tmp790;
  modelica_boolean tmp791;
  modelica_real tmp792;
  modelica_boolean tmp793;
  modelica_boolean tmp794;
  modelica_boolean tmp795;
  modelica_real tmp796;
  modelica_boolean tmp797;
  modelica_boolean tmp798;
  modelica_boolean tmp799;
  modelica_boolean tmp800;
  modelica_real tmp801;
  tmp758 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp758?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp759 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp761 = (modelica_boolean)tmp759;
  if(tmp761)
  {
    tmp762 = 0.0;
  }
  else
  {
    tmp760 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp762 = (tmp760?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp762)), 1, linearSystemData, threadData);
  tmp763 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp765 = (modelica_boolean)tmp763;
  if(tmp765)
  {
    tmp766 = 0.0;
  }
  else
  {
    tmp764 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp766 = (tmp764?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp766)), 2, linearSystemData, threadData);
  tmp767 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp769 = (modelica_boolean)tmp767;
  if(tmp769)
  {
    tmp770 = 0.0;
  }
  else
  {
    tmp768 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp770 = (tmp768?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp770)), 3, linearSystemData, threadData);
  tmp771 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp771?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp772 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp772?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp773 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp775 = (modelica_boolean)tmp773;
  if(tmp775)
  {
    tmp776 = 0.0;
  }
  else
  {
    tmp774 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp776 = (tmp774?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp776)), 6, linearSystemData, threadData);
  tmp777 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp779 = (modelica_boolean)tmp777;
  if(tmp779)
  {
    tmp780 = -1.0;
  }
  else
  {
    tmp778 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp780 = (tmp778?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp780)), 7, linearSystemData, threadData);
  tmp781 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp783 = (modelica_boolean)tmp781;
  if(tmp783)
  {
    tmp784 = 0.0;
  }
  else
  {
    tmp782 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp784 = (tmp782?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp784)), 8, linearSystemData, threadData);
  tmp785 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp787 = (modelica_boolean)tmp785;
  if(tmp787)
  {
    tmp788 = -0.0;
  }
  else
  {
    tmp786 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp788 = (tmp786?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp788)), 9, linearSystemData, threadData);
  tmp789 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp791 = (modelica_boolean)tmp789;
  if(tmp791)
  {
    tmp792 = (-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp790 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp792 = (tmp790?-0.0:(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp792)), 10, linearSystemData, threadData);
  tmp793 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp795 = (modelica_boolean)tmp793;
  if(tmp795)
  {
    tmp796 = 0.0;
  }
  else
  {
    tmp794 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp796 = (tmp794?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp796)), 11, linearSystemData, threadData);
  tmp797 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp797?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp798 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp800 = (modelica_boolean)tmp798;
  if(tmp800)
  {
    tmp801 = 0.0;
  }
  else
  {
    tmp799 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp801 = (tmp799?(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp801)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb115(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,115};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp802;
  modelica_boolean tmp803;
  modelica_boolean tmp804;
  modelica_real tmp805;
  modelica_boolean tmp806;
  modelica_boolean tmp807;
  modelica_boolean tmp808;
  modelica_real tmp809;
  modelica_boolean tmp810;
  modelica_boolean tmp811;
  modelica_boolean tmp812;
  modelica_real tmp813;
  modelica_boolean tmp814;
  modelica_boolean tmp815;
  modelica_boolean tmp816;
  modelica_real tmp817;
  modelica_boolean tmp818;
  modelica_boolean tmp819;
  modelica_boolean tmp820;
  modelica_real tmp821;
  tmp802 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp804 = (modelica_boolean)tmp802;
  if(tmp804)
  {
    tmp805 = (-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp803 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp805 = (tmp803?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp805, linearSystemData, threadData);
  tmp806 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp808 = (modelica_boolean)tmp806;
  if(tmp808)
  {
    tmp809 = 0.0;
  }
  else
  {
    tmp807 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp809 = (tmp807?data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp809, linearSystemData, threadData);
  tmp810 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp812 = (modelica_boolean)tmp810;
  if(tmp812)
  {
    tmp813 = 0.0;
  }
  else
  {
    tmp811 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp813 = (tmp811?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp813, linearSystemData, threadData);
  tmp814 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp816 = (modelica_boolean)tmp814;
  if(tmp816)
  {
    tmp817 = data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp815 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp817 = (tmp815?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp817, linearSystemData, threadData);
  tmp818 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp820 = (modelica_boolean)tmp818;
  if(tmp820)
  {
    tmp821 = 0.0;
  }
  else
  {
    tmp819 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp821 = (tmp819?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp821, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData115(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void mixer1_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 428;
  linearSystemData[5].size = 5;
  linearSystemData[5].nnz = 14;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA428;
  linearSystemData[5].setb = setLinearVectorb428;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData428;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 378;
  linearSystemData[4].size = 5;
  linearSystemData[4].nnz = 14;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA378;
  linearSystemData[4].setb = setLinearVectorb378;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData378;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 325;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA325;
  linearSystemData[3].setb = setLinearVectorb325;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData325;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 226;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA226;
  linearSystemData[2].setb = setLinearVectorb226;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData226;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 192;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA192;
  linearSystemData[1].setb = setLinearVectorb192;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData192;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 115;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA115;
  linearSystemData[0].setb = setLinearVectorb115;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData115;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

