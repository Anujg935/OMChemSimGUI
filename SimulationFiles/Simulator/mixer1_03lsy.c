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
  modelica_boolean tmp440;
  modelica_boolean tmp441;
  modelica_boolean tmp442;
  modelica_real tmp443;
  modelica_boolean tmp444;
  modelica_boolean tmp445;
  modelica_boolean tmp446;
  modelica_boolean tmp447;
  modelica_real tmp448;
  modelica_boolean tmp449;
  modelica_boolean tmp450;
  modelica_boolean tmp451;
  modelica_boolean tmp452;
  modelica_real tmp453;
  modelica_boolean tmp454;
  modelica_boolean tmp455;
  modelica_boolean tmp456;
  modelica_real tmp457;
  modelica_boolean tmp458;
  modelica_boolean tmp459;
  modelica_boolean tmp460;
  modelica_real tmp461;
  modelica_boolean tmp462;
  modelica_boolean tmp463;
  modelica_boolean tmp464;
  modelica_boolean tmp465;
  modelica_real tmp466;
  modelica_boolean tmp467;
  modelica_boolean tmp468;
  modelica_boolean tmp469;
  modelica_real tmp470;
  modelica_boolean tmp471;
  modelica_boolean tmp472;
  modelica_boolean tmp473;
  modelica_boolean tmp474;
  modelica_real tmp475;
  modelica_boolean tmp476;
  modelica_boolean tmp477;
  modelica_boolean tmp478;
  modelica_real tmp479;
  modelica_boolean tmp480;
  modelica_boolean tmp481;
  modelica_boolean tmp482;
  modelica_real tmp483;
  RELATIONHYSTERESIS(tmp440, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp442 = (modelica_boolean)tmp440;
  if(tmp442)
  {
    tmp443 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp441, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp443 = (tmp441?(-data->localData[0]->realVars[88] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp443)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp444, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 4, (-((tmp444?1.0:-0.0))), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp445, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp447 = (modelica_boolean)tmp445;
  if(tmp447)
  {
    tmp448 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp446, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp448 = (tmp446?(-data->localData[0]->realVars[87] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp448)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp449, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp449?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp450, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp452 = (modelica_boolean)tmp450;
  if(tmp452)
  {
    tmp453 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp451, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp453 = (tmp451?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp453)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp454, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp456 = (modelica_boolean)tmp454;
  if(tmp456)
  {
    tmp457 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp455, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp457 = (tmp455?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp457)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp458, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp460 = (modelica_boolean)tmp458;
  if(tmp460)
  {
    tmp461 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp459, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp461 = (tmp459?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp461)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp462, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp462?1.0:-0.0))), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp463, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp465 = (modelica_boolean)tmp463;
  if(tmp465)
  {
    tmp466 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp464, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp466 = (tmp464?(-data->localData[0]->realVars[87] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp466)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp467, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp469 = (modelica_boolean)tmp467;
  if(tmp469)
  {
    tmp470 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp468, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp470 = (tmp468?(-data->localData[0]->realVars[86] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp470)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp471, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 1, (-((tmp471?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp472, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp474 = (modelica_boolean)tmp472;
  if(tmp474)
  {
    tmp475 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp473, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp475 = (tmp473?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp475)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp476, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp478 = (modelica_boolean)tmp476;
  if(tmp478)
  {
    tmp479 = (-data->localData[0]->realVars[86] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp477, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp479 = (tmp477?-0.0:(-data->localData[0]->realVars[86] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp479)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp480, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp482 = (modelica_boolean)tmp480;
  if(tmp482)
  {
    tmp483 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp481, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp483 = (tmp481?(-data->localData[0]->realVars[88] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp483)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb428(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,428};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp484;
  modelica_boolean tmp485;
  modelica_boolean tmp486;
  modelica_real tmp487;
  modelica_boolean tmp488;
  modelica_boolean tmp489;
  modelica_boolean tmp490;
  modelica_real tmp491;
  modelica_boolean tmp492;
  modelica_boolean tmp493;
  modelica_boolean tmp494;
  modelica_real tmp495;
  modelica_boolean tmp496;
  modelica_boolean tmp497;
  modelica_boolean tmp498;
  modelica_real tmp499;
  modelica_boolean tmp500;
  modelica_boolean tmp501;
  modelica_boolean tmp502;
  modelica_real tmp503;
  RELATIONHYSTERESIS(tmp484, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp486 = (modelica_boolean)tmp484;
  if(tmp486)
  {
    tmp487 = (-data->localData[0]->realVars[23] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp485, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp487 = (tmp485?data->localData[0]->realVars[21] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp487, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp488, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp490 = (modelica_boolean)tmp488;
  if(tmp490)
  {
    tmp491 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp489, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp491 = (tmp489?data->localData[0]->realVars[18] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp491, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp492, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp494 = (modelica_boolean)tmp492;
  if(tmp494)
  {
    tmp495 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp493, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp495 = (tmp493?data->localData[0]->realVars[19] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp495, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp496, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp498 = (modelica_boolean)tmp496;
  if(tmp498)
  {
    tmp499 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp497, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp499 = (tmp497?data->localData[0]->realVars[16] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp499, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp500, 101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp502 = (modelica_boolean)tmp500;
  if(tmp502)
  {
    tmp503 = data->localData[0]->realVars[16] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp501, 101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp503 = (tmp501?data->localData[0]->realVars[20] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp503, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData428(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[24].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[24].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[24].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm2.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA378(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,378};
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
  modelica_boolean tmp515;
  modelica_real tmp516;
  modelica_boolean tmp517;
  modelica_boolean tmp518;
  modelica_boolean tmp519;
  modelica_real tmp520;
  modelica_boolean tmp521;
  modelica_boolean tmp522;
  modelica_boolean tmp523;
  modelica_boolean tmp524;
  modelica_real tmp525;
  modelica_boolean tmp526;
  modelica_boolean tmp527;
  modelica_boolean tmp528;
  modelica_boolean tmp529;
  modelica_real tmp530;
  modelica_boolean tmp531;
  modelica_boolean tmp532;
  modelica_boolean tmp533;
  modelica_real tmp534;
  modelica_boolean tmp535;
  modelica_boolean tmp536;
  modelica_boolean tmp537;
  modelica_boolean tmp538;
  modelica_real tmp539;
  modelica_boolean tmp540;
  modelica_boolean tmp541;
  modelica_boolean tmp542;
  modelica_real tmp543;
  modelica_boolean tmp544;
  modelica_boolean tmp545;
  modelica_boolean tmp546;
  modelica_real tmp547;
  tmp504 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp506 = (modelica_boolean)tmp504;
  if(tmp506)
  {
    tmp507 = -1.0;
  }
  else
  {
    tmp505 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp507 = (tmp505?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp507)), 0, linearSystemData, threadData);
  tmp508 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp510 = (modelica_boolean)tmp508;
  if(tmp510)
  {
    tmp511 = 0.0;
  }
  else
  {
    tmp509 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp511 = (tmp509?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp511)), 1, linearSystemData, threadData);
  tmp512 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp512?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp513 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp515 = (modelica_boolean)tmp513;
  if(tmp515)
  {
    tmp516 = 0.0;
  }
  else
  {
    tmp514 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp516 = (tmp514?(-data->localData[0]->realVars[268] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp516)), 3, linearSystemData, threadData);
  tmp517 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp519 = (modelica_boolean)tmp517;
  if(tmp519)
  {
    tmp520 = 0.0;
  }
  else
  {
    tmp518 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp520 = (tmp518?(-data->localData[0]->realVars[269] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp520)), 4, linearSystemData, threadData);
  tmp521 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp521?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp522 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp524 = (modelica_boolean)tmp522;
  if(tmp524)
  {
    tmp525 = 0.0;
  }
  else
  {
    tmp523 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp525 = (tmp523?(-data->localData[0]->realVars[268] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp525)), 6, linearSystemData, threadData);
  tmp526 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp526?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp527 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp529 = (modelica_boolean)tmp527;
  if(tmp529)
  {
    tmp530 = 0.0;
  }
  else
  {
    tmp528 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp530 = (tmp528?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp530)), 8, linearSystemData, threadData);
  tmp531 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp533 = (modelica_boolean)tmp531;
  if(tmp533)
  {
    tmp534 = 0.0;
  }
  else
  {
    tmp532 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp534 = (tmp532?(-data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp534)), 9, linearSystemData, threadData);
  tmp535 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp535?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp536 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp538 = (modelica_boolean)tmp536;
  if(tmp538)
  {
    tmp539 = 0.0;
  }
  else
  {
    tmp537 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp539 = (tmp537?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp539)), 11, linearSystemData, threadData);
  tmp540 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp542 = (modelica_boolean)tmp540;
  if(tmp542)
  {
    tmp543 = (-data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp541 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp543 = (tmp541?-0.0:(-data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp543)), 12, linearSystemData, threadData);
  tmp544 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp546 = (modelica_boolean)tmp544;
  if(tmp546)
  {
    tmp547 = -0.0;
  }
  else
  {
    tmp545 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp547 = (tmp545?(-data->localData[0]->realVars[269] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp547)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb378(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,378};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp559;
  modelica_boolean tmp560;
  modelica_boolean tmp561;
  modelica_boolean tmp562;
  modelica_real tmp563;
  modelica_boolean tmp564;
  modelica_boolean tmp565;
  modelica_boolean tmp566;
  modelica_real tmp567;
  tmp548 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp550 = (modelica_boolean)tmp548;
  if(tmp550)
  {
    tmp551 = 0.0;
  }
  else
  {
    tmp549 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp551 = (tmp549?data->localData[0]->realVars[200] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp551, linearSystemData, threadData);
  tmp552 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp554 = (modelica_boolean)tmp552;
  if(tmp554)
  {
    tmp555 = (-data->localData[0]->realVars[204] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp553 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp555 = (tmp553?data->localData[0]->realVars[202] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[204] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp555, linearSystemData, threadData);
  tmp556 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp558 = (modelica_boolean)tmp556;
  if(tmp558)
  {
    tmp559 = 0.0;
  }
  else
  {
    tmp557 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp559 = (tmp557?data->localData[0]->realVars[199] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp559, linearSystemData, threadData);
  tmp560 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp562 = (modelica_boolean)tmp560;
  if(tmp562)
  {
    tmp563 = 0.0;
  }
  else
  {
    tmp561 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp563 = (tmp561?data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp563, linearSystemData, threadData);
  tmp564 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp566 = (modelica_boolean)tmp564;
  if(tmp566)
  {
    tmp567 = data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp565 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp567 = (tmp565?data->localData[0]->realVars[201] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp567, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData378(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[203].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[203].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[203].attribute /* MatStm4.compMasFrac[1,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm4.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp568;
  modelica_boolean tmp569;
  modelica_boolean tmp570;
  modelica_boolean tmp571;
  modelica_real tmp572;
  modelica_boolean tmp573;
  modelica_boolean tmp574;
  modelica_boolean tmp575;
  modelica_real tmp576;
  modelica_boolean tmp577;
  modelica_boolean tmp578;
  modelica_boolean tmp579;
  modelica_real tmp580;
  modelica_boolean tmp581;
  modelica_boolean tmp582;
  modelica_boolean tmp583;
  modelica_boolean tmp584;
  modelica_real tmp585;
  modelica_boolean tmp586;
  modelica_boolean tmp587;
  modelica_boolean tmp588;
  modelica_real tmp589;
  modelica_boolean tmp590;
  modelica_boolean tmp591;
  modelica_boolean tmp592;
  modelica_real tmp593;
  modelica_boolean tmp594;
  modelica_boolean tmp595;
  modelica_boolean tmp596;
  modelica_boolean tmp597;
  modelica_real tmp598;
  modelica_boolean tmp599;
  modelica_boolean tmp600;
  modelica_boolean tmp601;
  modelica_boolean tmp602;
  modelica_real tmp603;
  modelica_boolean tmp604;
  modelica_boolean tmp605;
  modelica_boolean tmp606;
  modelica_real tmp607;
  modelica_boolean tmp608;
  modelica_boolean tmp609;
  modelica_boolean tmp610;
  modelica_real tmp611;
  tmp568 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp568?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp569 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp571 = (modelica_boolean)tmp569;
  if(tmp571)
  {
    tmp572 = 0.0;
  }
  else
  {
    tmp570 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp572 = (tmp570?(-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp572)), 1, linearSystemData, threadData);
  tmp573 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp575 = (modelica_boolean)tmp573;
  if(tmp575)
  {
    tmp576 = 0.0;
  }
  else
  {
    tmp574 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp576 = (tmp574?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp576)), 2, linearSystemData, threadData);
  tmp577 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp579 = (modelica_boolean)tmp577;
  if(tmp579)
  {
    tmp580 = 0.0;
  }
  else
  {
    tmp578 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp580 = (tmp578?(-data->localData[0]->realVars[178] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp580)), 3, linearSystemData, threadData);
  tmp581 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp581?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp582 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp584 = (modelica_boolean)tmp582;
  if(tmp584)
  {
    tmp585 = -1.0;
  }
  else
  {
    tmp583 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp585 = (tmp583?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp585)), 5, linearSystemData, threadData);
  tmp586 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp588 = (modelica_boolean)tmp586;
  if(tmp588)
  {
    tmp589 = 0.0;
  }
  else
  {
    tmp587 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp589 = (tmp587?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp589)), 6, linearSystemData, threadData);
  tmp590 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp592 = (modelica_boolean)tmp590;
  if(tmp592)
  {
    tmp593 = 0.0;
  }
  else
  {
    tmp591 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp593 = (tmp591?(-data->localData[0]->realVars[178] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp593)), 7, linearSystemData, threadData);
  tmp594 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp594?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp595 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp597 = (modelica_boolean)tmp595;
  if(tmp597)
  {
    tmp598 = 0.0;
  }
  else
  {
    tmp596 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp598 = (tmp596?(-data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp598)), 9, linearSystemData, threadData);
  tmp599 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp599?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp600 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp602 = (modelica_boolean)tmp600;
  if(tmp602)
  {
    tmp603 = 0.0;
  }
  else
  {
    tmp601 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp603 = (tmp601?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp603)), 11, linearSystemData, threadData);
  tmp604 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp606 = (modelica_boolean)tmp604;
  if(tmp606)
  {
    tmp607 = (-data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp605 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp607 = (tmp605?-0.0:(-data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp607)), 12, linearSystemData, threadData);
  tmp608 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp610 = (modelica_boolean)tmp608;
  if(tmp610)
  {
    tmp611 = -0.0;
  }
  else
  {
    tmp609 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp611 = (tmp609?(-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp611)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp612;
  modelica_boolean tmp613;
  modelica_boolean tmp614;
  modelica_real tmp615;
  modelica_boolean tmp616;
  modelica_boolean tmp617;
  modelica_boolean tmp618;
  modelica_real tmp619;
  modelica_boolean tmp620;
  modelica_boolean tmp621;
  modelica_boolean tmp622;
  modelica_real tmp623;
  modelica_boolean tmp624;
  modelica_boolean tmp625;
  modelica_boolean tmp626;
  modelica_real tmp627;
  modelica_boolean tmp628;
  modelica_boolean tmp629;
  modelica_boolean tmp630;
  modelica_real tmp631;
  tmp612 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp614 = (modelica_boolean)tmp612;
  if(tmp614)
  {
    tmp615 = (-data->localData[0]->realVars[114] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp613 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp615 = (tmp613?data->localData[0]->realVars[112] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[114] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp615, linearSystemData, threadData);
  tmp616 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp618 = (modelica_boolean)tmp616;
  if(tmp618)
  {
    tmp619 = 0.0;
  }
  else
  {
    tmp617 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp619 = (tmp617?data->localData[0]->realVars[109] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp619, linearSystemData, threadData);
  tmp620 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp622 = (modelica_boolean)tmp620;
  if(tmp622)
  {
    tmp623 = 0.0;
  }
  else
  {
    tmp621 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp623 = (tmp621?data->localData[0]->realVars[110] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp623, linearSystemData, threadData);
  tmp624 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp626 = (modelica_boolean)tmp624;
  if(tmp626)
  {
    tmp627 = 0.0;
  }
  else
  {
    tmp625 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp627 = (tmp625?data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp627, linearSystemData, threadData);
  tmp628 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp630 = (modelica_boolean)tmp628;
  if(tmp630)
  {
    tmp631 = data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp629 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp631 = (tmp629?data->localData[0]->realVars[111] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp631, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData325(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[113].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[113].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[113].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp632;
  modelica_boolean tmp633;
  modelica_boolean tmp634;
  modelica_real tmp635;
  modelica_boolean tmp636;
  modelica_boolean tmp637;
  modelica_boolean tmp638;
  modelica_boolean tmp639;
  modelica_real tmp640;
  modelica_boolean tmp641;
  modelica_boolean tmp642;
  modelica_boolean tmp643;
  modelica_real tmp644;
  modelica_boolean tmp645;
  modelica_boolean tmp646;
  modelica_boolean tmp647;
  modelica_real tmp648;
  modelica_boolean tmp649;
  modelica_boolean tmp650;
  modelica_boolean tmp651;
  modelica_real tmp652;
  modelica_boolean tmp653;
  modelica_boolean tmp654;
  modelica_boolean tmp655;
  modelica_real tmp656;
  modelica_boolean tmp657;
  modelica_boolean tmp658;
  modelica_boolean tmp659;
  modelica_boolean tmp660;
  modelica_real tmp661;
  modelica_boolean tmp662;
  modelica_boolean tmp663;
  modelica_boolean tmp664;
  modelica_real tmp665;
  modelica_boolean tmp666;
  modelica_boolean tmp667;
  modelica_boolean tmp668;
  modelica_boolean tmp669;
  modelica_real tmp670;
  modelica_boolean tmp671;
  modelica_boolean tmp672;
  modelica_boolean tmp673;
  modelica_boolean tmp674;
  modelica_real tmp675;
  tmp632 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp634 = (modelica_boolean)tmp632;
  if(tmp634)
  {
    tmp635 = 0.0;
  }
  else
  {
    tmp633 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp635 = (tmp633?(-data->localData[0]->realVars[268] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp635)), 0, linearSystemData, threadData);
  tmp636 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp636?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp637 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp639 = (modelica_boolean)tmp637;
  if(tmp639)
  {
    tmp640 = 0.0;
  }
  else
  {
    tmp638 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp640 = (tmp638?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp640)), 2, linearSystemData, threadData);
  tmp641 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp643 = (modelica_boolean)tmp641;
  if(tmp643)
  {
    tmp644 = -1.0;
  }
  else
  {
    tmp642 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp644 = (tmp642?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp644)), 3, linearSystemData, threadData);
  tmp645 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp647 = (modelica_boolean)tmp645;
  if(tmp647)
  {
    tmp648 = -0.0;
  }
  else
  {
    tmp646 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp648 = (tmp646?(-data->localData[0]->realVars[269] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp648)), 4, linearSystemData, threadData);
  tmp649 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp651 = (modelica_boolean)tmp649;
  if(tmp651)
  {
    tmp652 = (-data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp650 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp652 = (tmp650?-0.0:(-data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 4, (-(tmp652)), 5, linearSystemData, threadData);
  tmp653 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp655 = (modelica_boolean)tmp653;
  if(tmp655)
  {
    tmp656 = 0.0;
  }
  else
  {
    tmp654 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp656 = (tmp654?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp656)), 6, linearSystemData, threadData);
  tmp657 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp657?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp658 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp660 = (modelica_boolean)tmp658;
  if(tmp660)
  {
    tmp661 = 0.0;
  }
  else
  {
    tmp659 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp661 = (tmp659?(-data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp661)), 8, linearSystemData, threadData);
  tmp662 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp664 = (modelica_boolean)tmp662;
  if(tmp664)
  {
    tmp665 = 0.0;
  }
  else
  {
    tmp663 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp665 = (tmp663?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp665)), 9, linearSystemData, threadData);
  tmp666 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp666?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp667 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp669 = (modelica_boolean)tmp667;
  if(tmp669)
  {
    tmp670 = 0.0;
  }
  else
  {
    tmp668 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp670 = (tmp668?(-data->localData[0]->realVars[268] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp670)), 11, linearSystemData, threadData);
  tmp671 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp671?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp672 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp674 = (modelica_boolean)tmp672;
  if(tmp674)
  {
    tmp675 = 0.0;
  }
  else
  {
    tmp673 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp675 = (tmp673?(-data->localData[0]->realVars[269] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp675)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp676;
  modelica_boolean tmp677;
  modelica_boolean tmp678;
  modelica_real tmp679;
  modelica_boolean tmp680;
  modelica_boolean tmp681;
  modelica_boolean tmp682;
  modelica_real tmp683;
  modelica_boolean tmp684;
  modelica_boolean tmp685;
  modelica_boolean tmp686;
  modelica_real tmp687;
  modelica_boolean tmp688;
  modelica_boolean tmp689;
  modelica_boolean tmp690;
  modelica_real tmp691;
  modelica_boolean tmp692;
  modelica_boolean tmp693;
  modelica_boolean tmp694;
  modelica_real tmp695;
  tmp676 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp678 = (modelica_boolean)tmp676;
  if(tmp678)
  {
    tmp679 = 0.0;
  }
  else
  {
    tmp677 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp679 = (tmp677?data->localData[0]->realVars[200] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp679, linearSystemData, threadData);
  tmp680 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp682 = (modelica_boolean)tmp680;
  if(tmp682)
  {
    tmp683 = data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp681 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp683 = (tmp681?data->localData[0]->realVars[201] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp683, linearSystemData, threadData);
  tmp684 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp686 = (modelica_boolean)tmp684;
  if(tmp686)
  {
    tmp687 = 0.0;
  }
  else
  {
    tmp685 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp687 = (tmp685?data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp687, linearSystemData, threadData);
  tmp688 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp690 = (modelica_boolean)tmp688;
  if(tmp690)
  {
    tmp691 = 0.0;
  }
  else
  {
    tmp689 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp691 = (tmp689?data->localData[0]->realVars[199] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp691, linearSystemData, threadData);
  tmp692 = GreaterEq(101321.0,data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */);
  tmp694 = (modelica_boolean)tmp692;
  if(tmp694)
  {
    tmp695 = (-data->localData[0]->realVars[204] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp693 = GreaterEq(101321.0,data->localData[0]->realVars[193] /* MatStm4.Pdew variable */);
    tmp695 = (tmp693?data->localData[0]->realVars[202] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[204] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp695, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData226(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[203].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[203].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[203].attribute /* MatStm4.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA192(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,192};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp696;
  modelica_boolean tmp697;
  modelica_boolean tmp698;
  modelica_boolean tmp699;
  modelica_real tmp700;
  modelica_boolean tmp701;
  modelica_boolean tmp702;
  modelica_boolean tmp703;
  modelica_real tmp704;
  modelica_boolean tmp705;
  modelica_boolean tmp706;
  modelica_boolean tmp707;
  modelica_real tmp708;
  modelica_boolean tmp709;
  modelica_boolean tmp710;
  modelica_boolean tmp711;
  modelica_boolean tmp712;
  modelica_real tmp713;
  modelica_boolean tmp714;
  modelica_boolean tmp715;
  modelica_boolean tmp716;
  modelica_real tmp717;
  modelica_boolean tmp718;
  modelica_boolean tmp719;
  modelica_boolean tmp720;
  modelica_real tmp721;
  modelica_boolean tmp722;
  modelica_boolean tmp723;
  modelica_boolean tmp724;
  modelica_boolean tmp725;
  modelica_real tmp726;
  modelica_boolean tmp727;
  modelica_boolean tmp728;
  modelica_boolean tmp729;
  modelica_boolean tmp730;
  modelica_real tmp731;
  modelica_boolean tmp732;
  modelica_boolean tmp733;
  modelica_boolean tmp734;
  modelica_real tmp735;
  modelica_boolean tmp736;
  modelica_boolean tmp737;
  modelica_boolean tmp738;
  modelica_real tmp739;
  tmp696 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp696?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp697 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp699 = (modelica_boolean)tmp697;
  if(tmp699)
  {
    tmp700 = 0.0;
  }
  else
  {
    tmp698 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp700 = (tmp698?(-data->localData[0]->realVars[88] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp700)), 1, linearSystemData, threadData);
  tmp701 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp703 = (modelica_boolean)tmp701;
  if(tmp703)
  {
    tmp704 = 0.0;
  }
  else
  {
    tmp702 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp704 = (tmp702?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp704)), 2, linearSystemData, threadData);
  tmp705 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp707 = (modelica_boolean)tmp705;
  if(tmp707)
  {
    tmp708 = 0.0;
  }
  else
  {
    tmp706 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp708 = (tmp706?(-data->localData[0]->realVars[87] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp708)), 3, linearSystemData, threadData);
  tmp709 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp709?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp710 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp712 = (modelica_boolean)tmp710;
  if(tmp712)
  {
    tmp713 = -1.0;
  }
  else
  {
    tmp711 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp713 = (tmp711?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp713)), 5, linearSystemData, threadData);
  tmp714 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp716 = (modelica_boolean)tmp714;
  if(tmp716)
  {
    tmp717 = 0.0;
  }
  else
  {
    tmp715 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp717 = (tmp715?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp717)), 6, linearSystemData, threadData);
  tmp718 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp720 = (modelica_boolean)tmp718;
  if(tmp720)
  {
    tmp721 = 0.0;
  }
  else
  {
    tmp719 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp721 = (tmp719?(-data->localData[0]->realVars[87] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp721)), 7, linearSystemData, threadData);
  tmp722 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp722?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp723 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp725 = (modelica_boolean)tmp723;
  if(tmp725)
  {
    tmp726 = 0.0;
  }
  else
  {
    tmp724 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp726 = (tmp724?(-data->localData[0]->realVars[86] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp726)), 9, linearSystemData, threadData);
  tmp727 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp727?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp728 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp730 = (modelica_boolean)tmp728;
  if(tmp730)
  {
    tmp731 = 0.0;
  }
  else
  {
    tmp729 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp731 = (tmp729?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp731)), 11, linearSystemData, threadData);
  tmp732 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp734 = (modelica_boolean)tmp732;
  if(tmp734)
  {
    tmp735 = (-data->localData[0]->realVars[86] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp733 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp735 = (tmp733?-0.0:(-data->localData[0]->realVars[86] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp735)), 12, linearSystemData, threadData);
  tmp736 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp738 = (modelica_boolean)tmp736;
  if(tmp738)
  {
    tmp739 = -0.0;
  }
  else
  {
    tmp737 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp739 = (tmp737?(-data->localData[0]->realVars[88] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp739)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb192(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,192};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp740;
  modelica_boolean tmp741;
  modelica_boolean tmp742;
  modelica_real tmp743;
  modelica_boolean tmp744;
  modelica_boolean tmp745;
  modelica_boolean tmp746;
  modelica_real tmp747;
  modelica_boolean tmp748;
  modelica_boolean tmp749;
  modelica_boolean tmp750;
  modelica_real tmp751;
  modelica_boolean tmp752;
  modelica_boolean tmp753;
  modelica_boolean tmp754;
  modelica_real tmp755;
  modelica_boolean tmp756;
  modelica_boolean tmp757;
  modelica_boolean tmp758;
  modelica_real tmp759;
  tmp740 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp742 = (modelica_boolean)tmp740;
  if(tmp742)
  {
    tmp743 = (-data->localData[0]->realVars[23] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp741 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp743 = (tmp741?data->localData[0]->realVars[21] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp743, linearSystemData, threadData);
  tmp744 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp746 = (modelica_boolean)tmp744;
  if(tmp746)
  {
    tmp747 = 0.0;
  }
  else
  {
    tmp745 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp747 = (tmp745?data->localData[0]->realVars[18] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp747, linearSystemData, threadData);
  tmp748 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp750 = (modelica_boolean)tmp748;
  if(tmp750)
  {
    tmp751 = 0.0;
  }
  else
  {
    tmp749 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp751 = (tmp749?data->localData[0]->realVars[19] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp751, linearSystemData, threadData);
  tmp752 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp754 = (modelica_boolean)tmp752;
  if(tmp754)
  {
    tmp755 = 0.0;
  }
  else
  {
    tmp753 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp755 = (tmp753?data->localData[0]->realVars[16] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp755, linearSystemData, threadData);
  tmp756 = GreaterEq(101316.5,data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
  tmp758 = (modelica_boolean)tmp756;
  if(tmp758)
  {
    tmp759 = data->localData[0]->realVars[16] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp757 = GreaterEq(101316.5,data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
    tmp759 = (tmp757?data->localData[0]->realVars[20] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp759, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData192(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[24].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[24].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[24].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm2.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA115(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,115};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp760;
  modelica_boolean tmp761;
  modelica_boolean tmp762;
  modelica_boolean tmp763;
  modelica_real tmp764;
  modelica_boolean tmp765;
  modelica_boolean tmp766;
  modelica_boolean tmp767;
  modelica_real tmp768;
  modelica_boolean tmp769;
  modelica_boolean tmp770;
  modelica_boolean tmp771;
  modelica_real tmp772;
  modelica_boolean tmp773;
  modelica_boolean tmp774;
  modelica_boolean tmp775;
  modelica_boolean tmp776;
  modelica_boolean tmp777;
  modelica_real tmp778;
  modelica_boolean tmp779;
  modelica_boolean tmp780;
  modelica_boolean tmp781;
  modelica_real tmp782;
  modelica_boolean tmp783;
  modelica_boolean tmp784;
  modelica_boolean tmp785;
  modelica_real tmp786;
  modelica_boolean tmp787;
  modelica_boolean tmp788;
  modelica_boolean tmp789;
  modelica_real tmp790;
  modelica_boolean tmp791;
  modelica_boolean tmp792;
  modelica_boolean tmp793;
  modelica_real tmp794;
  modelica_boolean tmp795;
  modelica_boolean tmp796;
  modelica_boolean tmp797;
  modelica_real tmp798;
  modelica_boolean tmp799;
  modelica_boolean tmp800;
  modelica_boolean tmp801;
  modelica_boolean tmp802;
  modelica_real tmp803;
  tmp760 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp760?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp761 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp763 = (modelica_boolean)tmp761;
  if(tmp763)
  {
    tmp764 = 0.0;
  }
  else
  {
    tmp762 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp764 = (tmp762?(-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp764)), 1, linearSystemData, threadData);
  tmp765 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp767 = (modelica_boolean)tmp765;
  if(tmp767)
  {
    tmp768 = 0.0;
  }
  else
  {
    tmp766 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp768 = (tmp766?(-data->localData[0]->realVars[178] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp768)), 2, linearSystemData, threadData);
  tmp769 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp771 = (modelica_boolean)tmp769;
  if(tmp771)
  {
    tmp772 = 0.0;
  }
  else
  {
    tmp770 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp772 = (tmp770?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp772)), 3, linearSystemData, threadData);
  tmp773 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp773?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp774 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp774?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp775 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp777 = (modelica_boolean)tmp775;
  if(tmp777)
  {
    tmp778 = 0.0;
  }
  else
  {
    tmp776 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp778 = (tmp776?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp778)), 6, linearSystemData, threadData);
  tmp779 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp781 = (modelica_boolean)tmp779;
  if(tmp781)
  {
    tmp782 = -1.0;
  }
  else
  {
    tmp780 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp782 = (tmp780?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp782)), 7, linearSystemData, threadData);
  tmp783 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp785 = (modelica_boolean)tmp783;
  if(tmp785)
  {
    tmp786 = 0.0;
  }
  else
  {
    tmp784 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp786 = (tmp784?(-data->localData[0]->realVars[178] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp786)), 8, linearSystemData, threadData);
  tmp787 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp789 = (modelica_boolean)tmp787;
  if(tmp789)
  {
    tmp790 = -0.0;
  }
  else
  {
    tmp788 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp790 = (tmp788?(-data->localData[0]->realVars[179] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp790)), 9, linearSystemData, threadData);
  tmp791 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp793 = (modelica_boolean)tmp791;
  if(tmp793)
  {
    tmp794 = (-data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp792 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp794 = (tmp792?-0.0:(-data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp794)), 10, linearSystemData, threadData);
  tmp795 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp797 = (modelica_boolean)tmp795;
  if(tmp797)
  {
    tmp798 = 0.0;
  }
  else
  {
    tmp796 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp798 = (tmp796?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp798)), 11, linearSystemData, threadData);
  tmp799 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp799?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp800 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp802 = (modelica_boolean)tmp800;
  if(tmp802)
  {
    tmp803 = 0.0;
  }
  else
  {
    tmp801 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp803 = (tmp801?(-data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp803)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb115(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,115};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp804;
  modelica_boolean tmp805;
  modelica_boolean tmp806;
  modelica_real tmp807;
  modelica_boolean tmp808;
  modelica_boolean tmp809;
  modelica_boolean tmp810;
  modelica_real tmp811;
  modelica_boolean tmp812;
  modelica_boolean tmp813;
  modelica_boolean tmp814;
  modelica_real tmp815;
  modelica_boolean tmp816;
  modelica_boolean tmp817;
  modelica_boolean tmp818;
  modelica_real tmp819;
  modelica_boolean tmp820;
  modelica_boolean tmp821;
  modelica_boolean tmp822;
  modelica_real tmp823;
  tmp804 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp806 = (modelica_boolean)tmp804;
  if(tmp806)
  {
    tmp807 = (-data->localData[0]->realVars[114] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp805 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp807 = (tmp805?data->localData[0]->realVars[112] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[114] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp807, linearSystemData, threadData);
  tmp808 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp810 = (modelica_boolean)tmp808;
  if(tmp810)
  {
    tmp811 = 0.0;
  }
  else
  {
    tmp809 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp811 = (tmp809?data->localData[0]->realVars[109] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp811, linearSystemData, threadData);
  tmp812 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp814 = (modelica_boolean)tmp812;
  if(tmp814)
  {
    tmp815 = 0.0;
  }
  else
  {
    tmp813 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp815 = (tmp813?data->localData[0]->realVars[110] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp815, linearSystemData, threadData);
  tmp816 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp818 = (modelica_boolean)tmp816;
  if(tmp818)
  {
    tmp819 = data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp817 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp819 = (tmp817?data->localData[0]->realVars[111] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp819, linearSystemData, threadData);
  tmp820 = GreaterEq(101312.0,data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */);
  tmp822 = (modelica_boolean)tmp820;
  if(tmp822)
  {
    tmp823 = 0.0;
  }
  else
  {
    tmp821 = GreaterEq(101312.0,data->localData[0]->realVars[103] /* MatStm3.Pdew variable */);
    tmp823 = (tmp821?data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp823, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData115(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[113].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[113].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[113].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm3.compMasFrac[3,2] */.max;
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

