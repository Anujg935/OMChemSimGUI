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
  static const char *res[] = {"300.0 < MatStm1.Tbubl",
  "300.0 > MatStm1.Tdew",
  "300.0 <= MatStm1.Tbubl",
  "300.0 >= MatStm1.Tdew"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int occurEqs2[] = {1,-1};
  static const int occurEqs3[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void Flowsheet_eqFunction_123(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_137(DATA* data, threadData_t *threadData);

int Flowsheet_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Flowsheet_eqFunction_123(data, threadData);

  Flowsheet_eqFunction_137(data, threadData);
  
  TRACE_POP
  return 0;
}

int Flowsheet_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp134 = LessZC(300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp134) ? 1 : -1;
  tmp135 = GreaterZC(300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp135) ? 1 : -1;
  tmp136 = LessEqZC(300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp136) ? 1 : -1;
  tmp137 = GreaterEqZC(300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp137) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *Flowsheet_relationDescription(int i)
{
  const char *res[] = {"300.0 < MatStm1.Tbubl",
  "300.0 > MatStm1.Tdew",
  "300.0 <= MatStm1.Tbubl",
  "300.0 >= MatStm1.Tdew"};
  return res[i];
}

int Flowsheet_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  
  if(evalforZeroCross) {
    tmp138 = LessZC(300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp138;
    tmp139 = GreaterZC(300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp139;
    tmp140 = LessEqZC(300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp140;
    tmp141 = GreaterEqZC(300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp141;
  } else {
    data->simulationInfo->relations[0] = (300.0 < data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
    data->simulationInfo->relations[1] = (300.0 > data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    data->simulationInfo->relations[2] = (300.0 <= data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
    data->simulationInfo->relations[3] = (300.0 >= data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

