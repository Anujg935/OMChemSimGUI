/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA203(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,203};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp142;
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
  modelica_real tmp154;
  modelica_boolean tmp155;
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  modelica_real tmp158;
  modelica_boolean tmp159;
  modelica_boolean tmp160;
  modelica_boolean tmp161;
  modelica_boolean tmp162;
  modelica_real tmp163;
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  modelica_boolean tmp167;
  modelica_real tmp168;
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  modelica_real tmp172;
  modelica_boolean tmp173;
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  modelica_real tmp176;
  modelica_boolean tmp177;
  modelica_boolean tmp178;
  modelica_boolean tmp179;
  modelica_real tmp180;
  modelica_boolean tmp181;
  modelica_boolean tmp182;
  modelica_boolean tmp183;
  modelica_real tmp184;
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  modelica_boolean tmp187;
  modelica_boolean tmp188;
  modelica_real tmp189;
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  modelica_boolean tmp192;
  modelica_real tmp193;
  modelica_boolean tmp194;
  modelica_boolean tmp195;
  modelica_boolean tmp196;
  modelica_real tmp197;
  modelica_boolean tmp198;
  modelica_boolean tmp199;
  modelica_boolean tmp200;
  modelica_real tmp201;
  modelica_boolean tmp202;
  modelica_boolean tmp203;
  modelica_boolean tmp204;
  modelica_real tmp205;
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
  modelica_real tmp222;
  modelica_boolean tmp223;
  modelica_boolean tmp224;
  modelica_boolean tmp225;
  modelica_boolean tmp226;
  modelica_real tmp227;
  RELATIONHYSTERESIS(tmp142, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  linearSystemData->setAElement(0, 0, (-((tmp142?1.0:0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp143, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp145 = (modelica_boolean)tmp143;
  if(tmp145)
  {
    tmp146 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp144, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp146 = (tmp144?1.0:-0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp146)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp147, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp149 = (modelica_boolean)tmp147;
  if(tmp149)
  {
    tmp150 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp148, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp150 = (tmp148?0.0:(-data->localData[0]->realVars[103] /* MatStm1.totMasFlo[3] variable */));
  }
  linearSystemData->setAElement(0, 8, (-(tmp150)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp151, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp153 = (modelica_boolean)tmp151;
  if(tmp153)
  {
    tmp154 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp152, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp154 = (tmp152?0.0:(-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 4, (-(tmp154)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp155, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp157 = (modelica_boolean)tmp155;
  if(tmp157)
  {
    tmp158 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp156, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp158 = (tmp156?1.0:-0.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp158)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp159, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  linearSystemData->setAElement(1, 8, (-((tmp159?1.0:0.0))), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp160, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp162 = (modelica_boolean)tmp160;
  if(tmp162)
  {
    tmp163 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp161, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp163 = (tmp161?1.0:-0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp163)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp164, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  linearSystemData->setAElement(2, 6, (-((tmp164?1.0:0.0))), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp165, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp167 = (modelica_boolean)tmp165;
  if(tmp167)
  {
    tmp168 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp166, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp168 = (tmp166?0.0:(-data->localData[0]->realVars[102] /* MatStm1.totMasFlo[2] variable */));
  }
  linearSystemData->setAElement(2, 7, (-(tmp168)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp169, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp171 = (modelica_boolean)tmp169;
  if(tmp171)
  {
    tmp172 = (-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp170, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp172 = (tmp170?(-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 5, (-(tmp172)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp173, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp175 = (modelica_boolean)tmp173;
  if(tmp175)
  {
    tmp176 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp174, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp176 = (tmp174?-0.0:(-data->localData[0]->realVars[103] /* MatStm1.totMasFlo[3] variable */));
  }
  linearSystemData->setAElement(3, 6, (-(tmp176)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp177, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp179 = (modelica_boolean)tmp177;
  if(tmp179)
  {
    tmp180 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp178, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp180 = (tmp178?-1.0:-0.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp180)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp181, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp183 = (modelica_boolean)tmp181;
  if(tmp183)
  {
    tmp184 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp182, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp184 = (tmp182?0.0:(-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 5, (-(tmp184)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp185, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  linearSystemData->setAElement(4, 7, (-((tmp185?1.0:0.0))), 13, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp186, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp188 = (modelica_boolean)tmp186;
  if(tmp188)
  {
    tmp189 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp187, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp189 = (tmp187?1.0:-0.0);
  }
  linearSystemData->setAElement(4, 8, (-(tmp189)), 14, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp190, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp192 = (modelica_boolean)tmp190;
  if(tmp192)
  {
    tmp193 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp191, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp193 = (tmp191?-0.0:(-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(5, 3, (-(tmp193)), 15, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp194, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp196 = (modelica_boolean)tmp194;
  if(tmp196)
  {
    tmp197 = (-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp195, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp197 = (tmp195?(-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(5, 4, (-(tmp197)), 16, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp198, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp200 = (modelica_boolean)tmp198;
  if(tmp200)
  {
    tmp201 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp199, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp201 = (tmp199?-0.0:(-data->localData[0]->realVars[102] /* MatStm1.totMasFlo[2] variable */));
  }
  linearSystemData->setAElement(6, 2, (-(tmp201)), 17, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp202, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp204 = (modelica_boolean)tmp202;
  if(tmp204)
  {
    tmp205 = (-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp203, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp205 = (tmp203?(-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(6, 3, (-(tmp205)), 18, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp206, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp208 = (modelica_boolean)tmp206;
  if(tmp208)
  {
    tmp209 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp207, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp209 = (tmp207?0.0:(-data->localData[0]->realVars[102] /* MatStm1.totMasFlo[2] variable */));
  }
  linearSystemData->setAElement(7, 1, (-(tmp209)), 19, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp210, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  linearSystemData->setAElement(7, 2, (-((tmp210?1.0:0.0))), 20, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp211, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp213 = (modelica_boolean)tmp211;
  if(tmp213)
  {
    tmp214 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp212, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp214 = (tmp212?-1.0:-0.0);
  }
  linearSystemData->setAElement(7, 3, (-(tmp214)), 21, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp215, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp217 = (modelica_boolean)tmp215;
  if(tmp217)
  {
    tmp218 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp216, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp218 = (tmp216?1.0:-0.0);
  }
  linearSystemData->setAElement(7, 6, (-(tmp218)), 22, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp219, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp221 = (modelica_boolean)tmp219;
  if(tmp221)
  {
    tmp222 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp220, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp222 = (tmp220?1.0:(-data->localData[0]->realVars[103] /* MatStm1.totMasFlo[3] variable */));
  }
  linearSystemData->setAElement(8, 0, (-(tmp222)), 23, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp223, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  linearSystemData->setAElement(8, 1, (-((tmp223?1.0:0.0))), 24, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp224, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp226 = (modelica_boolean)tmp224;
  if(tmp226)
  {
    tmp227 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp225, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp227 = (tmp225?-1.0:-0.0);
  }
  linearSystemData->setAElement(8, 5, (-(tmp227)), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb203(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,203};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  RELATIONHYSTERESIS(tmp228, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp230 = (modelica_boolean)tmp228;
  if(tmp230)
  {
    tmp231 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp229, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp231 = (tmp229?0.0:data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,1] variable */);
  }
  linearSystemData->setBElement(0, tmp231, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp232, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp234 = (modelica_boolean)tmp232;
  if(tmp234)
  {
    tmp235 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp233, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp235 = (tmp233?0.0:data->localData[0]->realVars[18] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp235, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp236, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp238 = (modelica_boolean)tmp236;
  if(tmp238)
  {
    tmp239 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp237, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp239 = (tmp237?0.0:data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */);
  }
  linearSystemData->setBElement(2, tmp239, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp240, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp242 = (modelica_boolean)tmp240;
  if(tmp242)
  {
    tmp243 = data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,3] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp241, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp243 = (tmp241?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,3] variable */:data->localData[0]->realVars[25] /* MatStm1.compMasFlo[3,2] variable */);
  }
  linearSystemData->setBElement(3, tmp243, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp244, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp246 = (modelica_boolean)tmp244;
  if(tmp246)
  {
    tmp247 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp245, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp247 = (tmp245?0.0:data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(4, tmp247, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp248, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp250 = (modelica_boolean)tmp248;
  if(tmp250)
  {
    tmp251 = data->localData[0]->realVars[18] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp249, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp251 = (tmp249?data->localData[0]->realVars[18] /* MatStm1.compMasFlo[1,1] variable */:data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(5, tmp251, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp252, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp254 = (modelica_boolean)tmp252;
  if(tmp254)
  {
    tmp255 = data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp253, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp255 = (tmp253?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,2] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */);
  }
  linearSystemData->setBElement(6, tmp255, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp256, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp258 = (modelica_boolean)tmp256;
  if(tmp258)
  {
    tmp259 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp257, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp259 = (tmp257?0.0:data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,3] variable */);
  }
  linearSystemData->setBElement(7, tmp259, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp260, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 2, LessEq);
  tmp262 = (modelica_boolean)tmp260;
  if(tmp262)
  {
    tmp263 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp261, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 3, GreaterEq);
    tmp263 = (tmp261?0.0:data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,3] variable */);
  }
  linearSystemData->setBElement(8, tmp263, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData203(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,3] */.max;
  /* static ls data for MatStm1.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,3] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,2] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,3] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA83(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,83};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp285;
  modelica_real tmp286;
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  modelica_boolean tmp289;
  modelica_real tmp290;
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
  modelica_real tmp311;
  modelica_boolean tmp312;
  modelica_boolean tmp313;
  modelica_boolean tmp314;
  modelica_real tmp315;
  modelica_boolean tmp316;
  modelica_boolean tmp317;
  modelica_boolean tmp318;
  modelica_real tmp319;
  modelica_boolean tmp320;
  modelica_boolean tmp321;
  modelica_boolean tmp322;
  modelica_real tmp323;
  modelica_boolean tmp324;
  modelica_boolean tmp325;
  modelica_boolean tmp326;
  modelica_real tmp327;
  modelica_boolean tmp328;
  modelica_boolean tmp329;
  modelica_boolean tmp330;
  modelica_real tmp331;
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
  modelica_real tmp348;
  modelica_boolean tmp349;
  tmp264 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  linearSystemData->setAElement(0, 1, (-((tmp264?1.0:0.0))), 0, linearSystemData, threadData);
  tmp265 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp267 = (modelica_boolean)tmp265;
  if(tmp267)
  {
    tmp268 = 0.0;
  }
  else
  {
    tmp266 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp268 = (tmp266?1.0:-0.0);
  }
  linearSystemData->setAElement(0, 5, (-(tmp268)), 1, linearSystemData, threadData);
  tmp269 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp271 = (modelica_boolean)tmp269;
  if(tmp271)
  {
    tmp272 = 0.0;
  }
  else
  {
    tmp270 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp272 = (tmp270?0.0:(-data->localData[0]->realVars[102] /* MatStm1.totMasFlo[2] variable */));
  }
  linearSystemData->setAElement(0, 8, (-(tmp272)), 2, linearSystemData, threadData);
  tmp273 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp275 = (modelica_boolean)tmp273;
  if(tmp275)
  {
    tmp276 = 0.0;
  }
  else
  {
    tmp274 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp276 = (tmp274?0.0:(-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 3, (-(tmp276)), 3, linearSystemData, threadData);
  tmp277 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  linearSystemData->setAElement(1, 7, (-((tmp277?1.0:0.0))), 4, linearSystemData, threadData);
  tmp278 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp280 = (modelica_boolean)tmp278;
  if(tmp280)
  {
    tmp281 = 0.0;
  }
  else
  {
    tmp279 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp281 = (tmp279?1.0:-0.0);
  }
  linearSystemData->setAElement(1, 8, (-(tmp281)), 5, linearSystemData, threadData);
  tmp282 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp282?1.0:0.0))), 6, linearSystemData, threadData);
  tmp283 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp285 = (modelica_boolean)tmp283;
  if(tmp285)
  {
    tmp286 = 0.0;
  }
  else
  {
    tmp284 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp286 = (tmp284?1.0:-0.0);
  }
  linearSystemData->setAElement(2, 6, (-(tmp286)), 7, linearSystemData, threadData);
  tmp287 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp289 = (modelica_boolean)tmp287;
  if(tmp289)
  {
    tmp290 = 0.0;
  }
  else
  {
    tmp288 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp290 = (tmp288?0.0:(-data->localData[0]->realVars[103] /* MatStm1.totMasFlo[3] variable */));
  }
  linearSystemData->setAElement(2, 7, (-(tmp290)), 8, linearSystemData, threadData);
  tmp291 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp293 = (modelica_boolean)tmp291;
  if(tmp293)
  {
    tmp294 = 0.0;
  }
  else
  {
    tmp292 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp294 = (tmp292?1.0:-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp294)), 9, linearSystemData, threadData);
  tmp295 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp297 = (modelica_boolean)tmp295;
  if(tmp297)
  {
    tmp298 = -1.0;
  }
  else
  {
    tmp296 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp298 = (tmp296?-1.0:-0.0);
  }
  linearSystemData->setAElement(3, 4, (-(tmp298)), 10, linearSystemData, threadData);
  tmp299 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  linearSystemData->setAElement(3, 5, (-((tmp299?1.0:0.0))), 11, linearSystemData, threadData);
  tmp300 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp302 = (modelica_boolean)tmp300;
  if(tmp302)
  {
    tmp303 = 0.0;
  }
  else
  {
    tmp301 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp303 = (tmp301?0.0:(-data->localData[0]->realVars[102] /* MatStm1.totMasFlo[2] variable */));
  }
  linearSystemData->setAElement(3, 6, (-(tmp303)), 12, linearSystemData, threadData);
  tmp304 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp306 = (modelica_boolean)tmp304;
  if(tmp306)
  {
    tmp307 = (-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp305 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp307 = (tmp305?(-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp307)), 13, linearSystemData, threadData);
  tmp308 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp310 = (modelica_boolean)tmp308;
  if(tmp310)
  {
    tmp311 = -0.0;
  }
  else
  {
    tmp309 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp311 = (tmp309?-0.0:(-data->localData[0]->realVars[102] /* MatStm1.totMasFlo[2] variable */));
  }
  linearSystemData->setAElement(4, 5, (-(tmp311)), 14, linearSystemData, threadData);
  tmp312 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp314 = (modelica_boolean)tmp312;
  if(tmp314)
  {
    tmp315 = (-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp313 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp315 = (tmp313?(-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(5, 3, (-(tmp315)), 15, linearSystemData, threadData);
  tmp316 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp318 = (modelica_boolean)tmp316;
  if(tmp318)
  {
    tmp319 = -0.0;
  }
  else
  {
    tmp317 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp319 = (tmp317?-0.0:(-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(5, 4, (-(tmp319)), 16, linearSystemData, threadData);
  tmp320 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp322 = (modelica_boolean)tmp320;
  if(tmp322)
  {
    tmp323 = 0.0;
  }
  else
  {
    tmp321 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp323 = (tmp321?0.0:(-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(6, 2, (-(tmp323)), 17, linearSystemData, threadData);
  tmp324 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp326 = (modelica_boolean)tmp324;
  if(tmp326)
  {
    tmp327 = -1.0;
  }
  else
  {
    tmp325 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp327 = (tmp325?-1.0:-0.0);
  }
  linearSystemData->setAElement(6, 3, (-(tmp327)), 18, linearSystemData, threadData);
  tmp328 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp330 = (modelica_boolean)tmp328;
  if(tmp330)
  {
    tmp331 = 0.0;
  }
  else
  {
    tmp329 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp331 = (tmp329?1.0:-0.0);
  }
  linearSystemData->setAElement(6, 7, (-(tmp331)), 19, linearSystemData, threadData);
  tmp332 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  linearSystemData->setAElement(6, 8, (-((tmp332?1.0:0.0))), 20, linearSystemData, threadData);
  tmp333 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp335 = (modelica_boolean)tmp333;
  if(tmp335)
  {
    tmp336 = -0.0;
  }
  else
  {
    tmp334 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp336 = (tmp334?-0.0:(-data->localData[0]->realVars[103] /* MatStm1.totMasFlo[3] variable */));
  }
  linearSystemData->setAElement(7, 1, (-(tmp336)), 21, linearSystemData, threadData);
  tmp337 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp339 = (modelica_boolean)tmp337;
  if(tmp339)
  {
    tmp340 = (-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp338 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp340 = (tmp338?(-data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(7, 2, (-(tmp340)), 22, linearSystemData, threadData);
  tmp341 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp343 = (modelica_boolean)tmp341;
  if(tmp343)
  {
    tmp344 = 0.0;
  }
  else
  {
    tmp342 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp344 = (tmp342?1.0:(-data->localData[0]->realVars[103] /* MatStm1.totMasFlo[3] variable */));
  }
  linearSystemData->setAElement(8, 0, (-(tmp344)), 23, linearSystemData, threadData);
  tmp345 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp347 = (modelica_boolean)tmp345;
  if(tmp347)
  {
    tmp348 = -1.0;
  }
  else
  {
    tmp346 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp348 = (tmp346?-1.0:-0.0);
  }
  linearSystemData->setAElement(8, 2, (-(tmp348)), 24, linearSystemData, threadData);
  tmp349 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  linearSystemData->setAElement(8, 6, (-((tmp349?1.0:0.0))), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb83(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,83};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp366;
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  modelica_real tmp369;
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  modelica_boolean tmp372;
  modelica_real tmp373;
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
  tmp350 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp352 = (modelica_boolean)tmp350;
  if(tmp352)
  {
    tmp353 = 0.0;
  }
  else
  {
    tmp351 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp353 = (tmp351?0.0:data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */);
  }
  linearSystemData->setBElement(0, tmp353, linearSystemData, threadData);
  tmp354 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp356 = (modelica_boolean)tmp354;
  if(tmp356)
  {
    tmp357 = 0.0;
  }
  else
  {
    tmp355 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp357 = (tmp355?0.0:data->localData[0]->realVars[18] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp357, linearSystemData, threadData);
  tmp358 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp360 = (modelica_boolean)tmp358;
  if(tmp360)
  {
    tmp361 = 0.0;
  }
  else
  {
    tmp359 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp361 = (tmp359?0.0:data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,1] variable */);
  }
  linearSystemData->setBElement(2, tmp361, linearSystemData, threadData);
  tmp362 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp364 = (modelica_boolean)tmp362;
  if(tmp364)
  {
    tmp365 = 0.0;
  }
  else
  {
    tmp363 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp365 = (tmp363?0.0:data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,3] variable */);
  }
  linearSystemData->setBElement(3, tmp365, linearSystemData, threadData);
  tmp366 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp368 = (modelica_boolean)tmp366;
  if(tmp368)
  {
    tmp369 = data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp367 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp369 = (tmp367?data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,2] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */);
  }
  linearSystemData->setBElement(4, tmp369, linearSystemData, threadData);
  tmp370 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp372 = (modelica_boolean)tmp370;
  if(tmp372)
  {
    tmp373 = data->localData[0]->realVars[18] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp371 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp373 = (tmp371?data->localData[0]->realVars[18] /* MatStm1.compMasFlo[1,1] variable */:data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(5, tmp373, linearSystemData, threadData);
  tmp374 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp376 = (modelica_boolean)tmp374;
  if(tmp376)
  {
    tmp377 = 0.0;
  }
  else
  {
    tmp375 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp377 = (tmp375?0.0:data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(6, tmp377, linearSystemData, threadData);
  tmp378 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp380 = (modelica_boolean)tmp378;
  if(tmp380)
  {
    tmp381 = data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp379 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp381 = (tmp379?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,3] variable */:data->localData[0]->realVars[25] /* MatStm1.compMasFlo[3,2] variable */);
  }
  linearSystemData->setBElement(7, tmp381, linearSystemData, threadData);
  tmp382 = LessEq(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp384 = (modelica_boolean)tmp382;
  if(tmp384)
  {
    tmp385 = 0.0;
  }
  else
  {
    tmp383 = GreaterEq(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp385 = (tmp383?0.0:data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,3] variable */);
  }
  linearSystemData->setBElement(8, tmp385, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData83(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,3] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,3] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[27].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,3] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 203;
  linearSystemData[1].size = 9;
  linearSystemData[1].nnz = 26;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA203;
  linearSystemData[1].setb = setLinearVectorb203;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData203;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 83;
  linearSystemData[0].size = 9;
  linearSystemData[0].nnz = 26;
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

