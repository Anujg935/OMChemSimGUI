/* Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */
OMC_DISABLE_OPT
void setLinearMatrixA733(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,733};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp752;
  modelica_boolean tmp753;
  modelica_boolean tmp754;
  modelica_real tmp755;
  modelica_boolean tmp756;
  modelica_boolean tmp757;
  modelica_boolean tmp758;
  modelica_boolean tmp759;
  modelica_real tmp760;
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
  modelica_boolean tmp772;
  modelica_boolean tmp773;
  modelica_real tmp774;
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
  modelica_boolean tmp794;
  modelica_real tmp795;
  modelica_boolean tmp796;
  modelica_boolean tmp797;
  modelica_boolean tmp798;
  modelica_real tmp799;
  modelica_boolean tmp800;
  modelica_boolean tmp801;
  modelica_boolean tmp802;
  modelica_real tmp803;
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
  RELATIONHYSTERESIS(tmp752, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp754 = (modelica_boolean)tmp752;
  if(tmp754)
  {
    tmp755 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp753, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp755 = (tmp753?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 5, (-(tmp755)), 0, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp756, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(0, 7, (-((tmp756?1.0:-0.0))), 1, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp757, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp759 = (modelica_boolean)tmp757;
  if(tmp759)
  {
    tmp760 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp758, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp760 = (tmp758?(-data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 8, (-(tmp760)), 2, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp761, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp763 = (modelica_boolean)tmp761;
  if(tmp763)
  {
    tmp764 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp762, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp764 = (tmp762?(-data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp764)), 3, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp765, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp767 = (modelica_boolean)tmp765;
  if(tmp767)
  {
    tmp768 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp766, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp768 = (tmp766?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp768)), 4, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp769, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(1, 8, (-((tmp769?1.0:-0.0))), 5, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp770, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(2, 1, (-((tmp770?1.0:-0.0))), 6, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp771, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp773 = (modelica_boolean)tmp771;
  if(tmp773)
  {
    tmp774 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp772, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp774 = (tmp772?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp774)), 7, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp775, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp777 = (modelica_boolean)tmp775;
  if(tmp777)
  {
    tmp778 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp776, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp778 = (tmp776?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 6, (-(tmp778)), 8, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp779, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp781 = (modelica_boolean)tmp779;
  if(tmp781)
  {
    tmp782 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp780, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp782 = (tmp780?(-data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 7, (-(tmp782)), 9, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp783, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp785 = (modelica_boolean)tmp783;
  if(tmp785)
  {
    tmp786 = (-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp784, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp786 = (tmp784?-0.0:(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 5, (-(tmp786)), 10, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp787, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp789 = (modelica_boolean)tmp787;
  if(tmp789)
  {
    tmp790 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp788, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp790 = (tmp788?(-data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 6, (-(tmp790)), 11, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp791, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(4, 0, (-((tmp791?1.0:-0.0))), 12, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp792, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp794 = (modelica_boolean)tmp792;
  if(tmp794)
  {
    tmp795 = -1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp793, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp795 = (tmp793?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 3, (-(tmp795)), 13, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp796, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp798 = (modelica_boolean)tmp796;
  if(tmp798)
  {
    tmp799 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp797, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp799 = (tmp797?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp799)), 14, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp800, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp802 = (modelica_boolean)tmp800;
  if(tmp802)
  {
    tmp803 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp801, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp803 = (tmp801?(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 5, (-(tmp803)), 15, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp804, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp806 = (modelica_boolean)tmp804;
  if(tmp806)
  {
    tmp807 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp805, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp807 = (tmp805?-0.0:1.0);
  }
  linearSystemData->setAElement(5, 0, (-(tmp807)), 16, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp808, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp810 = (modelica_boolean)tmp808;
  if(tmp810)
  {
    tmp811 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp809, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp811 = (tmp809?(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(5, 3, (-(tmp811)), 17, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp812, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(5, 4, (-((tmp812?1.0:-0.0))), 18, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp813, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp815 = (modelica_boolean)tmp813;
  if(tmp815)
  {
    tmp816 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp814, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp816 = (tmp814?(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(6, 2, (-(tmp816)), 19, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp817, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp819 = (modelica_boolean)tmp817;
  if(tmp819)
  {
    tmp820 = (-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp818, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp820 = (tmp818?-0.0:(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(6, 3, (-(tmp820)), 20, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp821, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp823 = (modelica_boolean)tmp821;
  if(tmp823)
  {
    tmp824 = -0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp822, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp824 = (tmp822?(-data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(7, 1, (-(tmp824)), 21, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp825, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp827 = (modelica_boolean)tmp825;
  if(tmp827)
  {
    tmp828 = (-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp826, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp828 = (tmp826?-0.0:(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(7, 2, (-(tmp828)), 22, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp829, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp831 = (modelica_boolean)tmp829;
  if(tmp831)
  {
    tmp832 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp830, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp832 = (tmp830?(-data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(8, 0, (-(tmp832)), 23, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp833, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp835 = (modelica_boolean)tmp833;
  if(tmp835)
  {
    tmp836 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp834, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp836 = (tmp834?-0.0:1.0);
  }
  linearSystemData->setAElement(8, 1, (-(tmp836)), 24, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp837, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  linearSystemData->setAElement(8, 6, (-((tmp837?1.0:-0.0))), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb733(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,733};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp853;
  modelica_boolean tmp854;
  modelica_boolean tmp855;
  modelica_boolean tmp856;
  modelica_real tmp857;
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
  RELATIONHYSTERESIS(tmp838, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp840 = (modelica_boolean)tmp838;
  if(tmp840)
  {
    tmp841 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp839, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp841 = (tmp839?data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp841, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp842, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp844 = (modelica_boolean)tmp842;
  if(tmp844)
  {
    tmp845 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp843, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp845 = (tmp843?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp845, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp846, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp848 = (modelica_boolean)tmp846;
  if(tmp848)
  {
    tmp849 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp847, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp849 = (tmp847?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp849, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp850, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp852 = (modelica_boolean)tmp850;
  if(tmp852)
  {
    tmp853 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp851, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp853 = (tmp851?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(3, tmp853, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp854, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp856 = (modelica_boolean)tmp854;
  if(tmp856)
  {
    tmp857 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp855, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp857 = (tmp855?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp857, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp858, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp860 = (modelica_boolean)tmp858;
  if(tmp860)
  {
    tmp861 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp859, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp861 = (tmp859?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(5, tmp861, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp862, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp864 = (modelica_boolean)tmp862;
  if(tmp864)
  {
    tmp865 = data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp863, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp865 = (tmp863?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */:data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(6, tmp865, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp866, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp868 = (modelica_boolean)tmp866;
  if(tmp868)
  {
    tmp869 = data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp867, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp869 = (tmp867?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,2] variable */:data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(7, tmp869, linearSystemData, threadData);
  RELATIONHYSTERESIS(tmp870, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp872 = (modelica_boolean)tmp870;
  if(tmp872)
  {
    tmp873 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp871, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp873 = (tmp871?data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(8, tmp873, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData733(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm1.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[32].attribute /* MatStm1.compMasFrac[2,1] */.max;
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,2] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,1] */.max;
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
void setLinearMatrixA671(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,671};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp888;
  modelica_boolean tmp889;
  modelica_real tmp890;
  modelica_boolean tmp891;
  modelica_boolean tmp892;
  modelica_boolean tmp893;
  modelica_real tmp894;
  modelica_boolean tmp895;
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
  modelica_boolean tmp908;
  modelica_boolean tmp909;
  modelica_boolean tmp910;
  modelica_real tmp911;
  modelica_boolean tmp912;
  modelica_boolean tmp913;
  modelica_boolean tmp914;
  modelica_real tmp915;
  modelica_boolean tmp916;
  modelica_boolean tmp917;
  modelica_boolean tmp918;
  modelica_real tmp919;
  modelica_boolean tmp920;
  modelica_boolean tmp921;
  modelica_boolean tmp922;
  modelica_boolean tmp923;
  modelica_real tmp924;
  modelica_boolean tmp925;
  modelica_boolean tmp926;
  modelica_boolean tmp927;
  modelica_boolean tmp928;
  modelica_real tmp929;
  modelica_boolean tmp930;
  modelica_boolean tmp931;
  modelica_boolean tmp932;
  modelica_real tmp933;
  modelica_boolean tmp934;
  modelica_boolean tmp935;
  modelica_boolean tmp936;
  modelica_real tmp937;
  modelica_boolean tmp938;
  modelica_boolean tmp939;
  modelica_boolean tmp940;
  modelica_boolean tmp941;
  modelica_real tmp942;
  modelica_boolean tmp943;
  modelica_boolean tmp944;
  modelica_boolean tmp945;
  modelica_real tmp946;
  modelica_boolean tmp947;
  modelica_boolean tmp948;
  modelica_boolean tmp949;
  modelica_boolean tmp950;
  modelica_real tmp951;
  modelica_boolean tmp952;
  modelica_boolean tmp953;
  modelica_boolean tmp954;
  modelica_real tmp955;
  modelica_boolean tmp956;
  modelica_boolean tmp957;
  modelica_boolean tmp958;
  modelica_real tmp959;
  tmp874 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp876 = (modelica_boolean)tmp874;
  if(tmp876)
  {
    tmp877 = 0.0;
  }
  else
  {
    tmp875 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp877 = (tmp875?(-data->localData[0]->realVars[471] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp877)), 0, linearSystemData, threadData);
  tmp878 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp880 = (modelica_boolean)tmp878;
  if(tmp880)
  {
    tmp881 = -1.0;
  }
  else
  {
    tmp879 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp881 = (tmp879?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 6, (-(tmp881)), 1, linearSystemData, threadData);
  tmp882 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(0, 7, (-((tmp882?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp883 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp885 = (modelica_boolean)tmp883;
  if(tmp885)
  {
    tmp886 = 0.0;
  }
  else
  {
    tmp884 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp886 = (tmp884?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 8, (-(tmp886)), 3, linearSystemData, threadData);
  tmp887 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp889 = (modelica_boolean)tmp887;
  if(tmp889)
  {
    tmp890 = 0.0;
  }
  else
  {
    tmp888 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp890 = (tmp888?(-data->localData[0]->realVars[471] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp890)), 4, linearSystemData, threadData);
  tmp891 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp893 = (modelica_boolean)tmp891;
  if(tmp893)
  {
    tmp894 = 0.0;
  }
  else
  {
    tmp892 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp894 = (tmp892?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp894)), 5, linearSystemData, threadData);
  tmp895 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(1, 8, (-((tmp895?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp896 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp898 = (modelica_boolean)tmp896;
  if(tmp898)
  {
    tmp899 = (-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp897 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp899 = (tmp897?-0.0:(-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 6, (-(tmp899)), 7, linearSystemData, threadData);
  tmp900 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp902 = (modelica_boolean)tmp900;
  if(tmp902)
  {
    tmp903 = -0.0;
  }
  else
  {
    tmp901 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp903 = (tmp901?(-data->localData[0]->realVars[471] /* MatStm4.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 7, (-(tmp903)), 8, linearSystemData, threadData);
  tmp904 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp906 = (modelica_boolean)tmp904;
  if(tmp906)
  {
    tmp907 = (-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp905 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp907 = (tmp905?-0.0:(-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 5, (-(tmp907)), 9, linearSystemData, threadData);
  tmp908 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp910 = (modelica_boolean)tmp908;
  if(tmp910)
  {
    tmp911 = -0.0;
  }
  else
  {
    tmp909 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp911 = (tmp909?(-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 6, (-(tmp911)), 10, linearSystemData, threadData);
  tmp912 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp914 = (modelica_boolean)tmp912;
  if(tmp914)
  {
    tmp915 = 0.0;
  }
  else
  {
    tmp913 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp915 = (tmp913?(-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(4, 0, (-(tmp915)), 11, linearSystemData, threadData);
  tmp916 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp918 = (modelica_boolean)tmp916;
  if(tmp918)
  {
    tmp919 = 0.0;
  }
  else
  {
    tmp917 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp919 = (tmp917?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 3, (-(tmp919)), 12, linearSystemData, threadData);
  tmp920 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(4, 4, (-((tmp920?1.0:-0.0))), 13, linearSystemData, threadData);
  tmp921 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp923 = (modelica_boolean)tmp921;
  if(tmp923)
  {
    tmp924 = -1.0;
  }
  else
  {
    tmp922 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp924 = (tmp922?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 5, (-(tmp924)), 14, linearSystemData, threadData);
  tmp925 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(5, 3, (-((tmp925?1.0:-0.0))), 15, linearSystemData, threadData);
  tmp926 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp928 = (modelica_boolean)tmp926;
  if(tmp928)
  {
    tmp929 = 0.0;
  }
  else
  {
    tmp927 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp929 = (tmp927?-0.0:1.0);
  }
  linearSystemData->setAElement(5, 4, (-(tmp929)), 16, linearSystemData, threadData);
  tmp930 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp932 = (modelica_boolean)tmp930;
  if(tmp932)
  {
    tmp933 = 0.0;
  }
  else
  {
    tmp931 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp933 = (tmp931?(-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(5, 5, (-(tmp933)), 17, linearSystemData, threadData);
  tmp934 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp936 = (modelica_boolean)tmp934;
  if(tmp936)
  {
    tmp937 = 0.0;
  }
  else
  {
    tmp935 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp937 = (tmp935?-0.0:1.0);
  }
  linearSystemData->setAElement(6, 1, (-(tmp937)), 18, linearSystemData, threadData);
  tmp938 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(6, 2, (-((tmp938?1.0:-0.0))), 19, linearSystemData, threadData);
  tmp939 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp941 = (modelica_boolean)tmp939;
  if(tmp941)
  {
    tmp942 = 0.0;
  }
  else
  {
    tmp940 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp942 = (tmp940?(-data->localData[0]->realVars[472] /* MatStm4.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(6, 3, (-(tmp942)), 20, linearSystemData, threadData);
  tmp943 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp945 = (modelica_boolean)tmp943;
  if(tmp945)
  {
    tmp946 = -1.0;
  }
  else
  {
    tmp944 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp946 = (tmp944?-0.0:-1.0);
  }
  linearSystemData->setAElement(7, 0, (-(tmp946)), 21, linearSystemData, threadData);
  tmp947 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(7, 1, (-((tmp947?1.0:-0.0))), 22, linearSystemData, threadData);
  tmp948 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp950 = (modelica_boolean)tmp948;
  if(tmp950)
  {
    tmp951 = 0.0;
  }
  else
  {
    tmp949 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp951 = (tmp949?(-data->localData[0]->realVars[472] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(7, 2, (-(tmp951)), 23, linearSystemData, threadData);
  tmp952 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp954 = (modelica_boolean)tmp952;
  if(tmp954)
  {
    tmp955 = (-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp953 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp955 = (tmp953?-0.0:(-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(8, 0, (-(tmp955)), 24, linearSystemData, threadData);
  tmp956 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp958 = (modelica_boolean)tmp956;
  if(tmp958)
  {
    tmp959 = -0.0;
  }
  else
  {
    tmp957 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp959 = (tmp957?(-data->localData[0]->realVars[472] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(8, 8, (-(tmp959)), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb671(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,671};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp960;
  modelica_boolean tmp961;
  modelica_boolean tmp962;
  modelica_real tmp963;
  modelica_boolean tmp964;
  modelica_boolean tmp965;
  modelica_boolean tmp966;
  modelica_real tmp967;
  modelica_boolean tmp968;
  modelica_boolean tmp969;
  modelica_boolean tmp970;
  modelica_real tmp971;
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
  tmp960 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp962 = (modelica_boolean)tmp960;
  if(tmp962)
  {
    tmp963 = 0.0;
  }
  else
  {
    tmp961 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp963 = (tmp961?data->localData[0]->realVars[380] /* MatStm4.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp963, linearSystemData, threadData);
  tmp964 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp966 = (modelica_boolean)tmp964;
  if(tmp966)
  {
    tmp967 = 0.0;
  }
  else
  {
    tmp965 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp967 = (tmp965?data->localData[0]->realVars[378] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp967, linearSystemData, threadData);
  tmp968 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp970 = (modelica_boolean)tmp968;
  if(tmp970)
  {
    tmp971 = data->localData[0]->realVars[376] /* MatStm4.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp969 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp971 = (tmp969?data->localData[0]->realVars[379] /* MatStm4.compMasFlo[2,2] variable */:data->localData[0]->realVars[376] /* MatStm4.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(2, tmp971, linearSystemData, threadData);
  tmp972 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp974 = (modelica_boolean)tmp972;
  if(tmp974)
  {
    tmp975 = data->localData[0]->realVars[375] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp973 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp975 = (tmp973?data->localData[0]->realVars[376] /* MatStm4.compMasFlo[1,2] variable */:data->localData[0]->realVars[375] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp975, linearSystemData, threadData);
  tmp976 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp978 = (modelica_boolean)tmp976;
  if(tmp978)
  {
    tmp979 = 0.0;
  }
  else
  {
    tmp977 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp979 = (tmp977?data->localData[0]->realVars[377] /* MatStm4.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp979, linearSystemData, threadData);
  tmp980 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp982 = (modelica_boolean)tmp980;
  if(tmp982)
  {
    tmp983 = 0.0;
  }
  else
  {
    tmp981 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp983 = (tmp981?data->localData[0]->realVars[375] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(5, tmp983, linearSystemData, threadData);
  tmp984 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp986 = (modelica_boolean)tmp984;
  if(tmp986)
  {
    tmp987 = 0.0;
  }
  else
  {
    tmp985 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp987 = (tmp985?data->localData[0]->realVars[381] /* MatStm4.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(6, tmp987, linearSystemData, threadData);
  tmp988 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp990 = (modelica_boolean)tmp988;
  if(tmp990)
  {
    tmp991 = 0.0;
  }
  else
  {
    tmp989 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp991 = (tmp989?data->localData[0]->realVars[383] /* MatStm4.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(7, tmp991, linearSystemData, threadData);
  tmp992 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp994 = (modelica_boolean)tmp992;
  if(tmp994)
  {
    tmp995 = data->localData[0]->realVars[377] /* MatStm4.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp993 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp995 = (tmp993?data->localData[0]->realVars[382] /* MatStm4.compMasFlo[3,2] variable */:data->localData[0]->realVars[377] /* MatStm4.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(8, tmp995, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData671(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[386].attribute /* MatStm4.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[386].attribute /* MatStm4.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[386].attribute /* MatStm4.compMasFrac[1,3] */.max;
  /* static ls data for MatStm4.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[389].attribute /* MatStm4.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[389].attribute /* MatStm4.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[389].attribute /* MatStm4.compMasFrac[2,3] */.max;
  /* static ls data for MatStm4.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[392].attribute /* MatStm4.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[392].attribute /* MatStm4.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[392].attribute /* MatStm4.compMasFrac[3,3] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[390].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[390].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[390].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[387].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[387].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[387].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[384].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[384].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[384].attribute /* MatStm4.compMasFrac[1,1] */.max;
  /* static ls data for MatStm4.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[385].attribute /* MatStm4.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[385].attribute /* MatStm4.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[385].attribute /* MatStm4.compMasFrac[1,2] */.max;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[388].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[388].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[388].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[391].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[391].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[391].attribute /* MatStm4.compMasFrac[3,2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA604(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,604};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp996;
  modelica_boolean tmp997;
  modelica_boolean tmp998;
  modelica_boolean tmp999;
  modelica_real tmp1000;
  modelica_boolean tmp1001;
  modelica_boolean tmp1002;
  modelica_boolean tmp1003;
  modelica_real tmp1004;
  modelica_boolean tmp1005;
  modelica_boolean tmp1006;
  modelica_boolean tmp1007;
  modelica_real tmp1008;
  modelica_boolean tmp1009;
  modelica_boolean tmp1010;
  modelica_boolean tmp1011;
  modelica_real tmp1012;
  modelica_boolean tmp1013;
  modelica_boolean tmp1014;
  modelica_boolean tmp1015;
  modelica_real tmp1016;
  modelica_boolean tmp1017;
  modelica_boolean tmp1018;
  modelica_boolean tmp1019;
  modelica_boolean tmp1020;
  modelica_real tmp1021;
  modelica_boolean tmp1022;
  modelica_boolean tmp1023;
  modelica_boolean tmp1024;
  modelica_boolean tmp1025;
  modelica_real tmp1026;
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
  modelica_boolean tmp1059;
  modelica_real tmp1060;
  modelica_boolean tmp1061;
  modelica_boolean tmp1062;
  modelica_boolean tmp1063;
  modelica_real tmp1064;
  modelica_boolean tmp1065;
  modelica_boolean tmp1066;
  modelica_boolean tmp1067;
  modelica_boolean tmp1068;
  modelica_real tmp1069;
  modelica_boolean tmp1070;
  modelica_boolean tmp1071;
  modelica_boolean tmp1072;
  modelica_real tmp1073;
  modelica_boolean tmp1074;
  modelica_boolean tmp1075;
  modelica_boolean tmp1076;
  modelica_real tmp1077;
  modelica_boolean tmp1078;
  modelica_boolean tmp1079;
  modelica_boolean tmp1080;
  modelica_real tmp1081;
  tmp996 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 0, (-((tmp996?1.0:-0.0))), 0, linearSystemData, threadData);
  tmp997 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp999 = (modelica_boolean)tmp997;
  if(tmp999)
  {
    tmp1000 = -1.0;
  }
  else
  {
    tmp998 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1000 = (tmp998?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp1000)), 1, linearSystemData, threadData);
  tmp1001 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1003 = (modelica_boolean)tmp1001;
  if(tmp1003)
  {
    tmp1004 = 0.0;
  }
  else
  {
    tmp1002 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1004 = (tmp1002?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1004)), 2, linearSystemData, threadData);
  tmp1005 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1007 = (modelica_boolean)tmp1005;
  if(tmp1007)
  {
    tmp1008 = 0.0;
  }
  else
  {
    tmp1006 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1008 = (tmp1006?(-data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 8, (-(tmp1008)), 3, linearSystemData, threadData);
  tmp1009 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1011 = (modelica_boolean)tmp1009;
  if(tmp1011)
  {
    tmp1012 = -1.0;
  }
  else
  {
    tmp1010 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1012 = (tmp1010?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 5, (-(tmp1012)), 4, linearSystemData, threadData);
  tmp1013 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1015 = (modelica_boolean)tmp1013;
  if(tmp1015)
  {
    tmp1016 = 0.0;
  }
  else
  {
    tmp1014 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1016 = (tmp1014?(-data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp1016)), 5, linearSystemData, threadData);
  tmp1017 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 8, (-((tmp1017?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp1018 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1020 = (modelica_boolean)tmp1018;
  if(tmp1020)
  {
    tmp1021 = 0.0;
  }
  else
  {
    tmp1019 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1021 = (tmp1019?(-data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(2, 6, (-(tmp1021)), 7, linearSystemData, threadData);
  tmp1022 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 7, (-((tmp1022?1.0:-0.0))), 8, linearSystemData, threadData);
  tmp1023 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1025 = (modelica_boolean)tmp1023;
  if(tmp1025)
  {
    tmp1026 = 0.0;
  }
  else
  {
    tmp1024 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1026 = (tmp1024?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 8, (-(tmp1026)), 9, linearSystemData, threadData);
  tmp1027 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1029 = (modelica_boolean)tmp1027;
  if(tmp1029)
  {
    tmp1030 = -1.0;
  }
  else
  {
    tmp1028 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1030 = (tmp1028?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 2, (-(tmp1030)), 10, linearSystemData, threadData);
  tmp1031 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(3, 3, (-((tmp1031?1.0:-0.0))), 11, linearSystemData, threadData);
  tmp1032 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1034 = (modelica_boolean)tmp1032;
  if(tmp1034)
  {
    tmp1035 = 0.0;
  }
  else
  {
    tmp1033 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1035 = (tmp1033?(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 5, (-(tmp1035)), 12, linearSystemData, threadData);
  tmp1036 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1038 = (modelica_boolean)tmp1036;
  if(tmp1038)
  {
    tmp1039 = 0.0;
  }
  else
  {
    tmp1037 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1039 = (tmp1037?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 6, (-(tmp1039)), 13, linearSystemData, threadData);
  tmp1040 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1042 = (modelica_boolean)tmp1040;
  if(tmp1042)
  {
    tmp1043 = -0.0;
  }
  else
  {
    tmp1041 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1043 = (tmp1041?(-data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp1043)), 14, linearSystemData, threadData);
  tmp1044 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1046 = (modelica_boolean)tmp1044;
  if(tmp1046)
  {
    tmp1047 = (-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp1045 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1047 = (tmp1045?-0.0:(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 5, (-(tmp1047)), 15, linearSystemData, threadData);
  tmp1048 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1050 = (modelica_boolean)tmp1048;
  if(tmp1050)
  {
    tmp1051 = 0.0;
  }
  else
  {
    tmp1049 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1051 = (tmp1049?-0.0:1.0);
  }
  linearSystemData->setAElement(5, 0, (-(tmp1051)), 16, linearSystemData, threadData);
  tmp1052 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1054 = (modelica_boolean)tmp1052;
  if(tmp1054)
  {
    tmp1055 = 0.0;
  }
  else
  {
    tmp1053 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1055 = (tmp1053?(-data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(5, 3, (-(tmp1055)), 17, linearSystemData, threadData);
  tmp1056 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(5, 4, (-((tmp1056?1.0:-0.0))), 18, linearSystemData, threadData);
  tmp1057 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1059 = (modelica_boolean)tmp1057;
  if(tmp1059)
  {
    tmp1060 = 0.0;
  }
  else
  {
    tmp1058 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1060 = (tmp1058?(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(6, 2, (-(tmp1060)), 19, linearSystemData, threadData);
  tmp1061 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1063 = (modelica_boolean)tmp1061;
  if(tmp1063)
  {
    tmp1064 = 0.0;
  }
  else
  {
    tmp1062 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1064 = (tmp1062?-0.0:1.0);
  }
  linearSystemData->setAElement(6, 3, (-(tmp1064)), 20, linearSystemData, threadData);
  tmp1065 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(6, 6, (-((tmp1065?1.0:-0.0))), 21, linearSystemData, threadData);
  tmp1066 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1068 = (modelica_boolean)tmp1066;
  if(tmp1068)
  {
    tmp1069 = -0.0;
  }
  else
  {
    tmp1067 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1069 = (tmp1067?(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(7, 1, (-(tmp1069)), 22, linearSystemData, threadData);
  tmp1070 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1072 = (modelica_boolean)tmp1070;
  if(tmp1072)
  {
    tmp1073 = (-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp1071 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1073 = (tmp1071?-0.0:(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(7, 2, (-(tmp1073)), 23, linearSystemData, threadData);
  tmp1074 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1076 = (modelica_boolean)tmp1074;
  if(tmp1076)
  {
    tmp1077 = -0.0;
  }
  else
  {
    tmp1075 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1077 = (tmp1075?(-data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(8, 0, (-(tmp1077)), 24, linearSystemData, threadData);
  tmp1078 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1080 = (modelica_boolean)tmp1078;
  if(tmp1080)
  {
    tmp1081 = (-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp1079 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1081 = (tmp1079?-0.0:(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(8, 1, (-(tmp1081)), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb604(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,604};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_real tmp1097;
  modelica_boolean tmp1098;
  modelica_boolean tmp1099;
  modelica_boolean tmp1100;
  modelica_real tmp1101;
  modelica_boolean tmp1102;
  modelica_boolean tmp1103;
  modelica_boolean tmp1104;
  modelica_real tmp1105;
  modelica_boolean tmp1106;
  modelica_boolean tmp1107;
  modelica_boolean tmp1108;
  modelica_real tmp1109;
  modelica_boolean tmp1110;
  modelica_boolean tmp1111;
  modelica_boolean tmp1112;
  modelica_real tmp1113;
  modelica_boolean tmp1114;
  modelica_boolean tmp1115;
  modelica_boolean tmp1116;
  modelica_real tmp1117;
  tmp1082 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1084 = (modelica_boolean)tmp1082;
  if(tmp1084)
  {
    tmp1085 = 0.0;
  }
  else
  {
    tmp1083 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1085 = (tmp1083?data->localData[0]->realVars[262] /* MatStm3.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1085, linearSystemData, threadData);
  tmp1086 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1088 = (modelica_boolean)tmp1086;
  if(tmp1088)
  {
    tmp1089 = 0.0;
  }
  else
  {
    tmp1087 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1089 = (tmp1087?data->localData[0]->realVars[265] /* MatStm3.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp1089, linearSystemData, threadData);
  tmp1090 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1092 = (modelica_boolean)tmp1090;
  if(tmp1092)
  {
    tmp1093 = 0.0;
  }
  else
  {
    tmp1091 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1093 = (tmp1091?data->localData[0]->realVars[263] /* MatStm3.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1093, linearSystemData, threadData);
  tmp1094 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1096 = (modelica_boolean)tmp1094;
  if(tmp1096)
  {
    tmp1097 = 0.0;
  }
  else
  {
    tmp1095 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1097 = (tmp1095?data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1097, linearSystemData, threadData);
  tmp1098 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1100 = (modelica_boolean)tmp1098;
  if(tmp1100)
  {
    tmp1101 = data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp1099 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1101 = (tmp1099?data->localData[0]->realVars[264] /* MatStm3.compMasFlo[3,2] variable */:data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(4, tmp1101, linearSystemData, threadData);
  tmp1102 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1104 = (modelica_boolean)tmp1102;
  if(tmp1104)
  {
    tmp1105 = 0.0;
  }
  else
  {
    tmp1103 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1105 = (tmp1103?data->localData[0]->realVars[260] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(5, tmp1105, linearSystemData, threadData);
  tmp1106 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1108 = (modelica_boolean)tmp1106;
  if(tmp1108)
  {
    tmp1109 = 0.0;
  }
  else
  {
    tmp1107 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1109 = (tmp1107?data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(6, tmp1109, linearSystemData, threadData);
  tmp1110 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1112 = (modelica_boolean)tmp1110;
  if(tmp1112)
  {
    tmp1113 = data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1111 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1113 = (tmp1111?data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */:data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(7, tmp1113, linearSystemData, threadData);
  tmp1114 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1116 = (modelica_boolean)tmp1114;
  if(tmp1116)
  {
    tmp1117 = data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp1115 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1117 = (tmp1115?data->localData[0]->realVars[261] /* MatStm3.compMasFlo[2,2] variable */:data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(8, tmp1117, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData604(void *inData, threadData_t *threadData, void *systemData)
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
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[273].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[273].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[273].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[268].attribute /* MatStm3.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[268].attribute /* MatStm3.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[268].attribute /* MatStm3.compMasFrac[1,3] */.max;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[272].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[272].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[272].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[274].attribute /* MatStm3.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[274].attribute /* MatStm3.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[274].attribute /* MatStm3.compMasFrac[3,3] */.max;
  /* static ls data for MatStm3.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[271].attribute /* MatStm3.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[271].attribute /* MatStm3.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[271].attribute /* MatStm3.compMasFrac[2,3] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA537(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,537};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1118;
  modelica_boolean tmp1119;
  modelica_boolean tmp1120;
  modelica_real tmp1121;
  modelica_boolean tmp1122;
  modelica_boolean tmp1123;
  modelica_boolean tmp1124;
  modelica_real tmp1125;
  modelica_boolean tmp1126;
  modelica_boolean tmp1127;
  modelica_boolean tmp1128;
  modelica_boolean tmp1129;
  modelica_real tmp1130;
  modelica_boolean tmp1131;
  modelica_boolean tmp1132;
  modelica_boolean tmp1133;
  modelica_real tmp1134;
  modelica_boolean tmp1135;
  modelica_boolean tmp1136;
  modelica_boolean tmp1137;
  modelica_real tmp1138;
  modelica_boolean tmp1139;
  modelica_boolean tmp1140;
  modelica_boolean tmp1141;
  modelica_boolean tmp1142;
  modelica_real tmp1143;
  modelica_boolean tmp1144;
  modelica_boolean tmp1145;
  modelica_boolean tmp1146;
  modelica_real tmp1147;
  modelica_boolean tmp1148;
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
  tmp1118 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1120 = (modelica_boolean)tmp1118;
  if(tmp1120)
  {
    tmp1121 = 0.0;
  }
  else
  {
    tmp1119 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1121 = (tmp1119?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp1121)), 0, linearSystemData, threadData);
  tmp1122 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1124 = (modelica_boolean)tmp1122;
  if(tmp1124)
  {
    tmp1125 = -1.0;
  }
  else
  {
    tmp1123 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1125 = (tmp1123?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp1125)), 1, linearSystemData, threadData);
  tmp1126 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp1126?1.0:-0.0))), 2, linearSystemData, threadData);
  tmp1127 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1129 = (modelica_boolean)tmp1127;
  if(tmp1129)
  {
    tmp1130 = 0.0;
  }
  else
  {
    tmp1128 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1130 = (tmp1128?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(0, 8, (-(tmp1130)), 3, linearSystemData, threadData);
  tmp1131 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1133 = (modelica_boolean)tmp1131;
  if(tmp1133)
  {
    tmp1134 = 0.0;
  }
  else
  {
    tmp1132 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1134 = (tmp1132?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp1134)), 4, linearSystemData, threadData);
  tmp1135 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1137 = (modelica_boolean)tmp1135;
  if(tmp1137)
  {
    tmp1138 = -1.0;
  }
  else
  {
    tmp1136 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1138 = (tmp1136?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp1138)), 5, linearSystemData, threadData);
  tmp1139 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 8, (-((tmp1139?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp1140 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1142 = (modelica_boolean)tmp1140;
  if(tmp1142)
  {
    tmp1143 = -1.0;
  }
  else
  {
    tmp1141 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1143 = (tmp1141?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp1143)), 7, linearSystemData, threadData);
  tmp1144 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1146 = (modelica_boolean)tmp1144;
  if(tmp1146)
  {
    tmp1147 = 0.0;
  }
  else
  {
    tmp1145 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1147 = (tmp1145?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 5, (-(tmp1147)), 8, linearSystemData, threadData);
  tmp1148 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(2, 6, (-((tmp1148?1.0:-0.0))), 9, linearSystemData, threadData);
  tmp1149 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1151 = (modelica_boolean)tmp1149;
  if(tmp1151)
  {
    tmp1152 = 0.0;
  }
  else
  {
    tmp1150 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1152 = (tmp1150?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 7, (-(tmp1152)), 10, linearSystemData, threadData);
  tmp1153 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1155 = (modelica_boolean)tmp1153;
  if(tmp1155)
  {
    tmp1156 = 0.0;
  }
  else
  {
    tmp1154 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1156 = (tmp1154?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp1156)), 11, linearSystemData, threadData);
  tmp1157 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 5, (-((tmp1157?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp1158 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1160 = (modelica_boolean)tmp1158;
  if(tmp1160)
  {
    tmp1161 = 0.0;
  }
  else
  {
    tmp1159 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1161 = (tmp1159?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 6, (-(tmp1161)), 13, linearSystemData, threadData);
  tmp1162 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 4, (-((tmp1162?1.0:-0.0))), 14, linearSystemData, threadData);
  tmp1163 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1165 = (modelica_boolean)tmp1163;
  if(tmp1165)
  {
    tmp1166 = 0.0;
  }
  else
  {
    tmp1164 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1166 = (tmp1164?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(4, 5, (-(tmp1166)), 15, linearSystemData, threadData);
  tmp1167 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1169 = (modelica_boolean)tmp1167;
  if(tmp1169)
  {
    tmp1170 = 0.0;
  }
  else
  {
    tmp1168 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1170 = (tmp1168?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 8, (-(tmp1170)), 16, linearSystemData, threadData);
  tmp1171 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(5, 0, (-((tmp1171?1.0:-0.0))), 17, linearSystemData, threadData);
  tmp1172 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1174 = (modelica_boolean)tmp1172;
  if(tmp1174)
  {
    tmp1175 = 0.0;
  }
  else
  {
    tmp1173 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1175 = (tmp1173?-0.0:1.0);
  }
  linearSystemData->setAElement(5, 3, (-(tmp1175)), 18, linearSystemData, threadData);
  tmp1176 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1178 = (modelica_boolean)tmp1176;
  if(tmp1178)
  {
    tmp1179 = 0.0;
  }
  else
  {
    tmp1177 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1179 = (tmp1177?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(5, 6, (-(tmp1179)), 19, linearSystemData, threadData);
  tmp1180 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1182 = (modelica_boolean)tmp1180;
  if(tmp1182)
  {
    tmp1183 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp1181 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1183 = (tmp1181?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(6, 2, (-(tmp1183)), 20, linearSystemData, threadData);
  tmp1184 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1186 = (modelica_boolean)tmp1184;
  if(tmp1186)
  {
    tmp1187 = -0.0;
  }
  else
  {
    tmp1185 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1187 = (tmp1185?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(6, 3, (-(tmp1187)), 21, linearSystemData, threadData);
  tmp1188 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1190 = (modelica_boolean)tmp1188;
  if(tmp1190)
  {
    tmp1191 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp1189 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1191 = (tmp1189?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(7, 1, (-(tmp1191)), 22, linearSystemData, threadData);
  tmp1192 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1194 = (modelica_boolean)tmp1192;
  if(tmp1194)
  {
    tmp1195 = -0.0;
  }
  else
  {
    tmp1193 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1195 = (tmp1193?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(7, 2, (-(tmp1195)), 23, linearSystemData, threadData);
  tmp1196 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1198 = (modelica_boolean)tmp1196;
  if(tmp1198)
  {
    tmp1199 = -0.0;
  }
  else
  {
    tmp1197 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1199 = (tmp1197?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(8, 0, (-(tmp1199)), 24, linearSystemData, threadData);
  tmp1200 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1202 = (modelica_boolean)tmp1200;
  if(tmp1202)
  {
    tmp1203 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp1201 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1203 = (tmp1201?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(8, 7, (-(tmp1203)), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb537(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,537};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1204;
  modelica_boolean tmp1205;
  modelica_boolean tmp1206;
  modelica_real tmp1207;
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
  modelica_real tmp1223;
  modelica_boolean tmp1224;
  modelica_boolean tmp1225;
  modelica_boolean tmp1226;
  modelica_real tmp1227;
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
  tmp1204 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1206 = (modelica_boolean)tmp1204;
  if(tmp1206)
  {
    tmp1207 = 0.0;
  }
  else
  {
    tmp1205 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1207 = (tmp1205?data->localData[0]->realVars[144] /* MatStm2.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1207, linearSystemData, threadData);
  tmp1208 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1210 = (modelica_boolean)tmp1208;
  if(tmp1210)
  {
    tmp1211 = 0.0;
  }
  else
  {
    tmp1209 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1211 = (tmp1209?data->localData[0]->realVars[147] /* MatStm2.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp1211, linearSystemData, threadData);
  tmp1212 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1214 = (modelica_boolean)tmp1212;
  if(tmp1214)
  {
    tmp1215 = 0.0;
  }
  else
  {
    tmp1213 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1215 = (tmp1213?data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1215, linearSystemData, threadData);
  tmp1216 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1218 = (modelica_boolean)tmp1216;
  if(tmp1218)
  {
    tmp1219 = 0.0;
  }
  else
  {
    tmp1217 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1219 = (tmp1217?data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1219, linearSystemData, threadData);
  tmp1220 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1222 = (modelica_boolean)tmp1220;
  if(tmp1222)
  {
    tmp1223 = 0.0;
  }
  else
  {
    tmp1221 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1223 = (tmp1221?data->localData[0]->realVars[145] /* MatStm2.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp1223, linearSystemData, threadData);
  tmp1224 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1226 = (modelica_boolean)tmp1224;
  if(tmp1226)
  {
    tmp1227 = 0.0;
  }
  else
  {
    tmp1225 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1227 = (tmp1225?data->localData[0]->realVars[142] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(5, tmp1227, linearSystemData, threadData);
  tmp1228 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1230 = (modelica_boolean)tmp1228;
  if(tmp1230)
  {
    tmp1231 = data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp1229 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1231 = (tmp1229?data->localData[0]->realVars[143] /* MatStm2.compMasFlo[2,2] variable */:data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(6, tmp1231, linearSystemData, threadData);
  tmp1232 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1234 = (modelica_boolean)tmp1232;
  if(tmp1234)
  {
    tmp1235 = data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1233 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1235 = (tmp1233?data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */:data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(7, tmp1235, linearSystemData, threadData);
  tmp1236 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1238 = (modelica_boolean)tmp1236;
  if(tmp1238)
  {
    tmp1239 = data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp1237 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1239 = (tmp1237?data->localData[0]->realVars[146] /* MatStm2.compMasFlo[3,2] variable */:data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(8, tmp1239, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData537(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[155].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[155].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[155].attribute /* MatStm2.compMasFrac[3,2] */.max;
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
  /* static ls data for MatStm2.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[156].attribute /* MatStm2.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[156].attribute /* MatStm2.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[156].attribute /* MatStm2.compMasFrac[3,3] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[154].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[154].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[154].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[151].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[151].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[151].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[150].attribute /* MatStm2.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[150].attribute /* MatStm2.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[150].attribute /* MatStm2.compMasFrac[1,3] */.max;
  /* static ls data for MatStm2.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[153].attribute /* MatStm2.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[153].attribute /* MatStm2.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[153].attribute /* MatStm2.compMasFrac[2,3] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA393(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,393};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1240;
  modelica_boolean tmp1241;
  modelica_boolean tmp1242;
  modelica_real tmp1243;
  modelica_boolean tmp1244;
  modelica_boolean tmp1245;
  modelica_boolean tmp1246;
  modelica_boolean tmp1247;
  modelica_real tmp1248;
  modelica_boolean tmp1249;
  modelica_boolean tmp1250;
  modelica_boolean tmp1251;
  modelica_real tmp1252;
  modelica_boolean tmp1253;
  modelica_boolean tmp1254;
  modelica_boolean tmp1255;
  modelica_real tmp1256;
  modelica_boolean tmp1257;
  modelica_boolean tmp1258;
  modelica_boolean tmp1259;
  modelica_real tmp1260;
  modelica_boolean tmp1261;
  modelica_boolean tmp1262;
  modelica_boolean tmp1263;
  modelica_boolean tmp1264;
  modelica_real tmp1265;
  modelica_boolean tmp1266;
  modelica_boolean tmp1267;
  modelica_boolean tmp1268;
  modelica_real tmp1269;
  modelica_boolean tmp1270;
  modelica_boolean tmp1271;
  modelica_boolean tmp1272;
  modelica_real tmp1273;
  modelica_boolean tmp1274;
  modelica_boolean tmp1275;
  modelica_boolean tmp1276;
  modelica_real tmp1277;
  modelica_boolean tmp1278;
  modelica_boolean tmp1279;
  modelica_boolean tmp1280;
  modelica_real tmp1281;
  modelica_boolean tmp1282;
  modelica_boolean tmp1283;
  modelica_boolean tmp1284;
  modelica_boolean tmp1285;
  modelica_real tmp1286;
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
  modelica_boolean tmp1302;
  modelica_boolean tmp1303;
  modelica_real tmp1304;
  modelica_boolean tmp1305;
  modelica_boolean tmp1306;
  modelica_boolean tmp1307;
  modelica_real tmp1308;
  modelica_boolean tmp1309;
  modelica_boolean tmp1310;
  modelica_boolean tmp1311;
  modelica_boolean tmp1312;
  modelica_real tmp1313;
  modelica_boolean tmp1314;
  modelica_boolean tmp1315;
  modelica_boolean tmp1316;
  modelica_real tmp1317;
  modelica_boolean tmp1318;
  modelica_boolean tmp1319;
  modelica_boolean tmp1320;
  modelica_real tmp1321;
  modelica_boolean tmp1322;
  modelica_boolean tmp1323;
  modelica_boolean tmp1324;
  modelica_real tmp1325;
  tmp1240 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1242 = (modelica_boolean)tmp1240;
  if(tmp1242)
  {
    tmp1243 = 0.0;
  }
  else
  {
    tmp1241 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1243 = (tmp1241?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 2, (-(tmp1243)), 0, linearSystemData, threadData);
  tmp1244 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(0, 3, (-((tmp1244?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp1245 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1247 = (modelica_boolean)tmp1245;
  if(tmp1247)
  {
    tmp1248 = 0.0;
  }
  else
  {
    tmp1246 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1248 = (tmp1246?(-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 5, (-(tmp1248)), 2, linearSystemData, threadData);
  tmp1249 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1251 = (modelica_boolean)tmp1249;
  if(tmp1251)
  {
    tmp1252 = -1.0;
  }
  else
  {
    tmp1250 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1252 = (tmp1250?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 8, (-(tmp1252)), 3, linearSystemData, threadData);
  tmp1253 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1255 = (modelica_boolean)tmp1253;
  if(tmp1255)
  {
    tmp1256 = -0.0;
  }
  else
  {
    tmp1254 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1256 = (tmp1254?(-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp1256)), 4, linearSystemData, threadData);
  tmp1257 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1259 = (modelica_boolean)tmp1257;
  if(tmp1259)
  {
    tmp1260 = (-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp1258 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1260 = (tmp1258?-0.0:(-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(1, 8, (-(tmp1260)), 5, linearSystemData, threadData);
  tmp1261 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp1261?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp1262 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1264 = (modelica_boolean)tmp1262;
  if(tmp1264)
  {
    tmp1265 = 0.0;
  }
  else
  {
    tmp1263 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1265 = (tmp1263?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp1265)), 7, linearSystemData, threadData);
  tmp1266 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1268 = (modelica_boolean)tmp1266;
  if(tmp1268)
  {
    tmp1269 = 0.0;
  }
  else
  {
    tmp1267 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1269 = (tmp1267?(-data->localData[0]->realVars[471] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 6, (-(tmp1269)), 8, linearSystemData, threadData);
  tmp1270 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1272 = (modelica_boolean)tmp1270;
  if(tmp1272)
  {
    tmp1273 = -1.0;
  }
  else
  {
    tmp1271 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1273 = (tmp1271?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 7, (-(tmp1273)), 9, linearSystemData, threadData);
  tmp1274 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1276 = (modelica_boolean)tmp1274;
  if(tmp1276)
  {
    tmp1277 = 0.0;
  }
  else
  {
    tmp1275 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1277 = (tmp1275?(-data->localData[0]->realVars[472] /* MatStm4.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(3, 1, (-(tmp1277)), 10, linearSystemData, threadData);
  tmp1278 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1280 = (modelica_boolean)tmp1278;
  if(tmp1280)
  {
    tmp1281 = -1.0;
  }
  else
  {
    tmp1279 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1281 = (tmp1279?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 5, (-(tmp1281)), 11, linearSystemData, threadData);
  tmp1282 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(3, 6, (-((tmp1282?1.0:-0.0))), 12, linearSystemData, threadData);
  tmp1283 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1285 = (modelica_boolean)tmp1283;
  if(tmp1285)
  {
    tmp1286 = -0.0;
  }
  else
  {
    tmp1284 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1286 = (tmp1284?(-data->localData[0]->realVars[472] /* MatStm4.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp1286)), 13, linearSystemData, threadData);
  tmp1287 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1289 = (modelica_boolean)tmp1287;
  if(tmp1289)
  {
    tmp1290 = (-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp1288 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1290 = (tmp1288?-0.0:(-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(4, 5, (-(tmp1290)), 14, linearSystemData, threadData);
  tmp1291 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1293 = (modelica_boolean)tmp1291;
  if(tmp1293)
  {
    tmp1294 = 0.0;
  }
  else
  {
    tmp1292 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1294 = (tmp1292?-0.0:1.0);
  }
  linearSystemData->setAElement(5, 0, (-(tmp1294)), 15, linearSystemData, threadData);
  tmp1295 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1297 = (modelica_boolean)tmp1295;
  if(tmp1297)
  {
    tmp1298 = 0.0;
  }
  else
  {
    tmp1296 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1298 = (tmp1296?(-data->localData[0]->realVars[471] /* MatStm4.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(5, 3, (-(tmp1298)), 16, linearSystemData, threadData);
  tmp1299 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(5, 4, (-((tmp1299?1.0:-0.0))), 17, linearSystemData, threadData);
  tmp1300 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(6, 2, (-((tmp1300?1.0:-0.0))), 18, linearSystemData, threadData);
  tmp1301 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1303 = (modelica_boolean)tmp1301;
  if(tmp1303)
  {
    tmp1304 = 0.0;
  }
  else
  {
    tmp1302 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1304 = (tmp1302?-0.0:1.0);
  }
  linearSystemData->setAElement(6, 3, (-(tmp1304)), 19, linearSystemData, threadData);
  tmp1305 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1307 = (modelica_boolean)tmp1305;
  if(tmp1307)
  {
    tmp1308 = 0.0;
  }
  else
  {
    tmp1306 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1308 = (tmp1306?(-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(6, 8, (-(tmp1308)), 20, linearSystemData, threadData);
  tmp1309 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  linearSystemData->setAElement(7, 1, (-((tmp1309?1.0:-0.0))), 21, linearSystemData, threadData);
  tmp1310 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1312 = (modelica_boolean)tmp1310;
  if(tmp1312)
  {
    tmp1313 = 0.0;
  }
  else
  {
    tmp1311 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1313 = (tmp1311?(-data->localData[0]->realVars[472] /* MatStm4.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(7, 2, (-(tmp1313)), 22, linearSystemData, threadData);
  tmp1314 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1316 = (modelica_boolean)tmp1314;
  if(tmp1316)
  {
    tmp1317 = 0.0;
  }
  else
  {
    tmp1315 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1317 = (tmp1315?-0.0:1.0);
  }
  linearSystemData->setAElement(7, 6, (-(tmp1317)), 23, linearSystemData, threadData);
  tmp1318 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1320 = (modelica_boolean)tmp1318;
  if(tmp1320)
  {
    tmp1321 = -0.0;
  }
  else
  {
    tmp1319 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1321 = (tmp1319?(-data->localData[0]->realVars[471] /* MatStm4.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(8, 0, (-(tmp1321)), 24, linearSystemData, threadData);
  tmp1322 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1324 = (modelica_boolean)tmp1322;
  if(tmp1324)
  {
    tmp1325 = (-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */);
  }
  else
  {
    tmp1323 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1325 = (tmp1323?-0.0:(-data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(8, 7, (-(tmp1325)), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb393(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,393};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1326;
  modelica_boolean tmp1327;
  modelica_boolean tmp1328;
  modelica_real tmp1329;
  modelica_boolean tmp1330;
  modelica_boolean tmp1331;
  modelica_boolean tmp1332;
  modelica_real tmp1333;
  modelica_boolean tmp1334;
  modelica_boolean tmp1335;
  modelica_boolean tmp1336;
  modelica_real tmp1337;
  modelica_boolean tmp1338;
  modelica_boolean tmp1339;
  modelica_boolean tmp1340;
  modelica_real tmp1341;
  modelica_boolean tmp1342;
  modelica_boolean tmp1343;
  modelica_boolean tmp1344;
  modelica_real tmp1345;
  modelica_boolean tmp1346;
  modelica_boolean tmp1347;
  modelica_boolean tmp1348;
  modelica_real tmp1349;
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
  tmp1326 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1328 = (modelica_boolean)tmp1326;
  if(tmp1328)
  {
    tmp1329 = 0.0;
  }
  else
  {
    tmp1327 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1329 = (tmp1327?data->localData[0]->realVars[377] /* MatStm4.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1329, linearSystemData, threadData);
  tmp1330 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1332 = (modelica_boolean)tmp1330;
  if(tmp1332)
  {
    tmp1333 = data->localData[0]->realVars[375] /* MatStm4.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1331 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1333 = (tmp1331?data->localData[0]->realVars[376] /* MatStm4.compMasFlo[1,2] variable */:data->localData[0]->realVars[375] /* MatStm4.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(1, tmp1333, linearSystemData, threadData);
  tmp1334 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1336 = (modelica_boolean)tmp1334;
  if(tmp1336)
  {
    tmp1337 = 0.0;
  }
  else
  {
    tmp1335 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1337 = (tmp1335?data->localData[0]->realVars[380] /* MatStm4.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1337, linearSystemData, threadData);
  tmp1338 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1340 = (modelica_boolean)tmp1338;
  if(tmp1340)
  {
    tmp1341 = 0.0;
  }
  else
  {
    tmp1339 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1341 = (tmp1339?data->localData[0]->realVars[383] /* MatStm4.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1341, linearSystemData, threadData);
  tmp1342 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1344 = (modelica_boolean)tmp1342;
  if(tmp1344)
  {
    tmp1345 = data->localData[0]->realVars[377] /* MatStm4.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp1343 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1345 = (tmp1343?data->localData[0]->realVars[382] /* MatStm4.compMasFlo[3,2] variable */:data->localData[0]->realVars[377] /* MatStm4.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(4, tmp1345, linearSystemData, threadData);
  tmp1346 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1348 = (modelica_boolean)tmp1346;
  if(tmp1348)
  {
    tmp1349 = 0.0;
  }
  else
  {
    tmp1347 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1349 = (tmp1347?data->localData[0]->realVars[378] /* MatStm4.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(5, tmp1349, linearSystemData, threadData);
  tmp1350 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1352 = (modelica_boolean)tmp1350;
  if(tmp1352)
  {
    tmp1353 = 0.0;
  }
  else
  {
    tmp1351 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1353 = (tmp1351?data->localData[0]->realVars[375] /* MatStm4.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(6, tmp1353, linearSystemData, threadData);
  tmp1354 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1356 = (modelica_boolean)tmp1354;
  if(tmp1356)
  {
    tmp1357 = 0.0;
  }
  else
  {
    tmp1355 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1357 = (tmp1355?data->localData[0]->realVars[381] /* MatStm4.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(7, tmp1357, linearSystemData, threadData);
  tmp1358 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp1360 = (modelica_boolean)tmp1358;
  if(tmp1360)
  {
    tmp1361 = data->localData[0]->realVars[376] /* MatStm4.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp1359 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp1361 = (tmp1359?data->localData[0]->realVars[379] /* MatStm4.compMasFlo[2,2] variable */:data->localData[0]->realVars[376] /* MatStm4.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(8, tmp1361, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData393(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm4.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[388].attribute /* MatStm4.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[388].attribute /* MatStm4.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[388].attribute /* MatStm4.compMasFrac[2,2] */.max;
  /* static ls data for MatStm4.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[392].attribute /* MatStm4.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[392].attribute /* MatStm4.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[392].attribute /* MatStm4.compMasFrac[3,3] */.max;
  /* static ls data for MatStm4.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[390].attribute /* MatStm4.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[390].attribute /* MatStm4.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[390].attribute /* MatStm4.compMasFrac[3,1] */.max;
  /* static ls data for MatStm4.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[387].attribute /* MatStm4.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[387].attribute /* MatStm4.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[387].attribute /* MatStm4.compMasFrac[2,1] */.max;
  /* static ls data for MatStm4.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[391].attribute /* MatStm4.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[391].attribute /* MatStm4.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[391].attribute /* MatStm4.compMasFrac[3,2] */.max;
  /* static ls data for MatStm4.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[386].attribute /* MatStm4.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[386].attribute /* MatStm4.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[386].attribute /* MatStm4.compMasFrac[1,3] */.max;
  /* static ls data for MatStm4.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[389].attribute /* MatStm4.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[389].attribute /* MatStm4.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[389].attribute /* MatStm4.compMasFrac[2,3] */.max;
  /* static ls data for MatStm4.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[385].attribute /* MatStm4.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[385].attribute /* MatStm4.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[385].attribute /* MatStm4.compMasFrac[1,2] */.max;
  /* static ls data for MatStm4.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[384].attribute /* MatStm4.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[384].attribute /* MatStm4.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[384].attribute /* MatStm4.compMasFrac[1,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA353(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,353};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1362;
  modelica_boolean tmp1363;
  modelica_boolean tmp1364;
  modelica_real tmp1365;
  modelica_boolean tmp1366;
  modelica_boolean tmp1367;
  modelica_boolean tmp1368;
  modelica_boolean tmp1369;
  modelica_real tmp1370;
  modelica_boolean tmp1371;
  modelica_boolean tmp1372;
  modelica_boolean tmp1373;
  modelica_real tmp1374;
  modelica_boolean tmp1375;
  modelica_boolean tmp1376;
  modelica_boolean tmp1377;
  modelica_real tmp1378;
  modelica_boolean tmp1379;
  modelica_boolean tmp1380;
  modelica_boolean tmp1381;
  modelica_boolean tmp1382;
  modelica_boolean tmp1383;
  modelica_real tmp1384;
  modelica_boolean tmp1385;
  modelica_boolean tmp1386;
  modelica_boolean tmp1387;
  modelica_real tmp1388;
  modelica_boolean tmp1389;
  modelica_boolean tmp1390;
  modelica_boolean tmp1391;
  modelica_real tmp1392;
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
  modelica_boolean tmp1408;
  modelica_real tmp1409;
  modelica_boolean tmp1410;
  modelica_boolean tmp1411;
  modelica_boolean tmp1412;
  modelica_real tmp1413;
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
  modelica_real tmp1430;
  modelica_boolean tmp1431;
  modelica_boolean tmp1432;
  modelica_boolean tmp1433;
  modelica_real tmp1434;
  modelica_boolean tmp1435;
  modelica_boolean tmp1436;
  modelica_boolean tmp1437;
  modelica_real tmp1438;
  modelica_boolean tmp1439;
  modelica_boolean tmp1440;
  modelica_boolean tmp1441;
  modelica_real tmp1442;
  modelica_boolean tmp1443;
  modelica_boolean tmp1444;
  modelica_boolean tmp1445;
  modelica_real tmp1446;
  modelica_boolean tmp1447;
  tmp1362 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1364 = (modelica_boolean)tmp1362;
  if(tmp1364)
  {
    tmp1365 = -1.0;
  }
  else
  {
    tmp1363 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1365 = (tmp1363?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp1365)), 0, linearSystemData, threadData);
  tmp1366 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(0, 4, (-((tmp1366?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp1367 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1369 = (modelica_boolean)tmp1367;
  if(tmp1369)
  {
    tmp1370 = 0.0;
  }
  else
  {
    tmp1368 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1370 = (tmp1368?(-data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 8, (-(tmp1370)), 2, linearSystemData, threadData);
  tmp1371 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1373 = (modelica_boolean)tmp1371;
  if(tmp1373)
  {
    tmp1374 = 0.0;
  }
  else
  {
    tmp1372 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1374 = (tmp1372?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 4, (-(tmp1374)), 3, linearSystemData, threadData);
  tmp1375 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1377 = (modelica_boolean)tmp1375;
  if(tmp1377)
  {
    tmp1378 = 0.0;
  }
  else
  {
    tmp1376 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1378 = (tmp1376?(-data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp1378)), 4, linearSystemData, threadData);
  tmp1379 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(1, 8, (-((tmp1379?1.0:-0.0))), 5, linearSystemData, threadData);
  tmp1380 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(2, 0, (-((tmp1380?1.0:-0.0))), 6, linearSystemData, threadData);
  tmp1381 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1383 = (modelica_boolean)tmp1381;
  if(tmp1383)
  {
    tmp1384 = 0.0;
  }
  else
  {
    tmp1382 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1384 = (tmp1382?(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(2, 1, (-(tmp1384)), 7, linearSystemData, threadData);
  tmp1385 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1387 = (modelica_boolean)tmp1385;
  if(tmp1387)
  {
    tmp1388 = -1.0;
  }
  else
  {
    tmp1386 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1388 = (tmp1386?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 6, (-(tmp1388)), 8, linearSystemData, threadData);
  tmp1389 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1391 = (modelica_boolean)tmp1389;
  if(tmp1391)
  {
    tmp1392 = 0.0;
  }
  else
  {
    tmp1390 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1392 = (tmp1390?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 7, (-(tmp1392)), 9, linearSystemData, threadData);
  tmp1393 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1395 = (modelica_boolean)tmp1393;
  if(tmp1395)
  {
    tmp1396 = -0.0;
  }
  else
  {
    tmp1394 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1396 = (tmp1394?(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 5, (-(tmp1396)), 10, linearSystemData, threadData);
  tmp1397 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1399 = (modelica_boolean)tmp1397;
  if(tmp1399)
  {
    tmp1400 = (-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp1398 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1400 = (tmp1398?-0.0:(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 6, (-(tmp1400)), 11, linearSystemData, threadData);
  tmp1401 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1403 = (modelica_boolean)tmp1401;
  if(tmp1403)
  {
    tmp1404 = 0.0;
  }
  else
  {
    tmp1402 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1404 = (tmp1402?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 2, (-(tmp1404)), 12, linearSystemData, threadData);
  tmp1405 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(4, 3, (-((tmp1405?1.0:-0.0))), 13, linearSystemData, threadData);
  tmp1406 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1408 = (modelica_boolean)tmp1406;
  if(tmp1408)
  {
    tmp1409 = 0.0;
  }
  else
  {
    tmp1407 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1409 = (tmp1407?(-data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(4, 4, (-(tmp1409)), 14, linearSystemData, threadData);
  tmp1410 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1412 = (modelica_boolean)tmp1410;
  if(tmp1412)
  {
    tmp1413 = -1.0;
  }
  else
  {
    tmp1411 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1413 = (tmp1411?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 5, (-(tmp1413)), 15, linearSystemData, threadData);
  tmp1414 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1416 = (modelica_boolean)tmp1414;
  if(tmp1416)
  {
    tmp1417 = -0.0;
  }
  else
  {
    tmp1415 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1417 = (tmp1415?(-data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(5, 3, (-(tmp1417)), 16, linearSystemData, threadData);
  tmp1418 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1420 = (modelica_boolean)tmp1418;
  if(tmp1420)
  {
    tmp1421 = (-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp1419 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1421 = (tmp1419?-0.0:(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(5, 5, (-(tmp1421)), 17, linearSystemData, threadData);
  tmp1422 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1424 = (modelica_boolean)tmp1422;
  if(tmp1424)
  {
    tmp1425 = 0.0;
  }
  else
  {
    tmp1423 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1425 = (tmp1423?(-data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(6, 0, (-(tmp1425)), 18, linearSystemData, threadData);
  tmp1426 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(6, 2, (-((tmp1426?1.0:-0.0))), 19, linearSystemData, threadData);
  tmp1427 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1429 = (modelica_boolean)tmp1427;
  if(tmp1429)
  {
    tmp1430 = 0.0;
  }
  else
  {
    tmp1428 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1430 = (tmp1428?-0.0:1.0);
  }
  linearSystemData->setAElement(6, 3, (-(tmp1430)), 20, linearSystemData, threadData);
  tmp1431 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1433 = (modelica_boolean)tmp1431;
  if(tmp1433)
  {
    tmp1434 = (-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */);
  }
  else
  {
    tmp1432 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1434 = (tmp1432?-0.0:(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(7, 1, (-(tmp1434)), 21, linearSystemData, threadData);
  tmp1435 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1437 = (modelica_boolean)tmp1435;
  if(tmp1437)
  {
    tmp1438 = -0.0;
  }
  else
  {
    tmp1436 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1438 = (tmp1436?(-data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(7, 2, (-(tmp1438)), 22, linearSystemData, threadData);
  tmp1439 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1441 = (modelica_boolean)tmp1439;
  if(tmp1441)
  {
    tmp1442 = 0.0;
  }
  else
  {
    tmp1440 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1442 = (tmp1440?-0.0:1.0);
  }
  linearSystemData->setAElement(8, 0, (-(tmp1442)), 23, linearSystemData, threadData);
  tmp1443 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1445 = (modelica_boolean)tmp1443;
  if(tmp1445)
  {
    tmp1446 = 0.0;
  }
  else
  {
    tmp1444 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1446 = (tmp1444?(-data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(8, 6, (-(tmp1446)), 24, linearSystemData, threadData);
  tmp1447 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  linearSystemData->setAElement(8, 7, (-((tmp1447?1.0:-0.0))), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb353(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,353};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
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
  modelica_boolean tmp1464;
  modelica_boolean tmp1465;
  modelica_boolean tmp1466;
  modelica_real tmp1467;
  modelica_boolean tmp1468;
  modelica_boolean tmp1469;
  modelica_boolean tmp1470;
  modelica_real tmp1471;
  modelica_boolean tmp1472;
  modelica_boolean tmp1473;
  modelica_boolean tmp1474;
  modelica_real tmp1475;
  modelica_boolean tmp1476;
  modelica_boolean tmp1477;
  modelica_boolean tmp1478;
  modelica_real tmp1479;
  modelica_boolean tmp1480;
  modelica_boolean tmp1481;
  modelica_boolean tmp1482;
  modelica_real tmp1483;
  tmp1448 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1450 = (modelica_boolean)tmp1448;
  if(tmp1450)
  {
    tmp1451 = 0.0;
  }
  else
  {
    tmp1449 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1451 = (tmp1449?data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1451, linearSystemData, threadData);
  tmp1452 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1454 = (modelica_boolean)tmp1452;
  if(tmp1454)
  {
    tmp1455 = 0.0;
  }
  else
  {
    tmp1453 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1455 = (tmp1453?data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp1455, linearSystemData, threadData);
  tmp1456 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1458 = (modelica_boolean)tmp1456;
  if(tmp1458)
  {
    tmp1459 = 0.0;
  }
  else
  {
    tmp1457 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1459 = (tmp1457?data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1459, linearSystemData, threadData);
  tmp1460 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1462 = (modelica_boolean)tmp1460;
  if(tmp1462)
  {
    tmp1463 = data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1461 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1463 = (tmp1461?data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */:data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(3, tmp1463, linearSystemData, threadData);
  tmp1464 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1466 = (modelica_boolean)tmp1464;
  if(tmp1466)
  {
    tmp1467 = 0.0;
  }
  else
  {
    tmp1465 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1467 = (tmp1465?data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp1467, linearSystemData, threadData);
  tmp1468 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1470 = (modelica_boolean)tmp1468;
  if(tmp1470)
  {
    tmp1471 = data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp1469 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1471 = (tmp1469?data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,2] variable */:data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(5, tmp1471, linearSystemData, threadData);
  tmp1472 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1474 = (modelica_boolean)tmp1472;
  if(tmp1474)
  {
    tmp1475 = 0.0;
  }
  else
  {
    tmp1473 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1475 = (tmp1473?data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(6, tmp1475, linearSystemData, threadData);
  tmp1476 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1478 = (modelica_boolean)tmp1476;
  if(tmp1478)
  {
    tmp1479 = data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp1477 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1479 = (tmp1477?data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */:data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(7, tmp1479, linearSystemData, threadData);
  tmp1480 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp1482 = (modelica_boolean)tmp1480;
  if(tmp1482)
  {
    tmp1483 = 0.0;
  }
  else
  {
    tmp1481 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp1483 = (tmp1481?data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(8, tmp1483, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData353(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
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
  /* static ls data for MatStm1.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[33].attribute /* MatStm1.compMasFrac[2,2] */.max;
  /* static ls data for MatStm1.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[34].attribute /* MatStm1.compMasFrac[2,3] */.max;
  /* static ls data for MatStm1.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[30].attribute /* MatStm1.compMasFrac[1,2] */.max;
  /* static ls data for MatStm1.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[29].attribute /* MatStm1.compMasFrac[1,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[35].attribute /* MatStm1.compMasFrac[3,1] */.max;
  /* static ls data for MatStm1.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[37].attribute /* MatStm1.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[37].attribute /* MatStm1.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[37].attribute /* MatStm1.compMasFrac[3,3] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA254(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,254};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1484;
  modelica_boolean tmp1485;
  modelica_boolean tmp1486;
  modelica_real tmp1487;
  modelica_boolean tmp1488;
  modelica_boolean tmp1489;
  modelica_boolean tmp1490;
  modelica_real tmp1491;
  modelica_boolean tmp1492;
  modelica_boolean tmp1493;
  modelica_boolean tmp1494;
  modelica_real tmp1495;
  modelica_boolean tmp1496;
  modelica_boolean tmp1497;
  modelica_boolean tmp1498;
  modelica_boolean tmp1499;
  modelica_boolean tmp1500;
  modelica_real tmp1501;
  modelica_boolean tmp1502;
  modelica_boolean tmp1503;
  modelica_boolean tmp1504;
  modelica_real tmp1505;
  modelica_boolean tmp1506;
  modelica_boolean tmp1507;
  modelica_boolean tmp1508;
  modelica_real tmp1509;
  modelica_boolean tmp1510;
  modelica_boolean tmp1511;
  modelica_boolean tmp1512;
  modelica_real tmp1513;
  modelica_boolean tmp1514;
  modelica_boolean tmp1515;
  modelica_boolean tmp1516;
  modelica_real tmp1517;
  modelica_boolean tmp1518;
  modelica_boolean tmp1519;
  modelica_boolean tmp1520;
  modelica_boolean tmp1521;
  modelica_real tmp1522;
  modelica_boolean tmp1523;
  modelica_boolean tmp1524;
  modelica_boolean tmp1525;
  modelica_real tmp1526;
  modelica_boolean tmp1527;
  modelica_boolean tmp1528;
  modelica_boolean tmp1529;
  modelica_real tmp1530;
  modelica_boolean tmp1531;
  modelica_boolean tmp1532;
  modelica_boolean tmp1533;
  modelica_boolean tmp1534;
  modelica_real tmp1535;
  modelica_boolean tmp1536;
  modelica_boolean tmp1537;
  modelica_boolean tmp1538;
  modelica_real tmp1539;
  modelica_boolean tmp1540;
  modelica_boolean tmp1541;
  modelica_boolean tmp1542;
  modelica_boolean tmp1543;
  modelica_real tmp1544;
  modelica_boolean tmp1545;
  modelica_boolean tmp1546;
  modelica_boolean tmp1547;
  modelica_real tmp1548;
  modelica_boolean tmp1549;
  modelica_boolean tmp1550;
  modelica_boolean tmp1551;
  modelica_real tmp1552;
  modelica_boolean tmp1553;
  modelica_boolean tmp1554;
  modelica_boolean tmp1555;
  modelica_real tmp1556;
  modelica_boolean tmp1557;
  modelica_boolean tmp1558;
  modelica_boolean tmp1559;
  modelica_real tmp1560;
  modelica_boolean tmp1561;
  modelica_boolean tmp1562;
  modelica_boolean tmp1563;
  modelica_boolean tmp1564;
  modelica_real tmp1565;
  modelica_boolean tmp1566;
  modelica_boolean tmp1567;
  modelica_boolean tmp1568;
  modelica_real tmp1569;
  tmp1484 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1486 = (modelica_boolean)tmp1484;
  if(tmp1486)
  {
    tmp1487 = 0.0;
  }
  else
  {
    tmp1485 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1487 = (tmp1485?-0.0:1.0);
  }
  linearSystemData->setAElement(0, 0, (-(tmp1487)), 0, linearSystemData, threadData);
  tmp1488 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1490 = (modelica_boolean)tmp1488;
  if(tmp1490)
  {
    tmp1491 = -1.0;
  }
  else
  {
    tmp1489 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1491 = (tmp1489?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 1, (-(tmp1491)), 1, linearSystemData, threadData);
  tmp1492 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1494 = (modelica_boolean)tmp1492;
  if(tmp1494)
  {
    tmp1495 = 0.0;
  }
  else
  {
    tmp1493 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1495 = (tmp1493?(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(0, 5, (-(tmp1495)), 2, linearSystemData, threadData);
  tmp1496 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(0, 8, (-((tmp1496?1.0:-0.0))), 3, linearSystemData, threadData);
  tmp1497 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(1, 6, (-((tmp1497?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp1498 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1500 = (modelica_boolean)tmp1498;
  if(tmp1500)
  {
    tmp1501 = 0.0;
  }
  else
  {
    tmp1499 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1501 = (tmp1499?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp1501)), 5, linearSystemData, threadData);
  tmp1502 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1504 = (modelica_boolean)tmp1502;
  if(tmp1504)
  {
    tmp1505 = 0.0;
  }
  else
  {
    tmp1503 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1505 = (tmp1503?(-data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(1, 8, (-(tmp1505)), 6, linearSystemData, threadData);
  tmp1506 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1508 = (modelica_boolean)tmp1506;
  if(tmp1508)
  {
    tmp1509 = -1.0;
  }
  else
  {
    tmp1507 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1509 = (tmp1507?-0.0:-1.0);
  }
  linearSystemData->setAElement(2, 2, (-(tmp1509)), 7, linearSystemData, threadData);
  tmp1510 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1512 = (modelica_boolean)tmp1510;
  if(tmp1512)
  {
    tmp1513 = 0.0;
  }
  else
  {
    tmp1511 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1513 = (tmp1511?(-data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(2, 4, (-(tmp1513)), 8, linearSystemData, threadData);
  tmp1514 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1516 = (modelica_boolean)tmp1514;
  if(tmp1516)
  {
    tmp1517 = 0.0;
  }
  else
  {
    tmp1515 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1517 = (tmp1515?-0.0:1.0);
  }
  linearSystemData->setAElement(2, 6, (-(tmp1517)), 9, linearSystemData, threadData);
  tmp1518 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(2, 7, (-((tmp1518?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp1519 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1521 = (modelica_boolean)tmp1519;
  if(tmp1521)
  {
    tmp1522 = (-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp1520 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1522 = (tmp1520?-0.0:(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(3, 5, (-(tmp1522)), 11, linearSystemData, threadData);
  tmp1523 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1525 = (modelica_boolean)tmp1523;
  if(tmp1525)
  {
    tmp1526 = -0.0;
  }
  else
  {
    tmp1524 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1526 = (tmp1524?(-data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(3, 6, (-(tmp1526)), 12, linearSystemData, threadData);
  tmp1527 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1529 = (modelica_boolean)tmp1527;
  if(tmp1529)
  {
    tmp1530 = 0.0;
  }
  else
  {
    tmp1528 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1530 = (tmp1528?(-data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(4, 3, (-(tmp1530)), 13, linearSystemData, threadData);
  tmp1531 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(4, 4, (-((tmp1531?1.0:-0.0))), 14, linearSystemData, threadData);
  tmp1532 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1534 = (modelica_boolean)tmp1532;
  if(tmp1534)
  {
    tmp1535 = -1.0;
  }
  else
  {
    tmp1533 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1535 = (tmp1533?-0.0:-1.0);
  }
  linearSystemData->setAElement(4, 5, (-(tmp1535)), 15, linearSystemData, threadData);
  tmp1536 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1538 = (modelica_boolean)tmp1536;
  if(tmp1538)
  {
    tmp1539 = 0.0;
  }
  else
  {
    tmp1537 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1539 = (tmp1537?(-data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(5, 0, (-(tmp1539)), 16, linearSystemData, threadData);
  tmp1540 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(5, 3, (-((tmp1540?1.0:-0.0))), 17, linearSystemData, threadData);
  tmp1541 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1543 = (modelica_boolean)tmp1541;
  if(tmp1543)
  {
    tmp1544 = 0.0;
  }
  else
  {
    tmp1542 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1544 = (tmp1542?-0.0:1.0);
  }
  linearSystemData->setAElement(5, 4, (-(tmp1544)), 18, linearSystemData, threadData);
  tmp1545 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1547 = (modelica_boolean)tmp1545;
  if(tmp1547)
  {
    tmp1548 = (-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp1546 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1548 = (tmp1546?-0.0:(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(6, 2, (-(tmp1548)), 19, linearSystemData, threadData);
  tmp1549 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1551 = (modelica_boolean)tmp1549;
  if(tmp1551)
  {
    tmp1552 = -0.0;
  }
  else
  {
    tmp1550 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1552 = (tmp1550?(-data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(6, 7, (-(tmp1552)), 20, linearSystemData, threadData);
  tmp1553 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1555 = (modelica_boolean)tmp1553;
  if(tmp1555)
  {
    tmp1556 = (-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */);
  }
  else
  {
    tmp1554 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1556 = (tmp1554?-0.0:(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(7, 1, (-(tmp1556)), 21, linearSystemData, threadData);
  tmp1557 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1559 = (modelica_boolean)tmp1557;
  if(tmp1559)
  {
    tmp1560 = -0.0;
  }
  else
  {
    tmp1558 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1560 = (tmp1558?(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(7, 2, (-(tmp1560)), 22, linearSystemData, threadData);
  tmp1561 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  linearSystemData->setAElement(8, 0, (-((tmp1561?1.0:-0.0))), 23, linearSystemData, threadData);
  tmp1562 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1564 = (modelica_boolean)tmp1562;
  if(tmp1564)
  {
    tmp1565 = 0.0;
  }
  else
  {
    tmp1563 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1565 = (tmp1563?(-data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(8, 1, (-(tmp1565)), 24, linearSystemData, threadData);
  tmp1566 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1568 = (modelica_boolean)tmp1566;
  if(tmp1568)
  {
    tmp1569 = 0.0;
  }
  else
  {
    tmp1567 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1569 = (tmp1567?-0.0:1.0);
  }
  linearSystemData->setAElement(8, 8, (-(tmp1569)), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb254(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,254};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1570;
  modelica_boolean tmp1571;
  modelica_boolean tmp1572;
  modelica_real tmp1573;
  modelica_boolean tmp1574;
  modelica_boolean tmp1575;
  modelica_boolean tmp1576;
  modelica_real tmp1577;
  modelica_boolean tmp1578;
  modelica_boolean tmp1579;
  modelica_boolean tmp1580;
  modelica_real tmp1581;
  modelica_boolean tmp1582;
  modelica_boolean tmp1583;
  modelica_boolean tmp1584;
  modelica_real tmp1585;
  modelica_boolean tmp1586;
  modelica_boolean tmp1587;
  modelica_boolean tmp1588;
  modelica_real tmp1589;
  modelica_boolean tmp1590;
  modelica_boolean tmp1591;
  modelica_boolean tmp1592;
  modelica_real tmp1593;
  modelica_boolean tmp1594;
  modelica_boolean tmp1595;
  modelica_boolean tmp1596;
  modelica_real tmp1597;
  modelica_boolean tmp1598;
  modelica_boolean tmp1599;
  modelica_boolean tmp1600;
  modelica_real tmp1601;
  modelica_boolean tmp1602;
  modelica_boolean tmp1603;
  modelica_boolean tmp1604;
  modelica_real tmp1605;
  tmp1570 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1572 = (modelica_boolean)tmp1570;
  if(tmp1572)
  {
    tmp1573 = 0.0;
  }
  else
  {
    tmp1571 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1573 = (tmp1571?data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1573, linearSystemData, threadData);
  tmp1574 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1576 = (modelica_boolean)tmp1574;
  if(tmp1576)
  {
    tmp1577 = 0.0;
  }
  else
  {
    tmp1575 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1577 = (tmp1575?data->localData[0]->realVars[260] /* MatStm3.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp1577, linearSystemData, threadData);
  tmp1578 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1580 = (modelica_boolean)tmp1578;
  if(tmp1580)
  {
    tmp1581 = 0.0;
  }
  else
  {
    tmp1579 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1581 = (tmp1579?data->localData[0]->realVars[262] /* MatStm3.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(2, tmp1581, linearSystemData, threadData);
  tmp1582 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1584 = (modelica_boolean)tmp1582;
  if(tmp1584)
  {
    tmp1585 = data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp1583 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1585 = (tmp1583?data->localData[0]->realVars[264] /* MatStm3.compMasFlo[3,2] variable */:data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(3, tmp1585, linearSystemData, threadData);
  tmp1586 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1588 = (modelica_boolean)tmp1586;
  if(tmp1588)
  {
    tmp1589 = 0.0;
  }
  else
  {
    tmp1587 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1589 = (tmp1587?data->localData[0]->realVars[265] /* MatStm3.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp1589, linearSystemData, threadData);
  tmp1590 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1592 = (modelica_boolean)tmp1590;
  if(tmp1592)
  {
    tmp1593 = 0.0;
  }
  else
  {
    tmp1591 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1593 = (tmp1591?data->localData[0]->realVars[263] /* MatStm3.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(5, tmp1593, linearSystemData, threadData);
  tmp1594 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1596 = (modelica_boolean)tmp1594;
  if(tmp1596)
  {
    tmp1597 = data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp1595 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1597 = (tmp1595?data->localData[0]->realVars[261] /* MatStm3.compMasFlo[2,2] variable */:data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(6, tmp1597, linearSystemData, threadData);
  tmp1598 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1600 = (modelica_boolean)tmp1598;
  if(tmp1600)
  {
    tmp1601 = data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1599 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1601 = (tmp1599?data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */:data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(7, tmp1601, linearSystemData, threadData);
  tmp1602 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp1604 = (modelica_boolean)tmp1602;
  if(tmp1604)
  {
    tmp1605 = 0.0;
  }
  else
  {
    tmp1603 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp1605 = (tmp1603?data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(8, tmp1605, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData254(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm3.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[272].attribute /* MatStm3.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[272].attribute /* MatStm3.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[272].attribute /* MatStm3.compMasFrac[3,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[266].attribute /* MatStm3.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[266].attribute /* MatStm3.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[266].attribute /* MatStm3.compMasFrac[1,1] */.max;
  /* static ls data for MatStm3.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[267].attribute /* MatStm3.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[267].attribute /* MatStm3.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[267].attribute /* MatStm3.compMasFrac[1,2] */.max;
  /* static ls data for MatStm3.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[274].attribute /* MatStm3.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[274].attribute /* MatStm3.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[274].attribute /* MatStm3.compMasFrac[3,3] */.max;
  /* static ls data for MatStm3.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[271].attribute /* MatStm3.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[271].attribute /* MatStm3.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[271].attribute /* MatStm3.compMasFrac[2,3] */.max;
  /* static ls data for MatStm3.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[268].attribute /* MatStm3.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[268].attribute /* MatStm3.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[268].attribute /* MatStm3.compMasFrac[1,3] */.max;
  /* static ls data for MatStm3.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[273].attribute /* MatStm3.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[273].attribute /* MatStm3.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[273].attribute /* MatStm3.compMasFrac[3,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[270].attribute /* MatStm3.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[270].attribute /* MatStm3.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[270].attribute /* MatStm3.compMasFrac[2,2] */.max;
  /* static ls data for MatStm3.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[269].attribute /* MatStm3.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[269].attribute /* MatStm3.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[269].attribute /* MatStm3.compMasFrac[2,1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA187(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,187};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1606;
  modelica_boolean tmp1607;
  modelica_boolean tmp1608;
  modelica_real tmp1609;
  modelica_boolean tmp1610;
  modelica_boolean tmp1611;
  modelica_boolean tmp1612;
  modelica_boolean tmp1613;
  modelica_real tmp1614;
  modelica_boolean tmp1615;
  modelica_boolean tmp1616;
  modelica_boolean tmp1617;
  modelica_real tmp1618;
  modelica_boolean tmp1619;
  modelica_boolean tmp1620;
  modelica_boolean tmp1621;
  modelica_boolean tmp1622;
  modelica_real tmp1623;
  modelica_boolean tmp1624;
  modelica_boolean tmp1625;
  modelica_boolean tmp1626;
  modelica_real tmp1627;
  modelica_boolean tmp1628;
  modelica_boolean tmp1629;
  modelica_boolean tmp1630;
  modelica_real tmp1631;
  modelica_boolean tmp1632;
  modelica_boolean tmp1633;
  modelica_boolean tmp1634;
  modelica_real tmp1635;
  modelica_boolean tmp1636;
  modelica_boolean tmp1637;
  modelica_boolean tmp1638;
  modelica_real tmp1639;
  modelica_boolean tmp1640;
  modelica_boolean tmp1641;
  modelica_boolean tmp1642;
  modelica_boolean tmp1643;
  modelica_real tmp1644;
  modelica_boolean tmp1645;
  modelica_boolean tmp1646;
  modelica_boolean tmp1647;
  modelica_real tmp1648;
  modelica_boolean tmp1649;
  modelica_boolean tmp1650;
  modelica_boolean tmp1651;
  modelica_real tmp1652;
  modelica_boolean tmp1653;
  modelica_boolean tmp1654;
  modelica_boolean tmp1655;
  modelica_boolean tmp1656;
  modelica_real tmp1657;
  modelica_boolean tmp1658;
  modelica_boolean tmp1659;
  modelica_boolean tmp1660;
  modelica_real tmp1661;
  modelica_boolean tmp1662;
  modelica_boolean tmp1663;
  modelica_boolean tmp1664;
  modelica_real tmp1665;
  modelica_boolean tmp1666;
  modelica_boolean tmp1667;
  modelica_boolean tmp1668;
  modelica_boolean tmp1669;
  modelica_real tmp1670;
  modelica_boolean tmp1671;
  modelica_boolean tmp1672;
  modelica_boolean tmp1673;
  modelica_real tmp1674;
  modelica_boolean tmp1675;
  modelica_boolean tmp1676;
  modelica_boolean tmp1677;
  modelica_boolean tmp1678;
  modelica_real tmp1679;
  modelica_boolean tmp1680;
  modelica_boolean tmp1681;
  modelica_boolean tmp1682;
  modelica_real tmp1683;
  modelica_boolean tmp1684;
  modelica_boolean tmp1685;
  modelica_boolean tmp1686;
  modelica_real tmp1687;
  modelica_boolean tmp1688;
  modelica_boolean tmp1689;
  modelica_boolean tmp1690;
  modelica_real tmp1691;
  tmp1606 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1608 = (modelica_boolean)tmp1606;
  if(tmp1608)
  {
    tmp1609 = 0.0;
  }
  else
  {
    tmp1607 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1609 = (tmp1607?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):1.0);
  }
  linearSystemData->setAElement(0, 4, (-(tmp1609)), 0, linearSystemData, threadData);
  tmp1610 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(0, 5, (-((tmp1610?1.0:-0.0))), 1, linearSystemData, threadData);
  tmp1611 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1613 = (modelica_boolean)tmp1611;
  if(tmp1613)
  {
    tmp1614 = -1.0;
  }
  else
  {
    tmp1612 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1614 = (tmp1612?-0.0:-1.0);
  }
  linearSystemData->setAElement(0, 8, (-(tmp1614)), 2, linearSystemData, threadData);
  tmp1615 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1617 = (modelica_boolean)tmp1615;
  if(tmp1617)
  {
    tmp1618 = 0.0;
  }
  else
  {
    tmp1616 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1618 = (tmp1616?-0.0:1.0);
  }
  linearSystemData->setAElement(1, 1, (-(tmp1618)), 3, linearSystemData, threadData);
  tmp1619 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(1, 2, (-((tmp1619?1.0:-0.0))), 4, linearSystemData, threadData);
  tmp1620 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1622 = (modelica_boolean)tmp1620;
  if(tmp1622)
  {
    tmp1623 = -1.0;
  }
  else
  {
    tmp1621 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1623 = (tmp1621?-0.0:-1.0);
  }
  linearSystemData->setAElement(1, 7, (-(tmp1623)), 5, linearSystemData, threadData);
  tmp1624 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1626 = (modelica_boolean)tmp1624;
  if(tmp1626)
  {
    tmp1627 = 0.0;
  }
  else
  {
    tmp1625 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1627 = (tmp1625?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(1, 8, (-(tmp1627)), 6, linearSystemData, threadData);
  tmp1628 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1630 = (modelica_boolean)tmp1628;
  if(tmp1630)
  {
    tmp1631 = -0.0;
  }
  else
  {
    tmp1629 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1631 = (tmp1629?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):-0.0);
  }
  linearSystemData->setAElement(2, 6, (-(tmp1631)), 7, linearSystemData, threadData);
  tmp1632 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1634 = (modelica_boolean)tmp1632;
  if(tmp1634)
  {
    tmp1635 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp1633 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1635 = (tmp1633?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(2, 7, (-(tmp1635)), 8, linearSystemData, threadData);
  tmp1636 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1638 = (modelica_boolean)tmp1636;
  if(tmp1638)
  {
    tmp1639 = 0.0;
  }
  else
  {
    tmp1637 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1639 = (tmp1637?-0.0:1.0);
  }
  linearSystemData->setAElement(3, 0, (-(tmp1639)), 9, linearSystemData, threadData);
  tmp1640 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(3, 3, (-((tmp1640?1.0:-0.0))), 10, linearSystemData, threadData);
  tmp1641 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1643 = (modelica_boolean)tmp1641;
  if(tmp1643)
  {
    tmp1644 = 0.0;
  }
  else
  {
    tmp1642 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1644 = (tmp1642?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(3, 5, (-(tmp1644)), 11, linearSystemData, threadData);
  tmp1645 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1647 = (modelica_boolean)tmp1645;
  if(tmp1647)
  {
    tmp1648 = -1.0;
  }
  else
  {
    tmp1646 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1648 = (tmp1646?-0.0:-1.0);
  }
  linearSystemData->setAElement(3, 6, (-(tmp1648)), 12, linearSystemData, threadData);
  tmp1649 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1651 = (modelica_boolean)tmp1649;
  if(tmp1651)
  {
    tmp1652 = 0.0;
  }
  else
  {
    tmp1650 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1652 = (tmp1650?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):0.0);
  }
  linearSystemData->setAElement(4, 1, (-(tmp1652)), 13, linearSystemData, threadData);
  tmp1653 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(4, 4, (-((tmp1653?1.0:-0.0))), 14, linearSystemData, threadData);
  tmp1654 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1656 = (modelica_boolean)tmp1654;
  if(tmp1656)
  {
    tmp1657 = 0.0;
  }
  else
  {
    tmp1655 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1657 = (tmp1655?-0.0:1.0);
  }
  linearSystemData->setAElement(4, 5, (-(tmp1657)), 15, linearSystemData, threadData);
  tmp1658 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1660 = (modelica_boolean)tmp1658;
  if(tmp1660)
  {
    tmp1661 = -0.0;
  }
  else
  {
    tmp1659 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1661 = (tmp1659?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):-0.0);
  }
  linearSystemData->setAElement(5, 3, (-(tmp1661)), 16, linearSystemData, threadData);
  tmp1662 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1664 = (modelica_boolean)tmp1662;
  if(tmp1664)
  {
    tmp1665 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp1663 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1665 = (tmp1663?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(5, 6, (-(tmp1665)), 17, linearSystemData, threadData);
  tmp1666 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(6, 0, (-((tmp1666?1.0:-0.0))), 18, linearSystemData, threadData);
  tmp1667 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1669 = (modelica_boolean)tmp1667;
  if(tmp1669)
  {
    tmp1670 = 0.0;
  }
  else
  {
    tmp1668 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1670 = (tmp1668?(-data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */):0.0);
  }
  linearSystemData->setAElement(6, 2, (-(tmp1670)), 19, linearSystemData, threadData);
  tmp1671 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1673 = (modelica_boolean)tmp1671;
  if(tmp1673)
  {
    tmp1674 = 0.0;
  }
  else
  {
    tmp1672 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1674 = (tmp1672?-0.0:1.0);
  }
  linearSystemData->setAElement(6, 3, (-(tmp1674)), 20, linearSystemData, threadData);
  tmp1675 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  linearSystemData->setAElement(7, 1, (-((tmp1675?1.0:-0.0))), 21, linearSystemData, threadData);
  tmp1676 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1678 = (modelica_boolean)tmp1676;
  if(tmp1678)
  {
    tmp1679 = 0.0;
  }
  else
  {
    tmp1677 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1679 = (tmp1677?-0.0:1.0);
  }
  linearSystemData->setAElement(7, 2, (-(tmp1679)), 22, linearSystemData, threadData);
  tmp1680 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1682 = (modelica_boolean)tmp1680;
  if(tmp1682)
  {
    tmp1683 = 0.0;
  }
  else
  {
    tmp1681 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1683 = (tmp1681?(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */):0.0);
  }
  linearSystemData->setAElement(7, 7, (-(tmp1683)), 23, linearSystemData, threadData);
  tmp1684 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1686 = (modelica_boolean)tmp1684;
  if(tmp1686)
  {
    tmp1687 = -0.0;
  }
  else
  {
    tmp1685 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1687 = (tmp1685?(-data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */):-0.0);
  }
  linearSystemData->setAElement(8, 0, (-(tmp1687)), 24, linearSystemData, threadData);
  tmp1688 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1690 = (modelica_boolean)tmp1688;
  if(tmp1690)
  {
    tmp1691 = (-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */);
  }
  else
  {
    tmp1689 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1691 = (tmp1689?-0.0:(-data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */));
  }
  linearSystemData->setAElement(8, 8, (-(tmp1691)), 25, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb187(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,187};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  modelica_boolean tmp1692;
  modelica_boolean tmp1693;
  modelica_boolean tmp1694;
  modelica_real tmp1695;
  modelica_boolean tmp1696;
  modelica_boolean tmp1697;
  modelica_boolean tmp1698;
  modelica_real tmp1699;
  modelica_boolean tmp1700;
  modelica_boolean tmp1701;
  modelica_boolean tmp1702;
  modelica_real tmp1703;
  modelica_boolean tmp1704;
  modelica_boolean tmp1705;
  modelica_boolean tmp1706;
  modelica_real tmp1707;
  modelica_boolean tmp1708;
  modelica_boolean tmp1709;
  modelica_boolean tmp1710;
  modelica_real tmp1711;
  modelica_boolean tmp1712;
  modelica_boolean tmp1713;
  modelica_boolean tmp1714;
  modelica_real tmp1715;
  modelica_boolean tmp1716;
  modelica_boolean tmp1717;
  modelica_boolean tmp1718;
  modelica_real tmp1719;
  modelica_boolean tmp1720;
  modelica_boolean tmp1721;
  modelica_boolean tmp1722;
  modelica_real tmp1723;
  modelica_boolean tmp1724;
  modelica_boolean tmp1725;
  modelica_boolean tmp1726;
  modelica_real tmp1727;
  tmp1692 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1694 = (modelica_boolean)tmp1692;
  if(tmp1694)
  {
    tmp1695 = 0.0;
  }
  else
  {
    tmp1693 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1695 = (tmp1693?data->localData[0]->realVars[147] /* MatStm2.compMasFlo[3,3] variable */:0.0);
  }
  linearSystemData->setBElement(0, tmp1695, linearSystemData, threadData);
  tmp1696 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1698 = (modelica_boolean)tmp1696;
  if(tmp1698)
  {
    tmp1699 = 0.0;
  }
  else
  {
    tmp1697 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1699 = (tmp1697?data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */:0.0);
  }
  linearSystemData->setBElement(1, tmp1699, linearSystemData, threadData);
  tmp1700 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1702 = (modelica_boolean)tmp1700;
  if(tmp1702)
  {
    tmp1703 = data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */;
  }
  else
  {
    tmp1701 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1703 = (tmp1701?data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */:data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */);
  }
  linearSystemData->setBElement(2, tmp1703, linearSystemData, threadData);
  tmp1704 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1706 = (modelica_boolean)tmp1704;
  if(tmp1706)
  {
    tmp1707 = 0.0;
  }
  else
  {
    tmp1705 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1707 = (tmp1705?data->localData[0]->realVars[144] /* MatStm2.compMasFlo[2,3] variable */:0.0);
  }
  linearSystemData->setBElement(3, tmp1707, linearSystemData, threadData);
  tmp1708 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1710 = (modelica_boolean)tmp1708;
  if(tmp1710)
  {
    tmp1711 = 0.0;
  }
  else
  {
    tmp1709 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1711 = (tmp1709?data->localData[0]->realVars[145] /* MatStm2.compMasFlo[3,1] variable */:0.0);
  }
  linearSystemData->setBElement(4, tmp1711, linearSystemData, threadData);
  tmp1712 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1714 = (modelica_boolean)tmp1712;
  if(tmp1714)
  {
    tmp1715 = data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */;
  }
  else
  {
    tmp1713 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1715 = (tmp1713?data->localData[0]->realVars[143] /* MatStm2.compMasFlo[2,2] variable */:data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */);
  }
  linearSystemData->setBElement(5, tmp1715, linearSystemData, threadData);
  tmp1716 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1718 = (modelica_boolean)tmp1716;
  if(tmp1718)
  {
    tmp1719 = 0.0;
  }
  else
  {
    tmp1717 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1719 = (tmp1717?data->localData[0]->realVars[142] /* MatStm2.compMasFlo[2,1] variable */:0.0);
  }
  linearSystemData->setBElement(6, tmp1719, linearSystemData, threadData);
  tmp1720 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1722 = (modelica_boolean)tmp1720;
  if(tmp1722)
  {
    tmp1723 = 0.0;
  }
  else
  {
    tmp1721 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1723 = (tmp1721?data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */:0.0);
  }
  linearSystemData->setBElement(7, tmp1723, linearSystemData, threadData);
  tmp1724 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp1726 = (modelica_boolean)tmp1724;
  if(tmp1726)
  {
    tmp1727 = data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */;
  }
  else
  {
    tmp1725 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp1727 = (tmp1725?data->localData[0]->realVars[146] /* MatStm2.compMasFlo[3,2] variable */:data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */);
  }
  linearSystemData->setBElement(8, tmp1727, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData187(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for MatStm2.compMasFrac[3,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[155].attribute /* MatStm2.compMasFrac[3,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[155].attribute /* MatStm2.compMasFrac[3,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[155].attribute /* MatStm2.compMasFrac[3,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[154].attribute /* MatStm2.compMasFrac[3,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[154].attribute /* MatStm2.compMasFrac[3,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[154].attribute /* MatStm2.compMasFrac[3,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[151].attribute /* MatStm2.compMasFrac[2,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[151].attribute /* MatStm2.compMasFrac[2,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[151].attribute /* MatStm2.compMasFrac[2,1] */.max;
  /* static ls data for MatStm2.compMasFrac[2,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[152].attribute /* MatStm2.compMasFrac[2,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[152].attribute /* MatStm2.compMasFrac[2,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[152].attribute /* MatStm2.compMasFrac[2,2] */.max;
  /* static ls data for MatStm2.compMasFrac[3,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[156].attribute /* MatStm2.compMasFrac[3,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[156].attribute /* MatStm2.compMasFrac[3,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[156].attribute /* MatStm2.compMasFrac[3,3] */.max;
  /* static ls data for MatStm2.compMasFrac[2,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[153].attribute /* MatStm2.compMasFrac[2,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[153].attribute /* MatStm2.compMasFrac[2,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[153].attribute /* MatStm2.compMasFrac[2,3] */.max;
  /* static ls data for MatStm2.compMasFrac[1,2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[149].attribute /* MatStm2.compMasFrac[1,2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[149].attribute /* MatStm2.compMasFrac[1,2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[149].attribute /* MatStm2.compMasFrac[1,2] */.max;
  /* static ls data for MatStm2.compMasFrac[1,1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[148].attribute /* MatStm2.compMasFrac[1,1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[148].attribute /* MatStm2.compMasFrac[1,1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[148].attribute /* MatStm2.compMasFrac[1,1] */.max;
  /* static ls data for MatStm2.compMasFrac[1,3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[150].attribute /* MatStm2.compMasFrac[1,3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[150].attribute /* MatStm2.compMasFrac[1,3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[150].attribute /* MatStm2.compMasFrac[1,3] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 7, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[7].equationIndex = 733;
  linearSystemData[7].size = 9;
  linearSystemData[7].nnz = 26;
  linearSystemData[7].method = 0;
  linearSystemData[7].strictTearingFunctionCall = NULL;
  linearSystemData[7].setA = setLinearMatrixA733;
  linearSystemData[7].setb = setLinearVectorb733;
  linearSystemData[7].initializeStaticLSData = initializeStaticLSData733;
  linearSystemData[7].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 6, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[6].equationIndex = 671;
  linearSystemData[6].size = 9;
  linearSystemData[6].nnz = 26;
  linearSystemData[6].method = 0;
  linearSystemData[6].strictTearingFunctionCall = NULL;
  linearSystemData[6].setA = setLinearMatrixA671;
  linearSystemData[6].setb = setLinearVectorb671;
  linearSystemData[6].initializeStaticLSData = initializeStaticLSData671;
  linearSystemData[6].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[5].equationIndex = 604;
  linearSystemData[5].size = 9;
  linearSystemData[5].nnz = 26;
  linearSystemData[5].method = 0;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].setA = setLinearMatrixA604;
  linearSystemData[5].setb = setLinearVectorb604;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData604;
  linearSystemData[5].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 537;
  linearSystemData[4].size = 9;
  linearSystemData[4].nnz = 26;
  linearSystemData[4].method = 0;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA537;
  linearSystemData[4].setb = setLinearVectorb537;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData537;
  linearSystemData[4].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[3].equationIndex = 393;
  linearSystemData[3].size = 9;
  linearSystemData[3].nnz = 26;
  linearSystemData[3].method = 0;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].setA = setLinearMatrixA393;
  linearSystemData[3].setb = setLinearVectorb393;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData393;
  linearSystemData[3].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 353;
  linearSystemData[2].size = 9;
  linearSystemData[2].nnz = 26;
  linearSystemData[2].method = 0;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA353;
  linearSystemData[2].setb = setLinearVectorb353;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData353;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[1].equationIndex = 254;
  linearSystemData[1].size = 9;
  linearSystemData[1].nnz = 26;
  linearSystemData[1].method = 0;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].setA = setLinearMatrixA254;
  linearSystemData[1].setb = setLinearVectorb254;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData254;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 187;
  linearSystemData[0].size = 9;
  linearSystemData[0].nnz = 26;
  linearSystemData[0].method = 0;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA187;
  linearSystemData[0].setb = setLinearVectorb187;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData187;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

