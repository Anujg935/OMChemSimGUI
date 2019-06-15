/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA543(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,543};
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
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  modelica_boolean tmp47;
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
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_real tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_real tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_real tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  modelica_real tmp85;
  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp3 = (tmp1?(-data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp3)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = (-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp7 = (tmp5?-0.0:(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 8, (-(tmp7)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp8, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = (-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp11 = (tmp9?-0.0:(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 7, (-(tmp11)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp12, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp14 = (modelica_boolean)tmp12;
  if(tmp14)
  {
    tmp15 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp13, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp15 = (tmp13?(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 8, (-(tmp15)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp16, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp18 = (modelica_boolean)tmp16;
  if(tmp18)
  {
    tmp19 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp17, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp19 = (tmp17?(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp19)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp20, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp22 = (modelica_boolean)tmp20;
  if(tmp22)
  {
    tmp23 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp21, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp23 = (tmp21?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 5, (-(tmp23)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp24, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 6, (-((tmp24?1.0:-0.0))), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp25, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp27 = (modelica_boolean)tmp25;
  if(tmp27)
  {
    tmp28 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp26, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp28 = (tmp26?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 7, (-(tmp28)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp29, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 5, (-((tmp29?1.0:-0.0))), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp30, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp31, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp33 = (tmp31?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 6, (-(tmp33)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp34, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp36 = (modelica_boolean)tmp34;
  if(tmp36)
  {
    tmp37 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp35, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp37 = (tmp35?(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 7, (-(tmp37)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp38, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp40 = (modelica_boolean)tmp38;
  if(tmp40)
  {
    tmp41 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp39, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp41 = (tmp39?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp41)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp42, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(4, 4, (-((tmp42?1.0:-0.0))), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp43, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp45 = (modelica_boolean)tmp43;
  if(tmp45)
  {
    tmp46 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp44, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp46 = (tmp44?(-data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(4, 5, (-(tmp46)), 13, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp47, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(5, 1, (-((tmp47?1.0:-0.0))), 14, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp48, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp50 = (modelica_boolean)tmp48;
  if(tmp50)
  {
    tmp51 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp49, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp51 = (tmp49?-0.0:-1.0);
  }
  linearSystemData->setAElement(5, 3, (-(tmp51)), 15, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp52, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp55 = (tmp53?(-data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(5, 4, (-(tmp55)), 16, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp56, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp57, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp59 = (tmp57?(-data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(6, 2, (-(tmp59)), 17, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp60, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = (-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp61, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp63 = (tmp61?-0.0:(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(6, 3, (-(tmp63)), 18, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp64, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(7, 0, (-((tmp64?1.0:-0.0))), 19, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp65, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp67 = (modelica_boolean)tmp65;
  if(tmp67)
  {
    tmp68 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp66, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp68 = (tmp66?(-data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(7, 1, (-(tmp68)), 20, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp69, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp71 = (modelica_boolean)tmp69;
  if(tmp71)
  {
    tmp72 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp70, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp72 = (tmp70?-0.0:1.0);
  }
  linearSystemData->setAElement(7, 2, (-(tmp72)), 21, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp73, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp75 = (modelica_boolean)tmp73;
  if(tmp75)
  {
    tmp76 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp74, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp76 = (tmp74?-0.0:-1.0);
  }
  linearSystemData->setAElement(7, 8, (-(tmp76)), 22, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp77, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp79 = (modelica_boolean)tmp77;
  if(tmp79)
  {
    tmp80 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp78, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp80 = (tmp78?-0.0:1.0);
  }
  linearSystemData->setAElement(8, 0, (-(tmp80)), 23, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp81, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(8, 2, (-((tmp81?1.0:-0.0))), 24, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp82, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp84 = (modelica_boolean)tmp82;
  if(tmp84)
  {
    tmp85 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp83, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp85 = (tmp83?(-data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(8, 6, (-(tmp85)), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb543(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,543};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  modelica_real tmp89;
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  modelica_real tmp93;
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  modelica_real tmp97;
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  modelica_real tmp101;
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  modelica_real tmp105;
  modelica_boolean tmp106;
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
  modelica_real tmp117;
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_real tmp121;
  RELATIONHYSTERESIS(tmp86, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp88 = (modelica_boolean)tmp86;
  if(tmp88)
  {
    tmp89 = data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp87, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp89 = (tmp87?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,2] variable */:data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(0, tmp89, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp90, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp92 = (modelica_boolean)tmp90;
  if(tmp92)
  {
    tmp93 = data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp91, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp93 = (tmp91?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */:data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp93, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp94, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp96 = (modelica_boolean)tmp94;
  if(tmp96)
  {
    tmp97 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp95, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp97 = (tmp95?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp97, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp98, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp100 = (modelica_boolean)tmp98;
  if(tmp100)
  {
    tmp101 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp99, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp101 = (tmp99?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp101, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp102, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp104 = (modelica_boolean)tmp102;
  if(tmp104)
  {
    tmp105 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp103, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp105 = (tmp103?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp105, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp106, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp108 = (modelica_boolean)tmp106;
  if(tmp108)
  {
    tmp109 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp107, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp109 = (tmp107?data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(5, tmp109, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp110, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp112 = (modelica_boolean)tmp110;
  if(tmp112)
  {
    tmp113 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp111, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp113 = (tmp111?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(6, tmp113, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp114, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp116 = (modelica_boolean)tmp114;
  if(tmp116)
  {
    tmp117 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp115, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp117 = (tmp115?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(7, tmp117, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp118, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp120 = (modelica_boolean)tmp118;
  if(tmp120)
  {
    tmp121 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp119, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp121 = (tmp119?data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(8, tmp121, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData543(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[2,3] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[36].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[36].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[36].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[1,3] */.max;
  /* static ls data for MatStm1.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[37].attribute /* MatStm1.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[37].attribute /* MatStm1.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[37].attribute /* MatStm1.compMasFrac[3,3] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA481(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,481};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp122;
  modelica_boolean tmp123;
  modelica_boolean tmp124;
  modelica_real tmp125;
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  modelica_real tmp129;
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  modelica_boolean tmp132;
  modelica_real tmp133;
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  modelica_real tmp138;
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  modelica_real tmp142;
  modelica_boolean tmp143;
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  modelica_real tmp146;
  modelica_boolean tmp147;
  modelica_boolean tmp148;
  modelica_boolean tmp149;
  modelica_real tmp150;
  modelica_boolean tmp151;
  modelica_boolean tmp152;
  modelica_boolean tmp153;
  modelica_boolean tmp154;
  modelica_real tmp155;
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  modelica_boolean tmp158;
  modelica_real tmp159;
  modelica_boolean tmp160;
  modelica_boolean tmp161;
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  modelica_real tmp164;
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  modelica_boolean tmp167;
  modelica_real tmp168;
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  modelica_boolean tmp172;
  modelica_real tmp173;
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  modelica_real tmp178;
  modelica_boolean tmp179;
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  modelica_real tmp182;
  modelica_boolean tmp183;
  modelica_boolean tmp184;
  modelica_boolean tmp185;
  modelica_real tmp186;
  modelica_boolean tmp187;
  modelica_boolean tmp188;
  modelica_boolean tmp189;
  modelica_real tmp190;
  modelica_boolean tmp191;
  modelica_boolean tmp192;
  modelica_boolean tmp193;
  modelica_boolean tmp194;
  modelica_real tmp195;
  modelica_boolean tmp196;
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  modelica_real tmp199;
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  modelica_boolean tmp202;
  modelica_real tmp203;
  modelica_boolean tmp204;
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  modelica_real tmp207;
  tmp122 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp124 = (modelica_boolean)tmp122;
  if(tmp124)
  {
    tmp125 = (-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp123 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp125 = (tmp123?-0.0:(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 6, (-(tmp125)), 0, linearSystemData, threadData);
  tmp126 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp128 = (modelica_boolean)tmp126;
  if(tmp128)
  {
    tmp129 = -0.0;
  }
  else
  {
    tmp127 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp129 = (tmp127?(-data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 8, (-(tmp129)), 1, linearSystemData, threadData);
  tmp130 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp132 = (modelica_boolean)tmp130;
  if(tmp132)
  {
    tmp133 = -1.0;
  }
  else
  {
    tmp131 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp133 = (tmp131?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp133)), 2, linearSystemData, threadData);
  tmp134 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 2, (-((tmp134?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp135 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp137 = (modelica_boolean)tmp135;
  if(tmp137)
  {
    tmp138 = 0.0;
  }
  else
  {
    tmp136 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp138 = (tmp136?(-data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp138)), 4, linearSystemData, threadData);
  tmp139 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp141 = (modelica_boolean)tmp139;
  if(tmp141)
  {
    tmp142 = 0.0;
  }
  else
  {
    tmp140 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp142 = (tmp140?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 8, (-(tmp142)), 5, linearSystemData, threadData);
  tmp143 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp145 = (modelica_boolean)tmp143;
  if(tmp145)
  {
    tmp146 = 0.0;
  }
  else
  {
    tmp144 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp146 = (tmp144?(-data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp146)), 6, linearSystemData, threadData);
  tmp147 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp149 = (modelica_boolean)tmp147;
  if(tmp149)
  {
    tmp150 = -1.0;
  }
  else
  {
    tmp148 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp150 = (tmp148?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 6, (-(tmp150)), 7, linearSystemData, threadData);
  tmp151 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 7, (-((tmp151?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp152 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp154 = (modelica_boolean)tmp152;
  if(tmp154)
  {
    tmp155 = -1.0;
  }
  else
  {
    tmp153 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp155 = (tmp153?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp155)), 9, linearSystemData, threadData);
  tmp156 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp158 = (modelica_boolean)tmp156;
  if(tmp158)
  {
    tmp159 = 0.0;
  }
  else
  {
    tmp157 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp159 = (tmp157?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 4, (-(tmp159)), 10, linearSystemData, threadData);
  tmp160 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 5, (-((tmp160?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp161 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp163 = (modelica_boolean)tmp161;
  if(tmp163)
  {
    tmp164 = 0.0;
  }
  else
  {
    tmp162 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp164 = (tmp162?(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 6, (-(tmp164)), 12, linearSystemData, threadData);
  tmp165 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp167 = (modelica_boolean)tmp165;
  if(tmp167)
  {
    tmp168 = 0.0;
  }
  else
  {
    tmp166 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp168 = (tmp166?(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp168)), 13, linearSystemData, threadData);
  tmp169 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 4, (-((tmp169?1.0:-0.0))), 14, linearSystemData, threadData);
  tmp170 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp172 = (modelica_boolean)tmp170;
  if(tmp172)
  {
    tmp173 = 0.0;
  }
  else
  {
    tmp171 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp173 = (tmp171?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 5, (-(tmp173)), 15, linearSystemData, threadData);
  tmp174 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(5, 3, (-((tmp174?1.0:-0.0))), 16, linearSystemData, threadData);
  tmp175 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp177 = (modelica_boolean)tmp175;
  if(tmp177)
  {
    tmp178 = 0.0;
  }
  else
  {
    tmp176 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp178 = (tmp176?(-data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(5, 4, (-(tmp178)), 17, linearSystemData, threadData);
  tmp179 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp181 = (modelica_boolean)tmp179;
  if(tmp181)
  {
    tmp182 = 0.0;
  }
  else
  {
    tmp180 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp182 = (tmp180?-0.0:1.0);
  }
  linearSystemData->setAElement(5, 7, (-(tmp182)), 18, linearSystemData, threadData);
  tmp183 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp185 = (modelica_boolean)tmp183;
  if(tmp185)
  {
    tmp186 = 0.0;
  }
  else
  {
    tmp184 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp186 = (tmp184?-0.0:1.0);
  }
  linearSystemData->setAElement(6, 2, (-(tmp186)), 19, linearSystemData, threadData);
  tmp187 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp189 = (modelica_boolean)tmp187;
  if(tmp189)
  {
    tmp190 = 0.0;
  }
  else
  {
    tmp188 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp190 = (tmp188?(-data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(6, 5, (-(tmp190)), 20, linearSystemData, threadData);
  tmp191 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(6, 8, (-((tmp191?1.0:-0.0))), 21, linearSystemData, threadData);
  tmp192 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp194 = (modelica_boolean)tmp192;
  if(tmp194)
  {
    tmp195 = (-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp193 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp195 = (tmp193?-0.0:(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(7, 1, (-(tmp195)), 22, linearSystemData, threadData);
  tmp196 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp198 = (modelica_boolean)tmp196;
  if(tmp198)
  {
    tmp199 = -0.0;
  }
  else
  {
    tmp197 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp199 = (tmp197?(-data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(7, 2, (-(tmp199)), 23, linearSystemData, threadData);
  tmp200 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp202 = (modelica_boolean)tmp200;
  if(tmp202)
  {
    tmp203 = (-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp201 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp203 = (tmp201?-0.0:(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(8, 0, (-(tmp203)), 24, linearSystemData, threadData);
  tmp204 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp206 = (modelica_boolean)tmp204;
  if(tmp206)
  {
    tmp207 = -0.0;
  }
  else
  {
    tmp205 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp207 = (tmp205?(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(8, 1, (-(tmp207)), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb481(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,481};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp208;
  modelica_boolean tmp209;
  modelica_boolean tmp210;
  modelica_real tmp211;
  modelica_boolean tmp212;
  modelica_boolean tmp213;
  modelica_boolean tmp214;
  modelica_real tmp215;
  modelica_boolean tmp216;
  modelica_boolean tmp217;
  modelica_boolean tmp218;
  modelica_real tmp219;
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
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  modelica_boolean tmp238;
  modelica_real tmp239;
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  modelica_real tmp243;
  tmp208 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp210 = (modelica_boolean)tmp208;
  if(tmp210)
  {
    tmp211 = data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp209 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp211 = (tmp209?data->localData[0]->realVars[264] /* MatStm3.compMasFlo[3,2] variable */:data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(0, tmp211, linearSystemData, threadData);
  tmp212 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp214 = (modelica_boolean)tmp212;
  if(tmp214)
  {
    tmp215 = 0.0;
  }
  else
  {
    tmp213 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp215 = (tmp213?data->localData[0]->realVars[262] /* MatStm3.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp215, linearSystemData, threadData);
  tmp216 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp218 = (modelica_boolean)tmp216;
  if(tmp218)
  {
    tmp219 = 0.0;
  }
  else
  {
    tmp217 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp219 = (tmp217?data->localData[0]->realVars[265] /* MatStm3.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp219, linearSystemData, threadData);
  tmp220 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp222 = (modelica_boolean)tmp220;
  if(tmp222)
  {
    tmp223 = 0.0;
  }
  else
  {
    tmp221 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp223 = (tmp221?data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp223, linearSystemData, threadData);
  tmp224 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp226 = (modelica_boolean)tmp224;
  if(tmp226)
  {
    tmp227 = 0.0;
  }
  else
  {
    tmp225 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp227 = (tmp225?data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp227, linearSystemData, threadData);
  tmp228 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp230 = (modelica_boolean)tmp228;
  if(tmp230)
  {
    tmp231 = 0.0;
  }
  else
  {
    tmp229 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp231 = (tmp229?data->localData[0]->realVars[263] /* MatStm3.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(5, tmp231, linearSystemData, threadData);
  tmp232 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp234 = (modelica_boolean)tmp232;
  if(tmp234)
  {
    tmp235 = 0.0;
  }
  else
  {
    tmp233 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp235 = (tmp233?data->localData[0]->realVars[260] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(6, tmp235, linearSystemData, threadData);
  tmp236 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp238 = (modelica_boolean)tmp236;
  if(tmp238)
  {
    tmp239 = data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp237 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp239 = (tmp237?data->localData[0]->realVars[261] /* MatStm3.compMasFlo[2,2] variable */:data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(7, tmp239, linearSystemData, threadData);
  tmp240 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp242 = (modelica_boolean)tmp240;
  if(tmp242)
  {
    tmp243 = data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp241 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp243 = (tmp241?data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */:data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(8, tmp243, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData481(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[266].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[266].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[266].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[267].attribute /* MatStm3.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[267].attribute /* MatStm3.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[267].attribute /* MatStm3.compMasFrac[1,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[270].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[270].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[270].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[274].attribute /* MatStm3.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[274].attribute /* MatStm3.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[274].attribute /* MatStm3.compMasFrac[3,3] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[272].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[272].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[272].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[269].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[269].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[269].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[268].attribute /* MatStm3.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[268].attribute /* MatStm3.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[268].attribute /* MatStm3.compMasFrac[1,3] */.max;
  /* static ls data for MatStm3.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[271].attribute /* MatStm3.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[271].attribute /* MatStm3.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[271].attribute /* MatStm3.compMasFrac[2,3] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[273].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[273].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[273].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA413(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,413};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  modelica_real tmp259;
  modelica_boolean tmp260;
  modelica_boolean tmp261;
  modelica_boolean tmp262;
  modelica_real tmp263;
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  modelica_real tmp268;
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  modelica_boolean tmp271;
  modelica_real tmp272;
  modelica_boolean tmp273;
  modelica_boolean tmp274;
  modelica_boolean tmp275;
  modelica_real tmp276;
  modelica_boolean tmp277;
  modelica_boolean tmp278;
  modelica_boolean tmp279;
  modelica_boolean tmp280;
  modelica_real tmp281;
  modelica_boolean tmp282;
  modelica_boolean tmp283;
  modelica_boolean tmp284;
  modelica_real tmp285;
  modelica_boolean tmp286;
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  modelica_real tmp289;
  modelica_boolean tmp290;
  modelica_boolean tmp291;
  modelica_boolean tmp292;
  modelica_boolean tmp293;
  modelica_real tmp294;
  modelica_boolean tmp295;
  modelica_boolean tmp296;
  modelica_boolean tmp297;
  modelica_real tmp298;
  modelica_boolean tmp299;
  modelica_boolean tmp300;
  modelica_boolean tmp301;
  modelica_boolean tmp302;
  modelica_real tmp303;
  modelica_boolean tmp304;
  modelica_boolean tmp305;
  modelica_boolean tmp306;
  modelica_real tmp307;
  modelica_boolean tmp308;
  modelica_boolean tmp309;
  modelica_boolean tmp310;
  modelica_boolean tmp311;
  modelica_real tmp312;
  modelica_boolean tmp313;
  modelica_boolean tmp314;
  modelica_boolean tmp315;
  modelica_boolean tmp316;
  modelica_real tmp317;
  modelica_boolean tmp318;
  modelica_boolean tmp319;
  modelica_boolean tmp320;
  modelica_real tmp321;
  modelica_boolean tmp322;
  modelica_boolean tmp323;
  modelica_boolean tmp324;
  modelica_real tmp325;
  modelica_boolean tmp326;
  modelica_boolean tmp327;
  modelica_boolean tmp328;
  modelica_real tmp329;
  tmp244 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp246 = (modelica_boolean)tmp244;
  if(tmp246)
  {
    tmp247 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp245 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp247 = (tmp245?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 7, (-(tmp247)), 0, linearSystemData, threadData);
  tmp248 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp250 = (modelica_boolean)tmp248;
  if(tmp250)
  {
    tmp251 = -0.0;
  }
  else
  {
    tmp249 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp251 = (tmp249?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 8, (-(tmp251)), 1, linearSystemData, threadData);
  tmp252 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp254 = (modelica_boolean)tmp252;
  if(tmp254)
  {
    tmp255 = 0.0;
  }
  else
  {
    tmp253 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp255 = (tmp253?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp255)), 2, linearSystemData, threadData);
  tmp256 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp258 = (modelica_boolean)tmp256;
  if(tmp258)
  {
    tmp259 = 0.0;
  }
  else
  {
    tmp257 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp259 = (tmp257?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp259)), 3, linearSystemData, threadData);
  tmp260 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp262 = (modelica_boolean)tmp260;
  if(tmp262)
  {
    tmp263 = -1.0;
  }
  else
  {
    tmp261 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp263 = (tmp261?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp263)), 4, linearSystemData, threadData);
  tmp264 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 8, (-((tmp264?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp265 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp267 = (modelica_boolean)tmp265;
  if(tmp267)
  {
    tmp268 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp266 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp268 = (tmp266?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 6, (-(tmp268)), 6, linearSystemData, threadData);
  tmp269 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp271 = (modelica_boolean)tmp269;
  if(tmp271)
  {
    tmp272 = -0.0;
  }
  else
  {
    tmp270 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp272 = (tmp270?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 7, (-(tmp272)), 7, linearSystemData, threadData);
  tmp273 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp275 = (modelica_boolean)tmp273;
  if(tmp275)
  {
    tmp276 = 0.0;
  }
  else
  {
    tmp274 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp276 = (tmp274?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp276)), 8, linearSystemData, threadData);
  tmp277 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 2, (-((tmp277?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp278 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp280 = (modelica_boolean)tmp278;
  if(tmp280)
  {
    tmp281 = 0.0;
  }
  else
  {
    tmp279 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp281 = (tmp279?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 5, (-(tmp281)), 10, linearSystemData, threadData);
  tmp282 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp284 = (modelica_boolean)tmp282;
  if(tmp284)
  {
    tmp285 = -1.0;
  }
  else
  {
    tmp283 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp285 = (tmp283?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 6, (-(tmp285)), 11, linearSystemData, threadData);
  tmp286 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp288 = (modelica_boolean)tmp286;
  if(tmp288)
  {
    tmp289 = 0.0;
  }
  else
  {
    tmp287 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp289 = (tmp287?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 3, (-(tmp289)), 12, linearSystemData, threadData);
  tmp290 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 4, (-((tmp290?1.0:-0.0))), 13, linearSystemData, threadData);
  tmp291 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp293 = (modelica_boolean)tmp291;
  if(tmp293)
  {
    tmp294 = 0.0;
  }
  else
  {
    tmp292 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp294 = (tmp292?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(4, 5, (-(tmp294)), 14, linearSystemData, threadData);
  tmp295 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp297 = (modelica_boolean)tmp295;
  if(tmp297)
  {
    tmp298 = -1.0;
  }
  else
  {
    tmp296 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp298 = (tmp296?-0.0:-1.0);
  }
  linearSystemData->setAElement(5, 0, (-(tmp298)), 15, linearSystemData, threadData);
  tmp299 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(5, 3, (-((tmp299?1.0:-0.0))), 16, linearSystemData, threadData);
  tmp300 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp302 = (modelica_boolean)tmp300;
  if(tmp302)
  {
    tmp303 = 0.0;
  }
  else
  {
    tmp301 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp303 = (tmp301?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(5, 4, (-(tmp303)), 17, linearSystemData, threadData);
  tmp304 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp306 = (modelica_boolean)tmp304;
  if(tmp306)
  {
    tmp307 = 0.0;
  }
  else
  {
    tmp305 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp307 = (tmp305?-0.0:1.0);
  }
  linearSystemData->setAElement(6, 2, (-(tmp307)), 18, linearSystemData, threadData);
  tmp308 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(6, 5, (-((tmp308?1.0:-0.0))), 19, linearSystemData, threadData);
  tmp309 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp311 = (modelica_boolean)tmp309;
  if(tmp311)
  {
    tmp312 = 0.0;
  }
  else
  {
    tmp310 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp312 = (tmp310?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(6, 6, (-(tmp312)), 20, linearSystemData, threadData);
  tmp313 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(7, 1, (-((tmp313?1.0:-0.0))), 21, linearSystemData, threadData);
  tmp314 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp316 = (modelica_boolean)tmp314;
  if(tmp316)
  {
    tmp317 = 0.0;
  }
  else
  {
    tmp315 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp317 = (tmp315?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(7, 2, (-(tmp317)), 22, linearSystemData, threadData);
  tmp318 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp320 = (modelica_boolean)tmp318;
  if(tmp320)
  {
    tmp321 = 0.0;
  }
  else
  {
    tmp319 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp321 = (tmp319?-0.0:1.0);
  }
  linearSystemData->setAElement(7, 8, (-(tmp321)), 23, linearSystemData, threadData);
  tmp322 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp324 = (modelica_boolean)tmp322;
  if(tmp324)
  {
    tmp325 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp323 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp325 = (tmp323?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(8, 0, (-(tmp325)), 24, linearSystemData, threadData);
  tmp326 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp328 = (modelica_boolean)tmp326;
  if(tmp328)
  {
    tmp329 = -0.0;
  }
  else
  {
    tmp327 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp329 = (tmp327?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(8, 1, (-(tmp329)), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb413(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,413};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp330;
  modelica_boolean tmp331;
  modelica_boolean tmp332;
  modelica_real tmp333;
  modelica_boolean tmp334;
  modelica_boolean tmp335;
  modelica_boolean tmp336;
  modelica_real tmp337;
  modelica_boolean tmp338;
  modelica_boolean tmp339;
  modelica_boolean tmp340;
  modelica_real tmp341;
  modelica_boolean tmp342;
  modelica_boolean tmp343;
  modelica_boolean tmp344;
  modelica_real tmp345;
  modelica_boolean tmp346;
  modelica_boolean tmp347;
  modelica_boolean tmp348;
  modelica_real tmp349;
  modelica_boolean tmp350;
  modelica_boolean tmp351;
  modelica_boolean tmp352;
  modelica_real tmp353;
  modelica_boolean tmp354;
  modelica_boolean tmp355;
  modelica_boolean tmp356;
  modelica_real tmp357;
  modelica_boolean tmp358;
  modelica_boolean tmp359;
  modelica_boolean tmp360;
  modelica_real tmp361;
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  modelica_boolean tmp364;
  modelica_real tmp365;
  tmp330 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp332 = (modelica_boolean)tmp330;
  if(tmp332)
  {
    tmp333 = data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp331 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp333 = (tmp331?data->localData[0]->realVars[143] /* MatStm2.compMasFlo[2,2] variable */:data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(0, tmp333, linearSystemData, threadData);
  tmp334 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp336 = (modelica_boolean)tmp334;
  if(tmp336)
  {
    tmp337 = 0.0;
  }
  else
  {
    tmp335 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp337 = (tmp335?data->localData[0]->realVars[144] /* MatStm2.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp337, linearSystemData, threadData);
  tmp338 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp340 = (modelica_boolean)tmp338;
  if(tmp340)
  {
    tmp341 = data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp339 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp341 = (tmp339?data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */:data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp341, linearSystemData, threadData);
  tmp342 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp344 = (modelica_boolean)tmp342;
  if(tmp344)
  {
    tmp345 = 0.0;
  }
  else
  {
    tmp343 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp345 = (tmp343?data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp345, linearSystemData, threadData);
  tmp346 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp348 = (modelica_boolean)tmp346;
  if(tmp348)
  {
    tmp349 = 0.0;
  }
  else
  {
    tmp347 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp349 = (tmp347?data->localData[0]->realVars[145] /* MatStm2.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp349, linearSystemData, threadData);
  tmp350 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp352 = (modelica_boolean)tmp350;
  if(tmp352)
  {
    tmp353 = 0.0;
  }
  else
  {
    tmp351 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp353 = (tmp351?data->localData[0]->realVars[147] /* MatStm2.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(5, tmp353, linearSystemData, threadData);
  tmp354 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp356 = (modelica_boolean)tmp354;
  if(tmp356)
  {
    tmp357 = 0.0;
  }
  else
  {
    tmp355 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp357 = (tmp355?data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(6, tmp357, linearSystemData, threadData);
  tmp358 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp360 = (modelica_boolean)tmp358;
  if(tmp360)
  {
    tmp361 = 0.0;
  }
  else
  {
    tmp359 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp361 = (tmp359?data->localData[0]->realVars[142] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(7, tmp361, linearSystemData, threadData);
  tmp362 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp364 = (modelica_boolean)tmp362;
  if(tmp364)
  {
    tmp365 = data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp363 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp365 = (tmp363?data->localData[0]->realVars[146] /* MatStm2.compMasFlo[3,2] variable */:data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(8, tmp365, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData413(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[150].attribute /* MatStm2.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[150].attribute /* MatStm2.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[150].attribute /* MatStm2.compMasFrac[1,3] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[155].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[155].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[155].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[151].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[151].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[151].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[153].attribute /* MatStm2.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[153].attribute /* MatStm2.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[153].attribute /* MatStm2.compMasFrac[2,3] */.max;
  /* static ls data for MatStm2.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[156].attribute /* MatStm2.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[156].attribute /* MatStm2.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[156].attribute /* MatStm2.compMasFrac[3,3] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[154].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[154].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[154].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[148].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[148].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[148].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[149].attribute /* MatStm2.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[149].attribute /* MatStm2.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[149].attribute /* MatStm2.compMasFrac[1,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[152].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[152].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[152].attribute /* MatStm2.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA291(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,291};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp366;
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  modelica_real tmp369;
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  modelica_boolean tmp372;
  modelica_boolean tmp373;
  modelica_real tmp374;
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  modelica_boolean tmp377;
  modelica_real tmp378;
  modelica_boolean tmp379;
  modelica_boolean tmp380;
  modelica_boolean tmp381;
  modelica_real tmp382;
  modelica_boolean tmp383;
  modelica_boolean tmp384;
  modelica_boolean tmp385;
  modelica_boolean tmp386;
  modelica_real tmp387;
  modelica_boolean tmp388;
  modelica_boolean tmp389;
  modelica_boolean tmp390;
  modelica_boolean tmp391;
  modelica_real tmp392;
  modelica_boolean tmp393;
  modelica_boolean tmp394;
  modelica_boolean tmp395;
  modelica_real tmp396;
  modelica_boolean tmp397;
  modelica_boolean tmp398;
  modelica_boolean tmp399;
  modelica_real tmp400;
  modelica_boolean tmp401;
  modelica_boolean tmp402;
  modelica_boolean tmp403;
  modelica_real tmp404;
  modelica_boolean tmp405;
  modelica_boolean tmp406;
  modelica_boolean tmp407;
  modelica_boolean tmp408;
  modelica_real tmp409;
  modelica_boolean tmp410;
  modelica_boolean tmp411;
  modelica_boolean tmp412;
  modelica_real tmp413;
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
  modelica_boolean tmp429;
  modelica_real tmp430;
  modelica_boolean tmp431;
  modelica_boolean tmp432;
  modelica_boolean tmp433;
  modelica_real tmp434;
  modelica_boolean tmp435;
  modelica_boolean tmp436;
  modelica_boolean tmp437;
  modelica_boolean tmp438;
  modelica_real tmp439;
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
  tmp366 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp368 = (modelica_boolean)tmp366;
  if(tmp368)
  {
    tmp369 = -1.0;
  }
  else
  {
    tmp367 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp369 = (tmp367?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp369)), 0, linearSystemData, threadData);
  tmp370 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp370?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp371 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp373 = (modelica_boolean)tmp371;
  if(tmp373)
  {
    tmp374 = 0.0;
  }
  else
  {
    tmp372 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp374 = (tmp372?(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 6, (-(tmp374)), 2, linearSystemData, threadData);
  tmp375 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp377 = (modelica_boolean)tmp375;
  if(tmp377)
  {
    tmp378 = 0.0;
  }
  else
  {
    tmp376 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp378 = (tmp376?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 8, (-(tmp378)), 3, linearSystemData, threadData);
  tmp379 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp381 = (modelica_boolean)tmp379;
  if(tmp381)
  {
    tmp382 = 0.0;
  }
  else
  {
    tmp380 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp382 = (tmp380?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp382)), 4, linearSystemData, threadData);
  tmp383 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 7, (-((tmp383?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp384 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp386 = (modelica_boolean)tmp384;
  if(tmp386)
  {
    tmp387 = 0.0;
  }
  else
  {
    tmp385 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp387 = (tmp385?(-data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(1, 8, (-(tmp387)), 6, linearSystemData, threadData);
  tmp388 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 4, (-((tmp388?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp389 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp391 = (modelica_boolean)tmp389;
  if(tmp391)
  {
    tmp392 = -1.0;
  }
  else
  {
    tmp390 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp392 = (tmp390?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 6, (-(tmp392)), 8, linearSystemData, threadData);
  tmp393 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp395 = (modelica_boolean)tmp393;
  if(tmp395)
  {
    tmp396 = 0.0;
  }
  else
  {
    tmp394 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp396 = (tmp394?(-data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 7, (-(tmp396)), 9, linearSystemData, threadData);
  tmp397 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp399 = (modelica_boolean)tmp397;
  if(tmp399)
  {
    tmp400 = -0.0;
  }
  else
  {
    tmp398 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp400 = (tmp398?(-data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 5, (-(tmp400)), 10, linearSystemData, threadData);
  tmp401 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp403 = (modelica_boolean)tmp401;
  if(tmp403)
  {
    tmp404 = (-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp402 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp404 = (tmp402?-0.0:(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 6, (-(tmp404)), 11, linearSystemData, threadData);
  tmp405 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp405?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp406 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp408 = (modelica_boolean)tmp406;
  if(tmp408)
  {
    tmp409 = -1.0;
  }
  else
  {
    tmp407 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp409 = (tmp407?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp409)), 13, linearSystemData, threadData);
  tmp410 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp412 = (modelica_boolean)tmp410;
  if(tmp412)
  {
    tmp413 = 0.0;
  }
  else
  {
    tmp411 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp413 = (tmp411?(-data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp413)), 14, linearSystemData, threadData);
  tmp414 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp416 = (modelica_boolean)tmp414;
  if(tmp416)
  {
    tmp417 = 0.0;
  }
  else
  {
    tmp415 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp417 = (tmp415?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 5, (-(tmp417)), 15, linearSystemData, threadData);
  tmp418 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp420 = (modelica_boolean)tmp418;
  if(tmp420)
  {
    tmp421 = 0.0;
  }
  else
  {
    tmp419 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp421 = (tmp419?-0.0:1.0);
  }
  linearSystemData->setAElement(5, 0, (-(tmp421)), 16, linearSystemData, threadData);
  tmp422 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp424 = (modelica_boolean)tmp422;
  if(tmp424)
  {
    tmp425 = 0.0;
  }
  else
  {
    tmp423 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp425 = (tmp423?(-data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(5, 3, (-(tmp425)), 17, linearSystemData, threadData);
  tmp426 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(5, 5, (-((tmp426?1.0:-0.0))), 18, linearSystemData, threadData);
  tmp427 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp429 = (modelica_boolean)tmp427;
  if(tmp429)
  {
    tmp430 = 0.0;
  }
  else
  {
    tmp428 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp430 = (tmp428?(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(6, 2, (-(tmp430)), 19, linearSystemData, threadData);
  tmp431 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp433 = (modelica_boolean)tmp431;
  if(tmp433)
  {
    tmp434 = 0.0;
  }
  else
  {
    tmp432 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp434 = (tmp432?-0.0:1.0);
  }
  linearSystemData->setAElement(6, 3, (-(tmp434)), 20, linearSystemData, threadData);
  tmp435 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(6, 8, (-((tmp435?1.0:-0.0))), 21, linearSystemData, threadData);
  tmp436 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp438 = (modelica_boolean)tmp436;
  if(tmp438)
  {
    tmp439 = -0.0;
  }
  else
  {
    tmp437 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp439 = (tmp437?(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(7, 1, (-(tmp439)), 22, linearSystemData, threadData);
  tmp440 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp442 = (modelica_boolean)tmp440;
  if(tmp442)
  {
    tmp443 = (-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp441 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp443 = (tmp441?-0.0:(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(7, 2, (-(tmp443)), 23, linearSystemData, threadData);
  tmp444 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp446 = (modelica_boolean)tmp444;
  if(tmp446)
  {
    tmp447 = -0.0;
  }
  else
  {
    tmp445 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp447 = (tmp445?(-data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(8, 0, (-(tmp447)), 24, linearSystemData, threadData);
  tmp448 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp450 = (modelica_boolean)tmp448;
  if(tmp450)
  {
    tmp451 = (-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp449 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp451 = (tmp449?-0.0:(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(8, 1, (-(tmp451)), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb291(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,291};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp479;
  modelica_boolean tmp480;
  modelica_boolean tmp481;
  modelica_boolean tmp482;
  modelica_real tmp483;
  modelica_boolean tmp484;
  modelica_boolean tmp485;
  modelica_boolean tmp486;
  modelica_real tmp487;
  tmp452 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp454 = (modelica_boolean)tmp452;
  if(tmp454)
  {
    tmp455 = 0.0;
  }
  else
  {
    tmp453 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp455 = (tmp453?data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp455, linearSystemData, threadData);
  tmp456 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp458 = (modelica_boolean)tmp456;
  if(tmp458)
  {
    tmp459 = 0.0;
  }
  else
  {
    tmp457 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp459 = (tmp457?data->localData[0]->realVars[263] /* MatStm3.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp459, linearSystemData, threadData);
  tmp460 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp462 = (modelica_boolean)tmp460;
  if(tmp462)
  {
    tmp463 = 0.0;
  }
  else
  {
    tmp461 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp463 = (tmp461?data->localData[0]->realVars[265] /* MatStm3.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp463, linearSystemData, threadData);
  tmp464 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp466 = (modelica_boolean)tmp464;
  if(tmp466)
  {
    tmp467 = data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp465 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp467 = (tmp465?data->localData[0]->realVars[264] /* MatStm3.compMasFlo[3,2] variable */:data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(3, tmp467, linearSystemData, threadData);
  tmp468 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp470 = (modelica_boolean)tmp468;
  if(tmp470)
  {
    tmp471 = 0.0;
  }
  else
  {
    tmp469 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp471 = (tmp469?data->localData[0]->realVars[262] /* MatStm3.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp471, linearSystemData, threadData);
  tmp472 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp474 = (modelica_boolean)tmp472;
  if(tmp474)
  {
    tmp475 = 0.0;
  }
  else
  {
    tmp473 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp475 = (tmp473?data->localData[0]->realVars[260] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(5, tmp475, linearSystemData, threadData);
  tmp476 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp478 = (modelica_boolean)tmp476;
  if(tmp478)
  {
    tmp479 = 0.0;
  }
  else
  {
    tmp477 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp479 = (tmp477?data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(6, tmp479, linearSystemData, threadData);
  tmp480 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp482 = (modelica_boolean)tmp480;
  if(tmp482)
  {
    tmp483 = data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp481 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp483 = (tmp481?data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */:data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(7, tmp483, linearSystemData, threadData);
  tmp484 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp486 = (modelica_boolean)tmp484;
  if(tmp486)
  {
    tmp487 = data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp485 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp487 = (tmp485?data->localData[0]->realVars[261] /* MatStm3.compMasFlo[2,2] variable */:data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(8, tmp487, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData291(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[270].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[270].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[270].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[267].attribute /* MatStm3.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[267].attribute /* MatStm3.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[267].attribute /* MatStm3.compMasFrac[1,2] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[266].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[266].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[266].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[269].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[269].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[269].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[271].attribute /* MatStm3.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[271].attribute /* MatStm3.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[271].attribute /* MatStm3.compMasFrac[2,3] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[273].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[273].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[273].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[268].attribute /* MatStm3.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[268].attribute /* MatStm3.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[268].attribute /* MatStm3.compMasFrac[1,3] */.max;
  /* static ls data for MatStm3.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[274].attribute /* MatStm3.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[274].attribute /* MatStm3.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[274].attribute /* MatStm3.compMasFrac[3,3] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[272].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[272].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[272].attribute /* MatStm3.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA251(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,251};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp488;
  modelica_boolean tmp489;
  modelica_boolean tmp490;
  modelica_real tmp491;
  modelica_boolean tmp492;
  modelica_boolean tmp493;
  modelica_boolean tmp494;
  modelica_boolean tmp495;
  modelica_real tmp496;
  modelica_boolean tmp497;
  modelica_boolean tmp498;
  modelica_boolean tmp499;
  modelica_real tmp500;
  modelica_boolean tmp501;
  modelica_boolean tmp502;
  modelica_boolean tmp503;
  modelica_real tmp504;
  modelica_boolean tmp505;
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
  modelica_real tmp522;
  modelica_boolean tmp523;
  modelica_boolean tmp524;
  modelica_boolean tmp525;
  modelica_real tmp526;
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
  modelica_real tmp564;
  modelica_boolean tmp565;
  modelica_boolean tmp566;
  modelica_boolean tmp567;
  modelica_boolean tmp568;
  modelica_real tmp569;
  modelica_boolean tmp570;
  modelica_boolean tmp571;
  modelica_boolean tmp572;
  modelica_real tmp573;
  tmp488 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp490 = (modelica_boolean)tmp488;
  if(tmp490)
  {
    tmp491 = -1.0;
  }
  else
  {
    tmp489 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp491 = (tmp489?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 5, (-(tmp491)), 0, linearSystemData, threadData);
  tmp492 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 7, (-((tmp492?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp493 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp495 = (modelica_boolean)tmp493;
  if(tmp495)
  {
    tmp496 = 0.0;
  }
  else
  {
    tmp494 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp496 = (tmp494?(-data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 8, (-(tmp496)), 2, linearSystemData, threadData);
  tmp497 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp499 = (modelica_boolean)tmp497;
  if(tmp499)
  {
    tmp500 = 0.0;
  }
  else
  {
    tmp498 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp500 = (tmp498?(-data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp500)), 3, linearSystemData, threadData);
  tmp501 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp503 = (modelica_boolean)tmp501;
  if(tmp503)
  {
    tmp504 = 0.0;
  }
  else
  {
    tmp502 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp504 = (tmp502?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp504)), 4, linearSystemData, threadData);
  tmp505 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 8, (-((tmp505?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp506 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp508 = (modelica_boolean)tmp506;
  if(tmp508)
  {
    tmp509 = -1.0;
  }
  else
  {
    tmp507 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp509 = (tmp507?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp509)), 6, linearSystemData, threadData);
  tmp510 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp510?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp511 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp513 = (modelica_boolean)tmp511;
  if(tmp513)
  {
    tmp514 = 0.0;
  }
  else
  {
    tmp512 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp514 = (tmp512?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 6, (-(tmp514)), 8, linearSystemData, threadData);
  tmp515 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp517 = (modelica_boolean)tmp515;
  if(tmp517)
  {
    tmp518 = 0.0;
  }
  else
  {
    tmp516 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp518 = (tmp516?(-data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 7, (-(tmp518)), 9, linearSystemData, threadData);
  tmp519 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp521 = (modelica_boolean)tmp519;
  if(tmp521)
  {
    tmp522 = (-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp520 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp522 = (tmp520?-0.0:(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 5, (-(tmp522)), 10, linearSystemData, threadData);
  tmp523 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp525 = (modelica_boolean)tmp523;
  if(tmp525)
  {
    tmp526 = -0.0;
  }
  else
  {
    tmp524 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp526 = (tmp524?(-data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 6, (-(tmp526)), 11, linearSystemData, threadData);
  tmp527 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp529 = (modelica_boolean)tmp527;
  if(tmp529)
  {
    tmp530 = 0.0;
  }
  else
  {
    tmp528 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp530 = (tmp528?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp530)), 12, linearSystemData, threadData);
  tmp531 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp533 = (modelica_boolean)tmp531;
  if(tmp533)
  {
    tmp534 = -1.0;
  }
  else
  {
    tmp532 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp534 = (tmp532?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp534)), 13, linearSystemData, threadData);
  tmp535 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 4, (-((tmp535?1.0:-0.0))), 14, linearSystemData, threadData);
  tmp536 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp538 = (modelica_boolean)tmp536;
  if(tmp538)
  {
    tmp539 = 0.0;
  }
  else
  {
    tmp537 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp539 = (tmp537?(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 5, (-(tmp539)), 15, linearSystemData, threadData);
  tmp540 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp542 = (modelica_boolean)tmp540;
  if(tmp542)
  {
    tmp543 = 0.0;
  }
  else
  {
    tmp541 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp543 = (tmp541?-0.0:1.0);
  }
  linearSystemData->setAElement(5, 3, (-(tmp543)), 16, linearSystemData, threadData);
  tmp544 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp546 = (modelica_boolean)tmp544;
  if(tmp546)
  {
    tmp547 = 0.0;
  }
  else
  {
    tmp545 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp547 = (tmp545?(-data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(5, 4, (-(tmp547)), 17, linearSystemData, threadData);
  tmp548 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(5, 6, (-((tmp548?1.0:-0.0))), 18, linearSystemData, threadData);
  tmp549 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp551 = (modelica_boolean)tmp549;
  if(tmp551)
  {
    tmp552 = (-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp550 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp552 = (tmp550?-0.0:(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(6, 2, (-(tmp552)), 19, linearSystemData, threadData);
  tmp553 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp555 = (modelica_boolean)tmp553;
  if(tmp555)
  {
    tmp556 = -0.0;
  }
  else
  {
    tmp554 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp556 = (tmp554?(-data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(6, 3, (-(tmp556)), 20, linearSystemData, threadData);
  tmp557 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp559 = (modelica_boolean)tmp557;
  if(tmp559)
  {
    tmp560 = (-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp558 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp560 = (tmp558?-0.0:(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(7, 1, (-(tmp560)), 21, linearSystemData, threadData);
  tmp561 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp563 = (modelica_boolean)tmp561;
  if(tmp563)
  {
    tmp564 = -0.0;
  }
  else
  {
    tmp562 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp564 = (tmp562?(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(7, 2, (-(tmp564)), 22, linearSystemData, threadData);
  tmp565 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(8, 0, (-((tmp565?1.0:-0.0))), 23, linearSystemData, threadData);
  tmp566 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp568 = (modelica_boolean)tmp566;
  if(tmp568)
  {
    tmp569 = 0.0;
  }
  else
  {
    tmp567 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp569 = (tmp567?(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(8, 1, (-(tmp569)), 24, linearSystemData, threadData);
  tmp570 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp572 = (modelica_boolean)tmp570;
  if(tmp572)
  {
    tmp573 = 0.0;
  }
  else
  {
    tmp571 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp573 = (tmp571?-0.0:1.0);
  }
  linearSystemData->setAElement(8, 4, (-(tmp573)), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb251(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,251};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp590;
  modelica_boolean tmp591;
  modelica_boolean tmp592;
  modelica_real tmp593;
  modelica_boolean tmp594;
  modelica_boolean tmp595;
  modelica_boolean tmp596;
  modelica_real tmp597;
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
  tmp574 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp576 = (modelica_boolean)tmp574;
  if(tmp576)
  {
    tmp577 = 0.0;
  }
  else
  {
    tmp575 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp577 = (tmp575?data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp577, linearSystemData, threadData);
  tmp578 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp580 = (modelica_boolean)tmp578;
  if(tmp580)
  {
    tmp581 = 0.0;
  }
  else
  {
    tmp579 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp581 = (tmp579?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp581, linearSystemData, threadData);
  tmp582 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp584 = (modelica_boolean)tmp582;
  if(tmp584)
  {
    tmp585 = 0.0;
  }
  else
  {
    tmp583 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp585 = (tmp583?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp585, linearSystemData, threadData);
  tmp586 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp588 = (modelica_boolean)tmp586;
  if(tmp588)
  {
    tmp589 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp587 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp589 = (tmp587?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(3, tmp589, linearSystemData, threadData);
  tmp590 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp592 = (modelica_boolean)tmp590;
  if(tmp592)
  {
    tmp593 = 0.0;
  }
  else
  {
    tmp591 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp593 = (tmp591?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp593, linearSystemData, threadData);
  tmp594 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp596 = (modelica_boolean)tmp594;
  if(tmp596)
  {
    tmp597 = 0.0;
  }
  else
  {
    tmp595 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp597 = (tmp595?data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(5, tmp597, linearSystemData, threadData);
  tmp598 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp600 = (modelica_boolean)tmp598;
  if(tmp600)
  {
    tmp601 = data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp599 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp601 = (tmp599?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,2] variable */:data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(6, tmp601, linearSystemData, threadData);
  tmp602 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp604 = (modelica_boolean)tmp602;
  if(tmp604)
  {
    tmp605 = data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp603 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp605 = (tmp603?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */:data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(7, tmp605, linearSystemData, threadData);
  tmp606 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp608 = (modelica_boolean)tmp606;
  if(tmp608)
  {
    tmp609 = 0.0;
  }
  else
  {
    tmp607 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp609 = (tmp607?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(8, tmp609, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData251(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[1,3] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[36].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[36].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[36].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[2,3] */.max;
  /* static ls data for MatStm1.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[37].attribute /* MatStm1.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[37].attribute /* MatStm1.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[37].attribute /* MatStm1.compMasFrac[3,3] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA152(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,152};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp610;
  modelica_boolean tmp611;
  modelica_boolean tmp612;
  modelica_boolean tmp613;
  modelica_real tmp614;
  modelica_boolean tmp615;
  modelica_boolean tmp616;
  modelica_boolean tmp617;
  modelica_real tmp618;
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
  modelica_boolean tmp630;
  modelica_boolean tmp631;
  modelica_real tmp632;
  modelica_boolean tmp633;
  modelica_boolean tmp634;
  modelica_boolean tmp635;
  modelica_real tmp636;
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
  modelica_real tmp690;
  modelica_boolean tmp691;
  modelica_boolean tmp692;
  modelica_boolean tmp693;
  modelica_real tmp694;
  modelica_boolean tmp695;
  tmp610 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp610?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp611 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp613 = (modelica_boolean)tmp611;
  if(tmp613)
  {
    tmp614 = -1.0;
  }
  else
  {
    tmp612 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp614 = (tmp612?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 6, (-(tmp614)), 1, linearSystemData, threadData);
  tmp615 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp617 = (modelica_boolean)tmp615;
  if(tmp617)
  {
    tmp618 = 0.0;
  }
  else
  {
    tmp616 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp618 = (tmp616?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 8, (-(tmp618)), 2, linearSystemData, threadData);
  tmp619 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp621 = (modelica_boolean)tmp619;
  if(tmp621)
  {
    tmp622 = 0.0;
  }
  else
  {
    tmp620 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp622 = (tmp620?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp622)), 3, linearSystemData, threadData);
  tmp623 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp625 = (modelica_boolean)tmp623;
  if(tmp625)
  {
    tmp626 = 0.0;
  }
  else
  {
    tmp624 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp626 = (tmp624?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp626)), 4, linearSystemData, threadData);
  tmp627 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 8, (-((tmp627?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp628 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp628?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp629 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp631 = (modelica_boolean)tmp629;
  if(tmp631)
  {
    tmp632 = -1.0;
  }
  else
  {
    tmp630 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp632 = (tmp630?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp632)), 7, linearSystemData, threadData);
  tmp633 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp635 = (modelica_boolean)tmp633;
  if(tmp635)
  {
    tmp636 = 0.0;
  }
  else
  {
    tmp634 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp636 = (tmp634?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 6, (-(tmp636)), 8, linearSystemData, threadData);
  tmp637 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp639 = (modelica_boolean)tmp637;
  if(tmp639)
  {
    tmp640 = 0.0;
  }
  else
  {
    tmp638 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp640 = (tmp638?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 7, (-(tmp640)), 9, linearSystemData, threadData);
  tmp641 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp643 = (modelica_boolean)tmp641;
  if(tmp643)
  {
    tmp644 = -0.0;
  }
  else
  {
    tmp642 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp644 = (tmp642?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 5, (-(tmp644)), 10, linearSystemData, threadData);
  tmp645 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp647 = (modelica_boolean)tmp645;
  if(tmp647)
  {
    tmp648 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp646 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp648 = (tmp646?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 6, (-(tmp648)), 11, linearSystemData, threadData);
  tmp649 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp651 = (modelica_boolean)tmp649;
  if(tmp651)
  {
    tmp652 = -1.0;
  }
  else
  {
    tmp650 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp652 = (tmp650?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp652)), 12, linearSystemData, threadData);
  tmp653 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 3, (-((tmp653?1.0:-0.0))), 13, linearSystemData, threadData);
  tmp654 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp656 = (modelica_boolean)tmp654;
  if(tmp656)
  {
    tmp657 = 0.0;
  }
  else
  {
    tmp655 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp657 = (tmp655?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp657)), 14, linearSystemData, threadData);
  tmp658 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp660 = (modelica_boolean)tmp658;
  if(tmp660)
  {
    tmp661 = 0.0;
  }
  else
  {
    tmp659 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp661 = (tmp659?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 5, (-(tmp661)), 15, linearSystemData, threadData);
  tmp662 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp664 = (modelica_boolean)tmp662;
  if(tmp664)
  {
    tmp665 = 0.0;
  }
  else
  {
    tmp663 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp665 = (tmp663?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(5, 0, (-(tmp665)), 16, linearSystemData, threadData);
  tmp666 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp668 = (modelica_boolean)tmp666;
  if(tmp668)
  {
    tmp669 = 0.0;
  }
  else
  {
    tmp667 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp669 = (tmp667?-0.0:1.0);
  }
  linearSystemData->setAElement(5, 3, (-(tmp669)), 17, linearSystemData, threadData);
  tmp670 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(5, 5, (-((tmp670?1.0:-0.0))), 18, linearSystemData, threadData);
  tmp671 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp673 = (modelica_boolean)tmp671;
  if(tmp673)
  {
    tmp674 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp672 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp674 = (tmp672?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(6, 2, (-(tmp674)), 19, linearSystemData, threadData);
  tmp675 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp677 = (modelica_boolean)tmp675;
  if(tmp677)
  {
    tmp678 = -0.0;
  }
  else
  {
    tmp676 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp678 = (tmp676?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(6, 3, (-(tmp678)), 20, linearSystemData, threadData);
  tmp679 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp681 = (modelica_boolean)tmp679;
  if(tmp681)
  {
    tmp682 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp680 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp682 = (tmp680?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(7, 1, (-(tmp682)), 21, linearSystemData, threadData);
  tmp683 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp685 = (modelica_boolean)tmp683;
  if(tmp685)
  {
    tmp686 = -0.0;
  }
  else
  {
    tmp684 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp686 = (tmp684?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(7, 2, (-(tmp686)), 22, linearSystemData, threadData);
  tmp687 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp689 = (modelica_boolean)tmp687;
  if(tmp689)
  {
    tmp690 = 0.0;
  }
  else
  {
    tmp688 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp690 = (tmp688?-0.0:1.0);
  }
  linearSystemData->setAElement(8, 0, (-(tmp690)), 23, linearSystemData, threadData);
  tmp691 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp693 = (modelica_boolean)tmp691;
  if(tmp693)
  {
    tmp694 = 0.0;
  }
  else
  {
    tmp692 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp694 = (tmp692?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(8, 1, (-(tmp694)), 24, linearSystemData, threadData);
  tmp695 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(8, 7, (-((tmp695?1.0:-0.0))), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb152(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,152};
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
  tmp696 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp698 = (modelica_boolean)tmp696;
  if(tmp698)
  {
    tmp699 = 0.0;
  }
  else
  {
    tmp697 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp699 = (tmp697?data->localData[0]->realVars[147] /* MatStm2.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp699, linearSystemData, threadData);
  tmp700 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp702 = (modelica_boolean)tmp700;
  if(tmp702)
  {
    tmp703 = 0.0;
  }
  else
  {
    tmp701 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp703 = (tmp701?data->localData[0]->realVars[145] /* MatStm2.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp703, linearSystemData, threadData);
  tmp704 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp706 = (modelica_boolean)tmp704;
  if(tmp706)
  {
    tmp707 = 0.0;
  }
  else
  {
    tmp705 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp707 = (tmp705?data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp707, linearSystemData, threadData);
  tmp708 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp710 = (modelica_boolean)tmp708;
  if(tmp710)
  {
    tmp711 = data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp709 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp711 = (tmp709?data->localData[0]->realVars[146] /* MatStm2.compMasFlo[3,2] variable */:data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(3, tmp711, linearSystemData, threadData);
  tmp712 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp714 = (modelica_boolean)tmp712;
  if(tmp714)
  {
    tmp715 = 0.0;
  }
  else
  {
    tmp713 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp715 = (tmp713?data->localData[0]->realVars[144] /* MatStm2.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp715, linearSystemData, threadData);
  tmp716 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp718 = (modelica_boolean)tmp716;
  if(tmp718)
  {
    tmp719 = 0.0;
  }
  else
  {
    tmp717 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp719 = (tmp717?data->localData[0]->realVars[142] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(5, tmp719, linearSystemData, threadData);
  tmp720 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp722 = (modelica_boolean)tmp720;
  if(tmp722)
  {
    tmp723 = data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp721 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp723 = (tmp721?data->localData[0]->realVars[143] /* MatStm2.compMasFlo[2,2] variable */:data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(6, tmp723, linearSystemData, threadData);
  tmp724 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp726 = (modelica_boolean)tmp724;
  if(tmp726)
  {
    tmp727 = data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp725 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp727 = (tmp725?data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */:data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(7, tmp727, linearSystemData, threadData);
  tmp728 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp730 = (modelica_boolean)tmp728;
  if(tmp730)
  {
    tmp731 = 0.0;
  }
  else
  {
    tmp729 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp731 = (tmp729?data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(8, tmp731, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData152(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[151].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[151].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[151].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[148].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[148].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[148].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[149].attribute /* MatStm2.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[149].attribute /* MatStm2.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[149].attribute /* MatStm2.compMasFrac[1,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[152].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[152].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[152].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[153].attribute /* MatStm2.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[153].attribute /* MatStm2.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[153].attribute /* MatStm2.compMasFrac[2,3] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[155].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[155].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[155].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[150].attribute /* MatStm2.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[150].attribute /* MatStm2.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[150].attribute /* MatStm2.compMasFrac[1,3] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[154].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[154].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[154].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[156].attribute /* MatStm2.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[156].attribute /* MatStm2.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[156].attribute /* MatStm2.compMasFrac[3,3] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 543;
  linearSystemData[5].size = 9;
  linearSystemData[5].nnz = 26;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA543;
  linearSystemData[5].setb = setLinearVectorb543;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData543;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 481;
  linearSystemData[4].size = 9;
  linearSystemData[4].nnz = 26;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA481;
  linearSystemData[4].setb = setLinearVectorb481;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData481;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 413;
  linearSystemData[3].size = 9;
  linearSystemData[3].nnz = 26;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA413;
  linearSystemData[3].setb = setLinearVectorb413;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData413;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 291;
  linearSystemData[2].size = 9;
  linearSystemData[2].nnz = 26;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA291;
  linearSystemData[2].setb = setLinearVectorb291;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData291;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 251;
  linearSystemData[1].size = 9;
  linearSystemData[1].nnz = 26;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA251;
  linearSystemData[1].setb = setLinearVectorb251;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData251;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 152;
  linearSystemData[0].size = 9;
  linearSystemData[0].nnz = 26;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA152;
  linearSystemData[0].setb = setLinearVectorb152;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData152;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

