/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "flash1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void flash1_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *flash1_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"101325.0 >= MatStm5.Pbubl",
  "101325.0 >= MatStm5.Pdew",
  "101325.0 >= MatStm2.Pbubl",
  "101325.0 >= MatStm2.Pdew"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int occurEqs2[] = {1,-1};
  static const int occurEqs3[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void flash1_eqFunction_413(DATA* data, threadData_t *threadData);
extern void flash1_eqFunction_424(DATA* data, threadData_t *threadData);
extern void flash1_eqFunction_425(DATA* data, threadData_t *threadData);
extern void flash1_eqFunction_493(DATA* data, threadData_t *threadData);
extern void flash1_eqFunction_494(DATA* data, threadData_t *threadData);

int flash1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  flash1_eqFunction_413(data, threadData);

  flash1_eqFunction_424(data, threadData);

  flash1_eqFunction_425(data, threadData);

  flash1_eqFunction_493(data, threadData);

  flash1_eqFunction_494(data, threadData);
  
  TRACE_POP
  return 0;
}

int flash1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp0 = GreaterEqZC(101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp1) ? 1 : -1;
  tmp2 = GreaterEqZC(101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp2) ? 1 : -1;
  tmp3 = GreaterEqZC(101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp3) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *flash1_relationDescription(int i)
{
  const char *res[] = {"101325.0 >= MatStm5.Pbubl",
  "101325.0 >= MatStm5.Pdew",
  "101325.0 >= MatStm2.Pbubl",
  "101325.0 >= MatStm2.Pdew"};
  return res[i];
}

int flash1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  
  if(evalforZeroCross) {
    tmp4 = GreaterEqZC(101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp4;
    tmp5 = GreaterEqZC(101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp5;
    tmp6 = GreaterEqZC(101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp6;
    tmp7 = GreaterEqZC(101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp7;
  } else {
    data->simulationInfo->relations[0] = (101325.0 >= data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
    data->simulationInfo->relations[1] = (101325.0 >= data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    data->simulationInfo->relations[2] = (101325.0 >= data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
    data->simulationInfo->relations[3] = (101325.0 >= data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

