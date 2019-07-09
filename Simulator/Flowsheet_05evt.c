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
  "101325.0 >= MatStm1.Pdew",
  "101325.0 >= MatStm5.Pbubl",
  "101325.0 >= MatStm5.Pdew",
  "101325.0 >= MatStm4.Pbubl",
  "101325.0 >= MatStm4.Pdew"};
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
extern void Flowsheet_eqFunction_500(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_507(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_511(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_524(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_554(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_561(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_565(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_578(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_581(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_612(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_649(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_650(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_651(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_652(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_653(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_654(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_655(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_656(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_679(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_682(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_689(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_692(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_693(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_748(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_751(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_752(DATA* data, threadData_t *threadData);

int Flowsheet_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Flowsheet_eqFunction_500(data, threadData);

  Flowsheet_eqFunction_507(data, threadData);

  Flowsheet_eqFunction_511(data, threadData);

  Flowsheet_eqFunction_524(data, threadData);

  Flowsheet_eqFunction_554(data, threadData);

  Flowsheet_eqFunction_561(data, threadData);

  Flowsheet_eqFunction_565(data, threadData);

  Flowsheet_eqFunction_578(data, threadData);

  Flowsheet_eqFunction_581(data, threadData);

  Flowsheet_eqFunction_612(data, threadData);

  Flowsheet_eqFunction_649(data, threadData);

  Flowsheet_eqFunction_650(data, threadData);

  Flowsheet_eqFunction_651(data, threadData);

  Flowsheet_eqFunction_652(data, threadData);

  Flowsheet_eqFunction_653(data, threadData);

  Flowsheet_eqFunction_654(data, threadData);

  Flowsheet_eqFunction_655(data, threadData);

  Flowsheet_eqFunction_656(data, threadData);

  Flowsheet_eqFunction_679(data, threadData);

  Flowsheet_eqFunction_682(data, threadData);

  Flowsheet_eqFunction_689(data, threadData);

  Flowsheet_eqFunction_692(data, threadData);

  Flowsheet_eqFunction_693(data, threadData);

  Flowsheet_eqFunction_748(data, threadData);

  Flowsheet_eqFunction_751(data, threadData);

  Flowsheet_eqFunction_752(data, threadData);
  
  TRACE_POP
  return 0;
}

int Flowsheet_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp812;
  modelica_boolean tmp813;
  modelica_boolean tmp814;
  modelica_boolean tmp815;
  modelica_boolean tmp816;
  modelica_boolean tmp817;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp812 = GreaterEqZC(101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp812) ? 1 : -1;
  tmp813 = GreaterEqZC(101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp813) ? 1 : -1;
  tmp814 = GreaterEqZC(101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp814) ? 1 : -1;
  tmp815 = GreaterEqZC(101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp815) ? 1 : -1;
  tmp816 = GreaterEqZC(101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, data->simulationInfo->storedRelations[4]);
  gout[4] = (tmp816) ? 1 : -1;
  tmp817 = GreaterEqZC(101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, data->simulationInfo->storedRelations[5]);
  gout[5] = (tmp817) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *Flowsheet_relationDescription(int i)
{
  const char *res[] = {"101325.0 >= MatStm1.Pbubl",
  "101325.0 >= MatStm1.Pdew",
  "101325.0 >= MatStm5.Pbubl",
  "101325.0 >= MatStm5.Pdew",
  "101325.0 >= MatStm4.Pbubl",
  "101325.0 >= MatStm4.Pdew"};
  return res[i];
}

int Flowsheet_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp818;
  modelica_boolean tmp819;
  modelica_boolean tmp820;
  modelica_boolean tmp821;
  modelica_boolean tmp822;
  modelica_boolean tmp823;
  
  if(evalforZeroCross) {
    tmp818 = GreaterEqZC(101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp818;
    tmp819 = GreaterEqZC(101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp819;
    tmp820 = GreaterEqZC(101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp820;
    tmp821 = GreaterEqZC(101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp821;
    tmp822 = GreaterEqZC(101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp822;
    tmp823 = GreaterEqZC(101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp823;
  } else {
    data->simulationInfo->relations[0] = (101325.0 >= data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
    data->simulationInfo->relations[1] = (101325.0 >= data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    data->simulationInfo->relations[2] = (101325.0 >= data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
    data->simulationInfo->relations[3] = (101325.0 >= data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    data->simulationInfo->relations[4] = (101325.0 >= data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
    data->simulationInfo->relations[5] = (101325.0 >= data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

