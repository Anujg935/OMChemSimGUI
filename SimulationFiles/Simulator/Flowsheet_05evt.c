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
  static const char *res[] = {"111457.0 >= MatStm1.Pbubl",
  "111457.0 >= MatStm1.Pdew"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void Flowsheet_eqFunction_212(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_216(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_219(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_236(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_239(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_244(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_246(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_248(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_250(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_282(DATA* data, threadData_t *threadData);

int Flowsheet_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Flowsheet_eqFunction_212(data, threadData);

  Flowsheet_eqFunction_216(data, threadData);

  Flowsheet_eqFunction_219(data, threadData);

  Flowsheet_eqFunction_236(data, threadData);

  Flowsheet_eqFunction_239(data, threadData);

  Flowsheet_eqFunction_244(data, threadData);

  Flowsheet_eqFunction_246(data, threadData);

  Flowsheet_eqFunction_248(data, threadData);

  Flowsheet_eqFunction_250(data, threadData);

  Flowsheet_eqFunction_282(data, threadData);
  
  TRACE_POP
  return 0;
}

int Flowsheet_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp2 = GreaterEqZC(111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp2) ? 1 : -1;
  tmp3 = GreaterEqZC(111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp3) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *Flowsheet_relationDescription(int i)
{
  const char *res[] = {"111457.0 >= MatStm1.Pbubl",
  "111457.0 >= MatStm1.Pdew"};
  return res[i];
}

int Flowsheet_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  
  if(evalforZeroCross) {
    tmp4 = GreaterEqZC(111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp4;
    tmp5 = GreaterEqZC(111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp5;
  } else {
    data->simulationInfo->relations[0] = (111457.0 >= data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
    data->simulationInfo->relations[1] = (111457.0 >= data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

