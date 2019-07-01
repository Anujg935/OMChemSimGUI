/* Simulation code for flash1 generated by the OpenModelica Compiler v1.13.2 (64-bit). */
#if !defined(flash1__MODEL_H)
#define flash1__MODEL_H

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#if defined(__cplusplus)
extern "C" {
#endif

#include <string.h>

#include "flash1_functions.h"

#define Simulator_Files_Thermodynamic__Functions_HLiqId_index 0
#define Simulator_Files_Thermodynamic__Functions_HV_index 1
#define Simulator_Files_Thermodynamic__Functions_HVapId_index 2
#define Simulator_Files_Thermodynamic__Functions_LiqCpId_index 3
#define Simulator_Files_Thermodynamic__Functions_Psat_index 4
#define Simulator_Files_Thermodynamic__Functions_SId_index 5
#define Simulator_Files_Thermodynamic__Functions_VapCpId_index 6

extern void flash1_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
extern void flash1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA *data);
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
extern void flash1_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA *data);
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void flash1_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int flash1_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int flash1_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int flash1_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int flash1_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int flash1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int flash1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int flash1_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int flash1_checkForAsserts(DATA *data, threadData_t *threadData);
extern int flash1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int flash1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int flash1_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* flash1_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* flash1_relationDescription(int i);
extern void flash1_function_initSample(DATA *data, threadData_t *threadData);
extern int flash1_initialAnalyticJacobianG(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int flash1_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int flash1_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int flash1_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int flash1_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int flash1_functionJacG_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int flash1_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int flash1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int flash1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int flash1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern const char* flash1_linear_model_frame(void);
extern const char* flash1_linear_model_datarecovery_frame(void);
extern int flash1_mayer(DATA* data, modelica_real** res, short *);
extern int flash1_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int flash1_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int flash1_setInputData(DATA *data, const modelica_boolean file);
extern int flash1_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void flash1_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void flash1_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int flash1_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void flash1_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void flash1_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int flash1_inputNames(DATA* data, char ** names);
extern int flash1_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int flash1_functionLocalKnownVars(DATA*, threadData_t*);
extern int flash1_symbolicInlineSystem(DATA*, threadData_t*);

#include "flash1_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#if defined(__cplusplus)
}
#endif

#endif /* !defined(flash1__MODEL_H) */


