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
  static const char *res[] = {"101325.0 >= MatStm3.Pbubl",
  "101325.0 >= MatStm3.Pdew"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void Flowsheet_eqFunction_305(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_310(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_312(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_329(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_359(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_361(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_364(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_383(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_386(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_417(DATA* data, threadData_t *threadData);

int Flowsheet_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Flowsheet_eqFunction_305(data, threadData);

  Flowsheet_eqFunction_310(data, threadData);

  Flowsheet_eqFunction_312(data, threadData);

  Flowsheet_eqFunction_329(data, threadData);

  Flowsheet_eqFunction_359(data, threadData);

  Flowsheet_eqFunction_361(data, threadData);

  Flowsheet_eqFunction_364(data, threadData);

  Flowsheet_eqFunction_383(data, threadData);

  Flowsheet_eqFunction_386(data, threadData);

  Flowsheet_eqFunction_417(data, threadData);
  
  TRACE_POP
  return 0;
}

int Flowsheet_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp38 = GreaterEqZC(101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp38) ? 1 : -1;
  tmp39 = GreaterEqZC(101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp39) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *Flowsheet_relationDescription(int i)
{
  const char *res[] = {"101325.0 >= MatStm3.Pbubl",
  "101325.0 >= MatStm3.Pdew"};
  return res[i];
}

int Flowsheet_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  
  if(evalforZeroCross) {
    tmp40 = GreaterEqZC(101325.0, data->localData[0]->realVars[191] /* MatStm3.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp40;
    tmp41 = GreaterEqZC(101325.0, data->localData[0]->realVars[192] /* MatStm3.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp41;
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

