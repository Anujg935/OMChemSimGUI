/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;
/* Jacobian Variables */
#if defined(__cplusplus)
extern "C" {
#endif
  #define mixer1_INDEX_JAC_NLSJac0 0
  int mixer1_functionJacNLSJac0_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int mixer1_initialAnalyticJacobianNLSJac0(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define mixer1_INDEX_JAC_NLSJac1 1
  int mixer1_functionJacNLSJac1_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int mixer1_initialAnalyticJacobianNLSJac1(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define mixer1_INDEX_JAC_NLSJac3 2
  int mixer1_functionJacNLSJac3_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int mixer1_initialAnalyticJacobianNLSJac3(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define mixer1_INDEX_JAC_NLSJac4 3
  int mixer1_functionJacNLSJac4_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int mixer1_initialAnalyticJacobianNLSJac4(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define mixer1_INDEX_JAC_D 4
  int mixer1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int mixer1_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define mixer1_INDEX_JAC_C 5
  int mixer1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int mixer1_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define mixer1_INDEX_JAC_B 6
  int mixer1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int mixer1_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define mixer1_INDEX_JAC_A 7
  int mixer1_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int mixer1_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif


