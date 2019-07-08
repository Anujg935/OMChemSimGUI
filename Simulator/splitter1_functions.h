#ifndef splitter1__H
#define splitter1__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif


DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData_t *threadData, modelica_real _SH, real_array _VapCp, real_array _HOV, modelica_real _Tc, modelica_real _T);
DLLExport
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData_t *threadData, modelica_metatype _SH, modelica_metatype _VapCp, modelica_metatype _HOV, modelica_metatype _Tc, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_HLiqId,2,0) {(void*) boxptr_Simulator_Files_Thermodynamic__Functions_HLiqId,0}};
#define boxvar_Simulator_Files_Thermodynamic__Functions_HLiqId MMC_REFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_HLiqId)


DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_HV(threadData_t *threadData, real_array _HOV, modelica_real _Tc, modelica_real _T);
DLLExport
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_HV(threadData_t *threadData, modelica_metatype _HOV, modelica_metatype _Tc, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_HV,2,0) {(void*) boxptr_Simulator_Files_Thermodynamic__Functions_HV,0}};
#define boxvar_Simulator_Files_Thermodynamic__Functions_HV MMC_REFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_HV)


DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData_t *threadData, modelica_real _SH, real_array _VapCp, real_array _HOV, modelica_real _Tc, modelica_real _T);
DLLExport
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_HVapId(threadData_t *threadData, modelica_metatype _SH, modelica_metatype _VapCp, modelica_metatype _HOV, modelica_metatype _Tc, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_HVapId,2,0) {(void*) boxptr_Simulator_Files_Thermodynamic__Functions_HVapId,0}};
#define boxvar_Simulator_Files_Thermodynamic__Functions_HVapId MMC_REFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_HVapId)


DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData_t *threadData, real_array _LiqCp, modelica_real _T);
DLLExport
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData_t *threadData, modelica_metatype _LiqCp, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_LiqCpId,2,0) {(void*) boxptr_Simulator_Files_Thermodynamic__Functions_LiqCpId,0}};
#define boxvar_Simulator_Files_Thermodynamic__Functions_LiqCpId MMC_REFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_LiqCpId)


DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData_t *threadData, real_array _VP, modelica_real _T);
DLLExport
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_Psat(threadData_t *threadData, modelica_metatype _VP, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_Psat,2,0) {(void*) boxptr_Simulator_Files_Thermodynamic__Functions_Psat,0}};
#define boxvar_Simulator_Files_Thermodynamic__Functions_Psat MMC_REFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_Psat)


DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_SId(threadData_t *threadData, modelica_real _AS, real_array _VapCp, real_array _HOV, modelica_real _Tb, modelica_real _Tc, modelica_real _T, modelica_real _P, modelica_real _x, modelica_real _y, modelica_real *out_Svap);
DLLExport
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_SId(threadData_t *threadData, modelica_metatype _AS, modelica_metatype _VapCp, modelica_metatype _HOV, modelica_metatype _Tb, modelica_metatype _Tc, modelica_metatype _T, modelica_metatype _P, modelica_metatype _x, modelica_metatype _y, modelica_metatype *out_Svap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_SId,2,0) {(void*) boxptr_Simulator_Files_Thermodynamic__Functions_SId,0}};
#define boxvar_Simulator_Files_Thermodynamic__Functions_SId MMC_REFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_SId)


DLLExport
modelica_real omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData_t *threadData, real_array _VapCp, modelica_real _T);
DLLExport
modelica_metatype boxptr_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData_t *threadData, modelica_metatype _VapCp, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_VapCpId,2,0) {(void*) boxptr_Simulator_Files_Thermodynamic__Functions_VapCpId,0}};
#define boxvar_Simulator_Files_Thermodynamic__Functions_VapCpId MMC_REFSTRUCTLIT(boxvar_lit_Simulator_Files_Thermodynamic__Functions_VapCpId)
#include "splitter1_model.h"


#ifdef __cplusplus
}
#endif
#endif

