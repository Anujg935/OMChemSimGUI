/* Algebraic */
#include "Flowsheet_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void Flowsheet_eqFunction_123(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_137(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_168(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_169(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_170(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_171(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_172(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_173(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_174(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_175(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_176(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_177(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_178(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_179(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_180(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_181(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_182(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_183(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_184(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_185(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_186(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_187(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_188(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_189(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_190(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_191(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_192(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_193(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_194(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_195(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_196(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_197(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_198(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_199(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_200(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_201(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_202(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_203(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_109(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_108(DATA* data, threadData_t *threadData);
extern void Flowsheet_eqFunction_107(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    Flowsheet_eqFunction_123(data, threadData);

    Flowsheet_eqFunction_137(data, threadData);

    Flowsheet_eqFunction_168(data, threadData);

    Flowsheet_eqFunction_169(data, threadData);

    Flowsheet_eqFunction_170(data, threadData);

    Flowsheet_eqFunction_171(data, threadData);

    Flowsheet_eqFunction_172(data, threadData);

    Flowsheet_eqFunction_173(data, threadData);

    Flowsheet_eqFunction_174(data, threadData);

    Flowsheet_eqFunction_175(data, threadData);

    Flowsheet_eqFunction_176(data, threadData);

    Flowsheet_eqFunction_177(data, threadData);

    Flowsheet_eqFunction_178(data, threadData);

    Flowsheet_eqFunction_179(data, threadData);

    Flowsheet_eqFunction_180(data, threadData);

    Flowsheet_eqFunction_181(data, threadData);

    Flowsheet_eqFunction_182(data, threadData);

    Flowsheet_eqFunction_183(data, threadData);

    Flowsheet_eqFunction_184(data, threadData);

    Flowsheet_eqFunction_185(data, threadData);

    Flowsheet_eqFunction_186(data, threadData);

    Flowsheet_eqFunction_187(data, threadData);

    Flowsheet_eqFunction_188(data, threadData);

    Flowsheet_eqFunction_189(data, threadData);

    Flowsheet_eqFunction_190(data, threadData);

    Flowsheet_eqFunction_191(data, threadData);

    Flowsheet_eqFunction_192(data, threadData);

    Flowsheet_eqFunction_193(data, threadData);

    Flowsheet_eqFunction_194(data, threadData);

    Flowsheet_eqFunction_195(data, threadData);

    Flowsheet_eqFunction_196(data, threadData);

    Flowsheet_eqFunction_197(data, threadData);

    Flowsheet_eqFunction_198(data, threadData);

    Flowsheet_eqFunction_199(data, threadData);

    Flowsheet_eqFunction_200(data, threadData);

    Flowsheet_eqFunction_201(data, threadData);

    Flowsheet_eqFunction_202(data, threadData);

    Flowsheet_eqFunction_203(data, threadData);

    Flowsheet_eqFunction_109(data, threadData);

    Flowsheet_eqFunction_108(data, threadData);

    Flowsheet_eqFunction_107(data, threadData);
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
