/* Algebraic */
#include "Flowsheet_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void Flowsheet_eqFunction_86(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_87(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_88(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_89(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_90(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_91(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_92(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_93(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_94(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_95(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_96(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_97(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_98(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_99(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_100(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_101(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_102(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_103(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_104(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_105(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_106(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_107(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_108(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_69(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_68(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    Flowsheet_eqFunction_86(data, threadData);

    Flowsheet_eqFunction_87(data, threadData);

    Flowsheet_eqFunction_88(data, threadData);

    Flowsheet_eqFunction_89(data, threadData);

    Flowsheet_eqFunction_90(data, threadData);

    Flowsheet_eqFunction_91(data, threadData);

    Flowsheet_eqFunction_92(data, threadData);

    Flowsheet_eqFunction_93(data, threadData);

    Flowsheet_eqFunction_94(data, threadData);

    Flowsheet_eqFunction_95(data, threadData);

    Flowsheet_eqFunction_96(data, threadData);

    Flowsheet_eqFunction_97(data, threadData);

    Flowsheet_eqFunction_98(data, threadData);

    Flowsheet_eqFunction_99(data, threadData);

    Flowsheet_eqFunction_100(data, threadData);

    Flowsheet_eqFunction_101(data, threadData);

    Flowsheet_eqFunction_102(data, threadData);

    Flowsheet_eqFunction_103(data, threadData);

    Flowsheet_eqFunction_104(data, threadData);

    Flowsheet_eqFunction_105(data, threadData);

    Flowsheet_eqFunction_106(data, threadData);

    Flowsheet_eqFunction_107(data, threadData);

    Flowsheet_eqFunction_108(data, threadData);

    Flowsheet_eqFunction_69(data, threadData);

    Flowsheet_eqFunction_68(data, threadData);
}
/* for continuous time variables */
int Flowsheet_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  
  data->simulationInfo->callStatistics.functionAlgebraics++;
  
  functionAlg_system0(data, threadData);

  Flowsheet_function_savePreSynchronous(data, threadData);
  
  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
