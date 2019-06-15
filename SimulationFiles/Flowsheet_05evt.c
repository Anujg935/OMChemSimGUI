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
extern void Flowsheet_eqFunction_515(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_523(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_527(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_542(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_582(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_587(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_590(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_609(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_649(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_655(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_657(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_676(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_680(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_721(DATA* data, threadData_t *threadData);

int Flowsheet_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Flowsheet_eqFunction_515(data, threadData);

  Flowsheet_eqFunction_523(data, threadData);

  Flowsheet_eqFunction_527(data, threadData);

  Flowsheet_eqFunction_542(data, threadData);

  Flowsheet_eqFunction_582(data, threadData);

  Flowsheet_eqFunction_587(data, threadData);

  Flowsheet_eqFunction_590(data, threadData);

  Flowsheet_eqFunction_609(data, threadData);

  Flowsheet_eqFunction_649(data, threadData);

  Flowsheet_eqFunction_655(data, threadData);

  Flowsheet_eqFunction_657(data, threadData);

  Flowsheet_eqFunction_676(data, threadData);

  Flowsheet_eqFunction_680(data, threadData);

  Flowsheet_eqFunction_721(data, threadData);
  
  TRACE_POP
  return 0;
}

int Flowsheet_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp748;
  modelica_boolean tmp749;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp748 = GreaterEqZC(101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp748) ? 1 : -1;
  tmp749 = GreaterEqZC(101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp749) ? 1 : -1;
  
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
  modelica_boolean tmp750;
  modelica_boolean tmp751;
  
  if(evalforZeroCross) {
    tmp750 = GreaterEqZC(101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp750;
    tmp751 = GreaterEqZC(101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp751;
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
