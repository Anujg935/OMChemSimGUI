/* Simulation code for Flowsheet generated by the OpenModelica Compiler v1.13.2 (64-bit). */
#if !defined(Flowsheet__MODEL_H)
#define Flowsheet__MODEL_H

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

#include "Flowsheet_functions.h"

#define Simulator_Files_Thermodynamic__Functions_HLiqId_index 0
#define Simulator_Files_Thermodynamic__Functions_HV_index 1
#define Simulator_Files_Thermodynamic__Functions_HVapId_index 2
#define Simulator_Files_Thermodynamic__Functions_LiqCpId_index 3
#define Simulator_Files_Thermodynamic__Functions_Psat_index 4
#define Simulator_Files_Thermodynamic__Functions_SId_index 5
#define Simulator_Files_Thermodynamic__Functions_VapCpId_index 6

extern void Flowsheet_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
extern void Flowsheet_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA *data);
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
extern void Flowsheet_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA *data);
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void Flowsheet_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int Flowsheet_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int Flowsheet_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int Flowsheet_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int Flowsheet_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int Flowsheet_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int Flowsheet_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int Flowsheet_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData);
extern int Flowsheet_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int Flowsheet_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int Flowsheet_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* Flowsheet_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* Flowsheet_relationDescription(int i);
extern void Flowsheet_function_initSample(DATA *data, threadData_t *threadData);
extern int Flowsheet_initialAnalyticJacobianG(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int Flowsheet_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int Flowsheet_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int Flowsheet_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int Flowsheet_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int Flowsheet_functionJacG_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int Flowsheet_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int Flowsheet_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int Flowsheet_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int Flowsheet_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern const char* Flowsheet_linear_model_frame(void);
extern const char* Flowsheet_linear_model_datarecovery_frame(void);
extern int Flowsheet_mayer(DATA* data, modelica_real** res, short *);
extern int Flowsheet_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int Flowsheet_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int Flowsheet_setInputData(DATA *data, const modelica_boolean file);
extern int Flowsheet_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void Flowsheet_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void Flowsheet_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int Flowsheet_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void Flowsheet_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void Flowsheet_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int Flowsheet_inputNames(DATA* data, char ** names);
extern int Flowsheet_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int Flowsheet_functionLocalKnownVars(DATA*, threadData_t*);
extern int Flowsheet_symbolicInlineSystem(DATA*, threadData_t*);

#include "Flowsheet_literals.h"




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

#endif /* !defined(Flowsheet__MODEL_H) */


