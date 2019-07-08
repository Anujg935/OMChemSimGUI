/* Algebraic */
#include "Flowsheet_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void Flowsheet_eqFunction_125(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_126(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_127(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_128(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_129(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_130(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_131(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_132(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_133(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_134(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_135(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_136(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_137(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_138(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_139(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_140(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_141(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_142(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_143(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_144(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_145(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_146(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_147(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_148(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_149(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_150(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_151(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_152(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_153(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_154(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_100(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_99(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_98(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_97(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    Flowsheet_eqFunction_125(data, threadData);

    Flowsheet_eqFunction_126(data, threadData);

    Flowsheet_eqFunction_127(data, threadData);

    Flowsheet_eqFunction_128(data, threadData);

    Flowsheet_eqFunction_129(data, threadData);

    Flowsheet_eqFunction_130(data, threadData);

    Flowsheet_eqFunction_131(data, threadData);

    Flowsheet_eqFunction_132(data, threadData);

    Flowsheet_eqFunction_133(data, threadData);

    Flowsheet_eqFunction_134(data, threadData);

    Flowsheet_eqFunction_135(data, threadData);

    Flowsheet_eqFunction_136(data, threadData);

    Flowsheet_eqFunction_137(data, threadData);

    Flowsheet_eqFunction_138(data, threadData);

    Flowsheet_eqFunction_139(data, threadData);

    Flowsheet_eqFunction_140(data, threadData);

    Flowsheet_eqFunction_141(data, threadData);

    Flowsheet_eqFunction_142(data, threadData);

    Flowsheet_eqFunction_143(data, threadData);

    Flowsheet_eqFunction_144(data, threadData);

    Flowsheet_eqFunction_145(data, threadData);

    Flowsheet_eqFunction_146(data, threadData);

    Flowsheet_eqFunction_147(data, threadData);

    Flowsheet_eqFunction_148(data, threadData);

    Flowsheet_eqFunction_149(data, threadData);

    Flowsheet_eqFunction_150(data, threadData);

    Flowsheet_eqFunction_151(data, threadData);

    Flowsheet_eqFunction_152(data, threadData);

    Flowsheet_eqFunction_153(data, threadData);

    Flowsheet_eqFunction_154(data, threadData);

    Flowsheet_eqFunction_100(data, threadData);

    Flowsheet_eqFunction_99(data, threadData);

    Flowsheet_eqFunction_98(data, threadData);

    Flowsheet_eqFunction_97(data, threadData);
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
