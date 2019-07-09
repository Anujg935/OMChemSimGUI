/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA805(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,805};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp824;
  modelica_boolean tmp825;
  modelica_boolean tmp826;
  modelica_boolean tmp827;
  modelica_real tmp828;
  modelica_boolean tmp829;
  modelica_boolean tmp830;
  modelica_boolean tmp831;
  modelica_real tmp832;
  modelica_boolean tmp833;
  modelica_boolean tmp834;
  modelica_boolean tmp835;
  modelica_real tmp836;
  modelica_boolean tmp837;
  modelica_boolean tmp838;
  modelica_boolean tmp839;
  modelica_boolean tmp840;
  modelica_real tmp841;
  modelica_boolean tmp842;
  modelica_boolean tmp843;
  modelica_boolean tmp844;
  modelica_real tmp845;
  modelica_boolean tmp846;
  modelica_boolean tmp847;
  modelica_boolean tmp848;
  modelica_real tmp849;
  modelica_boolean tmp850;
  modelica_boolean tmp851;
  modelica_boolean tmp852;
  modelica_boolean tmp853;
  modelica_boolean tmp854;
  modelica_real tmp855;
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
  modelica_real tmp867;
  RELATIONHYSTERESIS(tmp824, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(0, 2, (-((tmp824?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp825, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp827 = (modelica_boolean)tmp825;
  if(tmp827)
  {
    tmp828 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp826, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp828 = (tmp826?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp828)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp829, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp831 = (modelica_boolean)tmp829;
  if(tmp831)
  {
    tmp832 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp830, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp832 = (tmp830?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp832)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp833, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp835 = (modelica_boolean)tmp833;
  if(tmp835)
  {
    tmp836 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp834, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp836 = (tmp834?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp836)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp837, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(1, 4, (-((tmp837?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp838, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp840 = (modelica_boolean)tmp838;
  if(tmp840)
  {
    tmp841 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp839, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp841 = (tmp839?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp841)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp842, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp844 = (modelica_boolean)tmp842;
  if(tmp844)
  {
    tmp845 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp843, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp845 = (tmp843?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp845)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp846, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp848 = (modelica_boolean)tmp846;
  if(tmp848)
  {
    tmp849 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp847, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp849 = (tmp847?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp849)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp850, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(2, 3, (-((tmp850?1.0:-0.0))), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp851, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(3, 0, (-((tmp851?1.0:-0.0))), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp852, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp854 = (modelica_boolean)tmp852;
  if(tmp854)
  {
    tmp855 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp853, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp855 = (tmp853?(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp855)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp856, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp858 = (modelica_boolean)tmp856;
  if(tmp858)
  {
    tmp859 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp857, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp859 = (tmp857?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp859)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp860, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp862 = (modelica_boolean)tmp860;
  if(tmp862)
  {
    tmp863 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp861, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp863 = (tmp861?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp863)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp864, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp866 = (modelica_boolean)tmp864;
  if(tmp866)
  {
    tmp867 = (-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp865, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp867 = (tmp865?-0.0:(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp867)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb805(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,805};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp868;
  modelica_boolean tmp869;
  modelica_boolean tmp870;
  modelica_real tmp871;
  modelica_boolean tmp872;
  modelica_boolean tmp873;
  modelica_boolean tmp874;
  modelica_real tmp875;
  modelica_boolean tmp876;
  modelica_boolean tmp877;
  modelica_boolean tmp878;
  modelica_real tmp879;
  modelica_boolean tmp880;
  modelica_boolean tmp881;
  modelica_boolean tmp882;
  modelica_real tmp883;
  modelica_boolean tmp884;
  modelica_boolean tmp885;
  modelica_boolean tmp886;
  modelica_real tmp887;
  RELATIONHYSTERESIS(tmp868, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp870 = (modelica_boolean)tmp868;
  if(tmp870)
  {
    tmp871 = (-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp869, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp871 = (tmp869?data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp871, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp872, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp874 = (modelica_boolean)tmp872;
  if(tmp874)
  {
    tmp875 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp873, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp875 = (tmp873?data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp875, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp876, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp878 = (modelica_boolean)tmp876;
  if(tmp878)
  {
    tmp879 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp877, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp879 = (tmp877?data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp879, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp880, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp882 = (modelica_boolean)tmp880;
  if(tmp882)
  {
    tmp883 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp881, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp883 = (tmp881?data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp883, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp884, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp886 = (modelica_boolean)tmp884;
  if(tmp886)
  {
    tmp887 = data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp885, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp887 = (tmp885?data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp887, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData805(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.max;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.max;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.max;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.max;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA745(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,745};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp888;
  modelica_boolean tmp889;
  modelica_boolean tmp890;
  modelica_boolean tmp891;
  modelica_real tmp892;
  modelica_boolean tmp893;
  modelica_boolean tmp894;
  modelica_boolean tmp895;
  modelica_real tmp896;
  modelica_boolean tmp897;
  modelica_boolean tmp898;
  modelica_boolean tmp899;
  modelica_real tmp900;
  modelica_boolean tmp901;
  modelica_boolean tmp902;
  modelica_boolean tmp903;
  modelica_boolean tmp904;
  modelica_real tmp905;
  modelica_boolean tmp906;
  modelica_boolean tmp907;
  modelica_boolean tmp908;
  modelica_real tmp909;
  modelica_boolean tmp910;
  modelica_boolean tmp911;
  modelica_boolean tmp912;
  modelica_real tmp913;
  modelica_boolean tmp914;
  modelica_boolean tmp915;
  modelica_boolean tmp916;
  modelica_boolean tmp917;
  modelica_real tmp918;
  modelica_boolean tmp919;
  modelica_boolean tmp920;
  modelica_boolean tmp921;
  modelica_boolean tmp922;
  modelica_real tmp923;
  modelica_boolean tmp924;
  modelica_boolean tmp925;
  modelica_boolean tmp926;
  modelica_real tmp927;
  modelica_boolean tmp928;
  modelica_boolean tmp929;
  modelica_boolean tmp930;
  modelica_real tmp931;
  RELATIONHYSTERESIS(tmp888, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp888?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp889, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp891 = (modelica_boolean)tmp889;
  if(tmp891)
  {
    tmp892 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp890, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp892 = (tmp890?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp892)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp893, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp895 = (modelica_boolean)tmp893;
  if(tmp895)
  {
    tmp896 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp894, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp896 = (tmp894?(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp896)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp897, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp899 = (modelica_boolean)tmp897;
  if(tmp899)
  {
    tmp900 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp898, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp900 = (tmp898?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp900)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp901, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(1, 1, (-((tmp901?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp902, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp904 = (modelica_boolean)tmp902;
  if(tmp904)
  {
    tmp905 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp903, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp905 = (tmp903?(-data->localData[0]->realVars[362] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp905)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp906, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp908 = (modelica_boolean)tmp906;
  if(tmp908)
  {
    tmp909 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp907, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp909 = (tmp907?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp909)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp910, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp912 = (modelica_boolean)tmp910;
  if(tmp912)
  {
    tmp913 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp911, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp913 = (tmp911?(-data->localData[0]->realVars[363] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp913)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp914, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(2, 3, (-((tmp914?1.0:-0.0))), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp915, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp917 = (modelica_boolean)tmp915;
  if(tmp917)
  {
    tmp918 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp916, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp918 = (tmp916?(-data->localData[0]->realVars[362] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp918)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp919, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(3, 2, (-((tmp919?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp920, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp922 = (modelica_boolean)tmp920;
  if(tmp922)
  {
    tmp923 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp921, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp923 = (tmp921?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp923)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp924, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp926 = (modelica_boolean)tmp924;
  if(tmp926)
  {
    tmp927 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp925, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp927 = (tmp925?(-data->localData[0]->realVars[363] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp927)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp928, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp930 = (modelica_boolean)tmp928;
  if(tmp930)
  {
    tmp931 = (-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp929, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp931 = (tmp929?-0.0:(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 4, (-(tmp931)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb745(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,745};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp932;
  modelica_boolean tmp933;
  modelica_boolean tmp934;
  modelica_real tmp935;
  modelica_boolean tmp936;
  modelica_boolean tmp937;
  modelica_boolean tmp938;
  modelica_real tmp939;
  modelica_boolean tmp940;
  modelica_boolean tmp941;
  modelica_boolean tmp942;
  modelica_real tmp943;
  modelica_boolean tmp944;
  modelica_boolean tmp945;
  modelica_boolean tmp946;
  modelica_real tmp947;
  modelica_boolean tmp948;
  modelica_boolean tmp949;
  modelica_boolean tmp950;
  modelica_real tmp951;
  RELATIONHYSTERESIS(tmp932, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp934 = (modelica_boolean)tmp932;
  if(tmp934)
  {
    tmp935 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp933, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp935 = (tmp933?data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp935, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp936, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp938 = (modelica_boolean)tmp936;
  if(tmp938)
  {
    tmp939 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp937, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp939 = (tmp937?data->localData[0]->realVars[294] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp939, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp940, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp942 = (modelica_boolean)tmp940;
  if(tmp942)
  {
    tmp943 = (-data->localData[0]->realVars[298] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp941, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp943 = (tmp941?data->localData[0]->realVars[296] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[298] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp943, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp944, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp946 = (modelica_boolean)tmp944;
  if(tmp946)
  {
    tmp947 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp945, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp947 = (tmp945?data->localData[0]->realVars[293] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp947, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp948, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp950 = (modelica_boolean)tmp948;
  if(tmp950)
  {
    tmp951 = data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp949, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp951 = (tmp949?data->localData[0]->realVars[295] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp951, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData745(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[301].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[301].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[301].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[302].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[302].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[302].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA623(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,623};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp952;
  modelica_boolean tmp953;
  modelica_boolean tmp954;
  modelica_boolean tmp955;
  modelica_real tmp956;
  modelica_boolean tmp957;
  modelica_boolean tmp958;
  modelica_boolean tmp959;
  modelica_real tmp960;
  modelica_boolean tmp961;
  modelica_boolean tmp962;
  modelica_boolean tmp963;
  modelica_real tmp964;
  modelica_boolean tmp965;
  modelica_boolean tmp966;
  modelica_boolean tmp967;
  modelica_boolean tmp968;
  modelica_real tmp969;
  modelica_boolean tmp970;
  modelica_boolean tmp971;
  modelica_boolean tmp972;
  modelica_boolean tmp973;
  modelica_real tmp974;
  modelica_boolean tmp975;
  modelica_boolean tmp976;
  modelica_boolean tmp977;
  modelica_real tmp978;
  modelica_boolean tmp979;
  modelica_boolean tmp980;
  modelica_boolean tmp981;
  modelica_real tmp982;
  modelica_boolean tmp983;
  modelica_boolean tmp984;
  modelica_boolean tmp985;
  modelica_real tmp986;
  modelica_boolean tmp987;
  modelica_boolean tmp988;
  modelica_boolean tmp989;
  modelica_boolean tmp990;
  modelica_real tmp991;
  modelica_boolean tmp992;
  modelica_boolean tmp993;
  modelica_boolean tmp994;
  modelica_real tmp995;
  RELATIONHYSTERESIS(tmp952, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp952?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp953, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp955 = (modelica_boolean)tmp953;
  if(tmp955)
  {
    tmp956 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp954, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp956 = (tmp954?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp956)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp957, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp959 = (modelica_boolean)tmp957;
  if(tmp959)
  {
    tmp960 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp958, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp960 = (tmp958?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp960)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp961, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp963 = (modelica_boolean)tmp961;
  if(tmp963)
  {
    tmp964 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp962, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp964 = (tmp962?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp964)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp965, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp965?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp966, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp968 = (modelica_boolean)tmp966;
  if(tmp968)
  {
    tmp969 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp967, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp969 = (tmp967?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp969)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp970, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp970?1.0:-0.0))), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp971, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp973 = (modelica_boolean)tmp971;
  if(tmp973)
  {
    tmp974 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp972, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp974 = (tmp972?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp974)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp975, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp977 = (modelica_boolean)tmp975;
  if(tmp977)
  {
    tmp978 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp976, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp978 = (tmp976?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp978)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp979, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp981 = (modelica_boolean)tmp979;
  if(tmp981)
  {
    tmp982 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp980, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp982 = (tmp980?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp982)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp983, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp985 = (modelica_boolean)tmp983;
  if(tmp985)
  {
    tmp986 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp984, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp986 = (tmp984?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp986)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp987, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 4, (-((tmp987?1.0:-0.0))), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp988, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp990 = (modelica_boolean)tmp988;
  if(tmp990)
  {
    tmp991 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp989, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp991 = (tmp989?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp991)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp992, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp994 = (modelica_boolean)tmp992;
  if(tmp994)
  {
    tmp995 = (-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp993, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp995 = (tmp993?-0.0:(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp995)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb623(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,623};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp996;
  modelica_boolean tmp997;
  modelica_boolean tmp998;
  modelica_real tmp999;
  modelica_boolean tmp1000;
  modelica_boolean tmp1001;
  modelica_boolean tmp1002;
  modelica_real tmp1003;
  modelica_boolean tmp1004;
  modelica_boolean tmp1005;
  modelica_boolean tmp1006;
  modelica_real tmp1007;
  modelica_boolean tmp1008;
  modelica_boolean tmp1009;
  modelica_boolean tmp1010;
  modelica_real tmp1011;
  modelica_boolean tmp1012;
  modelica_boolean tmp1013;
  modelica_boolean tmp1014;
  modelica_real tmp1015;
  RELATIONHYSTERESIS(tmp996, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp998 = (modelica_boolean)tmp996;
  if(tmp998)
  {
    tmp999 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp997, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp999 = (tmp997?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp999, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp1000, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp1002 = (modelica_boolean)tmp1000;
  if(tmp1002)
  {
    tmp1003 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1001, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp1003 = (tmp1001?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp1003, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp1004, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp1006 = (modelica_boolean)tmp1004;
  if(tmp1006)
  {
    tmp1007 = (-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp1005, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp1007 = (tmp1005?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp1007, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp1008, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp1010 = (modelica_boolean)tmp1008;
  if(tmp1010)
  {
    tmp1011 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1009, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp1011 = (tmp1009?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1011, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp1012, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp1014 = (modelica_boolean)tmp1012;
  if(tmp1014)
  {
    tmp1015 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1013, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp1015 = (tmp1013?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp1015, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData623(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.max;
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
}

OMC_DISABLE_OPT
void setLinearMatrixA573(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,573};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1016;
  modelica_boolean tmp1017;
  modelica_boolean tmp1018;
  modelica_real tmp1019;
  modelica_boolean tmp1020;
  modelica_boolean tmp1021;
  modelica_boolean tmp1022;
  modelica_real tmp1023;
  modelica_boolean tmp1024;
  modelica_boolean tmp1025;
  modelica_boolean tmp1026;
  modelica_boolean tmp1027;
  modelica_real tmp1028;
  modelica_boolean tmp1029;
  modelica_boolean tmp1030;
  modelica_boolean tmp1031;
  modelica_real tmp1032;
  modelica_boolean tmp1033;
  modelica_boolean tmp1034;
  modelica_boolean tmp1035;
  modelica_boolean tmp1036;
  modelica_real tmp1037;
  modelica_boolean tmp1038;
  modelica_boolean tmp1039;
  modelica_boolean tmp1040;
  modelica_boolean tmp1041;
  modelica_real tmp1042;
  modelica_boolean tmp1043;
  modelica_boolean tmp1044;
  modelica_boolean tmp1045;
  modelica_real tmp1046;
  modelica_boolean tmp1047;
  modelica_boolean tmp1048;
  modelica_boolean tmp1049;
  modelica_boolean tmp1050;
  modelica_real tmp1051;
  modelica_boolean tmp1052;
  modelica_boolean tmp1053;
  modelica_boolean tmp1054;
  modelica_real tmp1055;
  modelica_boolean tmp1056;
  modelica_boolean tmp1057;
  modelica_boolean tmp1058;
  modelica_real tmp1059;
  tmp1016 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1018 = (modelica_boolean)tmp1016;
  if(tmp1018)
  {
    tmp1019 = -1.0;
  }
  else
  {
    tmp1017 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1019 = (tmp1017?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp1019)), 0, linearSystemData, threadData);
  tmp1020 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1022 = (modelica_boolean)tmp1020;
  if(tmp1022)
  {
    tmp1023 = 0.0;
  }
  else
  {
    tmp1021 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1023 = (tmp1021?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp1023)), 1, linearSystemData, threadData);
  tmp1024 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp1024?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp1025 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1027 = (modelica_boolean)tmp1025;
  if(tmp1027)
  {
    tmp1028 = 0.0;
  }
  else
  {
    tmp1026 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1028 = (tmp1026?(-data->localData[0]->realVars[274] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1028)), 3, linearSystemData, threadData);
  tmp1029 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1031 = (modelica_boolean)tmp1029;
  if(tmp1031)
  {
    tmp1032 = 0.0;
  }
  else
  {
    tmp1030 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1032 = (tmp1030?(-data->localData[0]->realVars[275] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp1032)), 4, linearSystemData, threadData);
  tmp1033 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp1033?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp1034 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1036 = (modelica_boolean)tmp1034;
  if(tmp1036)
  {
    tmp1037 = 0.0;
  }
  else
  {
    tmp1035 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1037 = (tmp1035?(-data->localData[0]->realVars[274] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1037)), 6, linearSystemData, threadData);
  tmp1038 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp1038?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp1039 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1041 = (modelica_boolean)tmp1039;
  if(tmp1041)
  {
    tmp1042 = 0.0;
  }
  else
  {
    tmp1040 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1042 = (tmp1040?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp1042)), 8, linearSystemData, threadData);
  tmp1043 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1045 = (modelica_boolean)tmp1043;
  if(tmp1045)
  {
    tmp1046 = 0.0;
  }
  else
  {
    tmp1044 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1046 = (tmp1044?(-data->localData[0]->realVars[273] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp1046)), 9, linearSystemData, threadData);
  tmp1047 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp1047?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp1048 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1050 = (modelica_boolean)tmp1048;
  if(tmp1050)
  {
    tmp1051 = 0.0;
  }
  else
  {
    tmp1049 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1051 = (tmp1049?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp1051)), 11, linearSystemData, threadData);
  tmp1052 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1054 = (modelica_boolean)tmp1052;
  if(tmp1054)
  {
    tmp1055 = (-data->localData[0]->realVars[273] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp1053 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1055 = (tmp1053?-0.0:(-data->localData[0]->realVars[273] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp1055)), 12, linearSystemData, threadData);
  tmp1056 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1058 = (modelica_boolean)tmp1056;
  if(tmp1058)
  {
    tmp1059 = -0.0;
  }
  else
  {
    tmp1057 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1059 = (tmp1057?(-data->localData[0]->realVars[275] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp1059)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb573(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,573};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1060;
  modelica_boolean tmp1061;
  modelica_boolean tmp1062;
  modelica_real tmp1063;
  modelica_boolean tmp1064;
  modelica_boolean tmp1065;
  modelica_boolean tmp1066;
  modelica_real tmp1067;
  modelica_boolean tmp1068;
  modelica_boolean tmp1069;
  modelica_boolean tmp1070;
  modelica_real tmp1071;
  modelica_boolean tmp1072;
  modelica_boolean tmp1073;
  modelica_boolean tmp1074;
  modelica_real tmp1075;
  modelica_boolean tmp1076;
  modelica_boolean tmp1077;
  modelica_boolean tmp1078;
  modelica_real tmp1079;
  tmp1060 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1062 = (modelica_boolean)tmp1060;
  if(tmp1062)
  {
    tmp1063 = 0.0;
  }
  else
  {
    tmp1061 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1063 = (tmp1061?data->localData[0]->realVars[206] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1063, linearSystemData, threadData);
  tmp1064 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1066 = (modelica_boolean)tmp1064;
  if(tmp1066)
  {
    tmp1067 = (-data->localData[0]->realVars[210] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1065 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1067 = (tmp1065?data->localData[0]->realVars[208] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[210] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp1067, linearSystemData, threadData);
  tmp1068 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1070 = (modelica_boolean)tmp1068;
  if(tmp1070)
  {
    tmp1071 = 0.0;
  }
  else
  {
    tmp1069 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1071 = (tmp1069?data->localData[0]->realVars[205] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1071, linearSystemData, threadData);
  tmp1072 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1074 = (modelica_boolean)tmp1072;
  if(tmp1074)
  {
    tmp1075 = 0.0;
  }
  else
  {
    tmp1073 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1075 = (tmp1073?data->localData[0]->realVars[203] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1075, linearSystemData, threadData);
  tmp1076 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1078 = (modelica_boolean)tmp1076;
  if(tmp1078)
  {
    tmp1079 = data->localData[0]->realVars[203] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1077 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1079 = (tmp1077?data->localData[0]->realVars[207] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[203] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp1079, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData573(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[213].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[213].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[213].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[211].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[211].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[211].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[214].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[214].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[214].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[212].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[212].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[212].attribute /* MatStm3.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA519(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,519};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1080;
  modelica_boolean tmp1081;
  modelica_boolean tmp1082;
  modelica_real tmp1083;
  modelica_boolean tmp1084;
  modelica_boolean tmp1085;
  modelica_boolean tmp1086;
  modelica_real tmp1087;
  modelica_boolean tmp1088;
  modelica_boolean tmp1089;
  modelica_boolean tmp1090;
  modelica_boolean tmp1091;
  modelica_real tmp1092;
  modelica_boolean tmp1093;
  modelica_boolean tmp1094;
  modelica_boolean tmp1095;
  modelica_real tmp1096;
  modelica_boolean tmp1097;
  modelica_boolean tmp1098;
  modelica_boolean tmp1099;
  modelica_boolean tmp1100;
  modelica_real tmp1101;
  modelica_boolean tmp1102;
  modelica_boolean tmp1103;
  modelica_boolean tmp1104;
  modelica_boolean tmp1105;
  modelica_real tmp1106;
  modelica_boolean tmp1107;
  modelica_boolean tmp1108;
  modelica_boolean tmp1109;
  modelica_real tmp1110;
  modelica_boolean tmp1111;
  modelica_boolean tmp1112;
  modelica_boolean tmp1113;
  modelica_boolean tmp1114;
  modelica_real tmp1115;
  modelica_boolean tmp1116;
  modelica_boolean tmp1117;
  modelica_boolean tmp1118;
  modelica_real tmp1119;
  modelica_boolean tmp1120;
  modelica_boolean tmp1121;
  modelica_boolean tmp1122;
  modelica_real tmp1123;
  tmp1080 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1082 = (modelica_boolean)tmp1080;
  if(tmp1082)
  {
    tmp1083 = -1.0;
  }
  else
  {
    tmp1081 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1083 = (tmp1081?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp1083)), 0, linearSystemData, threadData);
  tmp1084 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1086 = (modelica_boolean)tmp1084;
  if(tmp1086)
  {
    tmp1087 = 0.0;
  }
  else
  {
    tmp1085 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1087 = (tmp1085?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp1087)), 1, linearSystemData, threadData);
  tmp1088 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp1088?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp1089 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1091 = (modelica_boolean)tmp1089;
  if(tmp1091)
  {
    tmp1092 = 0.0;
  }
  else
  {
    tmp1090 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1092 = (tmp1090?(-data->localData[0]->realVars[184] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1092)), 3, linearSystemData, threadData);
  tmp1093 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1095 = (modelica_boolean)tmp1093;
  if(tmp1095)
  {
    tmp1096 = 0.0;
  }
  else
  {
    tmp1094 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1096 = (tmp1094?(-data->localData[0]->realVars[185] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp1096)), 4, linearSystemData, threadData);
  tmp1097 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp1097?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp1098 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1100 = (modelica_boolean)tmp1098;
  if(tmp1100)
  {
    tmp1101 = 0.0;
  }
  else
  {
    tmp1099 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1101 = (tmp1099?(-data->localData[0]->realVars[184] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1101)), 6, linearSystemData, threadData);
  tmp1102 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp1102?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp1103 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1105 = (modelica_boolean)tmp1103;
  if(tmp1105)
  {
    tmp1106 = 0.0;
  }
  else
  {
    tmp1104 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1106 = (tmp1104?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp1106)), 8, linearSystemData, threadData);
  tmp1107 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1109 = (modelica_boolean)tmp1107;
  if(tmp1109)
  {
    tmp1110 = 0.0;
  }
  else
  {
    tmp1108 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1110 = (tmp1108?(-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp1110)), 9, linearSystemData, threadData);
  tmp1111 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp1111?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp1112 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1114 = (modelica_boolean)tmp1112;
  if(tmp1114)
  {
    tmp1115 = 0.0;
  }
  else
  {
    tmp1113 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1115 = (tmp1113?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp1115)), 11, linearSystemData, threadData);
  tmp1116 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1118 = (modelica_boolean)tmp1116;
  if(tmp1118)
  {
    tmp1119 = (-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp1117 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1119 = (tmp1117?-0.0:(-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp1119)), 12, linearSystemData, threadData);
  tmp1120 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1122 = (modelica_boolean)tmp1120;
  if(tmp1122)
  {
    tmp1123 = -0.0;
  }
  else
  {
    tmp1121 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1123 = (tmp1121?(-data->localData[0]->realVars[185] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp1123)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb519(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,519};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1124;
  modelica_boolean tmp1125;
  modelica_boolean tmp1126;
  modelica_real tmp1127;
  modelica_boolean tmp1128;
  modelica_boolean tmp1129;
  modelica_boolean tmp1130;
  modelica_real tmp1131;
  modelica_boolean tmp1132;
  modelica_boolean tmp1133;
  modelica_boolean tmp1134;
  modelica_real tmp1135;
  modelica_boolean tmp1136;
  modelica_boolean tmp1137;
  modelica_boolean tmp1138;
  modelica_real tmp1139;
  modelica_boolean tmp1140;
  modelica_boolean tmp1141;
  modelica_boolean tmp1142;
  modelica_real tmp1143;
  tmp1124 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1126 = (modelica_boolean)tmp1124;
  if(tmp1126)
  {
    tmp1127 = 0.0;
  }
  else
  {
    tmp1125 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1127 = (tmp1125?data->localData[0]->realVars[116] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1127, linearSystemData, threadData);
  tmp1128 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1130 = (modelica_boolean)tmp1128;
  if(tmp1130)
  {
    tmp1131 = (-data->localData[0]->realVars[120] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1129 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1131 = (tmp1129?data->localData[0]->realVars[118] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[120] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp1131, linearSystemData, threadData);
  tmp1132 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1134 = (modelica_boolean)tmp1132;
  if(tmp1134)
  {
    tmp1135 = 0.0;
  }
  else
  {
    tmp1133 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1135 = (tmp1133?data->localData[0]->realVars[115] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1135, linearSystemData, threadData);
  tmp1136 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1138 = (modelica_boolean)tmp1136;
  if(tmp1138)
  {
    tmp1139 = 0.0;
  }
  else
  {
    tmp1137 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1139 = (tmp1137?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1139, linearSystemData, threadData);
  tmp1140 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1142 = (modelica_boolean)tmp1140;
  if(tmp1142)
  {
    tmp1143 = data->localData[0]->realVars[113] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1141 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1143 = (tmp1141?data->localData[0]->realVars[117] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[113] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp1143, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData519(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[123].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[123].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[123].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[124].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[124].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[124].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA375(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,375};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1144;
  modelica_boolean tmp1145;
  modelica_boolean tmp1146;
  modelica_real tmp1147;
  modelica_boolean tmp1148;
  modelica_boolean tmp1149;
  modelica_boolean tmp1150;
  modelica_real tmp1151;
  modelica_boolean tmp1152;
  modelica_boolean tmp1153;
  modelica_boolean tmp1154;
  modelica_boolean tmp1155;
  modelica_boolean tmp1156;
  modelica_real tmp1157;
  modelica_boolean tmp1158;
  modelica_boolean tmp1159;
  modelica_boolean tmp1160;
  modelica_real tmp1161;
  modelica_boolean tmp1162;
  modelica_boolean tmp1163;
  modelica_boolean tmp1164;
  modelica_real tmp1165;
  modelica_boolean tmp1166;
  modelica_boolean tmp1167;
  modelica_boolean tmp1168;
  modelica_boolean tmp1169;
  modelica_real tmp1170;
  modelica_boolean tmp1171;
  modelica_boolean tmp1172;
  modelica_boolean tmp1173;
  modelica_boolean tmp1174;
  modelica_real tmp1175;
  modelica_boolean tmp1176;
  modelica_boolean tmp1177;
  modelica_boolean tmp1178;
  modelica_real tmp1179;
  modelica_boolean tmp1180;
  modelica_boolean tmp1181;
  modelica_boolean tmp1182;
  modelica_real tmp1183;
  modelica_boolean tmp1184;
  modelica_boolean tmp1185;
  modelica_boolean tmp1186;
  modelica_real tmp1187;
  tmp1144 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1146 = (modelica_boolean)tmp1144;
  if(tmp1146)
  {
    tmp1147 = 0.0;
  }
  else
  {
    tmp1145 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1147 = (tmp1145?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp1147)), 0, linearSystemData, threadData);
  tmp1148 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1150 = (modelica_boolean)tmp1148;
  if(tmp1150)
  {
    tmp1151 = 0.0;
  }
  else
  {
    tmp1149 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1151 = (tmp1149?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp1151)), 1, linearSystemData, threadData);
  tmp1152 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp1152?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp1153 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp1153?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp1154 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1156 = (modelica_boolean)tmp1154;
  if(tmp1156)
  {
    tmp1157 = 0.0;
  }
  else
  {
    tmp1155 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1157 = (tmp1155?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp1157)), 4, linearSystemData, threadData);
  tmp1158 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1160 = (modelica_boolean)tmp1158;
  if(tmp1160)
  {
    tmp1161 = 0.0;
  }
  else
  {
    tmp1159 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1161 = (tmp1159?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp1161)), 5, linearSystemData, threadData);
  tmp1162 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1164 = (modelica_boolean)tmp1162;
  if(tmp1164)
  {
    tmp1165 = -1.0;
  }
  else
  {
    tmp1163 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1165 = (tmp1163?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp1165)), 6, linearSystemData, threadData);
  tmp1166 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp1166?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp1167 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1169 = (modelica_boolean)tmp1167;
  if(tmp1169)
  {
    tmp1170 = 0.0;
  }
  else
  {
    tmp1168 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1170 = (tmp1168?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp1170)), 8, linearSystemData, threadData);
  tmp1171 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp1171?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp1172 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1174 = (modelica_boolean)tmp1172;
  if(tmp1174)
  {
    tmp1175 = 0.0;
  }
  else
  {
    tmp1173 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1175 = (tmp1173?(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp1175)), 10, linearSystemData, threadData);
  tmp1176 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1178 = (modelica_boolean)tmp1176;
  if(tmp1178)
  {
    tmp1179 = 0.0;
  }
  else
  {
    tmp1177 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1179 = (tmp1177?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp1179)), 11, linearSystemData, threadData);
  tmp1180 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1182 = (modelica_boolean)tmp1180;
  if(tmp1182)
  {
    tmp1183 = -0.0;
  }
  else
  {
    tmp1181 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1183 = (tmp1181?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp1183)), 12, linearSystemData, threadData);
  tmp1184 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1186 = (modelica_boolean)tmp1184;
  if(tmp1186)
  {
    tmp1187 = (-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    tmp1185 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1187 = (tmp1185?-0.0:(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp1187)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb375(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,375};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1188;
  modelica_boolean tmp1189;
  modelica_boolean tmp1190;
  modelica_real tmp1191;
  modelica_boolean tmp1192;
  modelica_boolean tmp1193;
  modelica_boolean tmp1194;
  modelica_real tmp1195;
  modelica_boolean tmp1196;
  modelica_boolean tmp1197;
  modelica_boolean tmp1198;
  modelica_real tmp1199;
  modelica_boolean tmp1200;
  modelica_boolean tmp1201;
  modelica_boolean tmp1202;
  modelica_real tmp1203;
  modelica_boolean tmp1204;
  modelica_boolean tmp1205;
  modelica_boolean tmp1206;
  modelica_real tmp1207;
  tmp1188 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1190 = (modelica_boolean)tmp1188;
  if(tmp1190)
  {
    tmp1191 = 0.0;
  }
  else
  {
    tmp1189 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1191 = (tmp1189?data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1191, linearSystemData, threadData);
  tmp1192 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1194 = (modelica_boolean)tmp1192;
  if(tmp1194)
  {
    tmp1195 = (-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1193 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1195 = (tmp1193?data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp1195, linearSystemData, threadData);
  tmp1196 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1198 = (modelica_boolean)tmp1196;
  if(tmp1198)
  {
    tmp1199 = 0.0;
  }
  else
  {
    tmp1197 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1199 = (tmp1197?data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1199, linearSystemData, threadData);
  tmp1200 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1202 = (modelica_boolean)tmp1200;
  if(tmp1202)
  {
    tmp1203 = 0.0;
  }
  else
  {
    tmp1201 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1203 = (tmp1201?data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1203, linearSystemData, threadData);
  tmp1204 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1206 = (modelica_boolean)tmp1204;
  if(tmp1206)
  {
    tmp1207 = data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1205 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1207 = (tmp1205?data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp1207, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData375(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.max;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.max;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.max;
  /* static ls data for MatStm5.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[388].attribute /* MatStm5.compMasFrac[2,2] */.max;
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA316(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,316};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1208;
  modelica_boolean tmp1209;
  modelica_boolean tmp1210;
  modelica_real tmp1211;
  modelica_boolean tmp1212;
  modelica_boolean tmp1213;
  modelica_boolean tmp1214;
  modelica_real tmp1215;
  modelica_boolean tmp1216;
  modelica_boolean tmp1217;
  modelica_boolean tmp1218;
  modelica_real tmp1219;
  modelica_boolean tmp1220;
  modelica_boolean tmp1221;
  modelica_boolean tmp1222;
  modelica_boolean tmp1223;
  modelica_real tmp1224;
  modelica_boolean tmp1225;
  modelica_boolean tmp1226;
  modelica_boolean tmp1227;
  modelica_real tmp1228;
  modelica_boolean tmp1229;
  modelica_boolean tmp1230;
  modelica_boolean tmp1231;
  modelica_real tmp1232;
  modelica_boolean tmp1233;
  modelica_boolean tmp1234;
  modelica_boolean tmp1235;
  modelica_boolean tmp1236;
  modelica_real tmp1237;
  modelica_boolean tmp1238;
  modelica_boolean tmp1239;
  modelica_boolean tmp1240;
  modelica_boolean tmp1241;
  modelica_real tmp1242;
  modelica_boolean tmp1243;
  modelica_boolean tmp1244;
  modelica_boolean tmp1245;
  modelica_boolean tmp1246;
  modelica_real tmp1247;
  modelica_boolean tmp1248;
  modelica_boolean tmp1249;
  modelica_boolean tmp1250;
  modelica_real tmp1251;
  tmp1208 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1210 = (modelica_boolean)tmp1208;
  if(tmp1210)
  {
    tmp1211 = -0.0;
  }
  else
  {
    tmp1209 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1211 = (tmp1209?(-data->localData[0]->realVars[363] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp1211)), 0, linearSystemData, threadData);
  tmp1212 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1214 = (modelica_boolean)tmp1212;
  if(tmp1214)
  {
    tmp1215 = (-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp1213 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1215 = (tmp1213?-0.0:(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 4, (-(tmp1215)), 1, linearSystemData, threadData);
  tmp1216 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1218 = (modelica_boolean)tmp1216;
  if(tmp1218)
  {
    tmp1219 = 0.0;
  }
  else
  {
    tmp1217 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1219 = (tmp1217?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp1219)), 2, linearSystemData, threadData);
  tmp1220 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp1220?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp1221 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1223 = (modelica_boolean)tmp1221;
  if(tmp1223)
  {
    tmp1224 = 0.0;
  }
  else
  {
    tmp1222 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1224 = (tmp1222?(-data->localData[0]->realVars[362] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp1224)), 4, linearSystemData, threadData);
  tmp1225 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1227 = (modelica_boolean)tmp1225;
  if(tmp1227)
  {
    tmp1228 = -1.0;
  }
  else
  {
    tmp1226 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1228 = (tmp1226?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp1228)), 5, linearSystemData, threadData);
  tmp1229 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1231 = (modelica_boolean)tmp1229;
  if(tmp1231)
  {
    tmp1232 = 0.0;
  }
  else
  {
    tmp1230 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1232 = (tmp1230?(-data->localData[0]->realVars[363] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1232)), 6, linearSystemData, threadData);
  tmp1233 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp1233?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp1234 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1236 = (modelica_boolean)tmp1234;
  if(tmp1236)
  {
    tmp1237 = 0.0;
  }
  else
  {
    tmp1235 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1237 = (tmp1235?(-data->localData[0]->realVars[362] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp1237)), 8, linearSystemData, threadData);
  tmp1238 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 2, (-((tmp1238?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp1239 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1241 = (modelica_boolean)tmp1239;
  if(tmp1241)
  {
    tmp1242 = 0.0;
  }
  else
  {
    tmp1240 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1242 = (tmp1240?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp1242)), 10, linearSystemData, threadData);
  tmp1243 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp1243?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp1244 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1246 = (modelica_boolean)tmp1244;
  if(tmp1246)
  {
    tmp1247 = 0.0;
  }
  else
  {
    tmp1245 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1247 = (tmp1245?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp1247)), 12, linearSystemData, threadData);
  tmp1248 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1250 = (modelica_boolean)tmp1248;
  if(tmp1250)
  {
    tmp1251 = 0.0;
  }
  else
  {
    tmp1249 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1251 = (tmp1249?(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp1251)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb316(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,316};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1252;
  modelica_boolean tmp1253;
  modelica_boolean tmp1254;
  modelica_real tmp1255;
  modelica_boolean tmp1256;
  modelica_boolean tmp1257;
  modelica_boolean tmp1258;
  modelica_real tmp1259;
  modelica_boolean tmp1260;
  modelica_boolean tmp1261;
  modelica_boolean tmp1262;
  modelica_real tmp1263;
  modelica_boolean tmp1264;
  modelica_boolean tmp1265;
  modelica_boolean tmp1266;
  modelica_real tmp1267;
  modelica_boolean tmp1268;
  modelica_boolean tmp1269;
  modelica_boolean tmp1270;
  modelica_real tmp1271;
  tmp1252 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1254 = (modelica_boolean)tmp1252;
  if(tmp1254)
  {
    tmp1255 = data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1253 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1255 = (tmp1253?data->localData[0]->realVars[295] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp1255, linearSystemData, threadData);
  tmp1256 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1258 = (modelica_boolean)tmp1256;
  if(tmp1258)
  {
    tmp1259 = 0.0;
  }
  else
  {
    tmp1257 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1259 = (tmp1257?data->localData[0]->realVars[294] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp1259, linearSystemData, threadData);
  tmp1260 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1262 = (modelica_boolean)tmp1260;
  if(tmp1262)
  {
    tmp1263 = (-data->localData[0]->realVars[298] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1261 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1263 = (tmp1261?data->localData[0]->realVars[296] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[298] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp1263, linearSystemData, threadData);
  tmp1264 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1266 = (modelica_boolean)tmp1264;
  if(tmp1266)
  {
    tmp1267 = 0.0;
  }
  else
  {
    tmp1265 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1267 = (tmp1265?data->localData[0]->realVars[293] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1267, linearSystemData, threadData);
  tmp1268 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1270 = (modelica_boolean)tmp1268;
  if(tmp1270)
  {
    tmp1271 = 0.0;
  }
  else
  {
    tmp1269 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1271 = (tmp1269?data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp1271, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData316(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[301].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[301].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[301].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[302].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[302].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[302].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA236(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,236};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1272;
  modelica_boolean tmp1273;
  modelica_boolean tmp1274;
  modelica_boolean tmp1275;
  modelica_real tmp1276;
  modelica_boolean tmp1277;
  modelica_boolean tmp1278;
  modelica_boolean tmp1279;
  modelica_real tmp1280;
  modelica_boolean tmp1281;
  modelica_boolean tmp1282;
  modelica_boolean tmp1283;
  modelica_real tmp1284;
  modelica_boolean tmp1285;
  modelica_boolean tmp1286;
  modelica_boolean tmp1287;
  modelica_boolean tmp1288;
  modelica_boolean tmp1289;
  modelica_real tmp1290;
  modelica_boolean tmp1291;
  modelica_boolean tmp1292;
  modelica_boolean tmp1293;
  modelica_real tmp1294;
  modelica_boolean tmp1295;
  modelica_boolean tmp1296;
  modelica_boolean tmp1297;
  modelica_real tmp1298;
  modelica_boolean tmp1299;
  modelica_boolean tmp1300;
  modelica_boolean tmp1301;
  modelica_real tmp1302;
  modelica_boolean tmp1303;
  modelica_boolean tmp1304;
  modelica_boolean tmp1305;
  modelica_real tmp1306;
  modelica_boolean tmp1307;
  modelica_boolean tmp1308;
  modelica_boolean tmp1309;
  modelica_real tmp1310;
  modelica_boolean tmp1311;
  modelica_boolean tmp1312;
  modelica_boolean tmp1313;
  modelica_boolean tmp1314;
  modelica_real tmp1315;
  tmp1272 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp1272?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp1273 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1275 = (modelica_boolean)tmp1273;
  if(tmp1275)
  {
    tmp1276 = 0.0;
  }
  else
  {
    tmp1274 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1276 = (tmp1274?(-data->localData[0]->realVars[275] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1276)), 1, linearSystemData, threadData);
  tmp1277 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1279 = (modelica_boolean)tmp1277;
  if(tmp1279)
  {
    tmp1280 = 0.0;
  }
  else
  {
    tmp1278 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1280 = (tmp1278?(-data->localData[0]->realVars[274] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp1280)), 2, linearSystemData, threadData);
  tmp1281 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1283 = (modelica_boolean)tmp1281;
  if(tmp1283)
  {
    tmp1284 = 0.0;
  }
  else
  {
    tmp1282 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1284 = (tmp1282?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp1284)), 3, linearSystemData, threadData);
  tmp1285 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp1285?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp1286 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp1286?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp1287 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1289 = (modelica_boolean)tmp1287;
  if(tmp1289)
  {
    tmp1290 = 0.0;
  }
  else
  {
    tmp1288 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1290 = (tmp1288?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp1290)), 6, linearSystemData, threadData);
  tmp1291 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1293 = (modelica_boolean)tmp1291;
  if(tmp1293)
  {
    tmp1294 = -1.0;
  }
  else
  {
    tmp1292 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1294 = (tmp1292?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1294)), 7, linearSystemData, threadData);
  tmp1295 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1297 = (modelica_boolean)tmp1295;
  if(tmp1297)
  {
    tmp1298 = 0.0;
  }
  else
  {
    tmp1296 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1298 = (tmp1296?(-data->localData[0]->realVars[274] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp1298)), 8, linearSystemData, threadData);
  tmp1299 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1301 = (modelica_boolean)tmp1299;
  if(tmp1301)
  {
    tmp1302 = -0.0;
  }
  else
  {
    tmp1300 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1302 = (tmp1300?(-data->localData[0]->realVars[275] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp1302)), 9, linearSystemData, threadData);
  tmp1303 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1305 = (modelica_boolean)tmp1303;
  if(tmp1305)
  {
    tmp1306 = (-data->localData[0]->realVars[273] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp1304 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1306 = (tmp1304?-0.0:(-data->localData[0]->realVars[273] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp1306)), 10, linearSystemData, threadData);
  tmp1307 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1309 = (modelica_boolean)tmp1307;
  if(tmp1309)
  {
    tmp1310 = 0.0;
  }
  else
  {
    tmp1308 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1310 = (tmp1308?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp1310)), 11, linearSystemData, threadData);
  tmp1311 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 1, (-((tmp1311?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp1312 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1314 = (modelica_boolean)tmp1312;
  if(tmp1314)
  {
    tmp1315 = 0.0;
  }
  else
  {
    tmp1313 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1315 = (tmp1313?(-data->localData[0]->realVars[273] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp1315)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb236(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,236};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1316;
  modelica_boolean tmp1317;
  modelica_boolean tmp1318;
  modelica_real tmp1319;
  modelica_boolean tmp1320;
  modelica_boolean tmp1321;
  modelica_boolean tmp1322;
  modelica_real tmp1323;
  modelica_boolean tmp1324;
  modelica_boolean tmp1325;
  modelica_boolean tmp1326;
  modelica_real tmp1327;
  modelica_boolean tmp1328;
  modelica_boolean tmp1329;
  modelica_boolean tmp1330;
  modelica_real tmp1331;
  modelica_boolean tmp1332;
  modelica_boolean tmp1333;
  modelica_boolean tmp1334;
  modelica_real tmp1335;
  tmp1316 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1318 = (modelica_boolean)tmp1316;
  if(tmp1318)
  {
    tmp1319 = (-data->localData[0]->realVars[210] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1317 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1319 = (tmp1317?data->localData[0]->realVars[208] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[210] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp1319, linearSystemData, threadData);
  tmp1320 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1322 = (modelica_boolean)tmp1320;
  if(tmp1322)
  {
    tmp1323 = 0.0;
  }
  else
  {
    tmp1321 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1323 = (tmp1321?data->localData[0]->realVars[205] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp1323, linearSystemData, threadData);
  tmp1324 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1326 = (modelica_boolean)tmp1324;
  if(tmp1326)
  {
    tmp1327 = 0.0;
  }
  else
  {
    tmp1325 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1327 = (tmp1325?data->localData[0]->realVars[206] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1327, linearSystemData, threadData);
  tmp1328 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1330 = (modelica_boolean)tmp1328;
  if(tmp1330)
  {
    tmp1331 = data->localData[0]->realVars[203] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1329 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1331 = (tmp1329?data->localData[0]->realVars[207] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[203] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp1331, linearSystemData, threadData);
  tmp1332 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1334 = (modelica_boolean)tmp1332;
  if(tmp1334)
  {
    tmp1335 = 0.0;
  }
  else
  {
    tmp1333 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1335 = (tmp1333?data->localData[0]->realVars[203] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp1335, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData236(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[211].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[211].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[211].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[213].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[213].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[213].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[209].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[212].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[212].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[212].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[214].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[214].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[214].attribute /* MatStm3.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA202(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,202};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1336;
  modelica_boolean tmp1337;
  modelica_boolean tmp1338;
  modelica_boolean tmp1339;
  modelica_real tmp1340;
  modelica_boolean tmp1341;
  modelica_boolean tmp1342;
  modelica_boolean tmp1343;
  modelica_real tmp1344;
  modelica_boolean tmp1345;
  modelica_boolean tmp1346;
  modelica_boolean tmp1347;
  modelica_real tmp1348;
  modelica_boolean tmp1349;
  modelica_boolean tmp1350;
  modelica_boolean tmp1351;
  modelica_boolean tmp1352;
  modelica_real tmp1353;
  modelica_boolean tmp1354;
  modelica_boolean tmp1355;
  modelica_boolean tmp1356;
  modelica_real tmp1357;
  modelica_boolean tmp1358;
  modelica_boolean tmp1359;
  modelica_boolean tmp1360;
  modelica_real tmp1361;
  modelica_boolean tmp1362;
  modelica_boolean tmp1363;
  modelica_boolean tmp1364;
  modelica_boolean tmp1365;
  modelica_real tmp1366;
  modelica_boolean tmp1367;
  modelica_boolean tmp1368;
  modelica_boolean tmp1369;
  modelica_boolean tmp1370;
  modelica_real tmp1371;
  modelica_boolean tmp1372;
  modelica_boolean tmp1373;
  modelica_boolean tmp1374;
  modelica_real tmp1375;
  modelica_boolean tmp1376;
  modelica_boolean tmp1377;
  modelica_boolean tmp1378;
  modelica_real tmp1379;
  tmp1336 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp1336?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp1337 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1339 = (modelica_boolean)tmp1337;
  if(tmp1339)
  {
    tmp1340 = 0.0;
  }
  else
  {
    tmp1338 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1340 = (tmp1338?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1340)), 1, linearSystemData, threadData);
  tmp1341 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1343 = (modelica_boolean)tmp1341;
  if(tmp1343)
  {
    tmp1344 = 0.0;
  }
  else
  {
    tmp1342 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1344 = (tmp1342?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp1344)), 2, linearSystemData, threadData);
  tmp1345 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1347 = (modelica_boolean)tmp1345;
  if(tmp1347)
  {
    tmp1348 = 0.0;
  }
  else
  {
    tmp1346 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1348 = (tmp1346?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp1348)), 3, linearSystemData, threadData);
  tmp1349 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp1349?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp1350 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1352 = (modelica_boolean)tmp1350;
  if(tmp1352)
  {
    tmp1353 = -1.0;
  }
  else
  {
    tmp1351 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1353 = (tmp1351?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp1353)), 5, linearSystemData, threadData);
  tmp1354 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1356 = (modelica_boolean)tmp1354;
  if(tmp1356)
  {
    tmp1357 = 0.0;
  }
  else
  {
    tmp1355 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1357 = (tmp1355?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp1357)), 6, linearSystemData, threadData);
  tmp1358 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1360 = (modelica_boolean)tmp1358;
  if(tmp1360)
  {
    tmp1361 = 0.0;
  }
  else
  {
    tmp1359 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1361 = (tmp1359?(-data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1361)), 7, linearSystemData, threadData);
  tmp1362 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp1362?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp1363 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1365 = (modelica_boolean)tmp1363;
  if(tmp1365)
  {
    tmp1366 = 0.0;
  }
  else
  {
    tmp1364 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1366 = (tmp1364?(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp1366)), 9, linearSystemData, threadData);
  tmp1367 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp1367?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp1368 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1370 = (modelica_boolean)tmp1368;
  if(tmp1370)
  {
    tmp1371 = 0.0;
  }
  else
  {
    tmp1369 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1371 = (tmp1369?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp1371)), 11, linearSystemData, threadData);
  tmp1372 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1374 = (modelica_boolean)tmp1372;
  if(tmp1374)
  {
    tmp1375 = (-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp1373 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1375 = (tmp1373?-0.0:(-data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp1375)), 12, linearSystemData, threadData);
  tmp1376 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1378 = (modelica_boolean)tmp1376;
  if(tmp1378)
  {
    tmp1379 = -0.0;
  }
  else
  {
    tmp1377 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1379 = (tmp1377?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp1379)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb202(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,202};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1380;
  modelica_boolean tmp1381;
  modelica_boolean tmp1382;
  modelica_real tmp1383;
  modelica_boolean tmp1384;
  modelica_boolean tmp1385;
  modelica_boolean tmp1386;
  modelica_real tmp1387;
  modelica_boolean tmp1388;
  modelica_boolean tmp1389;
  modelica_boolean tmp1390;
  modelica_real tmp1391;
  modelica_boolean tmp1392;
  modelica_boolean tmp1393;
  modelica_boolean tmp1394;
  modelica_real tmp1395;
  modelica_boolean tmp1396;
  modelica_boolean tmp1397;
  modelica_boolean tmp1398;
  modelica_real tmp1399;
  tmp1380 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1382 = (modelica_boolean)tmp1380;
  if(tmp1382)
  {
    tmp1383 = (-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1381 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1383 = (tmp1381?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp1383, linearSystemData, threadData);
  tmp1384 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1386 = (modelica_boolean)tmp1384;
  if(tmp1386)
  {
    tmp1387 = 0.0;
  }
  else
  {
    tmp1385 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1387 = (tmp1385?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp1387, linearSystemData, threadData);
  tmp1388 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1390 = (modelica_boolean)tmp1388;
  if(tmp1390)
  {
    tmp1391 = 0.0;
  }
  else
  {
    tmp1389 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1391 = (tmp1389?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1391, linearSystemData, threadData);
  tmp1392 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1394 = (modelica_boolean)tmp1392;
  if(tmp1394)
  {
    tmp1395 = 0.0;
  }
  else
  {
    tmp1393 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1395 = (tmp1393?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1395, linearSystemData, threadData);
  tmp1396 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp1398 = (modelica_boolean)tmp1396;
  if(tmp1398)
  {
    tmp1399 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1397 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp1399 = (tmp1397?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp1399, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData202(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[28].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[31].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA125(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,125};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1400;
  modelica_boolean tmp1401;
  modelica_boolean tmp1402;
  modelica_boolean tmp1403;
  modelica_real tmp1404;
  modelica_boolean tmp1405;
  modelica_boolean tmp1406;
  modelica_boolean tmp1407;
  modelica_real tmp1408;
  modelica_boolean tmp1409;
  modelica_boolean tmp1410;
  modelica_boolean tmp1411;
  modelica_real tmp1412;
  modelica_boolean tmp1413;
  modelica_boolean tmp1414;
  modelica_boolean tmp1415;
  modelica_boolean tmp1416;
  modelica_real tmp1417;
  modelica_boolean tmp1418;
  modelica_boolean tmp1419;
  modelica_boolean tmp1420;
  modelica_real tmp1421;
  modelica_boolean tmp1422;
  modelica_boolean tmp1423;
  modelica_boolean tmp1424;
  modelica_real tmp1425;
  modelica_boolean tmp1426;
  modelica_boolean tmp1427;
  modelica_boolean tmp1428;
  modelica_boolean tmp1429;
  modelica_boolean tmp1430;
  modelica_real tmp1431;
  modelica_boolean tmp1432;
  modelica_boolean tmp1433;
  modelica_boolean tmp1434;
  modelica_real tmp1435;
  modelica_boolean tmp1436;
  modelica_boolean tmp1437;
  modelica_boolean tmp1438;
  modelica_real tmp1439;
  modelica_boolean tmp1440;
  modelica_boolean tmp1441;
  modelica_boolean tmp1442;
  modelica_real tmp1443;
  tmp1400 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp1400?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp1401 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1403 = (modelica_boolean)tmp1401;
  if(tmp1403)
  {
    tmp1404 = 0.0;
  }
  else
  {
    tmp1402 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1404 = (tmp1402?(-data->localData[0]->realVars[185] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1404)), 1, linearSystemData, threadData);
  tmp1405 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1407 = (modelica_boolean)tmp1405;
  if(tmp1407)
  {
    tmp1408 = 0.0;
  }
  else
  {
    tmp1406 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1408 = (tmp1406?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp1408)), 2, linearSystemData, threadData);
  tmp1409 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1411 = (modelica_boolean)tmp1409;
  if(tmp1411)
  {
    tmp1412 = 0.0;
  }
  else
  {
    tmp1410 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1412 = (tmp1410?(-data->localData[0]->realVars[184] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp1412)), 3, linearSystemData, threadData);
  tmp1413 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp1413?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp1414 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1416 = (modelica_boolean)tmp1414;
  if(tmp1416)
  {
    tmp1417 = 0.0;
  }
  else
  {
    tmp1415 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1417 = (tmp1415?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp1417)), 5, linearSystemData, threadData);
  tmp1418 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1420 = (modelica_boolean)tmp1418;
  if(tmp1420)
  {
    tmp1421 = -1.0;
  }
  else
  {
    tmp1419 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1421 = (tmp1419?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp1421)), 6, linearSystemData, threadData);
  tmp1422 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1424 = (modelica_boolean)tmp1422;
  if(tmp1424)
  {
    tmp1425 = 0.0;
  }
  else
  {
    tmp1423 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1425 = (tmp1423?(-data->localData[0]->realVars[184] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1425)), 7, linearSystemData, threadData);
  tmp1426 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp1426?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp1427 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp1427?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp1428 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1430 = (modelica_boolean)tmp1428;
  if(tmp1430)
  {
    tmp1431 = 0.0;
  }
  else
  {
    tmp1429 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1431 = (tmp1429?(-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp1431)), 10, linearSystemData, threadData);
  tmp1432 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1434 = (modelica_boolean)tmp1432;
  if(tmp1434)
  {
    tmp1435 = 0.0;
  }
  else
  {
    tmp1433 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1435 = (tmp1433?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp1435)), 11, linearSystemData, threadData);
  tmp1436 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1438 = (modelica_boolean)tmp1436;
  if(tmp1438)
  {
    tmp1439 = -0.0;
  }
  else
  {
    tmp1437 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1439 = (tmp1437?(-data->localData[0]->realVars[185] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp1439)), 12, linearSystemData, threadData);
  tmp1440 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1442 = (modelica_boolean)tmp1440;
  if(tmp1442)
  {
    tmp1443 = (-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp1441 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1443 = (tmp1441?-0.0:(-data->localData[0]->realVars[183] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp1443)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb125(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,125};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1444;
  modelica_boolean tmp1445;
  modelica_boolean tmp1446;
  modelica_real tmp1447;
  modelica_boolean tmp1448;
  modelica_boolean tmp1449;
  modelica_boolean tmp1450;
  modelica_real tmp1451;
  modelica_boolean tmp1452;
  modelica_boolean tmp1453;
  modelica_boolean tmp1454;
  modelica_real tmp1455;
  modelica_boolean tmp1456;
  modelica_boolean tmp1457;
  modelica_boolean tmp1458;
  modelica_real tmp1459;
  modelica_boolean tmp1460;
  modelica_boolean tmp1461;
  modelica_boolean tmp1462;
  modelica_real tmp1463;
  tmp1444 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1446 = (modelica_boolean)tmp1444;
  if(tmp1446)
  {
    tmp1447 = (-data->localData[0]->realVars[120] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1445 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1447 = (tmp1445?data->localData[0]->realVars[118] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[120] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp1447, linearSystemData, threadData);
  tmp1448 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1450 = (modelica_boolean)tmp1448;
  if(tmp1450)
  {
    tmp1451 = 0.0;
  }
  else
  {
    tmp1449 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1451 = (tmp1449?data->localData[0]->realVars[115] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp1451, linearSystemData, threadData);
  tmp1452 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1454 = (modelica_boolean)tmp1452;
  if(tmp1454)
  {
    tmp1455 = 0.0;
  }
  else
  {
    tmp1453 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1455 = (tmp1453?data->localData[0]->realVars[116] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1455, linearSystemData, threadData);
  tmp1456 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1458 = (modelica_boolean)tmp1456;
  if(tmp1458)
  {
    tmp1459 = 0.0;
  }
  else
  {
    tmp1457 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1459 = (tmp1457?data->localData[0]->realVars[113] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1459, linearSystemData, threadData);
  tmp1460 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp1462 = (modelica_boolean)tmp1460;
  if(tmp1462)
  {
    tmp1463 = data->localData[0]->realVars[113] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1461 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp1463 = (tmp1461?data->localData[0]->realVars[117] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[113] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp1463, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData125(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[123].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[123].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[123].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[121].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[124].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[124].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[124].attribute /* MatStm2.compMasFrac[3,2] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 9, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[9].equationIndex = 805;
  linearSystemData[9].size = 5;
  linearSystemData[9].nnz = 14;
  linearSystemData[9].method = 0;
  linearSystemData[9].strictTearingFunctionCall = NULL;
  linearSystemData[9].setA = setLinearMatrixA805;
  linearSystemData[9].setb = setLinearVectorb805;
  linearSystemData[9].initializeStaticLSData = initializeStaticLSData805;
  linearSystemData[9].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 8, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[8].equationIndex = 745;
  linearSystemData[8].size = 5;
  linearSystemData[8].nnz = 14;
  linearSystemData[8].method = 0;
  linearSystemData[8].strictTearingFunctionCall = NULL;
  linearSystemData[8].setA = setLinearMatrixA745;
  linearSystemData[8].setb = setLinearVectorb745;
  linearSystemData[8].initializeStaticLSData = initializeStaticLSData745;
  linearSystemData[8].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 7, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[7].equationIndex = 623;
  linearSystemData[7].size = 5;
  linearSystemData[7].nnz = 14;
  linearSystemData[7].method = 0;
  linearSystemData[7].strictTearingFunctionCall = NULL;
  linearSystemData[7].setA = setLinearMatrixA623;
  linearSystemData[7].setb = setLinearVectorb623;
  linearSystemData[7].initializeStaticLSData = initializeStaticLSData623;
  linearSystemData[7].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 6, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[6].equationIndex = 573;
  linearSystemData[6].size = 5;
  linearSystemData[6].nnz = 14;
  linearSystemData[6].method = 0;
  linearSystemData[6].strictTearingFunctionCall = NULL;
  linearSystemData[6].setA = setLinearMatrixA573;
  linearSystemData[6].setb = setLinearVectorb573;
  linearSystemData[6].initializeStaticLSData = initializeStaticLSData573;
  linearSystemData[6].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 519;
  linearSystemData[5].size = 5;
  linearSystemData[5].nnz = 14;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA519;
  linearSystemData[5].setb = setLinearVectorb519;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData519;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 375;
  linearSystemData[4].size = 5;
  linearSystemData[4].nnz = 14;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA375;
  linearSystemData[4].setb = setLinearVectorb375;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData375;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 316;
  linearSystemData[3].size = 5;
  linearSystemData[3].nnz = 14;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA316;
  linearSystemData[3].setb = setLinearVectorb316;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData316;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 236;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 14;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA236;
  linearSystemData[2].setb = setLinearVectorb236;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData236;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 202;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA202;
  linearSystemData[1].setb = setLinearVectorb202;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData202;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 125;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA125;
  linearSystemData[0].setb = setLinearVectorb125;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData125;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

