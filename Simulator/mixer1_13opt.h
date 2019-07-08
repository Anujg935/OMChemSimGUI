#if defined(__cplusplus)
  extern "C" {
#endif
  int mixer1_mayer(DATA* data, modelica_real** res, short*);
  int mixer1_lagrange(DATA* data, modelica_real** res, short *, short *);
  int mixer1_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int mixer1_setInputData(DATA *data, const modelica_boolean file);
  int mixer1_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif