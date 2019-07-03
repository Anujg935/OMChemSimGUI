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
  static const char *res[] = {"101325.0 >= MatStm3.Pbubl",
  "101325.0 >= MatStm3.Pdew"};
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
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp2 = GreaterEqZC(101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp2) ? 1 : -1;
  tmp3 = GreaterEqZC(101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp3) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *mixer1_relationDescription(int i)
{
  const char *res[] = {"101325.0 >= MatStm3.Pbubl",
  "101325.0 >= MatStm3.Pdew"};
  return res[i];
}

int mixer1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  
  if(evalforZeroCross) {
    tmp4 = GreaterEqZC(101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp4;
    tmp5 = GreaterEqZC(101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp5;
  } else {
    data->simulationInfo->relations[0] = (101325.0 >= data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */);
    data->simulationInfo->relations[1] = (101325.0 >= data->localData[0]->realVars[192] /* MatStm3.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

