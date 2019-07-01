#include "flash1_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "flash1_includes.h"


DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData_t *threadData, modelica_real _SH, real_array _VapCp, real_array _HOV, modelica_real _Tc, modelica_real _T)
{
  modelica_real _Ent;
  real_array tmp1;
  real_array tmp2;
  real_array tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 6))));
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 6))));
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 6))));
  _Ent = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, _SH, tmp1, tmp2, _Tc, _T) - omc_Simulator_Files_Thermodynamic__Functions_HV(threadData, tmp3, _Tc, _T);
  _return: OMC_LABEL_UNUSED
  return _Ent;
}
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData_t *threadData, modelica_metatype _SH, modelica_metatype _VapCp, modelica_metatype _HOV, modelica_metatype _Tc, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _Ent;
  modelica_metatype out_Ent;
  tmp1 = mmc_unbox_real(_SH);
  tmp2 = mmc_unbox_real(_Tc);
  tmp3 = mmc_unbox_real(_T);
  _Ent = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, tmp1, *((base_array_t*)_VapCp), *((base_array_t*)_HOV), tmp2, tmp3);
  out_Ent = mmc_mk_rcon(_Ent);
  return out_Ent;
}

DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_HV(threadData_t *threadData, real_array _HOV, modelica_real _Tc, modelica_real _T)
{
  modelica_real _Hv;
  modelica_real _Tr;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = _Tc;
  _Tr = (_T) / tmp1;
  if((_T < _Tc))
  {
    tmp2 = _Tr;
    tmp3 = _Tr;
    tmp4 = 1.0 - _Tr;
    tmp5 = (*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 3))) + ((*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 4)))) * (_Tr) + ((*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 5)))) * ((tmp2 * tmp2)) + ((*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 6)))) * ((tmp3 * tmp3 * tmp3));
    if(tmp4 < 0.0 && tmp5 != 0.0)
    {
      tmp7 = modf(tmp5, &tmp8);
      
      if(tmp7 > 0.5)
      {
        tmp7 -= 1.0;
        tmp8 += 1.0;
      }
      else if(tmp7 < -0.5)
      {
        tmp7 += 1.0;
        tmp8 -= 1.0;
      }
      
      if(fabs(tmp7) < 1e-10)
        tmp6 = pow(tmp4, tmp8);
      else
      {
        tmp10 = modf(1.0/tmp5, &tmp9);
        if(tmp10 > 0.5)
        {
          tmp10 -= 1.0;
          tmp9 += 1.0;
        }
        else if(tmp10 < -0.5)
        {
          tmp10 += 1.0;
          tmp9 -= 1.0;
        }
        if(fabs(tmp10) < 1e-10 && ((unsigned long)tmp9 & 1))
        {
          tmp6 = -pow(-tmp4, tmp7)*pow(tmp4, tmp8);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
        }
      }
    }
    else
    {
      tmp6 = pow(tmp4, tmp5);
    }
    if(isnan(tmp6) || isinf(tmp6))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
    }
    _Hv = (0.001) * (((*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 2)))) * (tmp6));
  }
  else
  {
    _Hv = 0.0;
  }
  _return: OMC_LABEL_UNUSED
  return _Hv;
}
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_HV(threadData_t *threadData, modelica_metatype _HOV, modelica_metatype _Tc, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _Hv;
  modelica_metatype out_Hv;
  tmp1 = mmc_unbox_real(_Tc);
  tmp2 = mmc_unbox_real(_T);
  _Hv = omc_Simulator_Files_Thermodynamic__Functions_HV(threadData, *((base_array_t*)_HOV), tmp1, tmp2);
  out_Hv = mmc_mk_rcon(_Hv);
  return out_Hv;
}

DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData_t *threadData, modelica_real _SH, real_array _VapCp, real_array _HOV, modelica_real _Tc, modelica_real _T)
{
  modelica_real _Ent;
  modelica_integer _n;
  real_array _Cp;
  real_array tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  real_array tmp6;
  real_array tmp7;
  index_spec_t tmp8;
  real_array tmp9;
  modelica_real tmp10;
  _tailrecursive: OMC_LABEL_UNUSED
  _n = ((modelica_integer) 100);
  alloc_real_array(&_Cp, 1, ((modelica_integer) -1) + (modelica_integer)_n);
  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) -1) + (modelica_integer)_n;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
    {
      array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 6))));
      tmp2 = ((modelica_real)((modelica_integer)_n));
      (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ (modelica_integer)_i)) = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp1, 298.15 + (((modelica_real)((modelica_integer)_i))) * ((-298.15 + _T) / tmp2));
    }
  }

  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 6))));
  create_index_spec(&tmp8, 1, (1), (int*)0, 'W');
  index_alloc_real_array(&_Cp, &tmp8, &tmp7);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 6))));
  tmp10 = ((modelica_real)((modelica_integer)_n));
  _Ent = (-298.15 + _T) * (((0.5) * (omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp6, _T)) + sum_real_array(tmp7) + (0.5) * (omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp9, 298.15))) / tmp10);
  _return: OMC_LABEL_UNUSED
  return _Ent;
}
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_HVapId(threadData_t *threadData, modelica_metatype _SH, modelica_metatype _VapCp, modelica_metatype _HOV, modelica_metatype _Tc, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _Ent;
  modelica_metatype out_Ent;
  tmp1 = mmc_unbox_real(_SH);
  tmp2 = mmc_unbox_real(_Tc);
  tmp3 = mmc_unbox_real(_T);
  _Ent = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, tmp1, *((base_array_t*)_VapCp), *((base_array_t*)_HOV), tmp2, tmp3);
  out_Ent = mmc_mk_rcon(_Ent);
  return out_Ent;
}

DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData_t *threadData, real_array _LiqCp, modelica_real _T)
{
  modelica_real _Cp;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = _T;
  tmp2 = _T;
  _Cp = (0.001) * ((*real_array_element_addr1(&_LiqCp, 1, /* modelica_integer */ ((modelica_integer) 2))) + exp(((*real_array_element_addr1(&_LiqCp, 1, /* modelica_integer */ ((modelica_integer) 3)))) / tmp1 + (*real_array_element_addr1(&_LiqCp, 1, /* modelica_integer */ ((modelica_integer) 4))) + ((*real_array_element_addr1(&_LiqCp, 1, /* modelica_integer */ ((modelica_integer) 5)))) * (_T) + ((*real_array_element_addr1(&_LiqCp, 1, /* modelica_integer */ ((modelica_integer) 6)))) * ((tmp2 * tmp2))));
  _return: OMC_LABEL_UNUSED
  return _Cp;
}
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData_t *threadData, modelica_metatype _LiqCp, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _Cp;
  modelica_metatype out_Cp;
  tmp1 = mmc_unbox_real(_T);
  _Cp = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, *((base_array_t*)_LiqCp), tmp1);
  out_Cp = mmc_mk_rcon(_Cp);
  return out_Cp;
}

DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData_t *threadData, real_array _VP, modelica_real _T)
{
  modelica_real _Vp;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = _T;
  tmp2 = _T;
  if(!(tmp2 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log(T) was %g should be > 0", tmp2);
  }tmp3 = _T;
  tmp4 = (*real_array_element_addr1(&_VP, 1, /* modelica_integer */ ((modelica_integer) 6)));
  if(tmp3 < 0.0 && tmp4 != 0.0)
  {
    tmp6 = modf(tmp4, &tmp7);
    
    if(tmp6 > 0.5)
    {
      tmp6 -= 1.0;
      tmp7 += 1.0;
    }
    else if(tmp6 < -0.5)
    {
      tmp6 += 1.0;
      tmp7 -= 1.0;
    }
    
    if(fabs(tmp6) < 1e-10)
      tmp5 = pow(tmp3, tmp7);
    else
    {
      tmp9 = modf(1.0/tmp4, &tmp8);
      if(tmp9 > 0.5)
      {
        tmp9 -= 1.0;
        tmp8 += 1.0;
      }
      else if(tmp9 < -0.5)
      {
        tmp9 += 1.0;
        tmp8 -= 1.0;
      }
      if(fabs(tmp9) < 1e-10 && ((unsigned long)tmp8 & 1))
      {
        tmp5 = -pow(-tmp3, tmp6)*pow(tmp3, tmp7);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
      }
    }
  }
  else
  {
    tmp5 = pow(tmp3, tmp4);
  }
  if(isnan(tmp5) || isinf(tmp5))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
  }
  _Vp = exp((*real_array_element_addr1(&_VP, 1, /* modelica_integer */ ((modelica_integer) 2))) + ((*real_array_element_addr1(&_VP, 1, /* modelica_integer */ ((modelica_integer) 3)))) / tmp1 + ((*real_array_element_addr1(&_VP, 1, /* modelica_integer */ ((modelica_integer) 4)))) * (log(tmp2)) + ((*real_array_element_addr1(&_VP, 1, /* modelica_integer */ ((modelica_integer) 5)))) * (tmp5));
  _return: OMC_LABEL_UNUSED
  return _Vp;
}
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_Psat(threadData_t *threadData, modelica_metatype _VP, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _Vp;
  modelica_metatype out_Vp;
  tmp1 = mmc_unbox_real(_T);
  _Vp = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, *((base_array_t*)_VP), tmp1);
  out_Vp = mmc_mk_rcon(_Vp);
  return out_Vp;
}

DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_SId(threadData_t *threadData, modelica_real _AS, real_array _VapCp, real_array _HOV, modelica_real _Tb, modelica_real _Tc, modelica_real _T, modelica_real _P, modelica_real _x, modelica_real _y, modelica_real *out_Svap)
{
  modelica_real _Sliq;
  modelica_real _Svap;
  modelica_real _Tref;
  modelica_real _Pref;
  modelica_real _Entr;
  modelica_integer _n;
  real_array _Cp;
  real_array tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  real_array tmp8;
  modelica_real tmp9;
  real_array tmp10;
  modelica_real tmp11;
  real_array tmp12;
  modelica_real tmp13;
  real_array tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  real_array tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  real_array tmp30;
  modelica_real tmp31;
  _tailrecursive: OMC_LABEL_UNUSED
  _Tref = 298.15;
  _Pref = 101325.0;
  _n = ((modelica_integer) 10);
  alloc_real_array(&_Cp, 1, ((modelica_integer) 9));
  _Entr = 0.0;

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = ((modelica_integer) -1) + (modelica_integer)_n;
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
    {
      array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 6))));
      tmp2 = ((modelica_real)((modelica_integer)_n));
      tmp3 = ((modelica_real)((modelica_integer)_n));
      tmp4 = 298.15 + (((modelica_real)((modelica_integer)_i))) * ((-298.15 + _T) / tmp3);
      (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ (modelica_integer)_i)) = (omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp1, 298.15 + (((modelica_real)((modelica_integer)_i))) * ((-298.15 + _T) / tmp2))) / tmp4;
    }
  }

  if((_T >= _Tref))
  {
    array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 6))));
    tmp9 = _T;
    array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 6))));
    tmp11 = ((modelica_real)((modelica_integer)_n));
    _Entr = (-298.15 + _T) * (((0.5) * ((omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp8, _T)) / tmp9) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 1))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 2))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 3))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 4))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 5))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 6))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 7))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 8))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 9))) + (0.001677008217340265) * (omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp10, 298.15))) / tmp11);
  }
  else
  {
    array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 6))));
    tmp13 = _T;
    array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 6))));
    tmp15 = ((modelica_real)((modelica_integer)_n));
    _Entr = (298.15 - _T) * (((0.5) * ((omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, _T)) / tmp13) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 1))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 2))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 3))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 4))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 5))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 6))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 7))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 8))) + (*real_array_element_addr1(&_Cp, 1, /* modelica_integer */ ((modelica_integer) 9))) + (0.001677008217340265) * (omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp14, 298.15))) / tmp15);
  }

  if(((_x > 0.0) && (_y > 0.0)))
  {
    tmp16 = _Pref;
    tmp17 = (_P) / tmp16;
    if(!(tmp17 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log(P / Pref) was %g should be > 0", tmp17);
    }tmp18 = _x;
    if(!(tmp18 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log(x) was %g should be > 0", tmp18);
    }array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 6))));
    tmp20 = _T;
    _Sliq = _Entr + (-8.3144598) * (log(tmp17) + log(tmp18)) - ((omc_Simulator_Files_Thermodynamic__Functions_HV(threadData, tmp19, _Tc, _T)) / tmp20);

    tmp21 = _Pref;
    tmp22 = (_P) / tmp21;
    if(!(tmp22 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log(P / Pref) was %g should be > 0", tmp22);
    }tmp23 = _y;
    if(!(tmp23 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log(y) was %g should be > 0", tmp23);
    }
    _Svap = _Entr + (-8.3144598) * (log(tmp22) + log(tmp23));
  }
  else
  {
    if(((_x <= 0.0) && (_y <= 0.0)))
    {
      _Sliq = 0.0;

      _Svap = 0.0;
    }
    else
    {
      if((_x == 0.0))
      {
        _Sliq = 0.0;

        tmp24 = _Pref;
        tmp25 = (_P) / tmp24;
        if(!(tmp25 > 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert(threadData, info, "Model error: Argument of log(P / Pref) was %g should be > 0", tmp25);
        }tmp26 = _y;
        if(!(tmp26 > 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert(threadData, info, "Model error: Argument of log(y) was %g should be > 0", tmp26);
        }
        _Svap = _Entr + (-8.3144598) * (log(tmp25) + log(tmp26));
      }
      else
      {
        if((_y == 0.0))
        {
          tmp27 = _Pref;
          tmp28 = (_P) / tmp27;
          if(!(tmp28 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert(threadData, info, "Model error: Argument of log(P / Pref) was %g should be > 0", tmp28);
          }tmp29 = _x;
          if(!(tmp29 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert(threadData, info, "Model error: Argument of log(x) was %g should be > 0", tmp29);
          }array_alloc_scalar_real_array(&tmp30, 6, (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 1))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 2))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 3))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 4))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 5))), (modelica_real)(*real_array_element_addr1(&_HOV, 1, /* modelica_integer */ ((modelica_integer) 6))));
          tmp31 = _T;
          _Sliq = _Entr + (-8.3144598) * (log(tmp28) + log(tmp29)) - ((omc_Simulator_Files_Thermodynamic__Functions_HV(threadData, tmp30, _Tc, _T)) / tmp31);

          _Svap = 0.0;
        }
        else
        {
          _Sliq = 0.0;

          _Svap = 0.0;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_Svap) { *out_Svap = _Svap; }
  return _Sliq;
}
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_SId(threadData_t *threadData, modelica_metatype _AS, modelica_metatype _VapCp, modelica_metatype _HOV, modelica_metatype _Tb, modelica_metatype _Tc, modelica_metatype _T, modelica_metatype _P, modelica_metatype _x, modelica_metatype _y, modelica_metatype *out_Svap)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _Svap;
  modelica_real _Sliq;
  modelica_metatype out_Sliq;
  tmp1 = mmc_unbox_real(_AS);
  tmp2 = mmc_unbox_real(_Tb);
  tmp3 = mmc_unbox_real(_Tc);
  tmp4 = mmc_unbox_real(_T);
  tmp5 = mmc_unbox_real(_P);
  tmp6 = mmc_unbox_real(_x);
  tmp7 = mmc_unbox_real(_y);
  _Sliq = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, tmp1, *((base_array_t*)_VapCp), *((base_array_t*)_HOV), tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, &_Svap);
  out_Sliq = mmc_mk_rcon(_Sliq);
  if (out_Svap) { *out_Svap = mmc_mk_rcon(_Svap); }
  return out_Sliq;
}

DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData_t *threadData, real_array _VapCp, modelica_real _T)
{
  modelica_real _Cp;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = _T;
  tmp2 = _T;
  _Cp = (0.001) * ((*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 2))) + exp(((*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 3)))) / tmp1 + (*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 4))) + ((*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 5)))) * (_T) + ((*real_array_element_addr1(&_VapCp, 1, /* modelica_integer */ ((modelica_integer) 6)))) * ((tmp2 * tmp2))));
  _return: OMC_LABEL_UNUSED
  return _Cp;
}
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData_t *threadData, modelica_metatype _VapCp, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _Cp;
  modelica_metatype out_Cp;
  tmp1 = mmc_unbox_real(_T);
  _Cp = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, *((base_array_t*)_VapCp), tmp1);
  out_Cp = mmc_mk_rcon(_Cp);
  return out_Cp;
}

#ifdef __cplusplus
}
#endif
