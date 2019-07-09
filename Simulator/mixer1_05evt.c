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
  static const char *res[] = {"101325.0 >= MatStm1.Pbubl",
  "101325.0 >= MatStm1.Pdew"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void mixer1_eqFunction_305(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_312(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_314(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_329(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_359(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_364(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_370(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_383(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_386(DATA* data, threadData_t *threadData);
extern void mixer1_eqFunction_417(DATA* data, threadData_t *threadData);

int mixer1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  mixer1_eqFunction_305(data, threadData);

  mixer1_eqFunction_312(data, threadData);

  mixer1_eqFunction_314(data, threadData);

  mixer1_eqFunction_329(data, threadData);

  mixer1_eqFunction_359(data, threadData);

  mixer1_eqFunction_364(data, threadData);

  mixer1_eqFunction_370(data, threadData);

  mixer1_eqFunction_383(data, threadData);

  mixer1_eqFunction_386(data, threadData);

  mixer1_eqFunction_417(data, threadData);
  
  TRACE_POP
  return 0;
}

int mixer1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp72 = GreaterEqZC(101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp72) ? 1 : -1;
  tmp73 = GreaterEqZC(101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp73) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *mixer1_relationDescription(int i)
{
  const char *res[] = {"101325.0 >= MatStm1.Pbubl",
  "101325.0 >= MatStm1.Pdew"};
  return res[i];
}

int mixer1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  
  if(evalforZeroCross) {
    tmp74 = GreaterEqZC(101325.0, data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp74;
    tmp75 = GreaterEqZC(101325.0, data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp75;
  } else {
    data->simulationInfo->relations[0] = (101325.0 >= data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
    data->simulationInfo->relations[1] = (101325.0 >= data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

