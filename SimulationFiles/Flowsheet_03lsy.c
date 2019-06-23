/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA804(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,804};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp812;
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
  modelica_real tmp824;
  modelica_boolean tmp825;
  modelica_boolean tmp826;
  modelica_boolean tmp827;
  modelica_boolean tmp828;
  modelica_real tmp829;
  modelica_boolean tmp830;
  modelica_boolean tmp831;
  modelica_boolean tmp832;
  modelica_boolean tmp833;
  modelica_real tmp834;
  modelica_boolean tmp835;
  modelica_boolean tmp836;
  modelica_boolean tmp837;
  modelica_real tmp838;
  modelica_boolean tmp839;
  modelica_boolean tmp840;
  modelica_boolean tmp841;
  modelica_real tmp842;
  modelica_boolean tmp843;
  modelica_boolean tmp844;
  modelica_boolean tmp845;
  modelica_real tmp846;
  modelica_boolean tmp847;
  modelica_boolean tmp848;
  modelica_boolean tmp849;
  modelica_boolean tmp850;
  modelica_real tmp851;
  modelica_boolean tmp852;
  modelica_boolean tmp853;
  modelica_boolean tmp854;
  modelica_real tmp855;
  RELATIONHYSTERESIS(tmp812, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp812?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp813, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp815 = (modelica_boolean)tmp813;
  if(tmp815)
  {
    tmp816 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp814, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp816 = (tmp814?(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp816)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp817, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp819 = (modelica_boolean)tmp817;
  if(tmp819)
  {
    tmp820 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp818, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp820 = (tmp818?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp820)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp821, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp823 = (modelica_boolean)tmp821;
  if(tmp823)
  {
    tmp824 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp822, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp824 = (tmp822?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp824)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp825, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp825?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp826, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp828 = (modelica_boolean)tmp826;
  if(tmp828)
  {
    tmp829 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp827, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp829 = (tmp827?(-data->localData[0]->realVars[362] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp829)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp830, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(2, 2, (-((tmp830?1.0:-0.0))), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp831, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp833 = (modelica_boolean)tmp831;
  if(tmp833)
  {
    tmp834 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp832, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp834 = (tmp832?(-data->localData[0]->realVars[363] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp834)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp835, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp837 = (modelica_boolean)tmp835;
  if(tmp837)
  {
    tmp838 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp836, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp838 = (tmp836?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp838)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp839, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp841 = (modelica_boolean)tmp839;
  if(tmp841)
  {
    tmp842 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp840, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp842 = (tmp840?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp842)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp843, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp845 = (modelica_boolean)tmp843;
  if(tmp845)
  {
    tmp846 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp844, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp846 = (tmp844?(-data->localData[0]->realVars[362] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp846)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp847, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  linearSystemData->setAElement(3, 4, (-((tmp847?1.0:-0.0))), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp848, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp850 = (modelica_boolean)tmp848;
  if(tmp850)
  {
    tmp851 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp849, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp851 = (tmp849?(-data->localData[0]->realVars[363] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp851)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp852, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp854 = (modelica_boolean)tmp852;
  if(tmp854)
  {
    tmp855 = (-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp853, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp855 = (tmp853?-0.0:(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp855)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb804(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,804};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp868;
  modelica_boolean tmp869;
  modelica_boolean tmp870;
  modelica_real tmp871;
  modelica_boolean tmp872;
  modelica_boolean tmp873;
  modelica_boolean tmp874;
  modelica_real tmp875;
  RELATIONHYSTERESIS(tmp856, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp858 = (modelica_boolean)tmp856;
  if(tmp858)
  {
    tmp859 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp857, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp859 = (tmp857?data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp859, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp860, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp862 = (modelica_boolean)tmp860;
  if(tmp862)
  {
    tmp863 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp861, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp863 = (tmp861?data->localData[0]->realVars[293] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp863, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp864, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp866 = (modelica_boolean)tmp864;
  if(tmp866)
  {
    tmp867 = (-data->localData[0]->realVars[298] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp865, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp867 = (tmp865?data->localData[0]->realVars[296] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[298] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp867, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp868, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp870 = (modelica_boolean)tmp868;
  if(tmp870)
  {
    tmp871 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp869, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp871 = (tmp869?data->localData[0]->realVars[294] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp871, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp872, 101127.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp874 = (modelica_boolean)tmp872;
  if(tmp874)
  {
    tmp875 = data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp873, 101127.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp875 = (tmp873?data->localData[0]->realVars[295] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp875, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData804(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[301].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[301].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[301].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[1,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[300].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[302].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[302].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[302].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[299].attribute /* MatStm4.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA745(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,745};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp887;
  modelica_boolean tmp888;
  modelica_real tmp889;
  modelica_boolean tmp890;
  modelica_boolean tmp891;
  modelica_boolean tmp892;
  modelica_boolean tmp893;
  modelica_real tmp894;
  modelica_boolean tmp895;
  modelica_boolean tmp896;
  modelica_boolean tmp897;
  modelica_real tmp898;
  modelica_boolean tmp899;
  modelica_boolean tmp900;
  modelica_boolean tmp901;
  modelica_real tmp902;
  modelica_boolean tmp903;
  modelica_boolean tmp904;
  modelica_boolean tmp905;
  modelica_real tmp906;
  modelica_boolean tmp907;
  modelica_boolean tmp908;
  modelica_boolean tmp909;
  modelica_real tmp910;
  modelica_boolean tmp911;
  modelica_boolean tmp912;
  modelica_boolean tmp913;
  modelica_real tmp914;
  modelica_boolean tmp915;
  modelica_boolean tmp916;
  modelica_boolean tmp917;
  modelica_boolean tmp918;
  modelica_real tmp919;
  RELATIONHYSTERESIS(tmp876, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp878 = (modelica_boolean)tmp876;
  if(tmp878)
  {
    tmp879 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp877, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp879 = (tmp877?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp879)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp880, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp882 = (modelica_boolean)tmp880;
  if(tmp882)
  {
    tmp883 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp881, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp883 = (tmp881?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp883)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp884, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(0, 4, (-((tmp884?1.0:-0.0))), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp885, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(1, 3, (-((tmp885?1.0:-0.0))), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp886, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp888 = (modelica_boolean)tmp886;
  if(tmp888)
  {
    tmp889 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp887, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp889 = (tmp887?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp889)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp890, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(2, 0, (-((tmp890?1.0:-0.0))), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp891, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp893 = (modelica_boolean)tmp891;
  if(tmp893)
  {
    tmp894 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp892, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp894 = (tmp892?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp894)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp895, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp897 = (modelica_boolean)tmp895;
  if(tmp897)
  {
    tmp898 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp896, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp898 = (tmp896?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp898)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp899, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp901 = (modelica_boolean)tmp899;
  if(tmp901)
  {
    tmp902 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp900, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp902 = (tmp900?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp902)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp903, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp905 = (modelica_boolean)tmp903;
  if(tmp905)
  {
    tmp906 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp904, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp906 = (tmp904?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp906)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp907, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp909 = (modelica_boolean)tmp907;
  if(tmp909)
  {
    tmp910 = (-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp908, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp910 = (tmp908?-0.0:(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 2, (-(tmp910)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp911, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp913 = (modelica_boolean)tmp911;
  if(tmp913)
  {
    tmp914 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp912, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp914 = (tmp912?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp914)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp915, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  linearSystemData->setAElement(4, 1, (-((tmp915?1.0:-0.0))), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp916, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp918 = (modelica_boolean)tmp916;
  if(tmp918)
  {
    tmp919 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp917, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp919 = (tmp917?(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp919)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb745(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,745};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp932;
  modelica_boolean tmp933;
  modelica_boolean tmp934;
  modelica_real tmp935;
  modelica_boolean tmp936;
  modelica_boolean tmp937;
  modelica_boolean tmp938;
  modelica_real tmp939;
  RELATIONHYSTERESIS(tmp920, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp922 = (modelica_boolean)tmp920;
  if(tmp922)
  {
    tmp923 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp921, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp923 = (tmp921?data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp923, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp924, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp926 = (modelica_boolean)tmp924;
  if(tmp926)
  {
    tmp927 = (-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp925, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp927 = (tmp925?data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp927, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp928, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp930 = (modelica_boolean)tmp928;
  if(tmp930)
  {
    tmp931 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp929, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp931 = (tmp929?data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp931, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp932, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp934 = (modelica_boolean)tmp932;
  if(tmp934)
  {
    tmp935 = data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp933, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp935 = (tmp933?data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp935, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp936, 101127.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp938 = (modelica_boolean)tmp936;
  if(tmp938)
  {
    tmp939 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp937, 101127.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp939 = (tmp937?data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp939, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData745(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[387].attribute /* MatStm5.compMasFrac[2,1] */.max;
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
  /* static ls data for MatStm5.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[390].attribute /* MatStm5.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA623(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,623};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp940;
  modelica_boolean tmp941;
  modelica_boolean tmp942;
  modelica_boolean tmp943;
  modelica_real tmp944;
  modelica_boolean tmp945;
  modelica_boolean tmp946;
  modelica_boolean tmp947;
  modelica_real tmp948;
  modelica_boolean tmp949;
  modelica_boolean tmp950;
  modelica_boolean tmp951;
  modelica_real tmp952;
  modelica_boolean tmp953;
  modelica_boolean tmp954;
  modelica_boolean tmp955;
  modelica_boolean tmp956;
  modelica_real tmp957;
  modelica_boolean tmp958;
  modelica_boolean tmp959;
  modelica_boolean tmp960;
  modelica_real tmp961;
  modelica_boolean tmp962;
  modelica_boolean tmp963;
  modelica_boolean tmp964;
  modelica_real tmp965;
  modelica_boolean tmp966;
  modelica_boolean tmp967;
  modelica_boolean tmp968;
  modelica_boolean tmp969;
  modelica_real tmp970;
  modelica_boolean tmp971;
  modelica_boolean tmp972;
  modelica_boolean tmp973;
  modelica_boolean tmp974;
  modelica_real tmp975;
  modelica_boolean tmp976;
  modelica_boolean tmp977;
  modelica_boolean tmp978;
  modelica_real tmp979;
  modelica_boolean tmp980;
  modelica_boolean tmp981;
  modelica_boolean tmp982;
  modelica_real tmp983;
  RELATIONHYSTERESIS(tmp940, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 0, (-((tmp940?1.0:-0.0))), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp941, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp943 = (modelica_boolean)tmp941;
  if(tmp943)
  {
    tmp944 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp942, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp944 = (tmp942?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp944)), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp945, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp947 = (modelica_boolean)tmp945;
  if(tmp947)
  {
    tmp948 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp946, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp948 = (tmp946?(-data->localData[0]->realVars[272] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp948)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp949, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp951 = (modelica_boolean)tmp949;
  if(tmp951)
  {
    tmp952 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp950, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp952 = (tmp950?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp952)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp953, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 1, (-((tmp953?1.0:-0.0))), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp954, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp956 = (modelica_boolean)tmp954;
  if(tmp956)
  {
    tmp957 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp955, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp957 = (tmp955?(-data->localData[0]->realVars[273] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp957)), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp958, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp960 = (modelica_boolean)tmp958;
  if(tmp960)
  {
    tmp961 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp959, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp961 = (tmp959?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp961)), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp962, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp964 = (modelica_boolean)tmp962;
  if(tmp964)
  {
    tmp965 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp963, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp965 = (tmp963?(-data->localData[0]->realVars[274] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp965)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp966, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 3, (-((tmp966?1.0:-0.0))), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp967, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp969 = (modelica_boolean)tmp967;
  if(tmp969)
  {
    tmp970 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp968, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp970 = (tmp968?(-data->localData[0]->realVars[273] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp970)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp971, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(3, 2, (-((tmp971?1.0:-0.0))), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp972, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp974 = (modelica_boolean)tmp972;
  if(tmp974)
  {
    tmp975 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp973, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp975 = (tmp973?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp975)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp976, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp978 = (modelica_boolean)tmp976;
  if(tmp978)
  {
    tmp979 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp977, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp979 = (tmp977?(-data->localData[0]->realVars[274] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp979)), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp980, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp982 = (modelica_boolean)tmp980;
  if(tmp982)
  {
    tmp983 = (-data->localData[0]->realVars[272] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp981, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp983 = (tmp981?-0.0:(-data->localData[0]->realVars[272] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 4, (-(tmp983)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb623(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,623};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp984;
  modelica_boolean tmp985;
  modelica_boolean tmp986;
  modelica_real tmp987;
  modelica_boolean tmp988;
  modelica_boolean tmp989;
  modelica_boolean tmp990;
  modelica_real tmp991;
  modelica_boolean tmp992;
  modelica_boolean tmp993;
  modelica_boolean tmp994;
  modelica_real tmp995;
  modelica_boolean tmp996;
  modelica_boolean tmp997;
  modelica_boolean tmp998;
  modelica_real tmp999;
  modelica_boolean tmp1000;
  modelica_boolean tmp1001;
  modelica_boolean tmp1002;
  modelica_real tmp1003;
  RELATIONHYSTERESIS(tmp984, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp986 = (modelica_boolean)tmp984;
  if(tmp986)
  {
    tmp987 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp985, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp987 = (tmp985?data->localData[0]->realVars[202] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp987, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp988, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp990 = (modelica_boolean)tmp988;
  if(tmp990)
  {
    tmp991 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp989, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp991 = (tmp989?data->localData[0]->realVars[205] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp991, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp992, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp994 = (modelica_boolean)tmp992;
  if(tmp994)
  {
    tmp995 = (-data->localData[0]->realVars[209] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp993, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp995 = (tmp993?data->localData[0]->realVars[207] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[209] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp995, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp996, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp998 = (modelica_boolean)tmp996;
  if(tmp998)
  {
    tmp999 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp997, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp999 = (tmp997?data->localData[0]->realVars[204] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp999, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp1000, 101127.0, data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp1002 = (modelica_boolean)tmp1000;
  if(tmp1002)
  {
    tmp1003 = data->localData[0]->realVars[202] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1001, 101127.0, data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp1003 = (tmp1001?data->localData[0]->realVars[206] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[202] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp1003, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData623(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[212].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[212].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[212].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[213].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[213].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[213].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[211].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[211].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[211].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA574(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,574};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp1015;
  modelica_real tmp1016;
  modelica_boolean tmp1017;
  modelica_boolean tmp1018;
  modelica_boolean tmp1019;
  modelica_real tmp1020;
  modelica_boolean tmp1021;
  modelica_boolean tmp1022;
  modelica_boolean tmp1023;
  modelica_boolean tmp1024;
  modelica_real tmp1025;
  modelica_boolean tmp1026;
  modelica_boolean tmp1027;
  modelica_boolean tmp1028;
  modelica_boolean tmp1029;
  modelica_real tmp1030;
  modelica_boolean tmp1031;
  modelica_boolean tmp1032;
  modelica_boolean tmp1033;
  modelica_boolean tmp1034;
  modelica_real tmp1035;
  modelica_boolean tmp1036;
  modelica_boolean tmp1037;
  modelica_boolean tmp1038;
  modelica_real tmp1039;
  modelica_boolean tmp1040;
  modelica_boolean tmp1041;
  modelica_boolean tmp1042;
  modelica_real tmp1043;
  modelica_boolean tmp1044;
  modelica_boolean tmp1045;
  modelica_boolean tmp1046;
  modelica_real tmp1047;
  tmp1004 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1006 = (modelica_boolean)tmp1004;
  if(tmp1006)
  {
    tmp1007 = 0.0;
  }
  else
  {
    tmp1005 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1007 = (tmp1005?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp1007)), 0, linearSystemData, threadData);
  tmp1008 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1010 = (modelica_boolean)tmp1008;
  if(tmp1010)
  {
    tmp1011 = -1.0;
  }
  else
  {
    tmp1009 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1011 = (tmp1009?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp1011)), 1, linearSystemData, threadData);
  tmp1012 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp1012?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp1013 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1015 = (modelica_boolean)tmp1013;
  if(tmp1015)
  {
    tmp1016 = 0.0;
  }
  else
  {
    tmp1014 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1016 = (tmp1014?(-data->localData[0]->realVars[185] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1016)), 3, linearSystemData, threadData);
  tmp1017 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1019 = (modelica_boolean)tmp1017;
  if(tmp1019)
  {
    tmp1020 = 0.0;
  }
  else
  {
    tmp1018 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1020 = (tmp1018?(-data->localData[0]->realVars[186] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp1020)), 4, linearSystemData, threadData);
  tmp1021 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp1021?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp1022 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1024 = (modelica_boolean)tmp1022;
  if(tmp1024)
  {
    tmp1025 = 0.0;
  }
  else
  {
    tmp1023 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1025 = (tmp1023?(-data->localData[0]->realVars[185] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1025)), 6, linearSystemData, threadData);
  tmp1026 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp1026?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp1027 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1029 = (modelica_boolean)tmp1027;
  if(tmp1029)
  {
    tmp1030 = 0.0;
  }
  else
  {
    tmp1028 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1030 = (tmp1028?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp1030)), 8, linearSystemData, threadData);
  tmp1031 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp1031?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp1032 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1034 = (modelica_boolean)tmp1032;
  if(tmp1034)
  {
    tmp1035 = 0.0;
  }
  else
  {
    tmp1033 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1035 = (tmp1033?(-data->localData[0]->realVars[184] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp1035)), 10, linearSystemData, threadData);
  tmp1036 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1038 = (modelica_boolean)tmp1036;
  if(tmp1038)
  {
    tmp1039 = 0.0;
  }
  else
  {
    tmp1037 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1039 = (tmp1037?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp1039)), 11, linearSystemData, threadData);
  tmp1040 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1042 = (modelica_boolean)tmp1040;
  if(tmp1042)
  {
    tmp1043 = -0.0;
  }
  else
  {
    tmp1041 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1043 = (tmp1041?(-data->localData[0]->realVars[186] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp1043)), 12, linearSystemData, threadData);
  tmp1044 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1046 = (modelica_boolean)tmp1044;
  if(tmp1046)
  {
    tmp1047 = (-data->localData[0]->realVars[184] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp1045 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1047 = (tmp1045?-0.0:(-data->localData[0]->realVars[184] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp1047)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb574(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,574};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp1060;
  modelica_boolean tmp1061;
  modelica_boolean tmp1062;
  modelica_real tmp1063;
  modelica_boolean tmp1064;
  modelica_boolean tmp1065;
  modelica_boolean tmp1066;
  modelica_real tmp1067;
  tmp1048 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1050 = (modelica_boolean)tmp1048;
  if(tmp1050)
  {
    tmp1051 = 0.0;
  }
  else
  {
    tmp1049 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1051 = (tmp1049?data->localData[0]->realVars[117] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1051, linearSystemData, threadData);
  tmp1052 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1054 = (modelica_boolean)tmp1052;
  if(tmp1054)
  {
    tmp1055 = (-data->localData[0]->realVars[121] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1053 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1055 = (tmp1053?data->localData[0]->realVars[119] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[121] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp1055, linearSystemData, threadData);
  tmp1056 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1058 = (modelica_boolean)tmp1056;
  if(tmp1058)
  {
    tmp1059 = 0.0;
  }
  else
  {
    tmp1057 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1059 = (tmp1057?data->localData[0]->realVars[116] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1059, linearSystemData, threadData);
  tmp1060 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1062 = (modelica_boolean)tmp1060;
  if(tmp1062)
  {
    tmp1063 = 0.0;
  }
  else
  {
    tmp1061 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1063 = (tmp1061?data->localData[0]->realVars[114] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1063, linearSystemData, threadData);
  tmp1064 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1066 = (modelica_boolean)tmp1064;
  if(tmp1066)
  {
    tmp1067 = data->localData[0]->realVars[114] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1065 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1067 = (tmp1065?data->localData[0]->realVars[118] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[114] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp1067, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData574(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[124].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[124].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[124].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[125].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[125].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[125].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[123].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[123].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[123].attribute /* MatStm2.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA519(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,519};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1068;
  modelica_boolean tmp1069;
  modelica_boolean tmp1070;
  modelica_boolean tmp1071;
  modelica_real tmp1072;
  modelica_boolean tmp1073;
  modelica_boolean tmp1074;
  modelica_boolean tmp1075;
  modelica_real tmp1076;
  modelica_boolean tmp1077;
  modelica_boolean tmp1078;
  modelica_boolean tmp1079;
  modelica_real tmp1080;
  modelica_boolean tmp1081;
  modelica_boolean tmp1082;
  modelica_boolean tmp1083;
  modelica_boolean tmp1084;
  modelica_real tmp1085;
  modelica_boolean tmp1086;
  modelica_boolean tmp1087;
  modelica_boolean tmp1088;
  modelica_real tmp1089;
  modelica_boolean tmp1090;
  modelica_boolean tmp1091;
  modelica_boolean tmp1092;
  modelica_real tmp1093;
  modelica_boolean tmp1094;
  modelica_boolean tmp1095;
  modelica_boolean tmp1096;
  modelica_boolean tmp1097;
  modelica_real tmp1098;
  modelica_boolean tmp1099;
  modelica_boolean tmp1100;
  modelica_boolean tmp1101;
  modelica_boolean tmp1102;
  modelica_real tmp1103;
  modelica_boolean tmp1104;
  modelica_boolean tmp1105;
  modelica_boolean tmp1106;
  modelica_real tmp1107;
  modelica_boolean tmp1108;
  modelica_boolean tmp1109;
  modelica_boolean tmp1110;
  modelica_real tmp1111;
  tmp1068 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp1068?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp1069 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1071 = (modelica_boolean)tmp1069;
  if(tmp1071)
  {
    tmp1072 = 0.0;
  }
  else
  {
    tmp1070 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1072 = (tmp1070?(-data->localData[0]->realVars[96] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1072)), 1, linearSystemData, threadData);
  tmp1073 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1075 = (modelica_boolean)tmp1073;
  if(tmp1075)
  {
    tmp1076 = 0.0;
  }
  else
  {
    tmp1074 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1076 = (tmp1074?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 2, (-(tmp1076)), 2, linearSystemData, threadData);
  tmp1077 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1079 = (modelica_boolean)tmp1077;
  if(tmp1079)
  {
    tmp1080 = 0.0;
  }
  else
  {
    tmp1078 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1080 = (tmp1078?(-data->localData[0]->realVars[95] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp1080)), 3, linearSystemData, threadData);
  tmp1081 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp1081?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp1082 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1084 = (modelica_boolean)tmp1082;
  if(tmp1084)
  {
    tmp1085 = -1.0;
  }
  else
  {
    tmp1083 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1085 = (tmp1083?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp1085)), 5, linearSystemData, threadData);
  tmp1086 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1088 = (modelica_boolean)tmp1086;
  if(tmp1088)
  {
    tmp1089 = 0.0;
  }
  else
  {
    tmp1087 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1089 = (tmp1087?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp1089)), 6, linearSystemData, threadData);
  tmp1090 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1092 = (modelica_boolean)tmp1090;
  if(tmp1092)
  {
    tmp1093 = 0.0;
  }
  else
  {
    tmp1091 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1093 = (tmp1091?(-data->localData[0]->realVars[95] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1093)), 7, linearSystemData, threadData);
  tmp1094 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp1094?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp1095 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1097 = (modelica_boolean)tmp1095;
  if(tmp1097)
  {
    tmp1098 = 0.0;
  }
  else
  {
    tmp1096 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1098 = (tmp1096?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp1098)), 9, linearSystemData, threadData);
  tmp1099 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp1099?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp1100 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1102 = (modelica_boolean)tmp1100;
  if(tmp1102)
  {
    tmp1103 = 0.0;
  }
  else
  {
    tmp1101 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1103 = (tmp1101?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp1103)), 11, linearSystemData, threadData);
  tmp1104 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1106 = (modelica_boolean)tmp1104;
  if(tmp1106)
  {
    tmp1107 = (-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp1105 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1107 = (tmp1105?-0.0:(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp1107)), 12, linearSystemData, threadData);
  tmp1108 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1110 = (modelica_boolean)tmp1108;
  if(tmp1110)
  {
    tmp1111 = -0.0;
  }
  else
  {
    tmp1109 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1111 = (tmp1109?(-data->localData[0]->realVars[96] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp1111)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb519(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,519};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp1124;
  modelica_boolean tmp1125;
  modelica_boolean tmp1126;
  modelica_real tmp1127;
  modelica_boolean tmp1128;
  modelica_boolean tmp1129;
  modelica_boolean tmp1130;
  modelica_real tmp1131;
  tmp1112 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1114 = (modelica_boolean)tmp1112;
  if(tmp1114)
  {
    tmp1115 = (-data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1113 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1115 = (tmp1113?data->localData[0]->realVars[29] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(0, tmp1115, linearSystemData, threadData);
  tmp1116 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1118 = (modelica_boolean)tmp1116;
  if(tmp1118)
  {
    tmp1119 = 0.0;
  }
  else
  {
    tmp1117 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1119 = (tmp1117?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp1119, linearSystemData, threadData);
  tmp1120 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1122 = (modelica_boolean)tmp1120;
  if(tmp1122)
  {
    tmp1123 = 0.0;
  }
  else
  {
    tmp1121 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1123 = (tmp1121?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1123, linearSystemData, threadData);
  tmp1124 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1126 = (modelica_boolean)tmp1124;
  if(tmp1126)
  {
    tmp1127 = 0.0;
  }
  else
  {
    tmp1125 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1127 = (tmp1125?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1127, linearSystemData, threadData);
  tmp1128 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1130 = (modelica_boolean)tmp1128;
  if(tmp1130)
  {
    tmp1131 = data->localData[0]->realVars[24] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1129 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1131 = (tmp1129?data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[24] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp1131, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData519(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA375(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,375};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp1144;
  modelica_boolean tmp1145;
  modelica_boolean tmp1146;
  modelica_boolean tmp1147;
  modelica_real tmp1148;
  modelica_boolean tmp1149;
  modelica_boolean tmp1150;
  modelica_boolean tmp1151;
  modelica_real tmp1152;
  modelica_boolean tmp1153;
  modelica_boolean tmp1154;
  modelica_boolean tmp1155;
  modelica_real tmp1156;
  modelica_boolean tmp1157;
  modelica_boolean tmp1158;
  modelica_boolean tmp1159;
  modelica_boolean tmp1160;
  modelica_real tmp1161;
  modelica_boolean tmp1162;
  modelica_boolean tmp1163;
  modelica_boolean tmp1164;
  modelica_boolean tmp1165;
  modelica_real tmp1166;
  modelica_boolean tmp1167;
  modelica_boolean tmp1168;
  modelica_boolean tmp1169;
  modelica_real tmp1170;
  modelica_boolean tmp1171;
  modelica_boolean tmp1172;
  modelica_boolean tmp1173;
  modelica_real tmp1174;
  modelica_boolean tmp1175;
  tmp1132 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1134 = (modelica_boolean)tmp1132;
  if(tmp1134)
  {
    tmp1135 = (-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp1133 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1135 = (tmp1133?-0.0:(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(0, 0, (-(tmp1135)), 0, linearSystemData, threadData);
  tmp1136 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1138 = (modelica_boolean)tmp1136;
  if(tmp1138)
  {
    tmp1139 = -0.0;
  }
  else
  {
    tmp1137 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1139 = (tmp1137?(-data->localData[0]->realVars[363] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1139)), 1, linearSystemData, threadData);
  tmp1140 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1142 = (modelica_boolean)tmp1140;
  if(tmp1142)
  {
    tmp1143 = -1.0;
  }
  else
  {
    tmp1141 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1143 = (tmp1141?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 0, (-(tmp1143)), 2, linearSystemData, threadData);
  tmp1144 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(1, 1, (-((tmp1144?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp1145 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1147 = (modelica_boolean)tmp1145;
  if(tmp1147)
  {
    tmp1148 = 0.0;
  }
  else
  {
    tmp1146 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1148 = (tmp1146?(-data->localData[0]->realVars[362] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp1148)), 4, linearSystemData, threadData);
  tmp1149 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1151 = (modelica_boolean)tmp1149;
  if(tmp1151)
  {
    tmp1152 = 0.0;
  }
  else
  {
    tmp1150 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1152 = (tmp1150?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp1152)), 5, linearSystemData, threadData);
  tmp1153 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1155 = (modelica_boolean)tmp1153;
  if(tmp1155)
  {
    tmp1156 = 0.0;
  }
  else
  {
    tmp1154 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1156 = (tmp1154?(-data->localData[0]->realVars[363] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1156)), 6, linearSystemData, threadData);
  tmp1157 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp1157?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp1158 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1160 = (modelica_boolean)tmp1158;
  if(tmp1160)
  {
    tmp1161 = 0.0;
  }
  else
  {
    tmp1159 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1161 = (tmp1159?(-data->localData[0]->realVars[362] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp1161)), 8, linearSystemData, threadData);
  tmp1162 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 2, (-((tmp1162?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp1163 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1165 = (modelica_boolean)tmp1163;
  if(tmp1165)
  {
    tmp1166 = 0.0;
  }
  else
  {
    tmp1164 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1166 = (tmp1164?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 3, (-(tmp1166)), 10, linearSystemData, threadData);
  tmp1167 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1169 = (modelica_boolean)tmp1167;
  if(tmp1169)
  {
    tmp1170 = 0.0;
  }
  else
  {
    tmp1168 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1170 = (tmp1168?(-data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp1170)), 11, linearSystemData, threadData);
  tmp1171 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1173 = (modelica_boolean)tmp1171;
  if(tmp1173)
  {
    tmp1174 = 0.0;
  }
  else
  {
    tmp1172 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1174 = (tmp1172?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp1174)), 12, linearSystemData, threadData);
  tmp1175 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(4, 4, (-((tmp1175?1.0:-0.0))), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb375(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,375};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp1188;
  modelica_boolean tmp1189;
  modelica_boolean tmp1190;
  modelica_real tmp1191;
  modelica_boolean tmp1192;
  modelica_boolean tmp1193;
  modelica_boolean tmp1194;
  modelica_real tmp1195;
  tmp1176 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1178 = (modelica_boolean)tmp1176;
  if(tmp1178)
  {
    tmp1179 = data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1177 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1179 = (tmp1177?data->localData[0]->realVars[295] /* MatStm4.compMasFlo[3,1] variable */:data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(0, tmp1179, linearSystemData, threadData);
  tmp1180 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1182 = (modelica_boolean)tmp1180;
  if(tmp1182)
  {
    tmp1183 = 0.0;
  }
  else
  {
    tmp1181 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1183 = (tmp1181?data->localData[0]->realVars[294] /* MatStm4.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp1183, linearSystemData, threadData);
  tmp1184 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1186 = (modelica_boolean)tmp1184;
  if(tmp1186)
  {
    tmp1187 = (-data->localData[0]->realVars[298] /* MatStm4.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1185 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1187 = (tmp1185?data->localData[0]->realVars[296] /* MatStm4.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[298] /* MatStm4.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(2, tmp1187, linearSystemData, threadData);
  tmp1188 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1190 = (modelica_boolean)tmp1188;
  if(tmp1190)
  {
    tmp1191 = 0.0;
  }
  else
  {
    tmp1189 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1191 = (tmp1189?data->localData[0]->realVars[293] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1191, linearSystemData, threadData);
  tmp1192 = GreaterEq(101127.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp1194 = (modelica_boolean)tmp1192;
  if(tmp1194)
  {
    tmp1195 = 0.0;
  }
  else
  {
    tmp1193 = GreaterEq(101127.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp1195 = (tmp1193?data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp1195, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData375(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[297].attribute /* MatStm4.compMasFrac[1,1] */.max;
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
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[301].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[301].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[301].attribute /* MatStm4.compMasFrac[3,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA316(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,316};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp1207;
  modelica_boolean tmp1208;
  modelica_real tmp1209;
  modelica_boolean tmp1210;
  modelica_boolean tmp1211;
  modelica_boolean tmp1212;
  modelica_real tmp1213;
  modelica_boolean tmp1214;
  modelica_boolean tmp1215;
  modelica_boolean tmp1216;
  modelica_real tmp1217;
  modelica_boolean tmp1218;
  modelica_boolean tmp1219;
  modelica_boolean tmp1220;
  modelica_boolean tmp1221;
  modelica_real tmp1222;
  modelica_boolean tmp1223;
  modelica_boolean tmp1224;
  modelica_boolean tmp1225;
  modelica_real tmp1226;
  modelica_boolean tmp1227;
  modelica_boolean tmp1228;
  modelica_boolean tmp1229;
  modelica_boolean tmp1230;
  modelica_real tmp1231;
  modelica_boolean tmp1232;
  modelica_boolean tmp1233;
  modelica_boolean tmp1234;
  modelica_real tmp1235;
  modelica_boolean tmp1236;
  modelica_boolean tmp1237;
  modelica_boolean tmp1238;
  modelica_real tmp1239;
  tmp1196 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1198 = (modelica_boolean)tmp1196;
  if(tmp1198)
  {
    tmp1199 = 0.0;
  }
  else
  {
    tmp1197 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1199 = (tmp1197?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp1199)), 0, linearSystemData, threadData);
  tmp1200 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1202 = (modelica_boolean)tmp1200;
  if(tmp1202)
  {
    tmp1203 = 0.0;
  }
  else
  {
    tmp1201 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1203 = (tmp1201?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp1203)), 1, linearSystemData, threadData);
  tmp1204 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp1204?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp1205 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(1, 3, (-((tmp1205?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp1206 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1208 = (modelica_boolean)tmp1206;
  if(tmp1208)
  {
    tmp1209 = 0.0;
  }
  else
  {
    tmp1207 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1209 = (tmp1207?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp1209)), 4, linearSystemData, threadData);
  tmp1210 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1212 = (modelica_boolean)tmp1210;
  if(tmp1212)
  {
    tmp1213 = -1.0;
  }
  else
  {
    tmp1211 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1213 = (tmp1211?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 0, (-(tmp1213)), 5, linearSystemData, threadData);
  tmp1214 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1216 = (modelica_boolean)tmp1214;
  if(tmp1216)
  {
    tmp1217 = 0.0;
  }
  else
  {
    tmp1215 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1217 = (tmp1215?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp1217)), 6, linearSystemData, threadData);
  tmp1218 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(2, 2, (-((tmp1218?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp1219 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1221 = (modelica_boolean)tmp1219;
  if(tmp1221)
  {
    tmp1222 = 0.0;
  }
  else
  {
    tmp1220 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1222 = (tmp1220?(-data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 3, (-(tmp1222)), 8, linearSystemData, threadData);
  tmp1223 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1225 = (modelica_boolean)tmp1223;
  if(tmp1225)
  {
    tmp1226 = 0.0;
  }
  else
  {
    tmp1224 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1226 = (tmp1224?(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp1226)), 9, linearSystemData, threadData);
  tmp1227 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp1227?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp1228 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1230 = (modelica_boolean)tmp1228;
  if(tmp1230)
  {
    tmp1231 = 0.0;
  }
  else
  {
    tmp1229 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1231 = (tmp1229?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp1231)), 11, linearSystemData, threadData);
  tmp1232 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1234 = (modelica_boolean)tmp1232;
  if(tmp1234)
  {
    tmp1235 = (-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */);
  }
  else
  {
    tmp1233 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1235 = (tmp1233?-0.0:(-data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 0, (-(tmp1235)), 12, linearSystemData, threadData);
  tmp1236 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1238 = (modelica_boolean)tmp1236;
  if(tmp1238)
  {
    tmp1239 = -0.0;
  }
  else
  {
    tmp1237 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1239 = (tmp1237?(-data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp1239)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb316(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,316};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1240;
  modelica_boolean tmp1241;
  modelica_boolean tmp1242;
  modelica_real tmp1243;
  modelica_boolean tmp1244;
  modelica_boolean tmp1245;
  modelica_boolean tmp1246;
  modelica_real tmp1247;
  modelica_boolean tmp1248;
  modelica_boolean tmp1249;
  modelica_boolean tmp1250;
  modelica_real tmp1251;
  modelica_boolean tmp1252;
  modelica_boolean tmp1253;
  modelica_boolean tmp1254;
  modelica_real tmp1255;
  modelica_boolean tmp1256;
  modelica_boolean tmp1257;
  modelica_boolean tmp1258;
  modelica_real tmp1259;
  tmp1240 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1242 = (modelica_boolean)tmp1240;
  if(tmp1242)
  {
    tmp1243 = 0.0;
  }
  else
  {
    tmp1241 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1243 = (tmp1241?data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1243, linearSystemData, threadData);
  tmp1244 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1246 = (modelica_boolean)tmp1244;
  if(tmp1246)
  {
    tmp1247 = (-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1245 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1247 = (tmp1245?data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp1247, linearSystemData, threadData);
  tmp1248 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1250 = (modelica_boolean)tmp1248;
  if(tmp1250)
  {
    tmp1251 = 0.0;
  }
  else
  {
    tmp1249 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1251 = (tmp1249?data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1251, linearSystemData, threadData);
  tmp1252 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1254 = (modelica_boolean)tmp1252;
  if(tmp1254)
  {
    tmp1255 = 0.0;
  }
  else
  {
    tmp1253 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1255 = (tmp1253?data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1255, linearSystemData, threadData);
  tmp1256 = GreaterEq(101127.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp1258 = (modelica_boolean)tmp1256;
  if(tmp1258)
  {
    tmp1259 = data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1257 = GreaterEq(101127.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp1259 = (tmp1257?data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */:data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp1259, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData316(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm5.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[385].attribute /* MatStm5.compMasFrac[1,1] */.max;
  /* static ls data for MatStm5.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[389].attribute /* MatStm5.compMasFrac[3,1] */.max;
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
void setLinearMatrixA236(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,236};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1260;
  modelica_boolean tmp1261;
  modelica_boolean tmp1262;
  modelica_real tmp1263;
  modelica_boolean tmp1264;
  modelica_boolean tmp1265;
  modelica_boolean tmp1266;
  modelica_boolean tmp1267;
  modelica_real tmp1268;
  modelica_boolean tmp1269;
  modelica_boolean tmp1270;
  modelica_boolean tmp1271;
  modelica_real tmp1272;
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
  modelica_real tmp1289;
  modelica_boolean tmp1290;
  modelica_boolean tmp1291;
  modelica_boolean tmp1292;
  modelica_real tmp1293;
  modelica_boolean tmp1294;
  modelica_boolean tmp1295;
  modelica_boolean tmp1296;
  modelica_boolean tmp1297;
  modelica_real tmp1298;
  modelica_boolean tmp1299;
  modelica_boolean tmp1300;
  modelica_boolean tmp1301;
  modelica_boolean tmp1302;
  modelica_real tmp1303;
  tmp1260 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1262 = (modelica_boolean)tmp1260;
  if(tmp1262)
  {
    tmp1263 = 0.0;
  }
  else
  {
    tmp1261 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1263 = (tmp1261?(-data->localData[0]->realVars[273] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp1263)), 0, linearSystemData, threadData);
  tmp1264 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp1264?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp1265 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1267 = (modelica_boolean)tmp1265;
  if(tmp1267)
  {
    tmp1268 = 0.0;
  }
  else
  {
    tmp1266 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1268 = (tmp1266?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp1268)), 2, linearSystemData, threadData);
  tmp1269 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1271 = (modelica_boolean)tmp1269;
  if(tmp1271)
  {
    tmp1272 = -1.0;
  }
  else
  {
    tmp1270 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1272 = (tmp1270?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1272)), 3, linearSystemData, threadData);
  tmp1273 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1275 = (modelica_boolean)tmp1273;
  if(tmp1275)
  {
    tmp1276 = -0.0;
  }
  else
  {
    tmp1274 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1276 = (tmp1274?(-data->localData[0]->realVars[274] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp1276)), 4, linearSystemData, threadData);
  tmp1277 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1279 = (modelica_boolean)tmp1277;
  if(tmp1279)
  {
    tmp1280 = (-data->localData[0]->realVars[272] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp1278 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1280 = (tmp1278?-0.0:(-data->localData[0]->realVars[272] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 4, (-(tmp1280)), 5, linearSystemData, threadData);
  tmp1281 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1283 = (modelica_boolean)tmp1281;
  if(tmp1283)
  {
    tmp1284 = 0.0;
  }
  else
  {
    tmp1282 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1284 = (tmp1282?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1284)), 6, linearSystemData, threadData);
  tmp1285 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp1285?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp1286 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1288 = (modelica_boolean)tmp1286;
  if(tmp1288)
  {
    tmp1289 = 0.0;
  }
  else
  {
    tmp1287 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1289 = (tmp1287?(-data->localData[0]->realVars[272] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp1289)), 8, linearSystemData, threadData);
  tmp1290 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1292 = (modelica_boolean)tmp1290;
  if(tmp1292)
  {
    tmp1293 = 0.0;
  }
  else
  {
    tmp1291 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1293 = (tmp1291?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp1293)), 9, linearSystemData, threadData);
  tmp1294 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp1294?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp1295 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1297 = (modelica_boolean)tmp1295;
  if(tmp1297)
  {
    tmp1298 = 0.0;
  }
  else
  {
    tmp1296 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1298 = (tmp1296?(-data->localData[0]->realVars[273] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp1298)), 11, linearSystemData, threadData);
  tmp1299 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp1299?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp1300 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1302 = (modelica_boolean)tmp1300;
  if(tmp1302)
  {
    tmp1303 = 0.0;
  }
  else
  {
    tmp1301 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1303 = (tmp1301?(-data->localData[0]->realVars[274] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp1303)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb236(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,236};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1304;
  modelica_boolean tmp1305;
  modelica_boolean tmp1306;
  modelica_real tmp1307;
  modelica_boolean tmp1308;
  modelica_boolean tmp1309;
  modelica_boolean tmp1310;
  modelica_real tmp1311;
  modelica_boolean tmp1312;
  modelica_boolean tmp1313;
  modelica_boolean tmp1314;
  modelica_real tmp1315;
  modelica_boolean tmp1316;
  modelica_boolean tmp1317;
  modelica_boolean tmp1318;
  modelica_real tmp1319;
  modelica_boolean tmp1320;
  modelica_boolean tmp1321;
  modelica_boolean tmp1322;
  modelica_real tmp1323;
  tmp1304 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1306 = (modelica_boolean)tmp1304;
  if(tmp1306)
  {
    tmp1307 = 0.0;
  }
  else
  {
    tmp1305 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1307 = (tmp1305?data->localData[0]->realVars[205] /* MatStm3.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1307, linearSystemData, threadData);
  tmp1308 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1310 = (modelica_boolean)tmp1308;
  if(tmp1310)
  {
    tmp1311 = data->localData[0]->realVars[202] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1309 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1311 = (tmp1309?data->localData[0]->realVars[206] /* MatStm3.compMasFlo[3,1] variable */:data->localData[0]->realVars[202] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp1311, linearSystemData, threadData);
  tmp1312 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1314 = (modelica_boolean)tmp1312;
  if(tmp1314)
  {
    tmp1315 = 0.0;
  }
  else
  {
    tmp1313 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1315 = (tmp1313?data->localData[0]->realVars[202] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1315, linearSystemData, threadData);
  tmp1316 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1318 = (modelica_boolean)tmp1316;
  if(tmp1318)
  {
    tmp1319 = 0.0;
  }
  else
  {
    tmp1317 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1319 = (tmp1317?data->localData[0]->realVars[204] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1319, linearSystemData, threadData);
  tmp1320 = GreaterEq(101127.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp1322 = (modelica_boolean)tmp1320;
  if(tmp1322)
  {
    tmp1323 = (-data->localData[0]->realVars[209] /* MatStm3.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1321 = GreaterEq(101127.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp1323 = (tmp1321?data->localData[0]->realVars[207] /* MatStm3.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[209] /* MatStm3.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp1323, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData236(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[211].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[211].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[211].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[213].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[213].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[213].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[210].attribute /* MatStm3.compMasFrac[2,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[212].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[212].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[212].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[208].attribute /* MatStm3.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA175(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,175};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp1335;
  modelica_real tmp1336;
  modelica_boolean tmp1337;
  modelica_boolean tmp1338;
  modelica_boolean tmp1339;
  modelica_real tmp1340;
  modelica_boolean tmp1341;
  modelica_boolean tmp1342;
  modelica_boolean tmp1343;
  modelica_boolean tmp1344;
  modelica_real tmp1345;
  modelica_boolean tmp1346;
  modelica_boolean tmp1347;
  modelica_boolean tmp1348;
  modelica_boolean tmp1349;
  modelica_real tmp1350;
  modelica_boolean tmp1351;
  modelica_boolean tmp1352;
  modelica_boolean tmp1353;
  modelica_boolean tmp1354;
  modelica_real tmp1355;
  modelica_boolean tmp1356;
  modelica_boolean tmp1357;
  modelica_boolean tmp1358;
  modelica_real tmp1359;
  modelica_boolean tmp1360;
  modelica_boolean tmp1361;
  modelica_boolean tmp1362;
  modelica_real tmp1363;
  modelica_boolean tmp1364;
  modelica_boolean tmp1365;
  modelica_boolean tmp1366;
  modelica_real tmp1367;
  tmp1324 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1326 = (modelica_boolean)tmp1324;
  if(tmp1326)
  {
    tmp1327 = 0.0;
  }
  else
  {
    tmp1325 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1327 = (tmp1325?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp1327)), 0, linearSystemData, threadData);
  tmp1328 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1330 = (modelica_boolean)tmp1328;
  if(tmp1330)
  {
    tmp1331 = -1.0;
  }
  else
  {
    tmp1329 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1331 = (tmp1329?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp1331)), 1, linearSystemData, threadData);
  tmp1332 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp1332?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp1333 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1335 = (modelica_boolean)tmp1333;
  if(tmp1335)
  {
    tmp1336 = 0.0;
  }
  else
  {
    tmp1334 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1336 = (tmp1334?(-data->localData[0]->realVars[185] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1336)), 3, linearSystemData, threadData);
  tmp1337 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1339 = (modelica_boolean)tmp1337;
  if(tmp1339)
  {
    tmp1340 = 0.0;
  }
  else
  {
    tmp1338 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1340 = (tmp1338?(-data->localData[0]->realVars[186] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp1340)), 4, linearSystemData, threadData);
  tmp1341 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 4, (-((tmp1341?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp1342 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1344 = (modelica_boolean)tmp1342;
  if(tmp1344)
  {
    tmp1345 = 0.0;
  }
  else
  {
    tmp1343 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1345 = (tmp1343?(-data->localData[0]->realVars[185] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1345)), 6, linearSystemData, threadData);
  tmp1346 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp1346?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp1347 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1349 = (modelica_boolean)tmp1347;
  if(tmp1349)
  {
    tmp1350 = 0.0;
  }
  else
  {
    tmp1348 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1350 = (tmp1348?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp1350)), 8, linearSystemData, threadData);
  tmp1351 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 0, (-((tmp1351?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp1352 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1354 = (modelica_boolean)tmp1352;
  if(tmp1354)
  {
    tmp1355 = 0.0;
  }
  else
  {
    tmp1353 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1355 = (tmp1353?(-data->localData[0]->realVars[184] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp1355)), 10, linearSystemData, threadData);
  tmp1356 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1358 = (modelica_boolean)tmp1356;
  if(tmp1358)
  {
    tmp1359 = 0.0;
  }
  else
  {
    tmp1357 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1359 = (tmp1357?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp1359)), 11, linearSystemData, threadData);
  tmp1360 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1362 = (modelica_boolean)tmp1360;
  if(tmp1362)
  {
    tmp1363 = -0.0;
  }
  else
  {
    tmp1361 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1363 = (tmp1361?(-data->localData[0]->realVars[186] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp1363)), 12, linearSystemData, threadData);
  tmp1364 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1366 = (modelica_boolean)tmp1364;
  if(tmp1366)
  {
    tmp1367 = (-data->localData[0]->realVars[184] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp1365 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1367 = (tmp1365?-0.0:(-data->localData[0]->realVars[184] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 1, (-(tmp1367)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb175(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,175};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp1380;
  modelica_boolean tmp1381;
  modelica_boolean tmp1382;
  modelica_real tmp1383;
  modelica_boolean tmp1384;
  modelica_boolean tmp1385;
  modelica_boolean tmp1386;
  modelica_real tmp1387;
  tmp1368 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1370 = (modelica_boolean)tmp1368;
  if(tmp1370)
  {
    tmp1371 = 0.0;
  }
  else
  {
    tmp1369 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1371 = (tmp1369?data->localData[0]->realVars[117] /* MatStm2.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1371, linearSystemData, threadData);
  tmp1372 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1374 = (modelica_boolean)tmp1372;
  if(tmp1374)
  {
    tmp1375 = (-data->localData[0]->realVars[121] /* MatStm2.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1373 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1375 = (tmp1373?data->localData[0]->realVars[119] /* MatStm2.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[121] /* MatStm2.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(1, tmp1375, linearSystemData, threadData);
  tmp1376 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1378 = (modelica_boolean)tmp1376;
  if(tmp1378)
  {
    tmp1379 = 0.0;
  }
  else
  {
    tmp1377 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1379 = (tmp1377?data->localData[0]->realVars[116] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1379, linearSystemData, threadData);
  tmp1380 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1382 = (modelica_boolean)tmp1380;
  if(tmp1382)
  {
    tmp1383 = 0.0;
  }
  else
  {
    tmp1381 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1383 = (tmp1381?data->localData[0]->realVars[114] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1383, linearSystemData, threadData);
  tmp1384 = GreaterEq(101023.0,data->localData[0]->realVars[109] /* MatStm2.Pbubl variable */);
  tmp1386 = (modelica_boolean)tmp1384;
  if(tmp1386)
  {
    tmp1387 = data->localData[0]->realVars[114] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1385 = GreaterEq(101023.0,data->localData[0]->realVars[110] /* MatStm2.Pdew variable */);
    tmp1387 = (tmp1385?data->localData[0]->realVars[118] /* MatStm2.compMasFlo[3,1] variable */:data->localData[0]->realVars[114] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(4, tmp1387, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData175(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[124].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[124].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[124].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[122].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[125].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[125].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[125].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[123].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[123].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[123].attribute /* MatStm2.compMasFrac[2,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA121(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,121};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1388;
  modelica_boolean tmp1389;
  modelica_boolean tmp1390;
  modelica_real tmp1391;
  modelica_boolean tmp1392;
  modelica_boolean tmp1393;
  modelica_boolean tmp1394;
  modelica_boolean tmp1395;
  modelica_real tmp1396;
  modelica_boolean tmp1397;
  modelica_boolean tmp1398;
  modelica_boolean tmp1399;
  modelica_real tmp1400;
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
  modelica_boolean tmp1425;
  modelica_real tmp1426;
  modelica_boolean tmp1427;
  modelica_boolean tmp1428;
  modelica_boolean tmp1429;
  modelica_boolean tmp1430;
  modelica_real tmp1431;
  tmp1388 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1390 = (modelica_boolean)tmp1388;
  if(tmp1390)
  {
    tmp1391 = 0.0;
  }
  else
  {
    tmp1389 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1391 = (tmp1389?(-data->localData[0]->realVars[95] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp1391)), 0, linearSystemData, threadData);
  tmp1392 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 2, (-((tmp1392?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp1393 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1395 = (modelica_boolean)tmp1393;
  if(tmp1395)
  {
    tmp1396 = 0.0;
  }
  else
  {
    tmp1394 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1396 = (tmp1394?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 3, (-(tmp1396)), 2, linearSystemData, threadData);
  tmp1397 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1399 = (modelica_boolean)tmp1397;
  if(tmp1399)
  {
    tmp1400 = -1.0;
  }
  else
  {
    tmp1398 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1400 = (tmp1398?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1400)), 3, linearSystemData, threadData);
  tmp1401 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1403 = (modelica_boolean)tmp1401;
  if(tmp1403)
  {
    tmp1404 = -0.0;
  }
  else
  {
    tmp1402 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1404 = (tmp1402?(-data->localData[0]->realVars[96] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 3, (-(tmp1404)), 4, linearSystemData, threadData);
  tmp1405 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1407 = (modelica_boolean)tmp1405;
  if(tmp1407)
  {
    tmp1408 = (-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp1406 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1408 = (tmp1406?-0.0:(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 4, (-(tmp1408)), 5, linearSystemData, threadData);
  tmp1409 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1411 = (modelica_boolean)tmp1409;
  if(tmp1411)
  {
    tmp1412 = 0.0;
  }
  else
  {
    tmp1410 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1412 = (tmp1410?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1412)), 6, linearSystemData, threadData);
  tmp1413 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 3, (-((tmp1413?1.0:-0.0))), 7, linearSystemData, threadData);
  tmp1414 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1416 = (modelica_boolean)tmp1414;
  if(tmp1416)
  {
    tmp1417 = 0.0;
  }
  else
  {
    tmp1415 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1417 = (tmp1415?(-data->localData[0]->realVars[94] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp1417)), 8, linearSystemData, threadData);
  tmp1418 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1420 = (modelica_boolean)tmp1418;
  if(tmp1420)
  {
    tmp1421 = 0.0;
  }
  else
  {
    tmp1419 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1421 = (tmp1419?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp1421)), 9, linearSystemData, threadData);
  tmp1422 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(3, 1, (-((tmp1422?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp1423 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1425 = (modelica_boolean)tmp1423;
  if(tmp1425)
  {
    tmp1426 = 0.0;
  }
  else
  {
    tmp1424 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1426 = (tmp1424?(-data->localData[0]->realVars[95] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp1426)), 11, linearSystemData, threadData);
  tmp1427 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 0, (-((tmp1427?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp1428 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1430 = (modelica_boolean)tmp1428;
  if(tmp1430)
  {
    tmp1431 = 0.0;
  }
  else
  {
    tmp1429 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1431 = (tmp1429?(-data->localData[0]->realVars[96] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp1431)), 13, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb121(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,121};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp1444;
  modelica_boolean tmp1445;
  modelica_boolean tmp1446;
  modelica_real tmp1447;
  modelica_boolean tmp1448;
  modelica_boolean tmp1449;
  modelica_boolean tmp1450;
  modelica_real tmp1451;
  tmp1432 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1434 = (modelica_boolean)tmp1432;
  if(tmp1434)
  {
    tmp1435 = 0.0;
  }
  else
  {
    tmp1433 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1435 = (tmp1433?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[2,2] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1435, linearSystemData, threadData);
  tmp1436 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1438 = (modelica_boolean)tmp1436;
  if(tmp1438)
  {
    tmp1439 = data->localData[0]->realVars[24] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1437 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1439 = (tmp1437?data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,1] variable */:data->localData[0]->realVars[24] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp1439, linearSystemData, threadData);
  tmp1440 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1442 = (modelica_boolean)tmp1440;
  if(tmp1442)
  {
    tmp1443 = 0.0;
  }
  else
  {
    tmp1441 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1443 = (tmp1441?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1443, linearSystemData, threadData);
  tmp1444 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1446 = (modelica_boolean)tmp1444;
  if(tmp1446)
  {
    tmp1447 = 0.0;
  }
  else
  {
    tmp1445 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1447 = (tmp1445?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1447, linearSystemData, threadData);
  tmp1448 = GreaterEq(101231.0,data->localData[0]->realVars[19] /* MatStm1.Pbubl variable */);
  tmp1450 = (modelica_boolean)tmp1448;
  if(tmp1450)
  {
    tmp1451 = (-data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,2] variable */);
  }
  else
  {
    tmp1449 = GreaterEq(101231.0,data->localData[0]->realVars[20] /* MatStm1.Pdew variable */);
    tmp1451 = (tmp1449?data->localData[0]->realVars[29] /* MatStm1.compMasFlo[3,2] variable */:(-data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,2] variable */));
  }
  linearSystemData->setBElement(4, tmp1451, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData121(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,1] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 9, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[9].equationIndex = 804;
  linearSystemData[9].size = 5;
  linearSystemData[9].nnz = 14;
  linearSystemData[9].method = 0;
  linearSystemData[9].strictTearingFunctionCall = NULL;
  linearSystemData[9].setA = setLinearMatrixA804;
  linearSystemData[9].setb = setLinearVectorb804;
  linearSystemData[9].initializeStaticLSData = initializeStaticLSData804;
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
  linearSystemData[6].equationIndex = 574;
  linearSystemData[6].size = 5;
  linearSystemData[6].nnz = 14;
  linearSystemData[6].method = 0;
  linearSystemData[6].strictTearingFunctionCall = NULL;
  linearSystemData[6].setA = setLinearMatrixA574;
  linearSystemData[6].setb = setLinearVectorb574;
  linearSystemData[6].initializeStaticLSData = initializeStaticLSData574;
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
  linearSystemData[1].equationIndex = 175;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 14;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA175;
  linearSystemData[1].setb = setLinearVectorb175;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData175;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 121;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 14;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA121;
  linearSystemData[0].setb = setLinearVectorb121;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData121;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

