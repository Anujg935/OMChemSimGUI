/* Linear Systems */
#include "splitter1_model.h"
#include "splitter1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA482(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,482};
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
  modelica_real tmp549;
  modelica_boolean tmp550;
  modelica_boolean tmp551;
  modelica_boolean tmp552;
  modelica_real tmp553;
  modelica_boolean tmp554;
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
  modelica_real tmp566;
  modelica_boolean tmp567;
  RELATIONHYSTERESIS(tmp524, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp526 = (modelica_boolean)tmp524;
  if(tmp526)
  {
    tmp527 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp525, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp527 = (tmp525?(-data->localData[0]->realVars[268] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp527)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp528, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp530 = (modelica_boolean)tmp528;
  if(tmp530)
  {
    tmp531 = (-data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp529, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp531 = (tmp529?-0.0:(-data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 4, (-(tmp531)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp532, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp534 = (modelica_boolean)tmp532;
  if(tmp534)
  {
    tmp535 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp533, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp535 = (tmp533?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp535)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp536, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp536?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp537, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp539 = (modelica_boolean)tmp537;
  if(tmp539)
  {
    tmp540 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp538, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp540 = (tmp538?(-data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp540)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp541, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 1, (-((tmp541?1.0:-0.0))), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp542, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp544 = (modelica_boolean)tmp542;
  if(tmp544)
  {
    tmp545 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp543, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp545 = (tmp543?(-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp545)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp546, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp548 = (modelica_boolean)tmp546;
  if(tmp548)
  {
    tmp549 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp547, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp549 = (tmp547?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp549)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp550, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp552 = (modelica_boolean)tmp550;
  if(tmp552)
  {
    tmp553 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp551, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp553 = (tmp551?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp553)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp554, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 0, (-((tmp554?1.0:-0.0))), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp555, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp557 = (modelica_boolean)tmp555;
  if(tmp557)
  {
    tmp558 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp556, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp558 = (tmp556?(-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp558)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp559, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp561 = (modelica_boolean)tmp559;
  if(tmp561)
  {
    tmp562 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp560, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp562 = (tmp560?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp562)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp563, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp565 = (modelica_boolean)tmp563;
  if(tmp565)
  {
    tmp566 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp564, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp566 = (tmp564?(-data->localData[0]->realVars[268] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp566)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp567, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(4, 2, (-((tmp567?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb482(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,482};
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
  RELATIONHYSTERESIS(tmp568, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp570 = (modelica_boolean)tmp568;
  if(tmp570)
  {
    tmp571 = data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp569, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp571 = (tmp569?data->localData[0]->realVars[200] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp571, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp572, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp574 = (modelica_boolean)tmp572;
  if(tmp574)
  {
    tmp575 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp573, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp575 = (tmp573?data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp575, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp576, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp578 = (modelica_boolean)tmp576;
  if(tmp578)
  {
    tmp579 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp577, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp579 = (tmp577?data->localData[0]->realVars[199] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp579, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp580, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp582 = (modelica_boolean)tmp580;
  if(tmp582)
  {
    tmp583 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp581, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp583 = (tmp581?data->localData[0]->realVars[198] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp583, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp584, 101325.0, data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp586 = (modelica_boolean)tmp584;
  if(tmp586)
  {
    tmp587 = (-data->localData[0]->realVars[203] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp585, 101325.0, data->localData[0]->realVars[193] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp587 = (tmp585?data->localData[0]->realVars[201] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[203] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp587, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData482(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,2] */.max;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[204].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[204].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[204].attribute /* MatStm5.compMasFrac[2,1] */.max;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,2] */.max;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[3,1] */.max;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[202].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[202].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[202].attribute /* MatStm5.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA423(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,423};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp588;
  modelica_boolean tmp589;
  modelica_boolean tmp590;
  modelica_boolean tmp591;
  modelica_real tmp592;
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
  modelica_boolean tmp629;
  modelica_real tmp630;
  modelica_boolean tmp631;
  RELATIONHYSTERESIS(tmp588, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp588?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp589, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp591 = (modelica_boolean)tmp589;
  if(tmp591)
  {
    tmp592 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp590, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp592 = (tmp590?(-data->localData[0]->realVars[179] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp592)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp593, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp595 = (modelica_boolean)tmp593;
  if(tmp595)
  {
    tmp596 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp594, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp596 = (tmp594?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp596)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp597, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(1, 1, (-((tmp597?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp598, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp600 = (modelica_boolean)tmp598;
  if(tmp600)
  {
    tmp601 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp599, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp601 = (tmp599?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp601)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp602, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp604 = (modelica_boolean)tmp602;
  if(tmp604)
  {
    tmp605 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp603, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp605 = (tmp603?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp605)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp606, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp608 = (modelica_boolean)tmp606;
  if(tmp608)
  {
    tmp609 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp607, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp609 = (tmp607?(-data->localData[0]->realVars[179] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp609)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp610, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp612 = (modelica_boolean)tmp610;
  if(tmp612)
  {
    tmp613 = (-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp611, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp613 = (tmp611?-0.0:(-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 2, (-(tmp613)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp614, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp616 = (modelica_boolean)tmp614;
  if(tmp616)
  {
    tmp617 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp615, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp617 = (tmp615?(-data->localData[0]->realVars[180] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp617)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp618, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp620 = (modelica_boolean)tmp618;
  if(tmp620)
  {
    tmp621 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp619, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp621 = (tmp619?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp621)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp622, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp624 = (modelica_boolean)tmp622;
  if(tmp624)
  {
    tmp625 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp623, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp625 = (tmp623?(-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp625)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp626, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(3, 3, (-((tmp626?1.0:-0.0))), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp627, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp629 = (modelica_boolean)tmp627;
  if(tmp629)
  {
    tmp630 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp628, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp630 = (tmp628?(-data->localData[0]->realVars[180] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp630)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp631, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(4, 4, (-((tmp631?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb423(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,423};
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
  RELATIONHYSTERESIS(tmp632, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp634 = (modelica_boolean)tmp632;
  if(tmp634)
  {
    tmp635 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp633, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp635 = (tmp633?data->localData[0]->realVars[110] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp635, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp636, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp638 = (modelica_boolean)tmp636;
  if(tmp638)
  {
    tmp639 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp637, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp639 = (tmp637?data->localData[0]->realVars[111] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp639, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp640, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp642 = (modelica_boolean)tmp640;
  if(tmp642)
  {
    tmp643 = data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp641, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp643 = (tmp641?data->localData[0]->realVars[112] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp643, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp644, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp646 = (modelica_boolean)tmp644;
  if(tmp646)
  {
    tmp647 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp645, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp647 = (tmp645?data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp647, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp648, 101325.0, data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */, 2, GreaterEq);
  tmp650 = (modelica_boolean)tmp648;
  if(tmp650)
  {
    tmp651 = (-data->localData[0]->realVars[115] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp649, 101325.0, data->localData[0]->realVars[105] /* MatStm4.Pdew variable */, 3, GreaterEq);
    tmp651 = (tmp649?data->localData[0]->realVars[113] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[115] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp651, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData423(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[1,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA353(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,353};
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
  modelica_boolean tmp673;
  modelica_real tmp674;
  modelica_boolean tmp675;
  modelica_boolean tmp676;
  modelica_boolean tmp677;
  modelica_real tmp678;
  modelica_boolean tmp679;
  modelica_boolean tmp680;
  modelica_boolean tmp681;
  modelica_real tmp682;
  modelica_boolean tmp683;
  modelica_boolean tmp684;
  modelica_boolean tmp685;
  modelica_real tmp686;
  modelica_boolean tmp687;
  modelica_boolean tmp688;
  modelica_boolean tmp689;
  modelica_boolean tmp690;
  modelica_real tmp691;
  modelica_boolean tmp692;
  modelica_boolean tmp693;
  modelica_boolean tmp694;
  modelica_real tmp695;
  tmp652 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 0, (-((tmp652?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp653 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp655 = (modelica_boolean)tmp653;
  if(tmp655)
  {
    tmp656 = 0.0;
  }
  else
  {
    tmp654 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp656 = (tmp654?(-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp656)), 1, linearSystemData, threadData);
  tmp657 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp659 = (modelica_boolean)tmp657;
  if(tmp659)
  {
    tmp660 = 0.0;
  }
  else
  {
    tmp658 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp660 = (tmp658?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp660)), 2, linearSystemData, threadData);
  tmp661 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp663 = (modelica_boolean)tmp661;
  if(tmp663)
  {
    tmp664 = 0.0;
  }
  else
  {
    tmp662 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp664 = (tmp662?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp664)), 3, linearSystemData, threadData);
  tmp665 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp665?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp666 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp668 = (modelica_boolean)tmp666;
  if(tmp668)
  {
    tmp669 = 0.0;
  }
  else
  {
    tmp667 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp669 = (tmp667?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp669)), 5, linearSystemData, threadData);
  tmp670 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp670?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp671 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp673 = (modelica_boolean)tmp671;
  if(tmp673)
  {
    tmp674 = 0.0;
  }
  else
  {
    tmp672 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp674 = (tmp672?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp674)), 7, linearSystemData, threadData);
  tmp675 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp677 = (modelica_boolean)tmp675;
  if(tmp677)
  {
    tmp678 = 0.0;
  }
  else
  {
    tmp676 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp678 = (tmp676?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp678)), 8, linearSystemData, threadData);
  tmp679 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp681 = (modelica_boolean)tmp679;
  if(tmp681)
  {
    tmp682 = -1.0;
  }
  else
  {
    tmp680 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp682 = (tmp680?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp682)), 9, linearSystemData, threadData);
  tmp683 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp685 = (modelica_boolean)tmp683;
  if(tmp685)
  {
    tmp686 = 0.0;
  }
  else
  {
    tmp684 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp686 = (tmp684?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp686)), 10, linearSystemData, threadData);
  tmp687 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 4, (-((tmp687?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp688 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp690 = (modelica_boolean)tmp688;
  if(tmp690)
  {
    tmp691 = -0.0;
  }
  else
  {
    tmp689 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp691 = (tmp689?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp691)), 12, linearSystemData, threadData);
  tmp692 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp694 = (modelica_boolean)tmp692;
  if(tmp694)
  {
    tmp695 = (-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp693 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp695 = (tmp693?-0.0:(-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp695)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb353(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,353};
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
  tmp696 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp698 = (modelica_boolean)tmp696;
  if(tmp698)
  {
    tmp699 = 0.0;
  }
  else
  {
    tmp697 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp699 = (tmp697?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp699, linearSystemData, threadData);
  tmp700 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp702 = (modelica_boolean)tmp700;
  if(tmp702)
  {
    tmp703 = 0.0;
  }
  else
  {
    tmp701 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp703 = (tmp701?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp703, linearSystemData, threadData);
  tmp704 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp706 = (modelica_boolean)tmp704;
  if(tmp706)
  {
    tmp707 = (-data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp705 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp707 = (tmp705?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp707, linearSystemData, threadData);
  tmp708 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp710 = (modelica_boolean)tmp708;
  if(tmp710)
  {
    tmp711 = 0.0;
  }
  else
  {
    tmp709 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp711 = (tmp709?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp711, linearSystemData, threadData);
  tmp712 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp714 = (modelica_boolean)tmp712;
  if(tmp714)
  {
    tmp715 = data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp713 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp715 = (tmp713?data->localData[0]->realVars[23] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp715, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData353(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.max;
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
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA241(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,241};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp727;
  modelica_boolean tmp728;
  modelica_boolean tmp729;
  modelica_boolean tmp730;
  modelica_real tmp731;
  modelica_boolean tmp732;
  modelica_boolean tmp733;
  modelica_boolean tmp734;
  modelica_boolean tmp735;
  modelica_real tmp736;
  modelica_boolean tmp737;
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
  modelica_real tmp750;
  modelica_boolean tmp751;
  modelica_boolean tmp752;
  modelica_boolean tmp753;
  modelica_real tmp754;
  modelica_boolean tmp755;
  modelica_boolean tmp756;
  modelica_boolean tmp757;
  modelica_boolean tmp758;
  modelica_real tmp759;
  tmp716 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp718 = (modelica_boolean)tmp716;
  if(tmp718)
  {
    tmp719 = (-data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    tmp717 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp719 = (tmp717?-0.0:(-data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp719)), 0, linearSystemData, threadData);
  tmp720 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp722 = (modelica_boolean)tmp720;
  if(tmp722)
  {
    tmp723 = -0.0;
  }
  else
  {
    tmp721 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp723 = (tmp721?(-data->localData[0]->realVars[268] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp723)), 1, linearSystemData, threadData);
  tmp724 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp726 = (modelica_boolean)tmp724;
  if(tmp726)
  {
    tmp727 = 0.0;
  }
  else
  {
    tmp725 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp727 = (tmp725?(-data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp727)), 2, linearSystemData, threadData);
  tmp728 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp730 = (modelica_boolean)tmp728;
  if(tmp730)
  {
    tmp731 = 0.0;
  }
  else
  {
    tmp729 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp731 = (tmp729?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp731)), 3, linearSystemData, threadData);
  tmp732 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp732?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp733 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp735 = (modelica_boolean)tmp733;
  if(tmp735)
  {
    tmp736 = 0.0;
  }
  else
  {
    tmp734 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp736 = (tmp734?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp736)), 5, linearSystemData, threadData);
  tmp737 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp737?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp738 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp740 = (modelica_boolean)tmp738;
  if(tmp740)
  {
    tmp741 = 0.0;
  }
  else
  {
    tmp739 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp741 = (tmp739?(-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp741)), 7, linearSystemData, threadData);
  tmp742 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp742?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp743 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp745 = (modelica_boolean)tmp743;
  if(tmp745)
  {
    tmp746 = 0.0;
  }
  else
  {
    tmp744 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp746 = (tmp744?(-data->localData[0]->realVars[268] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp746)), 9, linearSystemData, threadData);
  tmp747 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp749 = (modelica_boolean)tmp747;
  if(tmp749)
  {
    tmp750 = -1.0;
  }
  else
  {
    tmp748 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp750 = (tmp748?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp750)), 10, linearSystemData, threadData);
  tmp751 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp753 = (modelica_boolean)tmp751;
  if(tmp753)
  {
    tmp754 = 0.0;
  }
  else
  {
    tmp752 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp754 = (tmp752?(-data->localData[0]->realVars[267] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp754)), 11, linearSystemData, threadData);
  tmp755 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(4, 3, (-((tmp755?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp756 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp758 = (modelica_boolean)tmp756;
  if(tmp758)
  {
    tmp759 = 0.0;
  }
  else
  {
    tmp757 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp759 = (tmp757?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp759)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb241(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,241};
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
  tmp760 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp762 = (modelica_boolean)tmp760;
  if(tmp762)
  {
    tmp763 = data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp761 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp763 = (tmp761?data->localData[0]->realVars[200] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp763, linearSystemData, threadData);
  tmp764 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp766 = (modelica_boolean)tmp764;
  if(tmp766)
  {
    tmp767 = 0.0;
  }
  else
  {
    tmp765 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp767 = (tmp765?data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp767, linearSystemData, threadData);
  tmp768 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp770 = (modelica_boolean)tmp768;
  if(tmp770)
  {
    tmp771 = 0.0;
  }
  else
  {
    tmp769 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp771 = (tmp769?data->localData[0]->realVars[198] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp771, linearSystemData, threadData);
  tmp772 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp774 = (modelica_boolean)tmp772;
  if(tmp774)
  {
    tmp775 = (-data->localData[0]->realVars[203] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp773 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp775 = (tmp773?data->localData[0]->realVars[201] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[203] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp775, linearSystemData, threadData);
  tmp776 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */);
  tmp778 = (modelica_boolean)tmp776;
  if(tmp778)
  {
    tmp779 = 0.0;
  }
  else
  {
    tmp777 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm5.Pdew variable */);
    tmp779 = (tmp777?data->localData[0]->realVars[199] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp779, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData241(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[202].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[202].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[202].attribute /* MatStm5.compMasFrac[1,1] */.max;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[205].attribute /* MatStm5.compMasFrac[2,2] */.max;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[207].attribute /* MatStm5.compMasFrac[3,2] */.max;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[204].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[204].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[204].attribute /* MatStm5.compMasFrac[2,1] */.max;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[206].attribute /* MatStm5.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA182(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,182};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp780;
  modelica_boolean tmp781;
  modelica_boolean tmp782;
  modelica_real tmp783;
  modelica_boolean tmp784;
  modelica_boolean tmp785;
  modelica_boolean tmp786;
  modelica_real tmp787;
  modelica_boolean tmp788;
  modelica_boolean tmp789;
  modelica_boolean tmp790;
  modelica_real tmp791;
  modelica_boolean tmp792;
  modelica_boolean tmp793;
  modelica_boolean tmp794;
  modelica_real tmp795;
  modelica_boolean tmp796;
  modelica_boolean tmp797;
  modelica_boolean tmp798;
  modelica_boolean tmp799;
  modelica_real tmp800;
  modelica_boolean tmp801;
  modelica_boolean tmp802;
  modelica_boolean tmp803;
  modelica_boolean tmp804;
  modelica_real tmp805;
  modelica_boolean tmp806;
  modelica_boolean tmp807;
  modelica_boolean tmp808;
  modelica_boolean tmp809;
  modelica_real tmp810;
  modelica_boolean tmp811;
  modelica_boolean tmp812;
  modelica_boolean tmp813;
  modelica_real tmp814;
  modelica_boolean tmp815;
  modelica_boolean tmp816;
  modelica_boolean tmp817;
  modelica_real tmp818;
  modelica_boolean tmp819;
  modelica_boolean tmp820;
  modelica_boolean tmp821;
  modelica_boolean tmp822;
  modelica_real tmp823;
  tmp780 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp782 = (modelica_boolean)tmp780;
  if(tmp782)
  {
    tmp783 = (-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp781 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp783 = (tmp781?-0.0:(-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp783)), 0, linearSystemData, threadData);
  tmp784 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp786 = (modelica_boolean)tmp784;
  if(tmp786)
  {
    tmp787 = -0.0;
  }
  else
  {
    tmp785 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp787 = (tmp785?(-data->localData[0]->realVars[180] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp787)), 1, linearSystemData, threadData);
  tmp788 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp790 = (modelica_boolean)tmp788;
  if(tmp790)
  {
    tmp791 = 0.0;
  }
  else
  {
    tmp789 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp791 = (tmp789?(-data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp791)), 2, linearSystemData, threadData);
  tmp792 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp794 = (modelica_boolean)tmp792;
  if(tmp794)
  {
    tmp795 = 0.0;
  }
  else
  {
    tmp793 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp795 = (tmp793?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp795)), 3, linearSystemData, threadData);
  tmp796 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp796?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp797 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp799 = (modelica_boolean)tmp797;
  if(tmp799)
  {
    tmp800 = 0.0;
  }
  else
  {
    tmp798 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp800 = (tmp798?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp800)), 5, linearSystemData, threadData);
  tmp801 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp801?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp802 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp804 = (modelica_boolean)tmp802;
  if(tmp804)
  {
    tmp805 = 0.0;
  }
  else
  {
    tmp803 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp805 = (tmp803?(-data->localData[0]->realVars[179] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp805)), 7, linearSystemData, threadData);
  tmp806 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp806?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp807 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp809 = (modelica_boolean)tmp807;
  if(tmp809)
  {
    tmp810 = 0.0;
  }
  else
  {
    tmp808 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp810 = (tmp808?(-data->localData[0]->realVars[180] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp810)), 9, linearSystemData, threadData);
  tmp811 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp813 = (modelica_boolean)tmp811;
  if(tmp813)
  {
    tmp814 = -1.0;
  }
  else
  {
    tmp812 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp814 = (tmp812?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp814)), 10, linearSystemData, threadData);
  tmp815 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp817 = (modelica_boolean)tmp815;
  if(tmp817)
  {
    tmp818 = 0.0;
  }
  else
  {
    tmp816 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp818 = (tmp816?(-data->localData[0]->realVars[179] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp818)), 11, linearSystemData, threadData);
  tmp819 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(4, 3, (-((tmp819?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp820 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp822 = (modelica_boolean)tmp820;
  if(tmp822)
  {
    tmp823 = 0.0;
  }
  else
  {
    tmp821 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp823 = (tmp821?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp823)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb182(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,182};
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
  tmp824 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp826 = (modelica_boolean)tmp824;
  if(tmp826)
  {
    tmp827 = data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp825 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp827 = (tmp825?data->localData[0]->realVars[112] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp827, linearSystemData, threadData);
  tmp828 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp830 = (modelica_boolean)tmp828;
  if(tmp830)
  {
    tmp831 = 0.0;
  }
  else
  {
    tmp829 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp831 = (tmp829?data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp831, linearSystemData, threadData);
  tmp832 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp834 = (modelica_boolean)tmp832;
  if(tmp834)
  {
    tmp835 = 0.0;
  }
  else
  {
    tmp833 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp835 = (tmp833?data->localData[0]->realVars[110] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp835, linearSystemData, threadData);
  tmp836 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp838 = (modelica_boolean)tmp836;
  if(tmp838)
  {
    tmp839 = (-data->localData[0]->realVars[115] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp837 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp839 = (tmp837?data->localData[0]->realVars[113] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[115] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp839, linearSystemData, threadData);
  tmp840 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */);
  tmp842 = (modelica_boolean)tmp840;
  if(tmp842)
  {
    tmp843 = 0.0;
  }
  else
  {
    tmp841 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm4.Pdew variable */);
    tmp843 = (tmp841?data->localData[0]->realVars[111] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp843, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData182(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[114].attribute /* MatStm4.compMasFrac[1,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm4.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA108(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,108};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp844;
  modelica_boolean tmp845;
  modelica_boolean tmp846;
  modelica_boolean tmp847;
  modelica_real tmp848;
  modelica_boolean tmp849;
  modelica_boolean tmp850;
  modelica_boolean tmp851;
  modelica_real tmp852;
  modelica_boolean tmp853;
  modelica_boolean tmp854;
  modelica_boolean tmp855;
  modelica_real tmp856;
  modelica_boolean tmp857;
  modelica_boolean tmp858;
  modelica_boolean tmp859;
  modelica_boolean tmp860;
  modelica_real tmp861;
  modelica_boolean tmp862;
  modelica_boolean tmp863;
  modelica_boolean tmp864;
  modelica_real tmp865;
  modelica_boolean tmp866;
  modelica_boolean tmp867;
  modelica_boolean tmp868;
  modelica_real tmp869;
  modelica_boolean tmp870;
  modelica_boolean tmp871;
  modelica_boolean tmp872;
  modelica_real tmp873;
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
  modelica_boolean tmp885;
  modelica_real tmp886;
  modelica_boolean tmp887;
  tmp844 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 0, (-((tmp844?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp845 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp847 = (modelica_boolean)tmp845;
  if(tmp847)
  {
    tmp848 = 0.0;
  }
  else
  {
    tmp846 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp848 = (tmp846?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp848)), 1, linearSystemData, threadData);
  tmp849 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp851 = (modelica_boolean)tmp849;
  if(tmp851)
  {
    tmp852 = 0.0;
  }
  else
  {
    tmp850 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp852 = (tmp850?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp852)), 2, linearSystemData, threadData);
  tmp853 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp855 = (modelica_boolean)tmp853;
  if(tmp855)
  {
    tmp856 = 0.0;
  }
  else
  {
    tmp854 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp856 = (tmp854?(-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp856)), 3, linearSystemData, threadData);
  tmp857 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp857?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp858 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp860 = (modelica_boolean)tmp858;
  if(tmp860)
  {
    tmp861 = 0.0;
  }
  else
  {
    tmp859 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp861 = (tmp859?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp861)), 5, linearSystemData, threadData);
  tmp862 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp864 = (modelica_boolean)tmp862;
  if(tmp864)
  {
    tmp865 = (-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp863 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp865 = (tmp863?-0.0:(-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 2, (-(tmp865)), 6, linearSystemData, threadData);
  tmp866 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp868 = (modelica_boolean)tmp866;
  if(tmp868)
  {
    tmp869 = -0.0;
  }
  else
  {
    tmp867 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp869 = (tmp867?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp869)), 7, linearSystemData, threadData);
  tmp870 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp872 = (modelica_boolean)tmp870;
  if(tmp872)
  {
    tmp873 = 0.0;
  }
  else
  {
    tmp871 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp873 = (tmp871?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp873)), 8, linearSystemData, threadData);
  tmp874 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp876 = (modelica_boolean)tmp874;
  if(tmp876)
  {
    tmp877 = -1.0;
  }
  else
  {
    tmp875 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp877 = (tmp875?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp877)), 9, linearSystemData, threadData);
  tmp878 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp880 = (modelica_boolean)tmp878;
  if(tmp880)
  {
    tmp881 = 0.0;
  }
  else
  {
    tmp879 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp881 = (tmp879?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp881)), 10, linearSystemData, threadData);
  tmp882 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 4, (-((tmp882?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp883 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp885 = (modelica_boolean)tmp883;
  if(tmp885)
  {
    tmp886 = 0.0;
  }
  else
  {
    tmp884 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp886 = (tmp884?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp886)), 12, linearSystemData, threadData);
  tmp887 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp887?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb108(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,108};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp888;
  modelica_boolean tmp889;
  modelica_boolean tmp890;
  modelica_real tmp891;
  modelica_boolean tmp892;
  modelica_boolean tmp893;
  modelica_boolean tmp894;
  modelica_real tmp895;
  modelica_boolean tmp896;
  modelica_boolean tmp897;
  modelica_boolean tmp898;
  modelica_real tmp899;
  modelica_boolean tmp900;
  modelica_boolean tmp901;
  modelica_boolean tmp902;
  modelica_real tmp903;
  modelica_boolean tmp904;
  modelica_boolean tmp905;
  modelica_boolean tmp906;
  modelica_real tmp907;
  tmp888 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp890 = (modelica_boolean)tmp888;
  if(tmp890)
  {
    tmp891 = 0.0;
  }
  else
  {
    tmp889 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp891 = (tmp889?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp891, linearSystemData, threadData);
  tmp892 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp894 = (modelica_boolean)tmp892;
  if(tmp894)
  {
    tmp895 = 0.0;
  }
  else
  {
    tmp893 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp895 = (tmp893?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp895, linearSystemData, threadData);
  tmp896 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp898 = (modelica_boolean)tmp896;
  if(tmp898)
  {
    tmp899 = data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp897 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp899 = (tmp897?data->localData[0]->realVars[23] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp899, linearSystemData, threadData);
  tmp900 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp902 = (modelica_boolean)tmp900;
  if(tmp902)
  {
    tmp903 = 0.0;
  }
  else
  {
    tmp901 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp903 = (tmp901?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp903, linearSystemData, threadData);
  tmp904 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp906 = (modelica_boolean)tmp904;
  if(tmp906)
  {
    tmp907 = (-data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp905 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp907 = (tmp905?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp907, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData108(void *inData, threadData_t *threadData, void *systemData)
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
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[2,1] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void splitter1_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 482;
  linearSystemData[5].size = 5;
  linearSystemData[5].nnz = 14;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA482;
  linearSystemData[5].setb = setLinearVectorb482;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData482;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 423;
  linearSystemData[4].size = 5;
  linearSystemData[4].nnz = 14;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA423;
  linearSystemData[4].setb = setLinearVectorb423;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData423;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 353;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA353;
  linearSystemData[3].setb = setLinearVectorb353;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData353;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 241;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA241;
  linearSystemData[2].setb = setLinearVectorb241;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData241;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 182;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA182;
  linearSystemData[1].setb = setLinearVectorb182;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData182;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 108;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA108;
  linearSystemData[0].setb = setLinearVectorb108;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData108;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

