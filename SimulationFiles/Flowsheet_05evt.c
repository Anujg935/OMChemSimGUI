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
  static const char *res[] = {"0.0 >= MatStm2.Pbubl",
  "0.0 >= MatStm2.Pdew"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void Flowsheet_eqFunction_205(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_210(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_212(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_229(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_235(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_236(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_239(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_240(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_272(DATA* data, threadData_t *threadData);

int Flowsheet_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Flowsheet_eqFunction_205(data, threadData);

  Flowsheet_eqFunction_210(data, threadData);

  Flowsheet_eqFunction_212(data, threadData);

  Flowsheet_eqFunction_229(data, threadData);

  Flowsheet_eqFunction_235(data, threadData);

  Flowsheet_eqFunction_236(data, threadData);

  Flowsheet_eqFunction_239(data, threadData);

  Flowsheet_eqFunction_240(data, threadData);

  Flowsheet_eqFunction_272(data, threadData);
  
  TRACE_POP
  return 0;
}

int Flowsheet_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp314;
  modelica_boolean tmp315;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp314 = GreaterEqZC(0.0, data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp314) ? 1 : -1;
  tmp315 = GreaterEqZC(0.0, data->localData[0]->realVars[102] /* MatStm2.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp315) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *Flowsheet_relationDescription(int i)
{
  const char *res[] = {"0.0 >= MatStm2.Pbubl",
  "0.0 >= MatStm2.Pdew"};
  return res[i];
}

int Flowsheet_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp316;
  modelica_boolean tmp317;
  
  if(evalforZeroCross) {
    tmp316 = GreaterEqZC(0.0, data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp316;
    tmp317 = GreaterEqZC(0.0, data->localData[0]->realVars[102] /* MatStm2.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp317;
  } else {
    data->simulationInfo->relations[0] = (0.0 >= data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
    data->simulationInfo->relations[1] = (0.0 >= data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

