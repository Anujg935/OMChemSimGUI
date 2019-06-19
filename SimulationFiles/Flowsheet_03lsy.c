/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA841(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,841};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp472;
  modelica_boolean tmp473;
  modelica_boolean tmp474;
  modelica_boolean tmp475;
  modelica_boolean tmp476;
  modelica_boolean tmp477;
  modelica_real tmp478;
  modelica_boolean tmp479;
  modelica_boolean tmp480;
  modelica_boolean tmp481;
  modelica_real tmp482;
  modelica_boolean tmp483;
  modelica_boolean tmp484;
  modelica_boolean tmp485;
  modelica_real tmp486;
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
  modelica_real tmp502;
  modelica_boolean tmp503;
  RELATIONHYSTERESIS(tmp460, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp460?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp461, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp463 = (modelica_boolean)tmp461;
  if(tmp463)
  {
    tmp464 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp462, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp464 = (tmp462?(-data->localData[0]->realVars[446] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp464)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp465, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp467 = (modelica_boolean)tmp465;
  if(tmp467)
  {
    tmp468 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp466, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp468 = (tmp466?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp468)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp469, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp471 = (modelica_boolean)tmp469;
  if(tmp471)
  {
    tmp472 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp470, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp472 = (tmp470?(-data->localData[0]->realVars[445] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp472)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp473, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(1, 4, (-((tmp473?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp474, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(2, 1, (-((tmp474?1.0:-0.0))), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp475, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp477 = (modelica_boolean)tmp475;
  if(tmp477)
  {
    tmp478 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp476, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp478 = (tmp476?(-data->localData[0]->realVars[444] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp478)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp479, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp481 = (modelica_boolean)tmp479;
  if(tmp481)
  {
    tmp482 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp480, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp482 = (tmp480?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp482)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp483, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp485 = (modelica_boolean)tmp483;
  if(tmp485)
  {
    tmp486 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp484, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp486 = (tmp484?(-data->localData[0]->realVars[446] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp486)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp487, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp489 = (modelica_boolean)tmp487;
  if(tmp489)
  {
    tmp490 = (-data->localData[0]->realVars[444] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp488, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp490 = (tmp488?-0.0:(-data->localData[0]->realVars[444] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp490)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp491, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp493 = (modelica_boolean)tmp491;
  if(tmp493)
  {
    tmp494 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp492, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp494 = (tmp492?(-data->localData[0]->realVars[445] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp494)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp495, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp497 = (modelica_boolean)tmp495;
  if(tmp497)
  {
    tmp498 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp496, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp498 = (tmp496?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp498)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp499, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp501 = (modelica_boolean)tmp499;
  if(tmp501)
  {
    tmp502 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp500, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp502 = (tmp500?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp502)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp503, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(4, 3, (-((tmp503?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb841(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,841};
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
  RELATIONHYSTERESIS(tmp504, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp506 = (modelica_boolean)tmp504;
  if(tmp506)
  {
    tmp507 = (-data->localData[0]->realVars[321] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp505, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp507 = (tmp505?data->localData[0]->realVars[319] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[321] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp507, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp508, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp510 = (modelica_boolean)tmp508;
  if(tmp510)
  {
    tmp511 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp509, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp511 = (tmp509?data->localData[0]->realVars[316] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp511, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp512, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp514 = (modelica_boolean)tmp512;
  if(tmp514)
  {
    tmp515 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp513, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp515 = (tmp513?data->localData[0]->realVars[314] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp515, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp516, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp518 = (modelica_boolean)tmp516;
  if(tmp518)
  {
    tmp519 = data->localData[0]->realVars[314] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp517, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp519 = (tmp517?data->localData[0]->realVars[318] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[314] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp519, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp520, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp522 = (modelica_boolean)tmp520;
  if(tmp522)
  {
    tmp523 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp521, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp523 = (tmp521?data->localData[0]->realVars[317] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp523, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData841(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[323].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[323].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[323].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[324].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[324].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[324].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[320].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[320].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[320].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[322].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[322].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[322].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[325].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[325].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[325].attribute /* MatStm2.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA710(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,710};
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
  modelica_boolean tmp535;
  modelica_real tmp536;
  modelica_boolean tmp537;
  modelica_boolean tmp538;
  modelica_boolean tmp539;
  modelica_real tmp540;
  modelica_boolean tmp541;
  modelica_boolean tmp542;
  modelica_boolean tmp543;
  modelica_boolean tmp544;
  modelica_real tmp545;
  modelica_boolean tmp546;
  modelica_boolean tmp547;
  modelica_boolean tmp548;
  modelica_boolean tmp549;
  modelica_real tmp550;
  modelica_boolean tmp551;
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
  RELATIONHYSTERESIS(tmp524, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp526 = (modelica_boolean)tmp524;
  if(tmp526)
  {
    tmp527 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp525, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp527 = (tmp525?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp527)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp528, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp530 = (modelica_boolean)tmp528;
  if(tmp530)
  {
    tmp531 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp529, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp531 = (tmp529?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp531)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp532, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 2, (-((tmp532?1.0:-0.0))), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp533, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp535 = (modelica_boolean)tmp533;
  if(tmp535)
  {
    tmp536 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp534, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp536 = (tmp534?(-data->localData[0]->realVars[628] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp536)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp537, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp539 = (modelica_boolean)tmp537;
  if(tmp539)
  {
    tmp540 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp538, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp540 = (tmp538?(-data->localData[0]->realVars[629] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp540)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp541, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 4, (-((tmp541?1.0:-0.0))), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp542, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp544 = (modelica_boolean)tmp542;
  if(tmp544)
  {
    tmp545 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp543, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp545 = (tmp543?(-data->localData[0]->realVars[628] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp545)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp546, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 3, (-((tmp546?1.0:-0.0))), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp547, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp549 = (modelica_boolean)tmp547;
  if(tmp549)
  {
    tmp550 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp548, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp550 = (tmp548?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp550)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp551, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 0, (-((tmp551?1.0:-0.0))), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp552, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp554 = (modelica_boolean)tmp552;
  if(tmp554)
  {
    tmp555 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp553, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp555 = (tmp553?(-data->localData[0]->realVars[627] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp555)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp556, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp558 = (modelica_boolean)tmp556;
  if(tmp558)
  {
    tmp559 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp557, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp559 = (tmp557?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp559)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp560, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp562 = (modelica_boolean)tmp560;
  if(tmp562)
  {
    tmp563 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp561, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp563 = (tmp561?(-data->localData[0]->realVars[629] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp563)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp564, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp566 = (modelica_boolean)tmp564;
  if(tmp566)
  {
    tmp567 = (-data->localData[0]->realVars[627] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp565, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp567 = (tmp565?-0.0:(-data->localData[0]->realVars[627] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp567)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb710(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,710};
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
  RELATIONHYSTERESIS(tmp568, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp570 = (modelica_boolean)tmp568;
  if(tmp570)
  {
    tmp571 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp569, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp571 = (tmp569?data->localData[0]->realVars[500] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp571, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp572, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp574 = (modelica_boolean)tmp572;
  if(tmp574)
  {
    tmp575 = (-data->localData[0]->realVars[504] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp573, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp575 = (tmp573?data->localData[0]->realVars[502] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[504] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp575, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp576, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp578 = (modelica_boolean)tmp576;
  if(tmp578)
  {
    tmp579 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp577, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp579 = (tmp577?data->localData[0]->realVars[499] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp579, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp580, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp582 = (modelica_boolean)tmp580;
  if(tmp582)
  {
    tmp583 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp581, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp583 = (tmp581?data->localData[0]->realVars[497] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp583, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp584, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp586 = (modelica_boolean)tmp584;
  if(tmp586)
  {
    tmp587 = data->localData[0]->realVars[497] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp585, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp587 = (tmp585?data->localData[0]->realVars[501] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[497] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp587, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData710(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[507].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[507].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[507].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[503].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[503].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[503].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[505].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[505].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[505].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[508].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[508].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[508].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[506].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[506].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[506].attribute /* MatStm3.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA599(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,599};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp599;
  modelica_boolean tmp600;
  modelica_boolean tmp601;
  modelica_boolean tmp602;
  modelica_real tmp603;
  modelica_boolean tmp604;
  modelica_boolean tmp605;
  modelica_boolean tmp606;
  modelica_boolean tmp607;
  modelica_real tmp608;
  modelica_boolean tmp609;
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
  modelica_boolean tmp621;
  modelica_real tmp622;
  modelica_boolean tmp623;
  modelica_boolean tmp624;
  modelica_boolean tmp625;
  modelica_real tmp626;
  modelica_boolean tmp627;
  modelica_boolean tmp628;
  modelica_boolean tmp629;
  modelica_real tmp630;
  modelica_boolean tmp631;
  RELATIONHYSTERESIS(tmp588, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp590 = (modelica_boolean)tmp588;
  if(tmp590)
  {
    tmp591 = (-data->localData[0]->realVars[262] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp589, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp591 = (tmp589?-0.0:(-data->localData[0]->realVars[262] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 3, (-(tmp591)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp592, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp594 = (modelica_boolean)tmp592;
  if(tmp594)
  {
    tmp595 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp593, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp595 = (tmp593?(-data->localData[0]->realVars[264] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp595)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp596, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp598 = (modelica_boolean)tmp596;
  if(tmp598)
  {
    tmp599 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp597, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp599 = (tmp597?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp599)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp600, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp602 = (modelica_boolean)tmp600;
  if(tmp602)
  {
    tmp603 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp601, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp603 = (tmp601?(-data->localData[0]->realVars[262] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp603)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp604, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(1, 4, (-((tmp604?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp605, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp607 = (modelica_boolean)tmp605;
  if(tmp607)
  {
    tmp608 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp606, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp608 = (tmp606?(-data->localData[0]->realVars[263] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp608)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp609, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp609?1.0:-0.0))), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp610, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp612 = (modelica_boolean)tmp610;
  if(tmp612)
  {
    tmp613 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp611, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp613 = (tmp611?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp613)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp614, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp616 = (modelica_boolean)tmp614;
  if(tmp616)
  {
    tmp617 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp615, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp617 = (tmp615?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp617)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp618, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(3, 0, (-((tmp618?1.0:-0.0))), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp619, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp621 = (modelica_boolean)tmp619;
  if(tmp621)
  {
    tmp622 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp620, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp622 = (tmp620?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp622)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp623, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp625 = (modelica_boolean)tmp623;
  if(tmp625)
  {
    tmp626 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp624, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp626 = (tmp624?(-data->localData[0]->realVars[263] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp626)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp627, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp629 = (modelica_boolean)tmp627;
  if(tmp629)
  {
    tmp630 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp628, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp630 = (tmp628?(-data->localData[0]->realVars[264] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp630)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp631, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(4, 1, (-((tmp631?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb599(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,599};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp632;
  modelica_boolean tmp633;
  modelica_boolean tmp634;
  modelica_real tmp635;
  modelica_boolean tmp636;
  modelica_boolean tmp637;
  modelica_boolean tmp638;
  modelica_real tmp639;
  modelica_boolean tmp640;
  modelica_boolean tmp641;
  modelica_boolean tmp642;
  modelica_real tmp643;
  modelica_boolean tmp644;
  modelica_boolean tmp645;
  modelica_boolean tmp646;
  modelica_real tmp647;
  modelica_boolean tmp648;
  modelica_boolean tmp649;
  modelica_boolean tmp650;
  modelica_real tmp651;
  RELATIONHYSTERESIS(tmp632, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp634 = (modelica_boolean)tmp632;
  if(tmp634)
  {
    tmp635 = data->localData[0]->realVars[132] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp633, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp635 = (tmp633?data->localData[0]->realVars[136] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[132] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp635, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp636, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp638 = (modelica_boolean)tmp636;
  if(tmp638)
  {
    tmp639 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp637, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp639 = (tmp637?data->localData[0]->realVars[132] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp639, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp640, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp642 = (modelica_boolean)tmp640;
  if(tmp642)
  {
    tmp643 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp641, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp643 = (tmp641?data->localData[0]->realVars[135] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp643, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp644, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp646 = (modelica_boolean)tmp644;
  if(tmp646)
  {
    tmp647 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp645, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp647 = (tmp645?data->localData[0]->realVars[134] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp647, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp648, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp650 = (modelica_boolean)tmp648;
  if(tmp650)
  {
    tmp651 = (-data->localData[0]->realVars[139] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp649, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp651 = (tmp649?data->localData[0]->realVars[137] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[139] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp651, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData599(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[143].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[143].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[143].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[141].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[141].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[141].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[140].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[140].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[140].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[138].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[138].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[138].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[142].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[142].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[142].attribute /* MatStm1.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA423(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,423};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp652;
  modelica_boolean tmp653;
  modelica_boolean tmp654;
  modelica_boolean tmp655;
  modelica_real tmp656;
  modelica_boolean tmp657;
  modelica_boolean tmp658;
  modelica_boolean tmp659;
  modelica_real tmp660;
  modelica_boolean tmp661;
  modelica_boolean tmp662;
  modelica_boolean tmp663;
  modelica_real tmp664;
  modelica_boolean tmp665;
  modelica_boolean tmp666;
  modelica_boolean tmp667;
  modelica_boolean tmp668;
  modelica_real tmp669;
  modelica_boolean tmp670;
  modelica_boolean tmp671;
  modelica_boolean tmp672;
  modelica_real tmp673;
  modelica_boolean tmp674;
  modelica_boolean tmp675;
  modelica_boolean tmp676;
  modelica_real tmp677;
  modelica_boolean tmp678;
  modelica_boolean tmp679;
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
  tmp652 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp652?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp653 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp655 = (modelica_boolean)tmp653;
  if(tmp655)
  {
    tmp656 = 0.0;
  }
  else
  {
    tmp654 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp656 = (tmp654?(-data->localData[0]->realVars[446] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp656)), 1, linearSystemData, threadData);
  tmp657 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp659 = (modelica_boolean)tmp657;
  if(tmp659)
  {
    tmp660 = 0.0;
  }
  else
  {
    tmp658 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp660 = (tmp658?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp660)), 2, linearSystemData, threadData);
  tmp661 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp663 = (modelica_boolean)tmp661;
  if(tmp663)
  {
    tmp664 = 0.0;
  }
  else
  {
    tmp662 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp664 = (tmp662?(-data->localData[0]->realVars[445] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp664)), 3, linearSystemData, threadData);
  tmp665 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp665?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp666 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp668 = (modelica_boolean)tmp666;
  if(tmp668)
  {
    tmp669 = 0.0;
  }
  else
  {
    tmp667 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp669 = (tmp667?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp669)), 5, linearSystemData, threadData);
  tmp670 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp672 = (modelica_boolean)tmp670;
  if(tmp672)
  {
    tmp673 = -1.0;
  }
  else
  {
    tmp671 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp673 = (tmp671?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp673)), 6, linearSystemData, threadData);
  tmp674 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp676 = (modelica_boolean)tmp674;
  if(tmp676)
  {
    tmp677 = 0.0;
  }
  else
  {
    tmp675 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp677 = (tmp675?(-data->localData[0]->realVars[445] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp677)), 7, linearSystemData, threadData);
  tmp678 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp678?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp679 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp679?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp680 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp682 = (modelica_boolean)tmp680;
  if(tmp682)
  {
    tmp683 = 0.0;
  }
  else
  {
    tmp681 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp683 = (tmp681?(-data->localData[0]->realVars[444] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp683)), 10, linearSystemData, threadData);
  tmp684 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp686 = (modelica_boolean)tmp684;
  if(tmp686)
  {
    tmp687 = 0.0;
  }
  else
  {
    tmp685 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp687 = (tmp685?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp687)), 11, linearSystemData, threadData);
  tmp688 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp690 = (modelica_boolean)tmp688;
  if(tmp690)
  {
    tmp691 = -0.0;
  }
  else
  {
    tmp689 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp691 = (tmp689?(-data->localData[0]->realVars[446] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp691)), 12, linearSystemData, threadData);
  tmp692 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp694 = (modelica_boolean)tmp692;
  if(tmp694)
  {
    tmp695 = (-data->localData[0]->realVars[444] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp693 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp695 = (tmp693?-0.0:(-data->localData[0]->realVars[444] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp695)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb423(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,423};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp696;
  modelica_boolean tmp697;
  modelica_boolean tmp698;
  modelica_real tmp699;
  modelica_boolean tmp700;
  modelica_boolean tmp701;
  modelica_boolean tmp702;
  modelica_real tmp703;
  modelica_boolean tmp704;
  modelica_boolean tmp705;
  modelica_boolean tmp706;
  modelica_real tmp707;
  modelica_boolean tmp708;
  modelica_boolean tmp709;
  modelica_boolean tmp710;
  modelica_real tmp711;
  modelica_boolean tmp712;
  modelica_boolean tmp713;
  modelica_boolean tmp714;
  modelica_real tmp715;
  tmp696 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp698 = (modelica_boolean)tmp696;
  if(tmp698)
  {
    tmp699 = (-data->localData[0]->realVars[321] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp697 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp699 = (tmp697?data->localData[0]->realVars[319] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[321] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp699, linearSystemData, threadData);
  tmp700 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp702 = (modelica_boolean)tmp700;
  if(tmp702)
  {
    tmp703 = 0.0;
  }
  else
  {
    tmp701 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp703 = (tmp701?data->localData[0]->realVars[316] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp703, linearSystemData, threadData);
  tmp704 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp706 = (modelica_boolean)tmp704;
  if(tmp706)
  {
    tmp707 = 0.0;
  }
  else
  {
    tmp705 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp707 = (tmp705?data->localData[0]->realVars[317] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp707, linearSystemData, threadData);
  tmp708 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp710 = (modelica_boolean)tmp708;
  if(tmp710)
  {
    tmp711 = 0.0;
  }
  else
  {
    tmp709 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp711 = (tmp709?data->localData[0]->realVars[314] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp711, linearSystemData, threadData);
  tmp712 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp714 = (modelica_boolean)tmp712;
  if(tmp714)
  {
    tmp715 = data->localData[0]->realVars[314] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp713 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp715 = (tmp713?data->localData[0]->realVars[318] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[314] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp715, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData423(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[324].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[324].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[324].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[320].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[320].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[320].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[323].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[323].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[323].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[322].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[322].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[322].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[325].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[325].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[325].attribute /* MatStm2.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA323(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,323};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp716;
  modelica_boolean tmp717;
  modelica_boolean tmp718;
  modelica_boolean tmp719;
  modelica_real tmp720;
  modelica_boolean tmp721;
  modelica_boolean tmp722;
  modelica_boolean tmp723;
  modelica_real tmp724;
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
  modelica_boolean tmp742;
  modelica_boolean tmp743;
  modelica_boolean tmp744;
  modelica_boolean tmp745;
  modelica_real tmp746;
  modelica_boolean tmp747;
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
  tmp716 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp716?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp717 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp719 = (modelica_boolean)tmp717;
  if(tmp719)
  {
    tmp720 = 0.0;
  }
  else
  {
    tmp718 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp720 = (tmp718?(-data->localData[0]->realVars[629] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp720)), 1, linearSystemData, threadData);
  tmp721 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp723 = (modelica_boolean)tmp721;
  if(tmp723)
  {
    tmp724 = 0.0;
  }
  else
  {
    tmp722 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp724 = (tmp722?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp724)), 2, linearSystemData, threadData);
  tmp725 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp727 = (modelica_boolean)tmp725;
  if(tmp727)
  {
    tmp728 = 0.0;
  }
  else
  {
    tmp726 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp728 = (tmp726?(-data->localData[0]->realVars[628] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp728)), 3, linearSystemData, threadData);
  tmp729 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp729?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp730 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp732 = (modelica_boolean)tmp730;
  if(tmp732)
  {
    tmp733 = -1.0;
  }
  else
  {
    tmp731 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp733 = (tmp731?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp733)), 5, linearSystemData, threadData);
  tmp734 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp736 = (modelica_boolean)tmp734;
  if(tmp736)
  {
    tmp737 = 0.0;
  }
  else
  {
    tmp735 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp737 = (tmp735?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp737)), 6, linearSystemData, threadData);
  tmp738 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp740 = (modelica_boolean)tmp738;
  if(tmp740)
  {
    tmp741 = 0.0;
  }
  else
  {
    tmp739 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp741 = (tmp739?(-data->localData[0]->realVars[628] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp741)), 7, linearSystemData, threadData);
  tmp742 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp742?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp743 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp745 = (modelica_boolean)tmp743;
  if(tmp745)
  {
    tmp746 = 0.0;
  }
  else
  {
    tmp744 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp746 = (tmp744?(-data->localData[0]->realVars[627] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp746)), 9, linearSystemData, threadData);
  tmp747 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp747?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp748 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp750 = (modelica_boolean)tmp748;
  if(tmp750)
  {
    tmp751 = 0.0;
  }
  else
  {
    tmp749 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp751 = (tmp749?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp751)), 11, linearSystemData, threadData);
  tmp752 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp754 = (modelica_boolean)tmp752;
  if(tmp754)
  {
    tmp755 = (-data->localData[0]->realVars[627] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp753 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp755 = (tmp753?-0.0:(-data->localData[0]->realVars[627] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp755)), 12, linearSystemData, threadData);
  tmp756 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp758 = (modelica_boolean)tmp756;
  if(tmp758)
  {
    tmp759 = -0.0;
  }
  else
  {
    tmp757 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp759 = (tmp757?(-data->localData[0]->realVars[629] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp759)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb323(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,323};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp760;
  modelica_boolean tmp761;
  modelica_boolean tmp762;
  modelica_real tmp763;
  modelica_boolean tmp764;
  modelica_boolean tmp765;
  modelica_boolean tmp766;
  modelica_real tmp767;
  modelica_boolean tmp768;
  modelica_boolean tmp769;
  modelica_boolean tmp770;
  modelica_real tmp771;
  modelica_boolean tmp772;
  modelica_boolean tmp773;
  modelica_boolean tmp774;
  modelica_real tmp775;
  modelica_boolean tmp776;
  modelica_boolean tmp777;
  modelica_boolean tmp778;
  modelica_real tmp779;
  tmp760 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp762 = (modelica_boolean)tmp760;
  if(tmp762)
  {
    tmp763 = (-data->localData[0]->realVars[504] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp761 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp763 = (tmp761?data->localData[0]->realVars[502] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[504] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp763, linearSystemData, threadData);
  tmp764 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp766 = (modelica_boolean)tmp764;
  if(tmp766)
  {
    tmp767 = 0.0;
  }
  else
  {
    tmp765 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp767 = (tmp765?data->localData[0]->realVars[499] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp767, linearSystemData, threadData);
  tmp768 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp770 = (modelica_boolean)tmp768;
  if(tmp770)
  {
    tmp771 = 0.0;
  }
  else
  {
    tmp769 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp771 = (tmp769?data->localData[0]->realVars[500] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp771, linearSystemData, threadData);
  tmp772 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp774 = (modelica_boolean)tmp772;
  if(tmp774)
  {
    tmp775 = 0.0;
  }
  else
  {
    tmp773 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp775 = (tmp773?data->localData[0]->realVars[497] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp775, linearSystemData, threadData);
  tmp776 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp778 = (modelica_boolean)tmp776;
  if(tmp778)
  {
    tmp779 = data->localData[0]->realVars[497] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp777 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp779 = (tmp777?data->localData[0]->realVars[501] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[497] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp779, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData323(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[503].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[503].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[503].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[507].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[507].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[507].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[506].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[506].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[506].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[505].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[505].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[505].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[508].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[508].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[508].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA220(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,220};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp780;
  modelica_boolean tmp781;
  modelica_boolean tmp782;
  modelica_real tmp783;
  modelica_boolean tmp784;
  modelica_boolean tmp785;
  modelica_boolean tmp786;
  modelica_boolean tmp787;
  modelica_boolean tmp788;
  modelica_real tmp789;
  modelica_boolean tmp790;
  modelica_boolean tmp791;
  modelica_boolean tmp792;
  modelica_real tmp793;
  modelica_boolean tmp794;
  modelica_boolean tmp795;
  modelica_boolean tmp796;
  modelica_real tmp797;
  modelica_boolean tmp798;
  modelica_boolean tmp799;
  modelica_boolean tmp800;
  modelica_real tmp801;
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
  modelica_boolean tmp813;
  modelica_real tmp814;
  modelica_boolean tmp815;
  modelica_boolean tmp816;
  modelica_boolean tmp817;
  modelica_boolean tmp818;
  modelica_real tmp819;
  modelica_boolean tmp820;
  modelica_boolean tmp821;
  modelica_boolean tmp822;
  modelica_real tmp823;
  tmp780 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp782 = (modelica_boolean)tmp780;
  if(tmp782)
  {
    tmp783 = 0.0;
  }
  else
  {
    tmp781 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp783 = (tmp781?(-data->localData[0]->realVars[264] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp783)), 0, linearSystemData, threadData);
  tmp784 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp784?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp785 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp785?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp786 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp788 = (modelica_boolean)tmp786;
  if(tmp788)
  {
    tmp789 = 0.0;
  }
  else
  {
    tmp787 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp789 = (tmp787?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp789)), 3, linearSystemData, threadData);
  tmp790 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp792 = (modelica_boolean)tmp790;
  if(tmp792)
  {
    tmp793 = -1.0;
  }
  else
  {
    tmp791 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp793 = (tmp791?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp793)), 4, linearSystemData, threadData);
  tmp794 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp796 = (modelica_boolean)tmp794;
  if(tmp796)
  {
    tmp797 = 0.0;
  }
  else
  {
    tmp795 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp797 = (tmp795?(-data->localData[0]->realVars[263] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp797)), 5, linearSystemData, threadData);
  tmp798 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp800 = (modelica_boolean)tmp798;
  if(tmp800)
  {
    tmp801 = -0.0;
  }
  else
  {
    tmp799 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp801 = (tmp799?(-data->localData[0]->realVars[264] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp801)), 6, linearSystemData, threadData);
  tmp802 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp804 = (modelica_boolean)tmp802;
  if(tmp804)
  {
    tmp805 = (-data->localData[0]->realVars[262] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp803 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp805 = (tmp803?-0.0:(-data->localData[0]->realVars[262] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 3, (-(tmp805)), 7, linearSystemData, threadData);
  tmp806 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp808 = (modelica_boolean)tmp806;
  if(tmp808)
  {
    tmp809 = 0.0;
  }
  else
  {
    tmp807 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp809 = (tmp807?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp809)), 8, linearSystemData, threadData);
  tmp810 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 2, (-((tmp810?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp811 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp813 = (modelica_boolean)tmp811;
  if(tmp813)
  {
    tmp814 = 0.0;
  }
  else
  {
    tmp812 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp814 = (tmp812?(-data->localData[0]->realVars[262] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp814)), 10, linearSystemData, threadData);
  tmp815 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp815?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp816 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp818 = (modelica_boolean)tmp816;
  if(tmp818)
  {
    tmp819 = 0.0;
  }
  else
  {
    tmp817 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp819 = (tmp817?(-data->localData[0]->realVars[263] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp819)), 12, linearSystemData, threadData);
  tmp820 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp822 = (modelica_boolean)tmp820;
  if(tmp822)
  {
    tmp823 = 0.0;
  }
  else
  {
    tmp821 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp823 = (tmp821?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp823)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb220(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,220};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp824;
  modelica_boolean tmp825;
  modelica_boolean tmp826;
  modelica_real tmp827;
  modelica_boolean tmp828;
  modelica_boolean tmp829;
  modelica_boolean tmp830;
  modelica_real tmp831;
  modelica_boolean tmp832;
  modelica_boolean tmp833;
  modelica_boolean tmp834;
  modelica_real tmp835;
  modelica_boolean tmp836;
  modelica_boolean tmp837;
  modelica_boolean tmp838;
  modelica_real tmp839;
  modelica_boolean tmp840;
  modelica_boolean tmp841;
  modelica_boolean tmp842;
  modelica_real tmp843;
  tmp824 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp826 = (modelica_boolean)tmp824;
  if(tmp826)
  {
    tmp827 = (-data->localData[0]->realVars[139] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp825 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp827 = (tmp825?data->localData[0]->realVars[137] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[139] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp827, linearSystemData, threadData);
  tmp828 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp830 = (modelica_boolean)tmp828;
  if(tmp830)
  {
    tmp831 = 0.0;
  }
  else
  {
    tmp829 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp831 = (tmp829?data->localData[0]->realVars[135] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp831, linearSystemData, threadData);
  tmp832 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp834 = (modelica_boolean)tmp832;
  if(tmp834)
  {
    tmp835 = data->localData[0]->realVars[132] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp833 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp835 = (tmp833?data->localData[0]->realVars[136] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[132] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp835, linearSystemData, threadData);
  tmp836 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp838 = (modelica_boolean)tmp836;
  if(tmp838)
  {
    tmp839 = 0.0;
  }
  else
  {
    tmp837 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp839 = (tmp837?data->localData[0]->realVars[132] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp839, linearSystemData, threadData);
  tmp840 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp842 = (modelica_boolean)tmp840;
  if(tmp842)
  {
    tmp843 = 0.0;
  }
  else
  {
    tmp841 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp843 = (tmp841?data->localData[0]->realVars[134] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp843, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData220(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[143].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[143].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[143].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[140].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[140].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[140].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[142].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[142].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[142].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[138].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[138].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[138].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[141].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[141].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[141].attribute /* MatStm1.compMasFrac[2,2] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 841;
  linearSystemData[5].size = 5;
  linearSystemData[5].nnz = 14;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA841;
  linearSystemData[5].setb = setLinearVectorb841;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData841;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 710;
  linearSystemData[4].size = 5;
  linearSystemData[4].nnz = 14;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA710;
  linearSystemData[4].setb = setLinearVectorb710;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData710;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 599;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA599;
  linearSystemData[3].setb = setLinearVectorb599;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData599;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 423;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA423;
  linearSystemData[2].setb = setLinearVectorb423;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData423;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 323;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA323;
  linearSystemData[1].setb = setLinearVectorb323;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData323;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 220;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA220;
  linearSystemData[0].setb = setLinearVectorb220;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData220;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

