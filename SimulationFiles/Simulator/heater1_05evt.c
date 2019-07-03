/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "heater1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void heater1_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *heater1_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"Heater1.outP >= MatStm4.Pbubl",
  "Heater1.outP >= MatStm4.Pdew"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void heater1_eqFunction_207(DATA* data, threadData_t *threadData);
extern void heater1_eqFunction_210(DATA* data, threadData_t *threadData);
extern void heater1_eqFunction_213(DATA* data, threadData_t *threadData);
extern void heater1_eqFunction_216(DATA* data, threadData_t *threadData);
extern void heater1_eqFunction_217(DATA* data, threadData_t *threadData);
extern void heater1_eqFunction_220(DATA* data, threadData_t *threadData);
extern void heater1_eqFunction_239(DATA* data, threadData_t *threadData);
extern void heater1_eqFunction_240(DATA* data, threadData_t *threadData);
extern void heater1_eqFunction_243(DATA* data, threadData_t *threadData);
extern void heater1_eqFunction_244(DATA* data, threadData_t *threadData);
extern void heater1_eqFunction_277(DATA* data, threadData_t *threadData);

int heater1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  heater1_eqFunction_207(data, threadData);

  heater1_eqFunction_210(data, threadData);

  heater1_eqFunction_213(data, threadData);

  heater1_eqFunction_216(data, threadData);

  heater1_eqFunction_217(data, threadData);

  heater1_eqFunction_220(data, threadData);

  heater1_eqFunction_239(data, threadData);

  heater1_eqFunction_240(data, threadData);

  heater1_eqFunction_243(data, threadData);

  heater1_eqFunction_244(data, threadData);

  heater1_eqFunction_277(data, threadData);
  
  TRACE_POP
  return 0;
}

int heater1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp0 = GreaterEqZC(data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm4.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm4.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp1) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *heater1_relationDescription(int i)
{
  const char *res[] = {"Heater1.outP >= MatStm4.Pbubl",
  "Heater1.outP >= MatStm4.Pdew"};
  return res[i];
}

int heater1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  
  if(evalforZeroCross) {
    tmp2 = GreaterEqZC(data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[106] /* MatStm4.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp2;
    tmp3 = GreaterEqZC(data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[107] /* MatStm4.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp3;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[7] /* Heater1.outP variable */ >= data->localData[0]->realVars[106] /* MatStm4.Pbubl variable */);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[7] /* Heater1.outP variable */ >= data->localData[0]->realVars[107] /* MatStm4.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

