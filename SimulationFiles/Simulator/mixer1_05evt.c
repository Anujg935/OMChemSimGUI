/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "mixer1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void mixer1_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *mixer1_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"101316.5 >= MatStm2.Pbubl",
  "101316.5 >= MatStm2.Pdew"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void mixer1_eqFunction_305(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_310(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_312(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_329(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_359(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_366(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_368(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_383(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_386(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_417(DATA* data, threadData_t *threadData);

int mixer1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  mixer1_eqFunction_305(data, threadData);

  mixer1_eqFunction_310(data, threadData);

  mixer1_eqFunction_312(data, threadData);

  mixer1_eqFunction_329(data, threadData);

  mixer1_eqFunction_359(data, threadData);

  mixer1_eqFunction_366(data, threadData);

  mixer1_eqFunction_368(data, threadData);

  mixer1_eqFunction_383(data, threadData);

  mixer1_eqFunction_386(data, threadData);

  mixer1_eqFunction_417(data, threadData);
  
  TRACE_POP
  return 0;
}

int mixer1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp36 = GreaterEqZC(101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp36) ? 1 : -1;
  tmp37 = GreaterEqZC(101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp37) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *mixer1_relationDescription(int i)
{
  const char *res[] = {"101316.5 >= MatStm2.Pbubl",
  "101316.5 >= MatStm2.Pdew"};
  return res[i];
}

int mixer1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  
  if(evalforZeroCross) {
    tmp38 = GreaterEqZC(101316.5, data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp38;
    tmp39 = GreaterEqZC(101316.5, data->localData[0]->realVars[12] /* MatStm2.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp39;
  } else {
    data->simulationInfo->relations[0] = (101316.5 >= data->localData[0]->realVars[11] /* MatStm2.Pbubl variable */);
    data->simulationInfo->relations[1] = (101316.5 >= data->localData[0]->realVars[12] /* MatStm2.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

