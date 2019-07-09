/* External objects file */
#include "mixer3_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void mixer3_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo->extObjs)
  {
    free(data->simulationInfo->extObjs);
    data->simulationInfo->extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif

