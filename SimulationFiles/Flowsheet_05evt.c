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
  "101325.0 >= MatStm3.Pdew",
  "101325.0 >= MatStm1.Pbubl",
  "101325.0 >= MatStm1.Pdew",
  "101325.0 >= MatStm2.Pbubl",
  "101325.0 >= MatStm2.Pdew"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int occurEqs2[] = {1,-1};
  static const int occurEqs3[] = {1,-1};
  static const int occurEqs4[] = {1,-1};
  static const int occurEqs5[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void Flowsheet_eqFunction_579(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_583(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_586(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_603(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_609(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_610(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_611(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_612(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_690(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_696(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_699(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_714(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_717(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_829(DATA* data, threadData_t *threadData);

int Flowsheet_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Flowsheet_eqFunction_579(data, threadData);

  Flowsheet_eqFunction_583(data, threadData);

  Flowsheet_eqFunction_586(data, threadData);

  Flowsheet_eqFunction_603(data, threadData);

  Flowsheet_eqFunction_609(data, threadData);

  Flowsheet_eqFunction_610(data, threadData);

  Flowsheet_eqFunction_611(data, threadData);

  Flowsheet_eqFunction_612(data, threadData);

  Flowsheet_eqFunction_690(data, threadData);

  Flowsheet_eqFunction_696(data, threadData);

  Flowsheet_eqFunction_699(data, threadData);

  Flowsheet_eqFunction_714(data, threadData);

  Flowsheet_eqFunction_717(data, threadData);

  Flowsheet_eqFunction_829(data, threadData);
  
  TRACE_POP
  return 0;
}

int Flowsheet_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp448;
  modelica_boolean tmp449;
  modelica_boolean tmp450;
  modelica_boolean tmp451;
  modelica_boolean tmp452;
  modelica_boolean tmp453;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp448 = GreaterEqZC(101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp448) ? 1 : -1;
  tmp449 = GreaterEqZC(101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp449) ? 1 : -1;
  tmp450 = GreaterEqZC(101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp450) ? 1 : -1;
  tmp451 = GreaterEqZC(101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp451) ? 1 : -1;
  tmp452 = GreaterEqZC(101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, data->simulationInfo->storedRelations[4]);
  gout[4] = (tmp452) ? 1 : -1;
  tmp453 = GreaterEqZC(101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, data->simulationInfo->storedRelations[5]);
  gout[5] = (tmp453) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *Flowsheet_relationDescription(int i)
{
  const char *res[] = {"101325.0 >= MatStm3.Pbubl",
  "101325.0 >= MatStm3.Pdew",
  "101325.0 >= MatStm1.Pbubl",
  "101325.0 >= MatStm1.Pdew",
  "101325.0 >= MatStm2.Pbubl",
  "101325.0 >= MatStm2.Pdew"};
  return res[i];
}

int Flowsheet_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp454;
  modelica_boolean tmp455;
  modelica_boolean tmp456;
  modelica_boolean tmp457;
  modelica_boolean tmp458;
  modelica_boolean tmp459;
  
  if(evalforZeroCross) {
    tmp454 = GreaterEqZC(101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp454;
    tmp455 = GreaterEqZC(101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp455;
    tmp456 = GreaterEqZC(101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp456;
    tmp457 = GreaterEqZC(101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp457;
    tmp458 = GreaterEqZC(101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp458;
    tmp459 = GreaterEqZC(101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp459;
  } else {
    data->simulationInfo->relations[0] = (101325.0 >= data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
    data->simulationInfo->relations[1] = (101325.0 >= data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    data->simulationInfo->relations[2] = (101325.0 >= data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
    data->simulationInfo->relations[3] = (101325.0 >= data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    data->simulationInfo->relations[4] = (101325.0 >= data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
    data->simulationInfo->relations[5] = (101325.0 >= data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

