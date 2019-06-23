/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA476(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,476};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp541;
  modelica_boolean tmp542;
  modelica_boolean tmp543;
  modelica_boolean tmp544;
  modelica_boolean tmp545;
  modelica_real tmp546;
  modelica_boolean tmp547;
  modelica_boolean tmp548;
  modelica_boolean tmp549;
  modelica_boolean tmp550;
  modelica_real tmp551;
  modelica_boolean tmp552;
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
  modelica_real tmp564;
  modelica_boolean tmp565;
  modelica_boolean tmp566;
  modelica_boolean tmp567;
  modelica_boolean tmp568;
  modelica_real tmp569;
  RELATIONHYSTERESIS(tmp526, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp528 = (modelica_boolean)tmp526;
  if(tmp528)
  {
    tmp529 = (-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp527, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp529 = (tmp527?-0.0:(-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp529)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp530, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp532 = (modelica_boolean)tmp530;
  if(tmp532)
  {
    tmp533 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp531, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp533 = (tmp531?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp533)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp534, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp536 = (modelica_boolean)tmp534;
  if(tmp536)
  {
    tmp537 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp535, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp537 = (tmp535?(-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp537)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp538, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp540 = (modelica_boolean)tmp538;
  if(tmp540)
  {
    tmp541 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp539, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp541 = (tmp539?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp541)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp542, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(1, 4, (-((tmp542?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp543, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp545 = (modelica_boolean)tmp543;
  if(tmp545)
  {
    tmp546 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp544, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp546 = (tmp544?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp546)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp547, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp547?1.0:-0.0))), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp548, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp550 = (modelica_boolean)tmp548;
  if(tmp550)
  {
    tmp551 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp549, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp551 = (tmp549?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp551)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp552, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(3, 1, (-((tmp552?1.0:-0.0))), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp553, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp555 = (modelica_boolean)tmp553;
  if(tmp555)
  {
    tmp556 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp554, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp556 = (tmp554?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp556)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp557, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp559 = (modelica_boolean)tmp557;
  if(tmp559)
  {
    tmp560 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp558, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp560 = (tmp558?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp560)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp561, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp563 = (modelica_boolean)tmp561;
  if(tmp563)
  {
    tmp564 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp562, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp564 = (tmp562?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp564)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp565, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(4, 3, (-((tmp565?1.0:-0.0))), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp566, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp568 = (modelica_boolean)tmp566;
  if(tmp568)
  {
    tmp569 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp567, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp569 = (tmp567?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp569)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb476(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,476};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp586;
  modelica_boolean tmp587;
  modelica_boolean tmp588;
  modelica_real tmp589;
  RELATIONHYSTERESIS(tmp570, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp572 = (modelica_boolean)tmp570;
  if(tmp572)
  {
    tmp573 = data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp571, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp573 = (tmp571?data->localData[0]->realVars[200] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp573, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp574, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp576 = (modelica_boolean)tmp574;
  if(tmp576)
  {
    tmp577 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp575, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp577 = (tmp575?data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp577, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp578, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp580 = (modelica_boolean)tmp578;
  if(tmp580)
  {
    tmp581 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp579, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp581 = (tmp579?data->localData[0]->realVars[198] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp581, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp582, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp584 = (modelica_boolean)tmp582;
  if(tmp584)
  {
    tmp585 = (-data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp583, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp585 = (tmp583?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp585, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp586, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp588 = (modelica_boolean)tmp586;
  if(tmp588)
  {
    tmp589 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp587, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp589 = (tmp587?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp589, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData476(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA418(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,418};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp590;
  modelica_boolean tmp591;
  modelica_boolean tmp592;
  modelica_boolean tmp593;
  modelica_real tmp594;
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
  modelica_boolean tmp623;
  modelica_real tmp624;
  modelica_boolean tmp625;
  modelica_boolean tmp626;
  modelica_boolean tmp627;
  modelica_real tmp628;
  modelica_boolean tmp629;
  modelica_boolean tmp630;
  modelica_boolean tmp631;
  modelica_real tmp632;
  modelica_boolean tmp633;
  RELATIONHYSTERESIS(tmp590, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 1, (-((tmp590?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp591, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp593 = (modelica_boolean)tmp591;
  if(tmp593)
  {
    tmp594 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp592, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp594 = (tmp592?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp594)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp595, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp597 = (modelica_boolean)tmp595;
  if(tmp597)
  {
    tmp598 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp596, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp598 = (tmp596?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp598)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp599, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 0, (-((tmp599?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp600, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp602 = (modelica_boolean)tmp600;
  if(tmp602)
  {
    tmp603 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp601, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp603 = (tmp601?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp603)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp604, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp606 = (modelica_boolean)tmp604;
  if(tmp606)
  {
    tmp607 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp605, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp607 = (tmp605?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp607)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp608, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp610 = (modelica_boolean)tmp608;
  if(tmp610)
  {
    tmp611 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp609, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp611 = (tmp609?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp611)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp612, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp614 = (modelica_boolean)tmp612;
  if(tmp614)
  {
    tmp615 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp613, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp615 = (tmp613?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp615)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp616, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp618 = (modelica_boolean)tmp616;
  if(tmp618)
  {
    tmp619 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp617, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp619 = (tmp617?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp619)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp620, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 4, (-((tmp620?1.0:-0.0))), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp621, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp623 = (modelica_boolean)tmp621;
  if(tmp623)
  {
    tmp624 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp622, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp624 = (tmp622?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp624)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp625, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp627 = (modelica_boolean)tmp625;
  if(tmp627)
  {
    tmp628 = (-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp626, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp628 = (tmp626?-0.0:(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp628)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp629, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp631 = (modelica_boolean)tmp629;
  if(tmp631)
  {
    tmp632 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp630, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp632 = (tmp630?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp632)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp633, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(4, 3, (-((tmp633?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb418(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,418};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp634;
  modelica_boolean tmp635;
  modelica_boolean tmp636;
  modelica_real tmp637;
  modelica_boolean tmp638;
  modelica_boolean tmp639;
  modelica_boolean tmp640;
  modelica_real tmp641;
  modelica_boolean tmp642;
  modelica_boolean tmp643;
  modelica_boolean tmp644;
  modelica_real tmp645;
  modelica_boolean tmp646;
  modelica_boolean tmp647;
  modelica_boolean tmp648;
  modelica_real tmp649;
  modelica_boolean tmp650;
  modelica_boolean tmp651;
  modelica_boolean tmp652;
  modelica_real tmp653;
  RELATIONHYSTERESIS(tmp634, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp636 = (modelica_boolean)tmp634;
  if(tmp636)
  {
    tmp637 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp635, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp637 = (tmp635?data->localData[0]->realVars[108] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp637, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp638, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp640 = (modelica_boolean)tmp638;
  if(tmp640)
  {
    tmp641 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp639, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp641 = (tmp639?data->localData[0]->realVars[110] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp641, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp642, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp644 = (modelica_boolean)tmp642;
  if(tmp644)
  {
    tmp645 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp643, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp645 = (tmp643?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp645, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp646, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp648 = (modelica_boolean)tmp646;
  if(tmp648)
  {
    tmp649 = data->localData[0]->realVars[108] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp647, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp649 = (tmp647?data->localData[0]->realVars[112] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[108] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp649, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp650, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp652 = (modelica_boolean)tmp650;
  if(tmp652)
  {
    tmp653 = (-data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp651, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp653 = (tmp651?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp653, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData418(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA349(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,349};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp654;
  modelica_boolean tmp655;
  modelica_boolean tmp656;
  modelica_real tmp657;
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
  modelica_real tmp669;
  modelica_boolean tmp670;
  modelica_boolean tmp671;
  modelica_boolean tmp672;
  modelica_boolean tmp673;
  modelica_real tmp674;
  modelica_boolean tmp675;
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
  modelica_boolean tmp687;
  modelica_real tmp688;
  modelica_boolean tmp689;
  modelica_boolean tmp690;
  modelica_boolean tmp691;
  modelica_real tmp692;
  modelica_boolean tmp693;
  modelica_boolean tmp694;
  modelica_boolean tmp695;
  modelica_real tmp696;
  modelica_boolean tmp697;
  tmp654 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp656 = (modelica_boolean)tmp654;
  if(tmp656)
  {
    tmp657 = (-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp655 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp657 = (tmp655?-0.0:(-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 3, (-(tmp657)), 0, linearSystemData, threadData);
  tmp658 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp660 = (modelica_boolean)tmp658;
  if(tmp660)
  {
    tmp661 = -0.0;
  }
  else
  {
    tmp659 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp661 = (tmp659?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp661)), 1, linearSystemData, threadData);
  tmp662 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp664 = (modelica_boolean)tmp662;
  if(tmp664)
  {
    tmp665 = 0.0;
  }
  else
  {
    tmp663 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp665 = (tmp663?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp665)), 2, linearSystemData, threadData);
  tmp666 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp668 = (modelica_boolean)tmp666;
  if(tmp668)
  {
    tmp669 = 0.0;
  }
  else
  {
    tmp667 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp669 = (tmp667?(-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp669)), 3, linearSystemData, threadData);
  tmp670 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp670?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp671 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp673 = (modelica_boolean)tmp671;
  if(tmp673)
  {
    tmp674 = 0.0;
  }
  else
  {
    tmp672 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp674 = (tmp672?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp674)), 5, linearSystemData, threadData);
  tmp675 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp675?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp676 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp678 = (modelica_boolean)tmp676;
  if(tmp678)
  {
    tmp679 = -1.0;
  }
  else
  {
    tmp677 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp679 = (tmp677?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp679)), 7, linearSystemData, threadData);
  tmp680 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp682 = (modelica_boolean)tmp680;
  if(tmp682)
  {
    tmp683 = 0.0;
  }
  else
  {
    tmp681 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp683 = (tmp681?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp683)), 8, linearSystemData, threadData);
  tmp684 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp684?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp685 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp687 = (modelica_boolean)tmp685;
  if(tmp687)
  {
    tmp688 = 0.0;
  }
  else
  {
    tmp686 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp688 = (tmp686?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp688)), 10, linearSystemData, threadData);
  tmp689 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp691 = (modelica_boolean)tmp689;
  if(tmp691)
  {
    tmp692 = 0.0;
  }
  else
  {
    tmp690 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp692 = (tmp690?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp692)), 11, linearSystemData, threadData);
  tmp693 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp695 = (modelica_boolean)tmp693;
  if(tmp695)
  {
    tmp696 = 0.0;
  }
  else
  {
    tmp694 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp696 = (tmp694?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp696)), 12, linearSystemData, threadData);
  tmp697 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp697?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb349(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,349};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp698;
  modelica_boolean tmp699;
  modelica_boolean tmp700;
  modelica_real tmp701;
  modelica_boolean tmp702;
  modelica_boolean tmp703;
  modelica_boolean tmp704;
  modelica_real tmp705;
  modelica_boolean tmp706;
  modelica_boolean tmp707;
  modelica_boolean tmp708;
  modelica_real tmp709;
  modelica_boolean tmp710;
  modelica_boolean tmp711;
  modelica_boolean tmp712;
  modelica_real tmp713;
  modelica_boolean tmp714;
  modelica_boolean tmp715;
  modelica_boolean tmp716;
  modelica_real tmp717;
  tmp698 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp700 = (modelica_boolean)tmp698;
  if(tmp700)
  {
    tmp701 = data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp699 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp701 = (tmp699?data->localData[0]->realVars[23] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp701, linearSystemData, threadData);
  tmp702 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp704 = (modelica_boolean)tmp702;
  if(tmp704)
  {
    tmp705 = 0.0;
  }
  else
  {
    tmp703 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp705 = (tmp703?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp705, linearSystemData, threadData);
  tmp706 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp708 = (modelica_boolean)tmp706;
  if(tmp708)
  {
    tmp709 = 0.0;
  }
  else
  {
    tmp707 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp709 = (tmp707?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp709, linearSystemData, threadData);
  tmp710 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp712 = (modelica_boolean)tmp710;
  if(tmp712)
  {
    tmp713 = 0.0;
  }
  else
  {
    tmp711 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp713 = (tmp711?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp713, linearSystemData, threadData);
  tmp714 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp716 = (modelica_boolean)tmp714;
  if(tmp716)
  {
    tmp717 = (-data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp715 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp717 = (tmp715?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp717, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData349(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA238(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,238};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp718;
  modelica_boolean tmp719;
  modelica_boolean tmp720;
  modelica_real tmp721;
  modelica_boolean tmp722;
  modelica_boolean tmp723;
  modelica_boolean tmp724;
  modelica_real tmp725;
  modelica_boolean tmp726;
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
  modelica_boolean tmp739;
  modelica_real tmp740;
  modelica_boolean tmp741;
  modelica_boolean tmp742;
  modelica_boolean tmp743;
  modelica_real tmp744;
  modelica_boolean tmp745;
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
  tmp718 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp720 = (modelica_boolean)tmp718;
  if(tmp720)
  {
    tmp721 = 0.0;
  }
  else
  {
    tmp719 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp721 = (tmp719?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp721)), 0, linearSystemData, threadData);
  tmp722 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp724 = (modelica_boolean)tmp722;
  if(tmp724)
  {
    tmp725 = 0.0;
  }
  else
  {
    tmp723 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp725 = (tmp723?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp725)), 1, linearSystemData, threadData);
  tmp726 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp726?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp727 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp727?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp728 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp730 = (modelica_boolean)tmp728;
  if(tmp730)
  {
    tmp731 = 0.0;
  }
  else
  {
    tmp729 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp731 = (tmp729?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp731)), 4, linearSystemData, threadData);
  tmp732 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp734 = (modelica_boolean)tmp732;
  if(tmp734)
  {
    tmp735 = 0.0;
  }
  else
  {
    tmp733 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp735 = (tmp733?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp735)), 5, linearSystemData, threadData);
  tmp736 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp736?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp737 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp739 = (modelica_boolean)tmp737;
  if(tmp739)
  {
    tmp740 = -1.0;
  }
  else
  {
    tmp738 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp740 = (tmp738?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp740)), 7, linearSystemData, threadData);
  tmp741 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp743 = (modelica_boolean)tmp741;
  if(tmp743)
  {
    tmp744 = 0.0;
  }
  else
  {
    tmp742 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp744 = (tmp742?(-data->localData[0]->realVars[267] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp744)), 8, linearSystemData, threadData);
  tmp745 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp745?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp746 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp748 = (modelica_boolean)tmp746;
  if(tmp748)
  {
    tmp749 = 0.0;
  }
  else
  {
    tmp747 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp749 = (tmp747?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp749)), 10, linearSystemData, threadData);
  tmp750 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp752 = (modelica_boolean)tmp750;
  if(tmp752)
  {
    tmp753 = 0.0;
  }
  else
  {
    tmp751 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp753 = (tmp751?(-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp753)), 11, linearSystemData, threadData);
  tmp754 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp756 = (modelica_boolean)tmp754;
  if(tmp756)
  {
    tmp757 = -0.0;
  }
  else
  {
    tmp755 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp757 = (tmp755?(-data->localData[0]->realVars[268] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp757)), 12, linearSystemData, threadData);
  tmp758 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp760 = (modelica_boolean)tmp758;
  if(tmp760)
  {
    tmp761 = (-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp759 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp761 = (tmp759?-0.0:(-data->localData[0]->realVars[266] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 2, (-(tmp761)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb238(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,238};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp762;
  modelica_boolean tmp763;
  modelica_boolean tmp764;
  modelica_real tmp765;
  modelica_boolean tmp766;
  modelica_boolean tmp767;
  modelica_boolean tmp768;
  modelica_real tmp769;
  modelica_boolean tmp770;
  modelica_boolean tmp771;
  modelica_boolean tmp772;
  modelica_real tmp773;
  modelica_boolean tmp774;
  modelica_boolean tmp775;
  modelica_boolean tmp776;
  modelica_real tmp777;
  modelica_boolean tmp778;
  modelica_boolean tmp779;
  modelica_boolean tmp780;
  modelica_real tmp781;
  tmp762 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp764 = (modelica_boolean)tmp762;
  if(tmp764)
  {
    tmp765 = 0.0;
  }
  else
  {
    tmp763 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp765 = (tmp763?data->localData[0]->realVars[198] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp765, linearSystemData, threadData);
  tmp766 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp768 = (modelica_boolean)tmp766;
  if(tmp768)
  {
    tmp769 = (-data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp767 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp769 = (tmp767?data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp769, linearSystemData, threadData);
  tmp770 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp772 = (modelica_boolean)tmp770;
  if(tmp772)
  {
    tmp773 = 0.0;
  }
  else
  {
    tmp771 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp773 = (tmp771?data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp773, linearSystemData, threadData);
  tmp774 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp776 = (modelica_boolean)tmp774;
  if(tmp776)
  {
    tmp777 = 0.0;
  }
  else
  {
    tmp775 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp777 = (tmp775?data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp777, linearSystemData, threadData);
  tmp778 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp780 = (modelica_boolean)tmp778;
  if(tmp780)
  {
    tmp781 = data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp779 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp781 = (tmp779?data->localData[0]->realVars[200] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[196] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp781, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData238(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[204].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[202].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA180(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,180};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp782;
  modelica_boolean tmp783;
  modelica_boolean tmp784;
  modelica_real tmp785;
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
  modelica_boolean tmp801;
  modelica_real tmp802;
  modelica_boolean tmp803;
  modelica_boolean tmp804;
  modelica_boolean tmp805;
  modelica_boolean tmp806;
  modelica_real tmp807;
  modelica_boolean tmp808;
  modelica_boolean tmp809;
  modelica_boolean tmp810;
  modelica_boolean tmp811;
  modelica_real tmp812;
  modelica_boolean tmp813;
  modelica_boolean tmp814;
  modelica_boolean tmp815;
  modelica_real tmp816;
  modelica_boolean tmp817;
  modelica_boolean tmp818;
  modelica_boolean tmp819;
  modelica_real tmp820;
  modelica_boolean tmp821;
  modelica_boolean tmp822;
  modelica_boolean tmp823;
  modelica_boolean tmp824;
  modelica_real tmp825;
  tmp782 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp784 = (modelica_boolean)tmp782;
  if(tmp784)
  {
    tmp785 = (-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp783 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp785 = (tmp783?-0.0:(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp785)), 0, linearSystemData, threadData);
  tmp786 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp788 = (modelica_boolean)tmp786;
  if(tmp788)
  {
    tmp789 = -0.0;
  }
  else
  {
    tmp787 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp789 = (tmp787?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp789)), 1, linearSystemData, threadData);
  tmp790 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp792 = (modelica_boolean)tmp790;
  if(tmp792)
  {
    tmp793 = 0.0;
  }
  else
  {
    tmp791 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp793 = (tmp791?(-data->localData[0]->realVars[178] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp793)), 2, linearSystemData, threadData);
  tmp794 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp796 = (modelica_boolean)tmp794;
  if(tmp796)
  {
    tmp797 = 0.0;
  }
  else
  {
    tmp795 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp797 = (tmp795?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp797)), 3, linearSystemData, threadData);
  tmp798 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp798?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp799 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp801 = (modelica_boolean)tmp799;
  if(tmp801)
  {
    tmp802 = 0.0;
  }
  else
  {
    tmp800 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp802 = (tmp800?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp802)), 5, linearSystemData, threadData);
  tmp803 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp803?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp804 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp806 = (modelica_boolean)tmp804;
  if(tmp806)
  {
    tmp807 = 0.0;
  }
  else
  {
    tmp805 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp807 = (tmp805?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp807)), 7, linearSystemData, threadData);
  tmp808 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp808?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp809 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp811 = (modelica_boolean)tmp809;
  if(tmp811)
  {
    tmp812 = 0.0;
  }
  else
  {
    tmp810 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp812 = (tmp810?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp812)), 9, linearSystemData, threadData);
  tmp813 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp815 = (modelica_boolean)tmp813;
  if(tmp815)
  {
    tmp816 = -1.0;
  }
  else
  {
    tmp814 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp816 = (tmp814?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp816)), 10, linearSystemData, threadData);
  tmp817 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp819 = (modelica_boolean)tmp817;
  if(tmp819)
  {
    tmp820 = 0.0;
  }
  else
  {
    tmp818 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp820 = (tmp818?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp820)), 11, linearSystemData, threadData);
  tmp821 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 3, (-((tmp821?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp822 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp824 = (modelica_boolean)tmp822;
  if(tmp824)
  {
    tmp825 = 0.0;
  }
  else
  {
    tmp823 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp825 = (tmp823?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp825)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb180(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,180};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp826;
  modelica_boolean tmp827;
  modelica_boolean tmp828;
  modelica_real tmp829;
  modelica_boolean tmp830;
  modelica_boolean tmp831;
  modelica_boolean tmp832;
  modelica_real tmp833;
  modelica_boolean tmp834;
  modelica_boolean tmp835;
  modelica_boolean tmp836;
  modelica_real tmp837;
  modelica_boolean tmp838;
  modelica_boolean tmp839;
  modelica_boolean tmp840;
  modelica_real tmp841;
  modelica_boolean tmp842;
  modelica_boolean tmp843;
  modelica_boolean tmp844;
  modelica_real tmp845;
  tmp826 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp828 = (modelica_boolean)tmp826;
  if(tmp828)
  {
    tmp829 = data->localData[0]->realVars[108] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp827 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp829 = (tmp827?data->localData[0]->realVars[112] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[108] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp829, linearSystemData, threadData);
  tmp830 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp832 = (modelica_boolean)tmp830;
  if(tmp832)
  {
    tmp833 = 0.0;
  }
  else
  {
    tmp831 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp833 = (tmp831?data->localData[0]->realVars[108] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp833, linearSystemData, threadData);
  tmp834 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp836 = (modelica_boolean)tmp834;
  if(tmp836)
  {
    tmp837 = 0.0;
  }
  else
  {
    tmp835 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp837 = (tmp835?data->localData[0]->realVars[110] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp837, linearSystemData, threadData);
  tmp838 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp840 = (modelica_boolean)tmp838;
  if(tmp840)
  {
    tmp841 = (-data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp839 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp841 = (tmp839?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp841, linearSystemData, threadData);
  tmp842 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp844 = (modelica_boolean)tmp842;
  if(tmp844)
  {
    tmp845 = 0.0;
  }
  else
  {
    tmp843 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp845 = (tmp843?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp845, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData180(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[114].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA101(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,101};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp846;
  modelica_boolean tmp847;
  modelica_boolean tmp848;
  modelica_real tmp849;
  modelica_boolean tmp850;
  modelica_boolean tmp851;
  modelica_boolean tmp852;
  modelica_real tmp853;
  modelica_boolean tmp854;
  modelica_boolean tmp855;
  modelica_boolean tmp856;
  modelica_boolean tmp857;
  modelica_boolean tmp858;
  modelica_real tmp859;
  modelica_boolean tmp860;
  modelica_boolean tmp861;
  modelica_boolean tmp862;
  modelica_real tmp863;
  modelica_boolean tmp864;
  modelica_boolean tmp865;
  modelica_boolean tmp866;
  modelica_boolean tmp867;
  modelica_real tmp868;
  modelica_boolean tmp869;
  modelica_boolean tmp870;
  modelica_boolean tmp871;
  modelica_real tmp872;
  modelica_boolean tmp873;
  modelica_boolean tmp874;
  modelica_boolean tmp875;
  modelica_boolean tmp876;
  modelica_real tmp877;
  modelica_boolean tmp878;
  modelica_boolean tmp879;
  modelica_boolean tmp880;
  modelica_real tmp881;
  modelica_boolean tmp882;
  modelica_boolean tmp883;
  modelica_boolean tmp884;
  modelica_real tmp885;
  modelica_boolean tmp886;
  modelica_boolean tmp887;
  modelica_boolean tmp888;
  modelica_real tmp889;
  tmp846 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp848 = (modelica_boolean)tmp846;
  if(tmp848)
  {
    tmp849 = 0.0;
  }
  else
  {
    tmp847 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp849 = (tmp847?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp849)), 0, linearSystemData, threadData);
  tmp850 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp852 = (modelica_boolean)tmp850;
  if(tmp852)
  {
    tmp853 = 0.0;
  }
  else
  {
    tmp851 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp853 = (tmp851?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp853)), 1, linearSystemData, threadData);
  tmp854 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp854?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp855 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp855?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp856 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp858 = (modelica_boolean)tmp856;
  if(tmp858)
  {
    tmp859 = 0.0;
  }
  else
  {
    tmp857 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp859 = (tmp857?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp859)), 4, linearSystemData, threadData);
  tmp860 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp862 = (modelica_boolean)tmp860;
  if(tmp862)
  {
    tmp863 = 0.0;
  }
  else
  {
    tmp861 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp863 = (tmp861?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp863)), 5, linearSystemData, threadData);
  tmp864 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp864?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp865 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp867 = (modelica_boolean)tmp865;
  if(tmp867)
  {
    tmp868 = -1.0;
  }
  else
  {
    tmp866 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp868 = (tmp866?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp868)), 7, linearSystemData, threadData);
  tmp869 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp871 = (modelica_boolean)tmp869;
  if(tmp871)
  {
    tmp872 = 0.0;
  }
  else
  {
    tmp870 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp872 = (tmp870?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp872)), 8, linearSystemData, threadData);
  tmp873 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp873?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp874 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp876 = (modelica_boolean)tmp874;
  if(tmp876)
  {
    tmp877 = 0.0;
  }
  else
  {
    tmp875 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp877 = (tmp875?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp877)), 10, linearSystemData, threadData);
  tmp878 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp880 = (modelica_boolean)tmp878;
  if(tmp880)
  {
    tmp881 = 0.0;
  }
  else
  {
    tmp879 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp881 = (tmp879?(-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp881)), 11, linearSystemData, threadData);
  tmp882 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp884 = (modelica_boolean)tmp882;
  if(tmp884)
  {
    tmp885 = -0.0;
  }
  else
  {
    tmp883 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp885 = (tmp883?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp885)), 12, linearSystemData, threadData);
  tmp886 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp888 = (modelica_boolean)tmp886;
  if(tmp888)
  {
    tmp889 = (-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp887 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp889 = (tmp887?-0.0:(-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 2, (-(tmp889)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb101(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,101};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp890;
  modelica_boolean tmp891;
  modelica_boolean tmp892;
  modelica_real tmp893;
  modelica_boolean tmp894;
  modelica_boolean tmp895;
  modelica_boolean tmp896;
  modelica_real tmp897;
  modelica_boolean tmp898;
  modelica_boolean tmp899;
  modelica_boolean tmp900;
  modelica_real tmp901;
  modelica_boolean tmp902;
  modelica_boolean tmp903;
  modelica_boolean tmp904;
  modelica_real tmp905;
  modelica_boolean tmp906;
  modelica_boolean tmp907;
  modelica_boolean tmp908;
  modelica_real tmp909;
  tmp890 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp892 = (modelica_boolean)tmp890;
  if(tmp892)
  {
    tmp893 = 0.0;
  }
  else
  {
    tmp891 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp893 = (tmp891?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp893, linearSystemData, threadData);
  tmp894 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp896 = (modelica_boolean)tmp894;
  if(tmp896)
  {
    tmp897 = (-data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp895 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp897 = (tmp895?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp897, linearSystemData, threadData);
  tmp898 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp900 = (modelica_boolean)tmp898;
  if(tmp900)
  {
    tmp901 = 0.0;
  }
  else
  {
    tmp899 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp901 = (tmp899?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp901, linearSystemData, threadData);
  tmp902 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp904 = (modelica_boolean)tmp902;
  if(tmp904)
  {
    tmp905 = 0.0;
  }
  else
  {
    tmp903 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp905 = (tmp903?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp905, linearSystemData, threadData);
  tmp906 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp908 = (modelica_boolean)tmp906;
  if(tmp908)
  {
    tmp909 = data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp907 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp909 = (tmp907?data->localData[0]->realVars[23] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp909, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData101(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[3,2] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 476;
  linearSystemData[5].size = 5;
  linearSystemData[5].nnz = 14;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA476;
  linearSystemData[5].setb = setLinearVectorb476;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData476;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 418;
  linearSystemData[4].size = 5;
  linearSystemData[4].nnz = 14;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA418;
  linearSystemData[4].setb = setLinearVectorb418;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData418;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 349;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA349;
  linearSystemData[3].setb = setLinearVectorb349;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData349;
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
  linearSystemData[1].equationIndex = 180;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA180;
  linearSystemData[1].setb = setLinearVectorb180;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData180;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 101;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA101;
  linearSystemData[0].setb = setLinearVectorb101;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData101;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

