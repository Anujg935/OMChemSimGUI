/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void Flowsheet_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *Flowsheet_zeroCrossingDescription(int i, int **out_EquationIndexes)
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
extern void Flowsheet_eqFunction_392(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_398(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_400(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_419(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_459(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_466(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_469(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_486(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_490(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_531(DATA* data, threadData_t *threadData);

int Flowsheet_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Flowsheet_eqFunction_392(data, threadData);

  Flowsheet_eqFunction_398(data, threadData);

  Flowsheet_eqFunction_400(data, threadData);

  Flowsheet_eqFunction_419(data, threadData);

  Flowsheet_eqFunction_459(data, threadData);

  Flowsheet_eqFunction_466(data, threadData);

  Flowsheet_eqFunction_469(data, threadData);

  Flowsheet_eqFunction_486(data, threadData);

  Flowsheet_eqFunction_490(data, threadData);

  Flowsheet_eqFunction_531(data, threadData);
  
  TRACE_POP
  return 0;
}

int Flowsheet_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp573;
  modelica_boolean tmp574;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp573 = GreaterEqZC(101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp573) ? 1 : -1;
  tmp574 = GreaterEqZC(101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp574) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *Flowsheet_relationDescription(int i)
{
  const char *res[] = {"101325.0 >= MatStm1.Pbubl",
  "101325.0 >= MatStm1.Pdew"};
  return res[i];
}

int Flowsheet_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp575;
  modelica_boolean tmp576;
  
  if(evalforZeroCross) {
    tmp575 = GreaterEqZC(101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp575;
    tmp576 = GreaterEqZC(101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp576;
  } else {
    data->simulationInfo->relations[0] = (101325.0 >= data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
    data->simulationInfo->relations[1] = (101325.0 >= data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

