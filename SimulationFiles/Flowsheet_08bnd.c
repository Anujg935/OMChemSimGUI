/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int Flowsheet_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void Flowsheet_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 105
type: SIMPLE_ASSIGN
MatStm1._comp[1]._ChaoSeadLV = Water.ChaoSeadLV
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->simulationInfo->realParameter[4] = data->simulationInfo->realParameter[83];
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
MatStm1._comp[1]._ChaoSeadSP = Water.ChaoSeadSP
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->simulationInfo->realParameter[5] = data->simulationInfo->realParameter[84];
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
MatStm1._comp[1]._ChaoSeadAF = Water.ChaoSeadAF
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->simulationInfo->realParameter[3] = data->simulationInfo->realParameter[82];
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
MatStm1._comp[1]._Racketparam = Water.Racketparam
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->simulationInfo->realParameter[44] = data->simulationInfo->realParameter[123];
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapK[6] = Water.VapK[6]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->simulationInfo->realParameter[71] = data->simulationInfo->realParameter[150];
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapK[5] = Water.VapK[5]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->simulationInfo->realParameter[70] = data->simulationInfo->realParameter[149];
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapK[4] = Water.VapK[4]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->simulationInfo->realParameter[69] = data->simulationInfo->realParameter[148];
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapK[3] = Water.VapK[3]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->simulationInfo->realParameter[68] = data->simulationInfo->realParameter[147];
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapK[2] = Water.VapK[2]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->simulationInfo->realParameter[67] = data->simulationInfo->realParameter[146];
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapK[1] = Water.VapK[1]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->simulationInfo->realParameter[66] = data->simulationInfo->realParameter[145];
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqK[6] = Water.LiqK[6]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->simulationInfo->realParameter[35] = data->simulationInfo->realParameter[114];
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqK[5] = Water.LiqK[5]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->simulationInfo->realParameter[34] = data->simulationInfo->realParameter[113];
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqK[4] = Water.LiqK[4]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->simulationInfo->realParameter[33] = data->simulationInfo->realParameter[112];
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqK[3] = Water.LiqK[3]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->simulationInfo->realParameter[32] = data->simulationInfo->realParameter[111];
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqK[2] = Water.LiqK[2]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->simulationInfo->realParameter[31] = data->simulationInfo->realParameter[110];
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqK[1] = Water.LiqK[1]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->simulationInfo->realParameter[30] = data->simulationInfo->realParameter[109];
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapVis[6] = Water.VapVis[6]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->simulationInfo->realParameter[77] = data->simulationInfo->realParameter[156];
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapVis[5] = Water.VapVis[5]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->simulationInfo->realParameter[76] = data->simulationInfo->realParameter[155];
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapVis[4] = Water.VapVis[4]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->simulationInfo->realParameter[75] = data->simulationInfo->realParameter[154];
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapVis[3] = Water.VapVis[3]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->simulationInfo->realParameter[74] = data->simulationInfo->realParameter[153];
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapVis[2] = Water.VapVis[2]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->simulationInfo->realParameter[73] = data->simulationInfo->realParameter[152];
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapVis[1] = Water.VapVis[1]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->simulationInfo->realParameter[72] = data->simulationInfo->realParameter[151];
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqVis[6] = Water.LiqVis[6]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->simulationInfo->realParameter[41] = data->simulationInfo->realParameter[120];
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqVis[5] = Water.LiqVis[5]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->simulationInfo->realParameter[40] = data->simulationInfo->realParameter[119];
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqVis[4] = Water.LiqVis[4]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->simulationInfo->realParameter[39] = data->simulationInfo->realParameter[118];
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqVis[3] = Water.LiqVis[3]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->simulationInfo->realParameter[38] = data->simulationInfo->realParameter[117];
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqVis[2] = Water.LiqVis[2]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->simulationInfo->realParameter[37] = data->simulationInfo->realParameter[116];
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqVis[1] = Water.LiqVis[1]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->simulationInfo->realParameter[36] = data->simulationInfo->realParameter[115];
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapCp[6] = Water.VapCp[6]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->simulationInfo->realParameter[65] = data->simulationInfo->realParameter[144];
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapCp[5] = Water.VapCp[5]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->simulationInfo->realParameter[64] = data->simulationInfo->realParameter[143];
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapCp[4] = Water.VapCp[4]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->simulationInfo->realParameter[63] = data->simulationInfo->realParameter[142];
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapCp[3] = Water.VapCp[3]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->simulationInfo->realParameter[62] = data->simulationInfo->realParameter[141];
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapCp[2] = Water.VapCp[2]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->simulationInfo->realParameter[61] = data->simulationInfo->realParameter[140];
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VapCp[1] = Water.VapCp[1]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->simulationInfo->realParameter[60] = data->simulationInfo->realParameter[139];
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
MatStm1._comp[1]._HOV[6] = Water.HOV[6]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->simulationInfo->realParameter[15] = data->simulationInfo->realParameter[94];
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
MatStm1._comp[1]._HOV[5] = Water.HOV[5]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->simulationInfo->realParameter[14] = data->simulationInfo->realParameter[93];
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
MatStm1._comp[1]._HOV[4] = Water.HOV[4]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->simulationInfo->realParameter[13] = data->simulationInfo->realParameter[92];
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
MatStm1._comp[1]._HOV[3] = Water.HOV[3]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->simulationInfo->realParameter[12] = data->simulationInfo->realParameter[91];
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
MatStm1._comp[1]._HOV[2] = Water.HOV[2]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->simulationInfo->realParameter[11] = data->simulationInfo->realParameter[90];
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
MatStm1._comp[1]._HOV[1] = Water.HOV[1]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->simulationInfo->realParameter[10] = data->simulationInfo->realParameter[89];
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqCp[6] = Water.LiqCp[6]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->simulationInfo->realParameter[23] = data->simulationInfo->realParameter[102];
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqCp[5] = Water.LiqCp[5]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->simulationInfo->realParameter[22] = data->simulationInfo->realParameter[101];
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqCp[4] = Water.LiqCp[4]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->simulationInfo->realParameter[21] = data->simulationInfo->realParameter[100];
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqCp[3] = Water.LiqCp[3]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->simulationInfo->realParameter[20] = data->simulationInfo->realParameter[99];
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqCp[2] = Water.LiqCp[2]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->simulationInfo->realParameter[19] = data->simulationInfo->realParameter[98];
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqCp[1] = Water.LiqCp[1]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->simulationInfo->realParameter[18] = data->simulationInfo->realParameter[97];
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VP[6] = Water.VP[6]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->simulationInfo->realParameter[59] = data->simulationInfo->realParameter[138];
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VP[5] = Water.VP[5]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->simulationInfo->realParameter[58] = data->simulationInfo->realParameter[137];
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VP[4] = Water.VP[4]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->simulationInfo->realParameter[57] = data->simulationInfo->realParameter[136];
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VP[3] = Water.VP[3]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->simulationInfo->realParameter[56] = data->simulationInfo->realParameter[135];
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VP[2] = Water.VP[2]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->simulationInfo->realParameter[55] = data->simulationInfo->realParameter[134];
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
MatStm1._comp[1]._VP[1] = Water.VP[1]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->simulationInfo->realParameter[54] = data->simulationInfo->realParameter[133];
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqDen[6] = Water.LiqDen[6]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->simulationInfo->realParameter[29] = data->simulationInfo->realParameter[108];
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqDen[5] = Water.LiqDen[5]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->simulationInfo->realParameter[28] = data->simulationInfo->realParameter[107];
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqDen[4] = Water.LiqDen[4]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->simulationInfo->realParameter[27] = data->simulationInfo->realParameter[106];
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqDen[3] = Water.LiqDen[3]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->simulationInfo->realParameter[26] = data->simulationInfo->realParameter[105];
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqDen[2] = Water.LiqDen[2]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->simulationInfo->realParameter[25] = data->simulationInfo->realParameter[104];
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LiqDen[1] = Water.LiqDen[1]
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->simulationInfo->realParameter[24] = data->simulationInfo->realParameter[103];
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
MatStm1._comp[1]._UniquacQ = Water.UniquacQ
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->simulationInfo->realParameter[52] = data->simulationInfo->realParameter[131];
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
MatStm1._comp[1]._UniquacR = Water.UniquacR
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->simulationInfo->realParameter[53] = data->simulationInfo->realParameter[132];
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
MatStm1._comp[1]._HOC = Water.HOC
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->simulationInfo->realParameter[9] = data->simulationInfo->realParameter[88];
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
MatStm1._comp[1]._HFMP = Water.HFMP
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->simulationInfo->realParameter[8] = data->simulationInfo->realParameter[87];
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
MatStm1._comp[1]._AS = Water.AS
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->simulationInfo->realParameter[1] = data->simulationInfo->realParameter[80];
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
MatStm1._comp[1]._GEF = Water.GEF
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->simulationInfo->realParameter[7] = data->simulationInfo->realParameter[86];
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
MatStm1._comp[1]._IGHF = Water.IGHF
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->simulationInfo->realParameter[16] = data->simulationInfo->realParameter[95];
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
MatStm1._comp[1]._SH = Water.SH
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->simulationInfo->realParameter[45] = data->simulationInfo->realParameter[124];
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
MatStm1._comp[1]._DM = Water.DM
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->simulationInfo->realParameter[6] = data->simulationInfo->realParameter[85];
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
MatStm1._comp[1]._SP = Water.SP
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->simulationInfo->realParameter[46] = data->simulationInfo->realParameter[125];
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
MatStm1._comp[1]._AF = Water.AF
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->simulationInfo->realParameter[0] = data->simulationInfo->realParameter[79];
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
MatStm1._comp[1]._LVB = Water.LVB
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->simulationInfo->realParameter[17] = data->simulationInfo->realParameter[96];
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
MatStm1._comp[1]._MW = Water.MW
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->simulationInfo->realParameter[42] = data->simulationInfo->realParameter[121];
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
MatStm1._comp[1]._TP = Water.TP
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->simulationInfo->realParameter[47] = data->simulationInfo->realParameter[126];
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
MatStm1._comp[1]._TT = Water.TT
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->simulationInfo->realParameter[48] = data->simulationInfo->realParameter[127];
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
MatStm1._comp[1]._Tm = Water.Tm
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->simulationInfo->realParameter[51] = data->simulationInfo->realParameter[130];
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
MatStm1._comp[1]._Tb = Water.Tb
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->simulationInfo->realParameter[49] = data->simulationInfo->realParameter[128];
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
MatStm1._comp[1]._Cc = Water.Cc
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->simulationInfo->realParameter[2] = data->simulationInfo->realParameter[81];
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
MatStm1._comp[1]._Vc = Water.Vc
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->simulationInfo->realParameter[78] = data->simulationInfo->realParameter[157];
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
MatStm1._comp[1]._Pc = Water.Pc
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->simulationInfo->realParameter[43] = data->simulationInfo->realParameter[122];
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
MatStm1._comp[1]._Tc = Water.Tc
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->simulationInfo->realParameter[50] = data->simulationInfo->realParameter[129];
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
MatStm1._comp[1]._CAS = Water.CAS
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->simulationInfo->stringParameter[0] = data->simulationInfo->stringParameter[2];
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
MatStm1._comp[1]._name = Water.name
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->simulationInfo->stringParameter[1] = data->simulationInfo->stringParameter[3];
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
MatStm1._comp[1]._SN = Water.SN
*/
OMC_DISABLE_OPT
static void Flowsheet_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->simulationInfo->integerParameter[1] = (modelica_integer)data->simulationInfo->integerParameter[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_64(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_10(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_63(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_62(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_61(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_60(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_59(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_58(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_57(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_56(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_55(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_54(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_53(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_52(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_11(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_9(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_8(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_7(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_6(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_12(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_13(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_5(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_4(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_3(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_2(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_1(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void Flowsheet_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Flowsheet_eqFunction_105(data, threadData);
  Flowsheet_eqFunction_106(data, threadData);
  Flowsheet_eqFunction_107(data, threadData);
  Flowsheet_eqFunction_108(data, threadData);
  Flowsheet_eqFunction_109(data, threadData);
  Flowsheet_eqFunction_110(data, threadData);
  Flowsheet_eqFunction_111(data, threadData);
  Flowsheet_eqFunction_112(data, threadData);
  Flowsheet_eqFunction_113(data, threadData);
  Flowsheet_eqFunction_114(data, threadData);
  Flowsheet_eqFunction_115(data, threadData);
  Flowsheet_eqFunction_116(data, threadData);
  Flowsheet_eqFunction_117(data, threadData);
  Flowsheet_eqFunction_118(data, threadData);
  Flowsheet_eqFunction_119(data, threadData);
  Flowsheet_eqFunction_120(data, threadData);
  Flowsheet_eqFunction_121(data, threadData);
  Flowsheet_eqFunction_122(data, threadData);
  Flowsheet_eqFunction_123(data, threadData);
  Flowsheet_eqFunction_124(data, threadData);
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
  Flowsheet_eqFunction_155(data, threadData);
  Flowsheet_eqFunction_156(data, threadData);
  Flowsheet_eqFunction_157(data, threadData);
  Flowsheet_eqFunction_158(data, threadData);
  Flowsheet_eqFunction_159(data, threadData);
  Flowsheet_eqFunction_160(data, threadData);
  Flowsheet_eqFunction_161(data, threadData);
  Flowsheet_eqFunction_162(data, threadData);
  Flowsheet_eqFunction_163(data, threadData);
  Flowsheet_eqFunction_164(data, threadData);
  Flowsheet_eqFunction_165(data, threadData);
  Flowsheet_eqFunction_166(data, threadData);
  Flowsheet_eqFunction_167(data, threadData);
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
  Flowsheet_eqFunction_64(data, threadData);
  Flowsheet_eqFunction_10(data, threadData);
  Flowsheet_eqFunction_63(data, threadData);
  Flowsheet_eqFunction_62(data, threadData);
  Flowsheet_eqFunction_61(data, threadData);
  Flowsheet_eqFunction_60(data, threadData);
  Flowsheet_eqFunction_59(data, threadData);
  Flowsheet_eqFunction_58(data, threadData);
  Flowsheet_eqFunction_57(data, threadData);
  Flowsheet_eqFunction_56(data, threadData);
  Flowsheet_eqFunction_55(data, threadData);
  Flowsheet_eqFunction_54(data, threadData);
  Flowsheet_eqFunction_53(data, threadData);
  Flowsheet_eqFunction_52(data, threadData);
  Flowsheet_eqFunction_11(data, threadData);
  Flowsheet_eqFunction_9(data, threadData);
  Flowsheet_eqFunction_8(data, threadData);
  Flowsheet_eqFunction_7(data, threadData);
  Flowsheet_eqFunction_6(data, threadData);
  Flowsheet_eqFunction_12(data, threadData);
  Flowsheet_eqFunction_13(data, threadData);
  Flowsheet_eqFunction_5(data, threadData);
  Flowsheet_eqFunction_4(data, threadData);
  Flowsheet_eqFunction_3(data, threadData);
  Flowsheet_eqFunction_2(data, threadData);
  Flowsheet_eqFunction_1(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int Flowsheet_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] = ((modelica_integer) 1);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] = ((modelica_integer) 1);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] = ((modelica_integer) 1);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  Flowsheet_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

