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
  static const char *res[] = {"Heater1.outP >= MatStm1.Pbubl",
  "Heater1.outP >= MatStm1.Pdew"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void Flowsheet_eqFunction_148(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_153(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_154(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_156(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_164(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_165(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_187(DATA* data, threadData_t *threadData);

int Flowsheet_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Flowsheet_eqFunction_148(data, threadData);

  Flowsheet_eqFunction_153(data, threadData);

  Flowsheet_eqFunction_154(data, threadData);

  Flowsheet_eqFunction_156(data, threadData);

  Flowsheet_eqFunction_164(data, threadData);

  Flowsheet_eqFunction_165(data, threadData);

  Flowsheet_eqFunction_187(data, threadData);
  
  TRACE_POP
  return 0;
}

int Flowsheet_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp0 = GreaterEqZC(data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[13] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp1) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *Flowsheet_relationDescription(int i)
{
  const char *res[] = {"Heater1.outP >= MatStm1.Pbubl",
  "Heater1.outP >= MatStm1.Pdew"};
  return res[i];
}

int Flowsheet_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  
  if(evalforZeroCross) {
    tmp2 = GreaterEqZC(data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp2;
    tmp3 = GreaterEqZC(data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[13] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp3;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[4] /* Heater1.outP variable */ >= data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[4] /* Heater1.outP variable */ >= data->localData[0]->realVars[13] /* MatStm1.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

