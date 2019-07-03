/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
<<<<<<< HEAD
void setLinearMatrixA152(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,152};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_real tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
=======
void setLinearMatrixA313(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,313};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_real tmp39;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_boolean tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
<<<<<<< HEAD
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_real tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_real tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_real tmp57;
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  modelica_boolean tmp63;
  tmp20 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 0, (-((tmp20?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp21 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp23 = (modelica_boolean)tmp21;
  if(tmp23)
  {
    tmp24 = 0.0;
  }
  else
  {
    tmp22 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp24 = (tmp22?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp24)), 1, linearSystemData, threadData);
  tmp25 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp27 = (modelica_boolean)tmp25;
  if(tmp27)
  {
    tmp28 = 0.0;
  }
  else
  {
    tmp26 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp28 = (tmp26?(-data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp28)), 2, linearSystemData, threadData);
  tmp29 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp31 = (modelica_boolean)tmp29;
  if(tmp31)
  {
    tmp32 = 0.0;
  }
  else
  {
    tmp30 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp32 = (tmp30?(-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp32)), 3, linearSystemData, threadData);
  tmp33 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp33?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp34 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp36 = (modelica_boolean)tmp34;
  if(tmp36)
  {
    tmp37 = 0.0;
  }
  else
  {
    tmp35 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp37 = (tmp35?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp37)), 5, linearSystemData, threadData);
  tmp38 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp40 = (modelica_boolean)tmp38;
  if(tmp40)
  {
    tmp41 = (-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp39 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp41 = (tmp39?-0.0:(-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 2, (-(tmp41)), 6, linearSystemData, threadData);
  tmp42 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp44 = (modelica_boolean)tmp42;
  if(tmp44)
  {
    tmp45 = -0.0;
  }
  else
  {
    tmp43 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp45 = (tmp43?(-data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp45)), 7, linearSystemData, threadData);
  tmp46 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp48 = (modelica_boolean)tmp46;
  if(tmp48)
  {
    tmp49 = 0.0;
  }
  else
  {
    tmp47 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp49 = (tmp47?(-data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp49)), 8, linearSystemData, threadData);
  tmp50 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp52 = (modelica_boolean)tmp50;
  if(tmp52)
  {
    tmp53 = -1.0;
  }
  else
  {
    tmp51 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp53 = (tmp51?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp53)), 9, linearSystemData, threadData);
  tmp54 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp56 = (modelica_boolean)tmp54;
  if(tmp56)
  {
    tmp57 = 0.0;
  }
  else
  {
    tmp55 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp57 = (tmp55?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp57)), 10, linearSystemData, threadData);
  tmp58 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 4, (-((tmp58?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp59 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp61 = (modelica_boolean)tmp59;
  if(tmp61)
  {
    tmp62 = 0.0;
  }
  else
  {
    tmp60 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp62 = (tmp60?(-data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp62)), 12, linearSystemData, threadData);
  tmp63 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp63?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb152(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,152};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_real tmp83;
  tmp64 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = 0.0;
  }
  else
  {
    tmp65 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp67 = (tmp65?data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp67, linearSystemData, threadData);
  tmp68 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = 0.0;
  }
  else
  {
    tmp69 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp71 = (tmp69?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp71, linearSystemData, threadData);
  tmp72 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp74 = (modelica_boolean)tmp72;
  if(tmp74)
  {
    tmp75 = data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp73 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp75 = (tmp73?data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp75, linearSystemData, threadData);
  tmp76 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp78 = (modelica_boolean)tmp76;
  if(tmp78)
  {
    tmp79 = 0.0;
  }
  else
  {
    tmp77 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp79 = (tmp77?data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp79, linearSystemData, threadData);
  tmp80 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp82 = (modelica_boolean)tmp80;
  if(tmp82)
  {
    tmp83 = (-data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp81 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp83 = (tmp81?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp83, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData152(void *inData, threadData_t *threadData, void *systemData)
=======
  modelica_real tmp43;
  RELATIONHYSTERESIS(tmp0, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp3 = (tmp1?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp3)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp4, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp7 = (tmp5?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp7)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp8, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 3, (-((tmp8?1.0:-0.0))), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp9, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp10, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp12 = (tmp10?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp12)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp13, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 0, (-((tmp13?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp14, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp16 = (modelica_boolean)tmp14;
  if(tmp16)
  {
    tmp17 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp15, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp17 = (tmp15?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp17)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp18, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp20 = (modelica_boolean)tmp18;
  if(tmp20)
  {
    tmp21 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp19, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp21 = (tmp19?(-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp21)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp22, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp24 = (modelica_boolean)tmp22;
  if(tmp24)
  {
    tmp25 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp23, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp25 = (tmp23?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp25)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp26, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp26?1.0:-0.0))), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp27, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp29 = (modelica_boolean)tmp27;
  if(tmp29)
  {
    tmp30 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp28, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp30 = (tmp28?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp30)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp31, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 1, (-((tmp31?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp32, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp34 = (modelica_boolean)tmp32;
  if(tmp34)
  {
    tmp35 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp33, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp35 = (tmp33?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp35)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp36, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp38 = (modelica_boolean)tmp36;
  if(tmp38)
  {
    tmp39 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp37, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp39 = (tmp37?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp39)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp40, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp42 = (modelica_boolean)tmp40;
  if(tmp42)
  {
    tmp43 = (-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp41, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp43 = (tmp41?-0.0:(-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 4, (-(tmp43)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb313(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,313};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_real tmp63;
  RELATIONHYSTERESIS(tmp44, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp46 = (modelica_boolean)tmp44;
  if(tmp46)
  {
    tmp47 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp45, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp47 = (tmp45?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp47, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp48, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp50 = (modelica_boolean)tmp48;
  if(tmp50)
  {
    tmp51 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp49, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp51 = (tmp49?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp51, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp52, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp55 = (tmp53?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp55, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp56, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = (-data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp57, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp59 = (tmp57?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp59, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp60, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp61, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp63 = (tmp61?data->localData[0]->realVars[23] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp63, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData313(void *inData, threadData_t *threadData, void *systemData)
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
<<<<<<< HEAD
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[17].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[17].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[17].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[21].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[21].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[21].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA77(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,77};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_real tmp87;
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  modelica_real tmp91;
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  modelica_real tmp95;
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  modelica_real tmp99;
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  modelica_boolean tmp103;
=======
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[3,1] */.max;
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
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA232(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,232};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_real tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  modelica_real tmp85;
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  modelica_real tmp90;
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  modelica_real tmp94;
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  modelica_real tmp98;
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  modelica_real tmp103;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_boolean tmp104;
  modelica_real tmp105;
  modelica_boolean tmp106;
<<<<<<< HEAD
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  modelica_real tmp109;
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_real tmp113;
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  modelica_real tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  modelica_real tmp122;
  modelica_boolean tmp123;
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_real tmp126;
  modelica_boolean tmp127;
  tmp84 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp86 = (modelica_boolean)tmp84;
  if(tmp86)
  {
    tmp87 = (-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp85 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp87 = (tmp85?-0.0:(-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 3, (-(tmp87)), 0, linearSystemData, threadData);
  tmp88 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp90 = (modelica_boolean)tmp88;
  if(tmp90)
  {
    tmp91 = -0.0;
  }
  else
  {
    tmp89 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp91 = (tmp89?(-data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp91)), 1, linearSystemData, threadData);
  tmp92 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp94 = (modelica_boolean)tmp92;
  if(tmp94)
  {
    tmp95 = 0.0;
  }
  else
  {
    tmp93 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp95 = (tmp93?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp95)), 2, linearSystemData, threadData);
  tmp96 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp98 = (modelica_boolean)tmp96;
  if(tmp98)
  {
    tmp99 = 0.0;
  }
  else
  {
    tmp97 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp99 = (tmp97?(-data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp99)), 3, linearSystemData, threadData);
  tmp100 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp100?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp101 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp101?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp102 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp104 = (modelica_boolean)tmp102;
  if(tmp104)
  {
    tmp105 = 0.0;
  }
  else
  {
    tmp103 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp105 = (tmp103?(-data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp105)), 6, linearSystemData, threadData);
  tmp106 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp108 = (modelica_boolean)tmp106;
  if(tmp108)
  {
    tmp109 = -1.0;
  }
  else
  {
    tmp107 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp109 = (tmp107?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp109)), 7, linearSystemData, threadData);
  tmp110 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp112 = (modelica_boolean)tmp110;
  if(tmp112)
  {
    tmp113 = 0.0;
  }
  else
  {
    tmp111 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp113 = (tmp111?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp113)), 8, linearSystemData, threadData);
  tmp114 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp114?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp115 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp117 = (modelica_boolean)tmp115;
  if(tmp117)
  {
    tmp118 = 0.0;
  }
  else
  {
    tmp116 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp118 = (tmp116?(-data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp118)), 10, linearSystemData, threadData);
  tmp119 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp121 = (modelica_boolean)tmp119;
  if(tmp121)
  {
    tmp122 = 0.0;
  }
  else
  {
    tmp120 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp122 = (tmp120?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp122)), 11, linearSystemData, threadData);
  tmp123 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp125 = (modelica_boolean)tmp123;
  if(tmp125)
  {
    tmp126 = 0.0;
  }
  else
  {
    tmp124 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp126 = (tmp124?(-data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp126)), 12, linearSystemData, threadData);
  tmp127 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 2, (-((tmp127?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb77(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,77};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp128;
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  modelica_real tmp131;
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  modelica_real tmp135;
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  modelica_real tmp139;
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  modelica_real tmp143;
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  modelica_real tmp147;
  tmp128 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp130 = (modelica_boolean)tmp128;
  if(tmp130)
  {
    tmp131 = data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp129 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp131 = (tmp129?data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp131, linearSystemData, threadData);
  tmp132 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp134 = (modelica_boolean)tmp132;
  if(tmp134)
  {
    tmp135 = 0.0;
  }
  else
  {
    tmp133 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp135 = (tmp133?data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp135, linearSystemData, threadData);
  tmp136 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp138 = (modelica_boolean)tmp136;
  if(tmp138)
  {
    tmp139 = 0.0;
  }
  else
  {
    tmp137 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp139 = (tmp137?data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp139, linearSystemData, threadData);
  tmp140 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp142 = (modelica_boolean)tmp140;
  if(tmp142)
  {
    tmp143 = 0.0;
  }
  else
  {
    tmp141 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp143 = (tmp141?data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp143, linearSystemData, threadData);
  tmp144 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp146 = (modelica_boolean)tmp144;
  if(tmp146)
  {
    tmp147 = (-data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp145 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp147 = (tmp145?data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp147, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData77(void *inData, threadData_t *threadData, void *systemData)
=======
  modelica_real tmp107;
  tmp64 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = 0.0;
  }
  else
  {
    tmp65 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp67 = (tmp65?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp67)), 0, linearSystemData, threadData);
  tmp68 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = 0.0;
  }
  else
  {
    tmp69 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp71 = (tmp69?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp71)), 1, linearSystemData, threadData);
  tmp72 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp72?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp73 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp75 = (modelica_boolean)tmp73;
  if(tmp75)
  {
    tmp76 = -1.0;
  }
  else
  {
    tmp74 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp76 = (tmp74?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp76)), 3, linearSystemData, threadData);
  tmp77 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 0, (-((tmp77?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp78 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp80 = (modelica_boolean)tmp78;
  if(tmp80)
  {
    tmp81 = 0.0;
  }
  else
  {
    tmp79 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp81 = (tmp79?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp81)), 5, linearSystemData, threadData);
  tmp82 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp84 = (modelica_boolean)tmp82;
  if(tmp84)
  {
    tmp85 = 0.0;
  }
  else
  {
    tmp83 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp85 = (tmp83?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp85)), 6, linearSystemData, threadData);
  tmp86 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 1, (-((tmp86?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp87 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp89 = (modelica_boolean)tmp87;
  if(tmp89)
  {
    tmp90 = 0.0;
  }
  else
  {
    tmp88 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp90 = (tmp88?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp90)), 8, linearSystemData, threadData);
  tmp91 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp93 = (modelica_boolean)tmp91;
  if(tmp93)
  {
    tmp94 = 0.0;
  }
  else
  {
    tmp92 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp94 = (tmp92?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp94)), 9, linearSystemData, threadData);
  tmp95 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp97 = (modelica_boolean)tmp95;
  if(tmp97)
  {
    tmp98 = 0.0;
  }
  else
  {
    tmp96 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp98 = (tmp96?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp98)), 10, linearSystemData, threadData);
  tmp99 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 2, (-((tmp99?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp100 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp102 = (modelica_boolean)tmp100;
  if(tmp102)
  {
    tmp103 = -0.0;
  }
  else
  {
    tmp101 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp103 = (tmp101?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp103)), 12, linearSystemData, threadData);
  tmp104 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp106 = (modelica_boolean)tmp104;
  if(tmp106)
  {
    tmp107 = (-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp105 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp107 = (tmp105?-0.0:(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 4, (-(tmp107)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb232(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,232};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  modelica_real tmp115;
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  modelica_real tmp119;
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  modelica_real tmp123;
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  modelica_real tmp127;
  tmp108 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp110 = (modelica_boolean)tmp108;
  if(tmp110)
  {
    tmp111 = 0.0;
  }
  else
  {
    tmp109 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp111 = (tmp109?data->localData[0]->realVars[112] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp111, linearSystemData, threadData);
  tmp112 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp114 = (modelica_boolean)tmp112;
  if(tmp114)
  {
    tmp115 = 0.0;
  }
  else
  {
    tmp113 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp115 = (tmp113?data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp115, linearSystemData, threadData);
  tmp116 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp118 = (modelica_boolean)tmp116;
  if(tmp118)
  {
    tmp119 = 0.0;
  }
  else
  {
    tmp117 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp119 = (tmp117?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp119, linearSystemData, threadData);
  tmp120 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp122 = (modelica_boolean)tmp120;
  if(tmp122)
  {
    tmp123 = (-data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp121 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp123 = (tmp121?data->localData[0]->realVars[114] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(3, tmp123, linearSystemData, threadData);
  tmp124 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp126 = (modelica_boolean)tmp124;
  if(tmp126)
  {
    tmp127 = data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp125 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp127 = (tmp125?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp127, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData232(void *inData, threadData_t *threadData, void *systemData)
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
<<<<<<< HEAD
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[22].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[19].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[20].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[17].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[17].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[17].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[21].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[21].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[21].attribute /* MatStm1.compMasFrac[3,1] */.max;
}

=======
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA144(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,144};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp128;
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  modelica_real tmp131;
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  modelica_real tmp135;
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  modelica_real tmp139;
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  modelica_real tmp144;
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  modelica_boolean tmp147;
  modelica_real tmp148;
  modelica_boolean tmp149;
  modelica_boolean tmp150;
  modelica_boolean tmp151;
  modelica_real tmp152;
  modelica_boolean tmp153;
  modelica_boolean tmp154;
  modelica_boolean tmp155;
  modelica_real tmp156;
  modelica_boolean tmp157;
  modelica_boolean tmp158;
  modelica_boolean tmp159;
  modelica_boolean tmp160;
  modelica_real tmp161;
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  modelica_real tmp166;
  modelica_boolean tmp167;
  modelica_boolean tmp168;
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  modelica_real tmp171;
  tmp128 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp130 = (modelica_boolean)tmp128;
  if(tmp130)
  {
    tmp131 = (-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp129 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp131 = (tmp129?-0.0:(-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 3, (-(tmp131)), 0, linearSystemData, threadData);
  tmp132 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp134 = (modelica_boolean)tmp132;
  if(tmp134)
  {
    tmp135 = -0.0;
  }
  else
  {
    tmp133 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp135 = (tmp133?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp135)), 1, linearSystemData, threadData);
  tmp136 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp138 = (modelica_boolean)tmp136;
  if(tmp138)
  {
    tmp139 = 0.0;
  }
  else
  {
    tmp137 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp139 = (tmp137?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp139)), 2, linearSystemData, threadData);
  tmp140 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 2, (-((tmp140?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp141 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp143 = (modelica_boolean)tmp141;
  if(tmp143)
  {
    tmp144 = -1.0;
  }
  else
  {
    tmp142 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp144 = (tmp142?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp144)), 4, linearSystemData, threadData);
  tmp145 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp147 = (modelica_boolean)tmp145;
  if(tmp147)
  {
    tmp148 = 0.0;
  }
  else
  {
    tmp146 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp148 = (tmp146?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp148)), 5, linearSystemData, threadData);
  tmp149 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp151 = (modelica_boolean)tmp149;
  if(tmp151)
  {
    tmp152 = 0.0;
  }
  else
  {
    tmp150 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp152 = (tmp150?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp152)), 6, linearSystemData, threadData);
  tmp153 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp155 = (modelica_boolean)tmp153;
  if(tmp155)
  {
    tmp156 = 0.0;
  }
  else
  {
    tmp154 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp156 = (tmp154?(-data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp156)), 7, linearSystemData, threadData);
  tmp157 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 4, (-((tmp157?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp158 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp160 = (modelica_boolean)tmp158;
  if(tmp160)
  {
    tmp161 = 0.0;
  }
  else
  {
    tmp159 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp161 = (tmp159?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp161)), 9, linearSystemData, threadData);
  tmp162 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp162?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp163 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp165 = (modelica_boolean)tmp163;
  if(tmp165)
  {
    tmp166 = 0.0;
  }
  else
  {
    tmp164 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp166 = (tmp164?(-data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp166)), 11, linearSystemData, threadData);
  tmp167 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp167?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp168 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp170 = (modelica_boolean)tmp168;
  if(tmp170)
  {
    tmp171 = 0.0;
  }
  else
  {
    tmp169 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp171 = (tmp169?(-data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp171)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb144(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,144};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp172;
  modelica_boolean tmp173;
  modelica_boolean tmp174;
  modelica_real tmp175;
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  modelica_boolean tmp178;
  modelica_real tmp179;
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  modelica_boolean tmp182;
  modelica_real tmp183;
  modelica_boolean tmp184;
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  modelica_real tmp187;
  modelica_boolean tmp188;
  modelica_boolean tmp189;
  modelica_boolean tmp190;
  modelica_real tmp191;
  tmp172 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp174 = (modelica_boolean)tmp172;
  if(tmp174)
  {
    tmp175 = data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp173 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp175 = (tmp173?data->localData[0]->realVars[23] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp175, linearSystemData, threadData);
  tmp176 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp178 = (modelica_boolean)tmp176;
  if(tmp178)
  {
    tmp179 = 0.0;
  }
  else
  {
    tmp177 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp179 = (tmp177?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp179, linearSystemData, threadData);
  tmp180 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp182 = (modelica_boolean)tmp180;
  if(tmp182)
  {
    tmp183 = 0.0;
  }
  else
  {
    tmp181 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp183 = (tmp181?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp183, linearSystemData, threadData);
  tmp184 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp186 = (modelica_boolean)tmp184;
  if(tmp186)
  {
    tmp187 = 0.0;
  }
  else
  {
    tmp185 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp187 = (tmp185?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp187, linearSystemData, threadData);
  tmp188 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp190 = (modelica_boolean)tmp188;
  if(tmp190)
  {
    tmp191 = (-data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp189 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp191 = (tmp189?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp191, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData144(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
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
void setLinearMatrixA87(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,87};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp192;
  modelica_boolean tmp193;
  modelica_boolean tmp194;
  modelica_real tmp195;
  modelica_boolean tmp196;
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  modelica_boolean tmp199;
  modelica_real tmp200;
  modelica_boolean tmp201;
  modelica_boolean tmp202;
  modelica_boolean tmp203;
  modelica_real tmp204;
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  modelica_boolean tmp207;
  modelica_boolean tmp208;
  modelica_real tmp209;
  modelica_boolean tmp210;
  modelica_boolean tmp211;
  modelica_boolean tmp212;
  modelica_boolean tmp213;
  modelica_real tmp214;
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  modelica_boolean tmp217;
  modelica_real tmp218;
  modelica_boolean tmp219;
  modelica_boolean tmp220;
  modelica_boolean tmp221;
  modelica_boolean tmp222;
  modelica_real tmp223;
  modelica_boolean tmp224;
  modelica_boolean tmp225;
  modelica_boolean tmp226;
  modelica_real tmp227;
  modelica_boolean tmp228;
  modelica_boolean tmp229;
  modelica_boolean tmp230;
  modelica_real tmp231;
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  modelica_boolean tmp234;
  modelica_real tmp235;
  tmp192 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp194 = (modelica_boolean)tmp192;
  if(tmp194)
  {
    tmp195 = 0.0;
  }
  else
  {
    tmp193 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp195 = (tmp193?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp195)), 0, linearSystemData, threadData);
  tmp196 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp196?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp197 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp199 = (modelica_boolean)tmp197;
  if(tmp199)
  {
    tmp200 = 0.0;
  }
  else
  {
    tmp198 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp200 = (tmp198?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp200)), 2, linearSystemData, threadData);
  tmp201 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp203 = (modelica_boolean)tmp201;
  if(tmp203)
  {
    tmp204 = -1.0;
  }
  else
  {
    tmp202 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp204 = (tmp202?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp204)), 3, linearSystemData, threadData);
  tmp205 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp205?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp206 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp208 = (modelica_boolean)tmp206;
  if(tmp208)
  {
    tmp209 = 0.0;
  }
  else
  {
    tmp207 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp209 = (tmp207?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp209)), 5, linearSystemData, threadData);
  tmp210 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp210?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp211 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp213 = (modelica_boolean)tmp211;
  if(tmp213)
  {
    tmp214 = 0.0;
  }
  else
  {
    tmp212 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp214 = (tmp212?(-data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp214)), 7, linearSystemData, threadData);
  tmp215 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp217 = (modelica_boolean)tmp215;
  if(tmp217)
  {
    tmp218 = 0.0;
  }
  else
  {
    tmp216 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp218 = (tmp216?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp218)), 8, linearSystemData, threadData);
  tmp219 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp219?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp220 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp222 = (modelica_boolean)tmp220;
  if(tmp222)
  {
    tmp223 = 0.0;
  }
  else
  {
    tmp221 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp223 = (tmp221?(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp223)), 10, linearSystemData, threadData);
  tmp224 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp226 = (modelica_boolean)tmp224;
  if(tmp226)
  {
    tmp227 = 0.0;
  }
  else
  {
    tmp225 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp227 = (tmp225?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp227)), 11, linearSystemData, threadData);
  tmp228 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp230 = (modelica_boolean)tmp228;
  if(tmp230)
  {
    tmp231 = -0.0;
  }
  else
  {
    tmp229 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp231 = (tmp229?(-data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp231)), 12, linearSystemData, threadData);
  tmp232 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp234 = (modelica_boolean)tmp232;
  if(tmp234)
  {
    tmp235 = (-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp233 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp235 = (tmp233?-0.0:(-data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp235)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb87(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,87};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  modelica_boolean tmp238;
  modelica_real tmp239;
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  modelica_real tmp243;
  modelica_boolean tmp244;
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  modelica_real tmp247;
  modelica_boolean tmp248;
  modelica_boolean tmp249;
  modelica_boolean tmp250;
  modelica_real tmp251;
  modelica_boolean tmp252;
  modelica_boolean tmp253;
  modelica_boolean tmp254;
  modelica_real tmp255;
  tmp236 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp238 = (modelica_boolean)tmp236;
  if(tmp238)
  {
    tmp239 = (-data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp237 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp239 = (tmp237?data->localData[0]->realVars[114] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp239, linearSystemData, threadData);
  tmp240 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp242 = (modelica_boolean)tmp240;
  if(tmp242)
  {
    tmp243 = 0.0;
  }
  else
  {
    tmp241 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp243 = (tmp241?data->localData[0]->realVars[112] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp243, linearSystemData, threadData);
  tmp244 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp246 = (modelica_boolean)tmp244;
  if(tmp246)
  {
    tmp247 = 0.0;
  }
  else
  {
    tmp245 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp247 = (tmp245?data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp247, linearSystemData, threadData);
  tmp248 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp250 = (modelica_boolean)tmp248;
  if(tmp250)
  {
    tmp251 = 0.0;
  }
  else
  {
    tmp249 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp251 = (tmp249?data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp251, linearSystemData, threadData);
  tmp252 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp254 = (modelica_boolean)tmp252;
  if(tmp254)
  {
    tmp255 = data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp253 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp255 = (tmp253?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp255, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData87(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[115].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[117].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[118].attribute /* MatStm2.compMasFrac[2,2] */.max;
}

>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
<<<<<<< HEAD
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 152;
=======
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 313;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA313;
  linearSystemData[3].setb = setLinearVectorb313;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData313;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 232;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA232;
  linearSystemData[2].setb = setLinearVectorb232;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData232;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 144;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
<<<<<<< HEAD
  linearSystemData[1].setA = setLinearMatrixA152;
  linearSystemData[1].setb = setLinearVectorb152;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData152;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 77;
=======
  linearSystemData[1].setA = setLinearMatrixA144;
  linearSystemData[1].setb = setLinearVectorb144;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData144;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 87;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
<<<<<<< HEAD
  linearSystemData[0].setA = setLinearMatrixA77;
  linearSystemData[0].setb = setLinearVectorb77;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData77;
=======
  linearSystemData[0].setA = setLinearMatrixA87;
  linearSystemData[0].setb = setLinearVectorb87;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData87;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

