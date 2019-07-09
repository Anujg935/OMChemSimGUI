/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "mixer3_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void mixer3_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *mixer3_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"101325.0 >= MatStm8.Pbubl",
  "101325.0 >= MatStm8.Pdew"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void mixer3_eqFunction_305(DATA* data, threadData_t *threadData);
extern void mixer3_eqFunction_312(DATA* data, threadData_t *threadData);
extern void mixer3_eqFunction_314(DATA* data, threadData_t *threadData);
extern void mixer3_eqFunction_329(DATA* data, threadData_t *threadData);
extern void mixer3_eqFunction_359(DATA* data, threadData_t *threadData);
extern void mixer3_eqFunction_364(DATA* data, threadData_t *threadData);
extern void mixer3_eqFunction_370(DATA* data, threadData_t *threadData);
extern void mixer3_eqFunction_383(DATA* data, threadData_t *threadData);
extern void mixer3_eqFunction_386(DATA* data, threadData_t *threadData);
extern void mixer3_eqFunction_417(DATA* data, threadData_t *threadData);

int mixer3_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  mixer3_eqFunction_305(data, threadData);

  mixer3_eqFunction_312(data, threadData);

  mixer3_eqFunction_314(data, threadData);

  mixer3_eqFunction_329(data, threadData);

  mixer3_eqFunction_359(data, threadData);

  mixer3_eqFunction_364(data, threadData);

  mixer3_eqFunction_370(data, threadData);

  mixer3_eqFunction_383(data, threadData);

  mixer3_eqFunction_386(data, threadData);

  mixer3_eqFunction_417(data, threadData);
  
  TRACE_POP
  return 0;
}

int mixer3_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp0 = GreaterEqZC(101325.0, data->localData[0]->realVars[191] /* MatStm8.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(101325.0, data->localData[0]->realVars[192] /* MatStm8.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp1) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *mixer3_relationDescription(int i)
{
  const char *res[] = {"101325.0 >= MatStm8.Pbubl",
  "101325.0 >= MatStm8.Pdew"};
  return res[i];
}

int mixer3_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  
  if(evalforZeroCross) {
    tmp2 = GreaterEqZC(101325.0, data->localData[0]->realVars[191] /* MatStm8.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp2;
    tmp3 = GreaterEqZC(101325.0, data->localData[0]->realVars[192] /* MatStm8.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp3;
  } else {
    data->simulationInfo->relations[0] = (101325.0 >= data->localData[0]->realVars[191] /* MatStm8.Pbubl variable */);
    data->simulationInfo->relations[1] = (101325.0 >= data->localData[0]->realVars[192] /* MatStm8.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

