/* Linear Systems */
#include "Mixer1_model.h"
#include "Mixer1_12jac.h"
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
  modelica_boolean tmp442;
  modelica_boolean tmp443;
  modelica_boolean tmp444;
  modelica_real tmp445;
  modelica_boolean tmp446;
  modelica_boolean tmp447;
  modelica_boolean tmp448;
  modelica_boolean tmp449;
  modelica_real tmp450;
  modelica_boolean tmp451;
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
  modelica_real tmp463;
  modelica_boolean tmp464;
  modelica_boolean tmp465;
  modelica_boolean tmp466;
  modelica_boolean tmp467;
  modelica_real tmp468;
  modelica_boolean tmp469;
  modelica_boolean tmp470;
  modelica_boolean tmp471;
  modelica_real tmp472;
  modelica_boolean tmp473;
  modelica_boolean tmp474;
  modelica_boolean tmp475;
  modelica_boolean tmp476;
  modelica_real tmp477;
  modelica_boolean tmp478;
  modelica_boolean tmp479;
  modelica_boolean tmp480;
  modelica_real tmp481;
  modelica_boolean tmp482;
  modelica_boolean tmp483;
  modelica_boolean tmp484;
  modelica_real tmp485;
  RELATIONHYSTERESIS(tmp442, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp444 = (modelica_boolean)tmp442;
  if(tmp444)
  {
    tmp445 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp443, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp445 = (tmp443?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp445)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp446, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 4, (-((tmp446?1.0:-0.0))), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp447, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp449 = (modelica_boolean)tmp447;
  if(tmp449)
  {
    tmp450 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp448, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp450 = (tmp448?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp450)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp451, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp451?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp452, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp454 = (modelica_boolean)tmp452;
  if(tmp454)
  {
    tmp455 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp453, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp455 = (tmp453?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp455)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp456, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp458 = (modelica_boolean)tmp456;
  if(tmp458)
  {
    tmp459 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp457, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp459 = (tmp457?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp459)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp460, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp462 = (modelica_boolean)tmp460;
  if(tmp462)
  {
    tmp463 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp461, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp463 = (tmp461?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp463)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp464, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp464?1.0:-0.0))), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp465, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp467 = (modelica_boolean)tmp465;
  if(tmp467)
  {
    tmp468 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp466, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp468 = (tmp466?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp468)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp469, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp471 = (modelica_boolean)tmp469;
  if(tmp471)
  {
    tmp472 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp470, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp472 = (tmp470?(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp472)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp473, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 1, (-((tmp473?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp474, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp476 = (modelica_boolean)tmp474;
  if(tmp476)
  {
    tmp477 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp475, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp477 = (tmp475?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp477)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp478, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp480 = (modelica_boolean)tmp478;
  if(tmp480)
  {
    tmp481 = (-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp479, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp481 = (tmp479?-0.0:(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp481)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp482, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp484 = (modelica_boolean)tmp482;
  if(tmp484)
  {
    tmp485 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp483, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp485 = (tmp483?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp485)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb428(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,428};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp502;
  modelica_boolean tmp503;
  modelica_boolean tmp504;
  modelica_real tmp505;
  RELATIONHYSTERESIS(tmp486, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp488 = (modelica_boolean)tmp486;
  if(tmp488)
  {
    tmp489 = (-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp487, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp489 = (tmp487?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp489, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp490, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp492 = (modelica_boolean)tmp490;
  if(tmp492)
  {
    tmp493 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp491, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp493 = (tmp491?data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp493, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp494, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp496 = (modelica_boolean)tmp494;
  if(tmp496)
  {
    tmp497 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp495, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp497 = (tmp495?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp497, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp498, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp500 = (modelica_boolean)tmp498;
  if(tmp500)
  {
    tmp501 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp499, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp501 = (tmp499?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp501, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp502, 101262.5, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp504 = (modelica_boolean)tmp502;
  if(tmp504)
  {
    tmp505 = data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp503, 101262.5, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp505 = (tmp503?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp505, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData428(void *inData, threadData_t *threadData, void *systemData)
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
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[24].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA378(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,378};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp517;
  modelica_real tmp518;
  modelica_boolean tmp519;
  modelica_boolean tmp520;
  modelica_boolean tmp521;
  modelica_real tmp522;
  modelica_boolean tmp523;
  modelica_boolean tmp524;
  modelica_boolean tmp525;
  modelica_boolean tmp526;
  modelica_real tmp527;
  modelica_boolean tmp528;
  modelica_boolean tmp529;
  modelica_boolean tmp530;
  modelica_boolean tmp531;
  modelica_real tmp532;
  modelica_boolean tmp533;
  modelica_boolean tmp534;
  modelica_boolean tmp535;
  modelica_real tmp536;
  modelica_boolean tmp537;
  modelica_boolean tmp538;
  modelica_boolean tmp539;
  modelica_boolean tmp540;
  modelica_real tmp541;
  modelica_boolean tmp542;
  modelica_boolean tmp543;
  modelica_boolean tmp544;
  modelica_real tmp545;
  modelica_boolean tmp546;
  modelica_boolean tmp547;
  modelica_boolean tmp548;
  modelica_real tmp549;
  tmp506 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp508 = (modelica_boolean)tmp506;
  if(tmp508)
  {
    tmp509 = -1.0;
  }
  else
  {
    tmp507 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp509 = (tmp507?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp509)), 0, linearSystemData, threadData);
  tmp510 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp512 = (modelica_boolean)tmp510;
  if(tmp512)
  {
    tmp513 = 0.0;
  }
  else
  {
    tmp511 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp513 = (tmp511?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp513)), 1, linearSystemData, threadData);
  tmp514 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp514?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp515 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp517 = (modelica_boolean)tmp515;
  if(tmp517)
  {
    tmp518 = 0.0;
  }
  else
  {
    tmp516 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp518 = (tmp516?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp518)), 3, linearSystemData, threadData);
  tmp519 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp521 = (modelica_boolean)tmp519;
  if(tmp521)
  {
    tmp522 = 0.0;
  }
  else
  {
    tmp520 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp522 = (tmp520?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp522)), 4, linearSystemData, threadData);
  tmp523 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp523?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp524 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp526 = (modelica_boolean)tmp524;
  if(tmp526)
  {
    tmp527 = 0.0;
  }
  else
  {
    tmp525 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp527 = (tmp525?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp527)), 6, linearSystemData, threadData);
  tmp528 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp528?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp529 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp531 = (modelica_boolean)tmp529;
  if(tmp531)
  {
    tmp532 = 0.0;
  }
  else
  {
    tmp530 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp532 = (tmp530?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp532)), 8, linearSystemData, threadData);
  tmp533 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp535 = (modelica_boolean)tmp533;
  if(tmp535)
  {
    tmp536 = 0.0;
  }
  else
  {
    tmp534 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp536 = (tmp534?(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp536)), 9, linearSystemData, threadData);
  tmp537 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp537?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp538 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp540 = (modelica_boolean)tmp538;
  if(tmp540)
  {
    tmp541 = 0.0;
  }
  else
  {
    tmp539 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp541 = (tmp539?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp541)), 11, linearSystemData, threadData);
  tmp542 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp544 = (modelica_boolean)tmp542;
  if(tmp544)
  {
    tmp545 = (-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp543 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp545 = (tmp543?-0.0:(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp545)), 12, linearSystemData, threadData);
  tmp546 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp548 = (modelica_boolean)tmp546;
  if(tmp548)
  {
    tmp549 = -0.0;
  }
  else
  {
    tmp547 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp549 = (tmp547?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp549)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb378(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,378};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp566;
  modelica_boolean tmp567;
  modelica_boolean tmp568;
  modelica_real tmp569;
  tmp550 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp552 = (modelica_boolean)tmp550;
  if(tmp552)
  {
    tmp553 = 0.0;
  }
  else
  {
    tmp551 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp553 = (tmp551?data->localData[0]->realVars[110] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp553, linearSystemData, threadData);
  tmp554 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp556 = (modelica_boolean)tmp554;
  if(tmp556)
  {
    tmp557 = (-data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp555 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp557 = (tmp555?data->localData[0]->realVars[112] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp557, linearSystemData, threadData);
  tmp558 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp560 = (modelica_boolean)tmp558;
  if(tmp560)
  {
    tmp561 = 0.0;
  }
  else
  {
    tmp559 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp561 = (tmp559?data->localData[0]->realVars[109] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp561, linearSystemData, threadData);
  tmp562 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp564 = (modelica_boolean)tmp562;
  if(tmp564)
  {
    tmp565 = 0.0;
  }
  else
  {
    tmp563 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp565 = (tmp563?data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp565, linearSystemData, threadData);
  tmp566 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp568 = (modelica_boolean)tmp566;
  if(tmp568)
  {
    tmp569 = data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp567 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp569 = (tmp567?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp569, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData378(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[113].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[113].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[113].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp570;
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
  modelica_real tmp582;
  modelica_boolean tmp583;
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
  modelica_real tmp595;
  modelica_boolean tmp596;
  modelica_boolean tmp597;
  modelica_boolean tmp598;
  modelica_boolean tmp599;
  modelica_real tmp600;
  modelica_boolean tmp601;
  modelica_boolean tmp602;
  modelica_boolean tmp603;
  modelica_boolean tmp604;
  modelica_real tmp605;
  modelica_boolean tmp606;
  modelica_boolean tmp607;
  modelica_boolean tmp608;
  modelica_real tmp609;
  modelica_boolean tmp610;
  modelica_boolean tmp611;
  modelica_boolean tmp612;
  modelica_real tmp613;
  tmp570 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp570?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp571 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp573 = (modelica_boolean)tmp571;
  if(tmp573)
  {
    tmp574 = 0.0;
  }
  else
  {
    tmp572 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp574 = (tmp572?(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp574)), 1, linearSystemData, threadData);
  tmp575 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp577 = (modelica_boolean)tmp575;
  if(tmp577)
  {
    tmp578 = 0.0;
  }
  else
  {
    tmp576 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp578 = (tmp576?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp578)), 2, linearSystemData, threadData);
  tmp579 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp581 = (modelica_boolean)tmp579;
  if(tmp581)
  {
    tmp582 = 0.0;
  }
  else
  {
    tmp580 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp582 = (tmp580?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp582)), 3, linearSystemData, threadData);
  tmp583 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp583?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp584 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp586 = (modelica_boolean)tmp584;
  if(tmp586)
  {
    tmp587 = -1.0;
  }
  else
  {
    tmp585 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp587 = (tmp585?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp587)), 5, linearSystemData, threadData);
  tmp588 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp590 = (modelica_boolean)tmp588;
  if(tmp590)
  {
    tmp591 = 0.0;
  }
  else
  {
    tmp589 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp591 = (tmp589?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp591)), 6, linearSystemData, threadData);
  tmp592 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp594 = (modelica_boolean)tmp592;
  if(tmp594)
  {
    tmp595 = 0.0;
  }
  else
  {
    tmp593 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp595 = (tmp593?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp595)), 7, linearSystemData, threadData);
  tmp596 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp596?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp597 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp599 = (modelica_boolean)tmp597;
  if(tmp599)
  {
    tmp600 = 0.0;
  }
  else
  {
    tmp598 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp600 = (tmp598?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp600)), 9, linearSystemData, threadData);
  tmp601 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp601?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp602 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp604 = (modelica_boolean)tmp602;
  if(tmp604)
  {
    tmp605 = 0.0;
  }
  else
  {
    tmp603 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp605 = (tmp603?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp605)), 11, linearSystemData, threadData);
  tmp606 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp608 = (modelica_boolean)tmp606;
  if(tmp608)
  {
    tmp609 = (-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp607 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp609 = (tmp607?-0.0:(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp609)), 12, linearSystemData, threadData);
  tmp610 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp612 = (modelica_boolean)tmp610;
  if(tmp612)
  {
    tmp613 = -0.0;
  }
  else
  {
    tmp611 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp613 = (tmp611?(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp613)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb325(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,325};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp630;
  modelica_boolean tmp631;
  modelica_boolean tmp632;
  modelica_real tmp633;
  tmp614 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp616 = (modelica_boolean)tmp614;
  if(tmp616)
  {
    tmp617 = (-data->localData[0]->realVars[204] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp615 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp617 = (tmp615?data->localData[0]->realVars[202] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[204] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp617, linearSystemData, threadData);
  tmp618 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp620 = (modelica_boolean)tmp618;
  if(tmp620)
  {
    tmp621 = 0.0;
  }
  else
  {
    tmp619 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp621 = (tmp619?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp621, linearSystemData, threadData);
  tmp622 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp624 = (modelica_boolean)tmp622;
  if(tmp624)
  {
    tmp625 = 0.0;
  }
  else
  {
    tmp623 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp625 = (tmp623?data->localData[0]->realVars[200] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp625, linearSystemData, threadData);
  tmp626 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp628 = (modelica_boolean)tmp626;
  if(tmp628)
  {
    tmp629 = 0.0;
  }
  else
  {
    tmp627 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp629 = (tmp627?data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp629, linearSystemData, threadData);
  tmp630 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp632 = (modelica_boolean)tmp630;
  if(tmp632)
  {
    tmp633 = data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp631 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp633 = (tmp631?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp633, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData325(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[203].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[203].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[203].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp634;
  modelica_boolean tmp635;
  modelica_boolean tmp636;
  modelica_real tmp637;
  modelica_boolean tmp638;
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
  modelica_real tmp658;
  modelica_boolean tmp659;
  modelica_boolean tmp660;
  modelica_boolean tmp661;
  modelica_boolean tmp662;
  modelica_real tmp663;
  modelica_boolean tmp664;
  modelica_boolean tmp665;
  modelica_boolean tmp666;
  modelica_real tmp667;
  modelica_boolean tmp668;
  modelica_boolean tmp669;
  modelica_boolean tmp670;
  modelica_boolean tmp671;
  modelica_real tmp672;
  modelica_boolean tmp673;
  modelica_boolean tmp674;
  modelica_boolean tmp675;
  modelica_boolean tmp676;
  modelica_real tmp677;
  tmp634 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp636 = (modelica_boolean)tmp634;
  if(tmp636)
  {
    tmp637 = 0.0;
  }
  else
  {
    tmp635 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp637 = (tmp635?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp637)), 0, linearSystemData, threadData);
  tmp638 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp638?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp639 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp641 = (modelica_boolean)tmp639;
  if(tmp641)
  {
    tmp642 = 0.0;
  }
  else
  {
    tmp640 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp642 = (tmp640?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp642)), 2, linearSystemData, threadData);
  tmp643 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp645 = (modelica_boolean)tmp643;
  if(tmp645)
  {
    tmp646 = -1.0;
  }
  else
  {
    tmp644 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp646 = (tmp644?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp646)), 3, linearSystemData, threadData);
  tmp647 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp649 = (modelica_boolean)tmp647;
  if(tmp649)
  {
    tmp650 = -0.0;
  }
  else
  {
    tmp648 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp650 = (tmp648?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp650)), 4, linearSystemData, threadData);
  tmp651 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp653 = (modelica_boolean)tmp651;
  if(tmp653)
  {
    tmp654 = (-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp652 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp654 = (tmp652?-0.0:(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 4, (-(tmp654)), 5, linearSystemData, threadData);
  tmp655 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp657 = (modelica_boolean)tmp655;
  if(tmp657)
  {
    tmp658 = 0.0;
  }
  else
  {
    tmp656 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp658 = (tmp656?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp658)), 6, linearSystemData, threadData);
  tmp659 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp659?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp660 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp662 = (modelica_boolean)tmp660;
  if(tmp662)
  {
    tmp663 = 0.0;
  }
  else
  {
    tmp661 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp663 = (tmp661?(-data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp663)), 8, linearSystemData, threadData);
  tmp664 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp666 = (modelica_boolean)tmp664;
  if(tmp666)
  {
    tmp667 = 0.0;
  }
  else
  {
    tmp665 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp667 = (tmp665?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp667)), 9, linearSystemData, threadData);
  tmp668 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp668?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp669 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp671 = (modelica_boolean)tmp669;
  if(tmp671)
  {
    tmp672 = 0.0;
  }
  else
  {
    tmp670 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp672 = (tmp670?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp672)), 11, linearSystemData, threadData);
  tmp673 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp673?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp674 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp676 = (modelica_boolean)tmp674;
  if(tmp676)
  {
    tmp677 = 0.0;
  }
  else
  {
    tmp675 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp677 = (tmp675?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp677)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb226(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,226};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp694;
  modelica_boolean tmp695;
  modelica_boolean tmp696;
  modelica_real tmp697;
  tmp678 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp680 = (modelica_boolean)tmp678;
  if(tmp680)
  {
    tmp681 = 0.0;
  }
  else
  {
    tmp679 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp681 = (tmp679?data->localData[0]->realVars[110] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp681, linearSystemData, threadData);
  tmp682 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp684 = (modelica_boolean)tmp682;
  if(tmp684)
  {
    tmp685 = data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp683 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp685 = (tmp683?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp685, linearSystemData, threadData);
  tmp686 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp688 = (modelica_boolean)tmp686;
  if(tmp688)
  {
    tmp689 = 0.0;
  }
  else
  {
    tmp687 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp689 = (tmp687?data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp689, linearSystemData, threadData);
  tmp690 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp692 = (modelica_boolean)tmp690;
  if(tmp692)
  {
    tmp693 = 0.0;
  }
  else
  {
    tmp691 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp693 = (tmp691?data->localData[0]->realVars[109] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp693, linearSystemData, threadData);
  tmp694 = GreaterEq(101200.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp696 = (modelica_boolean)tmp694;
  if(tmp696)
  {
    tmp697 = (-data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp695 = GreaterEq(101200.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp697 = (tmp695?data->localData[0]->realVars[112] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp697, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData226(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[113].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[113].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[113].attribute /* MatStm2.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA192(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,192};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp698;
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
  modelica_real tmp710;
  modelica_boolean tmp711;
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
  modelica_real tmp723;
  modelica_boolean tmp724;
  modelica_boolean tmp725;
  modelica_boolean tmp726;
  modelica_boolean tmp727;
  modelica_real tmp728;
  modelica_boolean tmp729;
  modelica_boolean tmp730;
  modelica_boolean tmp731;
  modelica_boolean tmp732;
  modelica_real tmp733;
  modelica_boolean tmp734;
  modelica_boolean tmp735;
  modelica_boolean tmp736;
  modelica_real tmp737;
  modelica_boolean tmp738;
  modelica_boolean tmp739;
  modelica_boolean tmp740;
  modelica_real tmp741;
  tmp698 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp698?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp699 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp701 = (modelica_boolean)tmp699;
  if(tmp701)
  {
    tmp702 = 0.0;
  }
  else
  {
    tmp700 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp702 = (tmp700?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp702)), 1, linearSystemData, threadData);
  tmp703 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp705 = (modelica_boolean)tmp703;
  if(tmp705)
  {
    tmp706 = 0.0;
  }
  else
  {
    tmp704 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp706 = (tmp704?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp706)), 2, linearSystemData, threadData);
  tmp707 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp709 = (modelica_boolean)tmp707;
  if(tmp709)
  {
    tmp710 = 0.0;
  }
  else
  {
    tmp708 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp710 = (tmp708?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp710)), 3, linearSystemData, threadData);
  tmp711 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp711?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp712 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp714 = (modelica_boolean)tmp712;
  if(tmp714)
  {
    tmp715 = -1.0;
  }
  else
  {
    tmp713 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp715 = (tmp713?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp715)), 5, linearSystemData, threadData);
  tmp716 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp718 = (modelica_boolean)tmp716;
  if(tmp718)
  {
    tmp719 = 0.0;
  }
  else
  {
    tmp717 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp719 = (tmp717?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp719)), 6, linearSystemData, threadData);
  tmp720 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp722 = (modelica_boolean)tmp720;
  if(tmp722)
  {
    tmp723 = 0.0;
  }
  else
  {
    tmp721 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp723 = (tmp721?(-data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp723)), 7, linearSystemData, threadData);
  tmp724 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp724?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp725 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp727 = (modelica_boolean)tmp725;
  if(tmp727)
  {
    tmp728 = 0.0;
  }
  else
  {
    tmp726 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp728 = (tmp726?(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp728)), 9, linearSystemData, threadData);
  tmp729 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp729?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp730 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp732 = (modelica_boolean)tmp730;
  if(tmp732)
  {
    tmp733 = 0.0;
  }
  else
  {
    tmp731 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp733 = (tmp731?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp733)), 11, linearSystemData, threadData);
  tmp734 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp736 = (modelica_boolean)tmp734;
  if(tmp736)
  {
    tmp737 = (-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp735 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp737 = (tmp735?-0.0:(-data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp737)), 12, linearSystemData, threadData);
  tmp738 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp740 = (modelica_boolean)tmp738;
  if(tmp740)
  {
    tmp741 = -0.0;
  }
  else
  {
    tmp739 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp741 = (tmp739?(-data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp741)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb192(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,192};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp758;
  modelica_boolean tmp759;
  modelica_boolean tmp760;
  modelica_real tmp761;
  tmp742 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp744 = (modelica_boolean)tmp742;
  if(tmp744)
  {
    tmp745 = (-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp743 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp745 = (tmp743?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp745, linearSystemData, threadData);
  tmp746 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp748 = (modelica_boolean)tmp746;
  if(tmp748)
  {
    tmp749 = 0.0;
  }
  else
  {
    tmp747 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp749 = (tmp747?data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp749, linearSystemData, threadData);
  tmp750 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp752 = (modelica_boolean)tmp750;
  if(tmp752)
  {
    tmp753 = 0.0;
  }
  else
  {
    tmp751 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp753 = (tmp751?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp753, linearSystemData, threadData);
  tmp754 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp756 = (modelica_boolean)tmp754;
  if(tmp756)
  {
    tmp757 = 0.0;
  }
  else
  {
    tmp755 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp757 = (tmp755?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp757, linearSystemData, threadData);
  tmp758 = GreaterEq(101262.5,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp760 = (modelica_boolean)tmp758;
  if(tmp760)
  {
    tmp761 = data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp759 = GreaterEq(101262.5,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp761 = (tmp759?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp761, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData192(void *inData, threadData_t *threadData, void *systemData)
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
void setLinearMatrixA115(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,115};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp762;
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
  modelica_real tmp774;
  modelica_boolean tmp775;
  modelica_boolean tmp776;
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
  modelica_real tmp800;
  modelica_boolean tmp801;
  modelica_boolean tmp802;
  modelica_boolean tmp803;
  modelica_boolean tmp804;
  modelica_real tmp805;
  tmp762 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp762?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp763 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp765 = (modelica_boolean)tmp763;
  if(tmp765)
  {
    tmp766 = 0.0;
  }
  else
  {
    tmp764 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp766 = (tmp764?(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp766)), 1, linearSystemData, threadData);
  tmp767 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp769 = (modelica_boolean)tmp767;
  if(tmp769)
  {
    tmp770 = 0.0;
  }
  else
  {
    tmp768 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp770 = (tmp768?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp770)), 2, linearSystemData, threadData);
  tmp771 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp773 = (modelica_boolean)tmp771;
  if(tmp773)
  {
    tmp774 = 0.0;
  }
  else
  {
    tmp772 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp774 = (tmp772?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp774)), 3, linearSystemData, threadData);
  tmp775 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp775?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp776 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp776?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp777 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp779 = (modelica_boolean)tmp777;
  if(tmp779)
  {
    tmp780 = 0.0;
  }
  else
  {
    tmp778 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp780 = (tmp778?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp780)), 6, linearSystemData, threadData);
  tmp781 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp783 = (modelica_boolean)tmp781;
  if(tmp783)
  {
    tmp784 = -1.0;
  }
  else
  {
    tmp782 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp784 = (tmp782?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp784)), 7, linearSystemData, threadData);
  tmp785 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp787 = (modelica_boolean)tmp785;
  if(tmp787)
  {
    tmp788 = 0.0;
  }
  else
  {
    tmp786 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp788 = (tmp786?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp788)), 8, linearSystemData, threadData);
  tmp789 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp791 = (modelica_boolean)tmp789;
  if(tmp791)
  {
    tmp792 = -0.0;
  }
  else
  {
    tmp790 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp792 = (tmp790?(-data->localData[0]->realVars[269] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp792)), 9, linearSystemData, threadData);
  tmp793 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp795 = (modelica_boolean)tmp793;
  if(tmp795)
  {
    tmp796 = (-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp794 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp796 = (tmp794?-0.0:(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp796)), 10, linearSystemData, threadData);
  tmp797 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp799 = (modelica_boolean)tmp797;
  if(tmp799)
  {
    tmp800 = 0.0;
  }
  else
  {
    tmp798 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp800 = (tmp798?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp800)), 11, linearSystemData, threadData);
  tmp801 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp801?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp802 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp804 = (modelica_boolean)tmp802;
  if(tmp804)
  {
    tmp805 = 0.0;
  }
  else
  {
    tmp803 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp805 = (tmp803?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp805)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb115(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,115};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp822;
  modelica_boolean tmp823;
  modelica_boolean tmp824;
  modelica_real tmp825;
  tmp806 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp808 = (modelica_boolean)tmp806;
  if(tmp808)
  {
    tmp809 = (-data->localData[0]->realVars[204] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp807 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp809 = (tmp807?data->localData[0]->realVars[202] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[204] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp809, linearSystemData, threadData);
  tmp810 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp812 = (modelica_boolean)tmp810;
  if(tmp812)
  {
    tmp813 = 0.0;
  }
  else
  {
    tmp811 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp813 = (tmp811?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp813, linearSystemData, threadData);
  tmp814 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp816 = (modelica_boolean)tmp814;
  if(tmp816)
  {
    tmp817 = 0.0;
  }
  else
  {
    tmp815 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp817 = (tmp815?data->localData[0]->realVars[200] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp817, linearSystemData, threadData);
  tmp818 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp820 = (modelica_boolean)tmp818;
  if(tmp820)
  {
    tmp821 = data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp819 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp821 = (tmp819?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp821, linearSystemData, threadData);
  tmp822 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp824 = (modelica_boolean)tmp822;
  if(tmp824)
  {
    tmp825 = 0.0;
  }
  else
  {
    tmp823 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp825 = (tmp823?data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp825, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData115(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[203].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[203].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[203].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Mixer1_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
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

