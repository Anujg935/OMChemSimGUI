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
  static const char *res[] = {"101325.0 >= MatStm2.Pbubl",
  "101325.0 >= MatStm2.Pdew",
  "101325.0 >= MatStm3.Pbubl",
  "101325.0 >= MatStm3.Pdew"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int occurEqs2[] = {1,-1};
  static const int occurEqs3[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void Flowsheet_eqFunction_351(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_354(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_361(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_364(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_365(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_419(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_422(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_423(DATA* data, threadData_t *threadData);

int Flowsheet_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Flowsheet_eqFunction_351(data, threadData);

  Flowsheet_eqFunction_354(data, threadData);

  Flowsheet_eqFunction_361(data, threadData);

  Flowsheet_eqFunction_364(data, threadData);

  Flowsheet_eqFunction_365(data, threadData);

  Flowsheet_eqFunction_419(data, threadData);

  Flowsheet_eqFunction_422(data, threadData);

  Flowsheet_eqFunction_423(data, threadData);
  
  TRACE_POP
  return 0;
}

int Flowsheet_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp0 = GreaterEqZC(101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp1) ? 1 : -1;
  tmp2 = GreaterEqZC(101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp2) ? 1 : -1;
  tmp3 = GreaterEqZC(101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp3) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *Flowsheet_relationDescription(int i)
{
  const char *res[] = {"101325.0 >= MatStm2.Pbubl",
  "101325.0 >= MatStm2.Pdew",
  "101325.0 >= MatStm3.Pbubl",
  "101325.0 >= MatStm3.Pdew"};
  return res[i];
}

int Flowsheet_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  
  if(evalforZeroCross) {
    tmp4 = GreaterEqZC(101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp4;
    tmp5 = GreaterEqZC(101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp5;
    tmp6 = GreaterEqZC(101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp6;
    tmp7 = GreaterEqZC(101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp7;
  } else {
    data->simulationInfo->relations[0] = (101325.0 >= data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
    data->simulationInfo->relations[1] = (101325.0 >= data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    data->simulationInfo->relations[2] = (101325.0 >= data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
    data->simulationInfo->relations[3] = (101325.0 >= data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

