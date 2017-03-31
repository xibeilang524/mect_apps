/*Created by MectConfigurator v2.x
INT       <-> int16_t
UINT      <-> u_int16_t
DINT      <-> int32_t
UDINT     <-> u_int32_t
REAL      <-> float
BIT       <-> int
BYTE      <-> u_int8_t
BYTE_BIT  <-> int
WORD_BIT  <-> int
DWORD_BIT <-> int
*/
#ifndef CROSSTABLE_H
#define CROSSTABLE_H
#ifdef __cplusplus
extern "C" {
#endif
#include <sys/types.h>
#include "cross_table_utility.h"
 
#define ID_errors_can 193
extern int32_t errors_can;
int doWrite_errors_can(int32_t value);
int addWrite_errors_can(int32_t value);
int getStatus_errors_can();
 
#define ID_errors_all 194
extern int32_t errors_all;
int doWrite_errors_all(int32_t value);
int addWrite_errors_all(int32_t value);
int getStatus_errors_all();
 
#define ID_min_latency_ms 195
extern int32_t min_latency_ms;
int doWrite_min_latency_ms(int32_t value);
int addWrite_min_latency_ms(int32_t value);
int getStatus_min_latency_ms();
 
#define ID_max_latency_ms 196
extern int32_t max_latency_ms;
int doWrite_max_latency_ms(int32_t value);
int addWrite_max_latency_ms(int32_t value);
int getStatus_max_latency_ms();
 
#define ID_Addr_node01 200
extern u_int16_t Addr_node01;
int doWrite_Addr_node01(u_int16_t value);
int addWrite_Addr_node01(u_int16_t value);
int getStatus_Addr_node01();
 
#define ID_Life_node01 201
extern u_int16_t Life_node01;
int doWrite_Life_node01(u_int16_t value);
int addWrite_Life_node01(u_int16_t value);
int getStatus_Life_node01();
 
#define ID_AnInCnf_1_node01 202
extern u_int16_t AnInCnf_1_node01;
int doWrite_AnInCnf_1_node01(u_int16_t value);
int addWrite_AnInCnf_1_node01(u_int16_t value);
int getStatus_AnInCnf_1_node01();
 
#define ID_AnInCnf_2_node01 203
extern u_int16_t AnInCnf_2_node01;
int doWrite_AnInCnf_2_node01(u_int16_t value);
int addWrite_AnInCnf_2_node01(u_int16_t value);
int getStatus_AnInCnf_2_node01();
 
#define ID_ValAi1_node01 204
extern int16_t ValAi1_node01;
int doWrite_ValAi1_node01(int16_t value);
int addWrite_ValAi1_node01(int16_t value);
int getStatus_ValAi1_node01();
 
#define ID_ValAi2_node01 205
extern int16_t ValAi2_node01;
int doWrite_ValAi2_node01(int16_t value);
int addWrite_ValAi2_node01(int16_t value);
int getStatus_ValAi2_node01();
 
#define ID_DigDir_1_node01 206
extern int DigDir_1_node01;
int doWrite_DigDir_1_node01(int value);
int addWrite_DigDir_1_node01(int value);
int getStatus_DigDir_1_node01();
 
#define ID_DigDir_2_node01 207
extern int DigDir_2_node01;
int doWrite_DigDir_2_node01(int value);
int addWrite_DigDir_2_node01(int value);
int getStatus_DigDir_2_node01();
 
#define ID_DigDir_3_node01 208
extern int DigDir_3_node01;
int doWrite_DigDir_3_node01(int value);
int addWrite_DigDir_3_node01(int value);
int getStatus_DigDir_3_node01();
 
#define ID_DigDir_4_node01 209
extern int DigDir_4_node01;
int doWrite_DigDir_4_node01(int value);
int addWrite_DigDir_4_node01(int value);
int getStatus_DigDir_4_node01();
 
#define ID_DigDir_5_node01 210
extern int DigDir_5_node01;
int doWrite_DigDir_5_node01(int value);
int addWrite_DigDir_5_node01(int value);
int getStatus_DigDir_5_node01();
 
#define ID_DigDir_6_node01 211
extern int DigDir_6_node01;
int doWrite_DigDir_6_node01(int value);
int addWrite_DigDir_6_node01(int value);
int getStatus_DigDir_6_node01();
 
#define ID_DigDir_7_node01 212
extern int DigDir_7_node01;
int doWrite_DigDir_7_node01(int value);
int addWrite_DigDir_7_node01(int value);
int getStatus_DigDir_7_node01();
 
#define ID_DigDir_8_node01 213
extern int DigDir_8_node01;
int doWrite_DigDir_8_node01(int value);
int addWrite_DigDir_8_node01(int value);
int getStatus_DigDir_8_node01();
 
#define ID_DigIn_2_node01 214
extern int DigIn_2_node01;
int doWrite_DigIn_2_node01(int value);
int addWrite_DigIn_2_node01(int value);
int getStatus_DigIn_2_node01();
 
#define ID_DigIn_3_node01 215
extern int DigIn_3_node01;
int doWrite_DigIn_3_node01(int value);
int addWrite_DigIn_3_node01(int value);
int getStatus_DigIn_3_node01();
 
#define ID_DigIn_6_node01 216
extern int DigIn_6_node01;
int doWrite_DigIn_6_node01(int value);
int addWrite_DigIn_6_node01(int value);
int getStatus_DigIn_6_node01();
 
#define ID_DigIn_7_node01 217
extern int DigIn_7_node01;
int doWrite_DigIn_7_node01(int value);
int addWrite_DigIn_7_node01(int value);
int getStatus_DigIn_7_node01();
 
#define ID_DigOut_1_node01 218
extern int DigOut_1_node01;
int doWrite_DigOut_1_node01(int value);
int addWrite_DigOut_1_node01(int value);
int getStatus_DigOut_1_node01();
 
#define ID_DigOut_4_node01 219
extern int DigOut_4_node01;
int doWrite_DigOut_4_node01(int value);
int addWrite_DigOut_4_node01(int value);
int getStatus_DigOut_4_node01();
 
#define ID_DigOut_5_node01 220
extern int DigOut_5_node01;
int doWrite_DigOut_5_node01(int value);
int addWrite_DigOut_5_node01(int value);
int getStatus_DigOut_5_node01();
 
#define ID_DigOut_8_node01 221
extern int DigOut_8_node01;
int doWrite_DigOut_8_node01(int value);
int addWrite_DigOut_8_node01(int value);
int getStatus_DigOut_8_node01();
 
#define ID_latency_01_ms 223
extern int32_t latency_01_ms;
int doWrite_latency_01_ms(int32_t value);
int addWrite_latency_01_ms(int32_t value);
int getStatus_latency_01_ms();
 
#define ID_min_latency_01_m 224
extern int32_t min_latency_01_m;
int doWrite_min_latency_01_m(int32_t value);
int addWrite_min_latency_01_m(int32_t value);
int getStatus_min_latency_01_m();
 
#define ID_max_latency_01_m 225
extern int32_t max_latency_01_m;
int doWrite_max_latency_01_m(int32_t value);
int addWrite_max_latency_01_m(int32_t value);
int getStatus_max_latency_01_m();
 
#define ID_errors_01 227
extern int32_t errors_01;
int doWrite_errors_01(int32_t value);
int addWrite_errors_01(int32_t value);
int getStatus_errors_01();
 
#define ID_Addr_node02 230
extern u_int16_t Addr_node02;
int doWrite_Addr_node02(u_int16_t value);
int addWrite_Addr_node02(u_int16_t value);
int getStatus_Addr_node02();
 
#define ID_Life_node02 231
extern u_int16_t Life_node02;
int doWrite_Life_node02(u_int16_t value);
int addWrite_Life_node02(u_int16_t value);
int getStatus_Life_node02();
 
#define ID_AnInCnf_1_node02 232
extern u_int16_t AnInCnf_1_node02;
int doWrite_AnInCnf_1_node02(u_int16_t value);
int addWrite_AnInCnf_1_node02(u_int16_t value);
int getStatus_AnInCnf_1_node02();
 
#define ID_AnInCnf_2_node02 233
extern u_int16_t AnInCnf_2_node02;
int doWrite_AnInCnf_2_node02(u_int16_t value);
int addWrite_AnInCnf_2_node02(u_int16_t value);
int getStatus_AnInCnf_2_node02();
 
#define ID_ValAi1_node02 234
extern int16_t ValAi1_node02;
int doWrite_ValAi1_node02(int16_t value);
int addWrite_ValAi1_node02(int16_t value);
int getStatus_ValAi1_node02();
 
#define ID_ValAi2_node02 235
extern int16_t ValAi2_node02;
int doWrite_ValAi2_node02(int16_t value);
int addWrite_ValAi2_node02(int16_t value);
int getStatus_ValAi2_node02();
 
#define ID_DigDir_1_node02 236
extern int DigDir_1_node02;
int doWrite_DigDir_1_node02(int value);
int addWrite_DigDir_1_node02(int value);
int getStatus_DigDir_1_node02();
 
#define ID_DigDir_2_node02 237
extern int DigDir_2_node02;
int doWrite_DigDir_2_node02(int value);
int addWrite_DigDir_2_node02(int value);
int getStatus_DigDir_2_node02();
 
#define ID_DigDir_3_node02 238
extern int DigDir_3_node02;
int doWrite_DigDir_3_node02(int value);
int addWrite_DigDir_3_node02(int value);
int getStatus_DigDir_3_node02();
 
#define ID_DigDir_4_node02 239
extern int DigDir_4_node02;
int doWrite_DigDir_4_node02(int value);
int addWrite_DigDir_4_node02(int value);
int getStatus_DigDir_4_node02();
 
#define ID_DigDir_5_node02 240
extern int DigDir_5_node02;
int doWrite_DigDir_5_node02(int value);
int addWrite_DigDir_5_node02(int value);
int getStatus_DigDir_5_node02();
 
#define ID_DigDir_6_node02 241
extern int DigDir_6_node02;
int doWrite_DigDir_6_node02(int value);
int addWrite_DigDir_6_node02(int value);
int getStatus_DigDir_6_node02();
 
#define ID_DigDir_7_node02 242
extern int DigDir_7_node02;
int doWrite_DigDir_7_node02(int value);
int addWrite_DigDir_7_node02(int value);
int getStatus_DigDir_7_node02();
 
#define ID_DigDir_8_node02 243
extern int DigDir_8_node02;
int doWrite_DigDir_8_node02(int value);
int addWrite_DigDir_8_node02(int value);
int getStatus_DigDir_8_node02();
 
#define ID_DigIn_2_node02 244
extern int DigIn_2_node02;
int doWrite_DigIn_2_node02(int value);
int addWrite_DigIn_2_node02(int value);
int getStatus_DigIn_2_node02();
 
#define ID_DigIn_3_node02 245
extern int DigIn_3_node02;
int doWrite_DigIn_3_node02(int value);
int addWrite_DigIn_3_node02(int value);
int getStatus_DigIn_3_node02();
 
#define ID_DigIn_6_node02 246
extern int DigIn_6_node02;
int doWrite_DigIn_6_node02(int value);
int addWrite_DigIn_6_node02(int value);
int getStatus_DigIn_6_node02();
 
#define ID_DigIn_7_node02 247
extern int DigIn_7_node02;
int doWrite_DigIn_7_node02(int value);
int addWrite_DigIn_7_node02(int value);
int getStatus_DigIn_7_node02();
 
#define ID_DigOut_1_node02 248
extern int DigOut_1_node02;
int doWrite_DigOut_1_node02(int value);
int addWrite_DigOut_1_node02(int value);
int getStatus_DigOut_1_node02();
 
#define ID_DigOut_4_node02 249
extern int DigOut_4_node02;
int doWrite_DigOut_4_node02(int value);
int addWrite_DigOut_4_node02(int value);
int getStatus_DigOut_4_node02();
 
#define ID_DigOut_5_node02 250
extern int DigOut_5_node02;
int doWrite_DigOut_5_node02(int value);
int addWrite_DigOut_5_node02(int value);
int getStatus_DigOut_5_node02();
 
#define ID_DigOut_8_node02 251
extern int DigOut_8_node02;
int doWrite_DigOut_8_node02(int value);
int addWrite_DigOut_8_node02(int value);
int getStatus_DigOut_8_node02();
 
#define ID_latency_02_ms 253
extern int32_t latency_02_ms;
int doWrite_latency_02_ms(int32_t value);
int addWrite_latency_02_ms(int32_t value);
int getStatus_latency_02_ms();
 
#define ID_min_latency_02_m 254
extern int32_t min_latency_02_m;
int doWrite_min_latency_02_m(int32_t value);
int addWrite_min_latency_02_m(int32_t value);
int getStatus_min_latency_02_m();
 
#define ID_max_latency_02_m 255
extern int32_t max_latency_02_m;
int doWrite_max_latency_02_m(int32_t value);
int addWrite_max_latency_02_m(int32_t value);
int getStatus_max_latency_02_m();
 
#define ID_errors_02 257
extern int32_t errors_02;
int doWrite_errors_02(int32_t value);
int addWrite_errors_02(int32_t value);
int getStatus_errors_02();
 
#define ID_Addr_node03 260
extern u_int16_t Addr_node03;
int doWrite_Addr_node03(u_int16_t value);
int addWrite_Addr_node03(u_int16_t value);
int getStatus_Addr_node03();
 
#define ID_Life_node03 261
extern u_int16_t Life_node03;
int doWrite_Life_node03(u_int16_t value);
int addWrite_Life_node03(u_int16_t value);
int getStatus_Life_node03();
 
#define ID_AnInCnf_1_node03 262
extern u_int16_t AnInCnf_1_node03;
int doWrite_AnInCnf_1_node03(u_int16_t value);
int addWrite_AnInCnf_1_node03(u_int16_t value);
int getStatus_AnInCnf_1_node03();
 
#define ID_AnInCnf_2_node03 263
extern u_int16_t AnInCnf_2_node03;
int doWrite_AnInCnf_2_node03(u_int16_t value);
int addWrite_AnInCnf_2_node03(u_int16_t value);
int getStatus_AnInCnf_2_node03();
 
#define ID_ValAi1_node03 264
extern int16_t ValAi1_node03;
int doWrite_ValAi1_node03(int16_t value);
int addWrite_ValAi1_node03(int16_t value);
int getStatus_ValAi1_node03();
 
#define ID_ValAi2_node03 265
extern int16_t ValAi2_node03;
int doWrite_ValAi2_node03(int16_t value);
int addWrite_ValAi2_node03(int16_t value);
int getStatus_ValAi2_node03();
 
#define ID_DigDir_1_node03 266
extern int DigDir_1_node03;
int doWrite_DigDir_1_node03(int value);
int addWrite_DigDir_1_node03(int value);
int getStatus_DigDir_1_node03();
 
#define ID_DigDir_2_node03 267
extern int DigDir_2_node03;
int doWrite_DigDir_2_node03(int value);
int addWrite_DigDir_2_node03(int value);
int getStatus_DigDir_2_node03();
 
#define ID_DigDir_3_node03 268
extern int DigDir_3_node03;
int doWrite_DigDir_3_node03(int value);
int addWrite_DigDir_3_node03(int value);
int getStatus_DigDir_3_node03();
 
#define ID_DigDir_4_node03 269
extern int DigDir_4_node03;
int doWrite_DigDir_4_node03(int value);
int addWrite_DigDir_4_node03(int value);
int getStatus_DigDir_4_node03();
 
#define ID_DigDir_5_node03 270
extern int DigDir_5_node03;
int doWrite_DigDir_5_node03(int value);
int addWrite_DigDir_5_node03(int value);
int getStatus_DigDir_5_node03();
 
#define ID_DigDir_6_node03 271
extern int DigDir_6_node03;
int doWrite_DigDir_6_node03(int value);
int addWrite_DigDir_6_node03(int value);
int getStatus_DigDir_6_node03();
 
#define ID_DigDir_7_node03 272
extern int DigDir_7_node03;
int doWrite_DigDir_7_node03(int value);
int addWrite_DigDir_7_node03(int value);
int getStatus_DigDir_7_node03();
 
#define ID_DigDir_8_node03 273
extern int DigDir_8_node03;
int doWrite_DigDir_8_node03(int value);
int addWrite_DigDir_8_node03(int value);
int getStatus_DigDir_8_node03();
 
#define ID_DigIn_2_node03 274
extern int DigIn_2_node03;
int doWrite_DigIn_2_node03(int value);
int addWrite_DigIn_2_node03(int value);
int getStatus_DigIn_2_node03();
 
#define ID_DigIn_3_node03 275
extern int DigIn_3_node03;
int doWrite_DigIn_3_node03(int value);
int addWrite_DigIn_3_node03(int value);
int getStatus_DigIn_3_node03();
 
#define ID_DigIn_6_node03 276
extern int DigIn_6_node03;
int doWrite_DigIn_6_node03(int value);
int addWrite_DigIn_6_node03(int value);
int getStatus_DigIn_6_node03();
 
#define ID_DigIn_7_node03 277
extern int DigIn_7_node03;
int doWrite_DigIn_7_node03(int value);
int addWrite_DigIn_7_node03(int value);
int getStatus_DigIn_7_node03();
 
#define ID_DigOut_1_node03 278
extern int DigOut_1_node03;
int doWrite_DigOut_1_node03(int value);
int addWrite_DigOut_1_node03(int value);
int getStatus_DigOut_1_node03();
 
#define ID_DigOut_4_node03 279
extern int DigOut_4_node03;
int doWrite_DigOut_4_node03(int value);
int addWrite_DigOut_4_node03(int value);
int getStatus_DigOut_4_node03();
 
#define ID_DigOut_5_node03 280
extern int DigOut_5_node03;
int doWrite_DigOut_5_node03(int value);
int addWrite_DigOut_5_node03(int value);
int getStatus_DigOut_5_node03();
 
#define ID_DigOut_8_node03 281
extern int DigOut_8_node03;
int doWrite_DigOut_8_node03(int value);
int addWrite_DigOut_8_node03(int value);
int getStatus_DigOut_8_node03();
 
#define ID_latency_03_ms 283
extern int32_t latency_03_ms;
int doWrite_latency_03_ms(int32_t value);
int addWrite_latency_03_ms(int32_t value);
int getStatus_latency_03_ms();
 
#define ID_min_latency_03_m 284
extern int32_t min_latency_03_m;
int doWrite_min_latency_03_m(int32_t value);
int addWrite_min_latency_03_m(int32_t value);
int getStatus_min_latency_03_m();
 
#define ID_max_latency_03_m 285
extern int32_t max_latency_03_m;
int doWrite_max_latency_03_m(int32_t value);
int addWrite_max_latency_03_m(int32_t value);
int getStatus_max_latency_03_m();
 
#define ID_errors_03 287
extern int32_t errors_03;
int doWrite_errors_03(int32_t value);
int addWrite_errors_03(int32_t value);
int getStatus_errors_03();
 
#define ID_Addr_node04 290
extern u_int16_t Addr_node04;
int doWrite_Addr_node04(u_int16_t value);
int addWrite_Addr_node04(u_int16_t value);
int getStatus_Addr_node04();
 
#define ID_Life_node04 291
extern u_int16_t Life_node04;
int doWrite_Life_node04(u_int16_t value);
int addWrite_Life_node04(u_int16_t value);
int getStatus_Life_node04();
 
#define ID_AnInCnf_1_node04 292
extern u_int16_t AnInCnf_1_node04;
int doWrite_AnInCnf_1_node04(u_int16_t value);
int addWrite_AnInCnf_1_node04(u_int16_t value);
int getStatus_AnInCnf_1_node04();
 
#define ID_AnInCnf_2_node04 293
extern u_int16_t AnInCnf_2_node04;
int doWrite_AnInCnf_2_node04(u_int16_t value);
int addWrite_AnInCnf_2_node04(u_int16_t value);
int getStatus_AnInCnf_2_node04();
 
#define ID_ValAi1_node04 294
extern int16_t ValAi1_node04;
int doWrite_ValAi1_node04(int16_t value);
int addWrite_ValAi1_node04(int16_t value);
int getStatus_ValAi1_node04();
 
#define ID_ValAi2_node04 295
extern int16_t ValAi2_node04;
int doWrite_ValAi2_node04(int16_t value);
int addWrite_ValAi2_node04(int16_t value);
int getStatus_ValAi2_node04();
 
#define ID_DigDir_1_node04 296
extern int DigDir_1_node04;
int doWrite_DigDir_1_node04(int value);
int addWrite_DigDir_1_node04(int value);
int getStatus_DigDir_1_node04();
 
#define ID_DigDir_2_node04 297
extern int DigDir_2_node04;
int doWrite_DigDir_2_node04(int value);
int addWrite_DigDir_2_node04(int value);
int getStatus_DigDir_2_node04();
 
#define ID_DigDir_3_node04 298
extern int DigDir_3_node04;
int doWrite_DigDir_3_node04(int value);
int addWrite_DigDir_3_node04(int value);
int getStatus_DigDir_3_node04();
 
#define ID_DigDir_4_node04 299
extern int DigDir_4_node04;
int doWrite_DigDir_4_node04(int value);
int addWrite_DigDir_4_node04(int value);
int getStatus_DigDir_4_node04();
 
#define ID_DigDir_5_node04 300
extern int DigDir_5_node04;
int doWrite_DigDir_5_node04(int value);
int addWrite_DigDir_5_node04(int value);
int getStatus_DigDir_5_node04();
 
#define ID_DigDir_6_node04 301
extern int DigDir_6_node04;
int doWrite_DigDir_6_node04(int value);
int addWrite_DigDir_6_node04(int value);
int getStatus_DigDir_6_node04();
 
#define ID_DigDir_7_node04 302
extern int DigDir_7_node04;
int doWrite_DigDir_7_node04(int value);
int addWrite_DigDir_7_node04(int value);
int getStatus_DigDir_7_node04();
 
#define ID_DigDir_8_node04 303
extern int DigDir_8_node04;
int doWrite_DigDir_8_node04(int value);
int addWrite_DigDir_8_node04(int value);
int getStatus_DigDir_8_node04();
 
#define ID_DigIn_2_node04 304
extern int DigIn_2_node04;
int doWrite_DigIn_2_node04(int value);
int addWrite_DigIn_2_node04(int value);
int getStatus_DigIn_2_node04();
 
#define ID_DigIn_3_node04 305
extern int DigIn_3_node04;
int doWrite_DigIn_3_node04(int value);
int addWrite_DigIn_3_node04(int value);
int getStatus_DigIn_3_node04();
 
#define ID_DigIn_6_node04 306
extern int DigIn_6_node04;
int doWrite_DigIn_6_node04(int value);
int addWrite_DigIn_6_node04(int value);
int getStatus_DigIn_6_node04();
 
#define ID_DigIn_7_node04 307
extern int DigIn_7_node04;
int doWrite_DigIn_7_node04(int value);
int addWrite_DigIn_7_node04(int value);
int getStatus_DigIn_7_node04();
 
#define ID_DigOut_1_node04 308
extern int DigOut_1_node04;
int doWrite_DigOut_1_node04(int value);
int addWrite_DigOut_1_node04(int value);
int getStatus_DigOut_1_node04();
 
#define ID_DigOut_4_node04 309
extern int DigOut_4_node04;
int doWrite_DigOut_4_node04(int value);
int addWrite_DigOut_4_node04(int value);
int getStatus_DigOut_4_node04();
 
#define ID_DigOut_5_node04 310
extern int DigOut_5_node04;
int doWrite_DigOut_5_node04(int value);
int addWrite_DigOut_5_node04(int value);
int getStatus_DigOut_5_node04();
 
#define ID_DigOut_8_node04 311
extern int DigOut_8_node04;
int doWrite_DigOut_8_node04(int value);
int addWrite_DigOut_8_node04(int value);
int getStatus_DigOut_8_node04();
 
#define ID_latency_04_ms 313
extern int32_t latency_04_ms;
int doWrite_latency_04_ms(int32_t value);
int addWrite_latency_04_ms(int32_t value);
int getStatus_latency_04_ms();
 
#define ID_min_latency_04_m 314
extern int32_t min_latency_04_m;
int doWrite_min_latency_04_m(int32_t value);
int addWrite_min_latency_04_m(int32_t value);
int getStatus_min_latency_04_m();
 
#define ID_max_latency_04_m 315
extern int32_t max_latency_04_m;
int doWrite_max_latency_04_m(int32_t value);
int addWrite_max_latency_04_m(int32_t value);
int getStatus_max_latency_04_m();
 
#define ID_errors_04 317
extern int32_t errors_04;
int doWrite_errors_04(int32_t value);
int addWrite_errors_04(int32_t value);
int getStatus_errors_04();
 
#define ID_Addr_node05 320
extern u_int16_t Addr_node05;
int doWrite_Addr_node05(u_int16_t value);
int addWrite_Addr_node05(u_int16_t value);
int getStatus_Addr_node05();
 
#define ID_Life_node05 321
extern u_int16_t Life_node05;
int doWrite_Life_node05(u_int16_t value);
int addWrite_Life_node05(u_int16_t value);
int getStatus_Life_node05();
 
#define ID_AnInCnf_1_node05 322
extern u_int16_t AnInCnf_1_node05;
int doWrite_AnInCnf_1_node05(u_int16_t value);
int addWrite_AnInCnf_1_node05(u_int16_t value);
int getStatus_AnInCnf_1_node05();
 
#define ID_AnInCnf_2_node05 323
extern u_int16_t AnInCnf_2_node05;
int doWrite_AnInCnf_2_node05(u_int16_t value);
int addWrite_AnInCnf_2_node05(u_int16_t value);
int getStatus_AnInCnf_2_node05();
 
#define ID_ValAi1_node05 324
extern int16_t ValAi1_node05;
int doWrite_ValAi1_node05(int16_t value);
int addWrite_ValAi1_node05(int16_t value);
int getStatus_ValAi1_node05();
 
#define ID_ValAi2_node05 325
extern int16_t ValAi2_node05;
int doWrite_ValAi2_node05(int16_t value);
int addWrite_ValAi2_node05(int16_t value);
int getStatus_ValAi2_node05();
 
#define ID_DigDir_1_node05 326
extern int DigDir_1_node05;
int doWrite_DigDir_1_node05(int value);
int addWrite_DigDir_1_node05(int value);
int getStatus_DigDir_1_node05();
 
#define ID_DigDir_2_node05 327
extern int DigDir_2_node05;
int doWrite_DigDir_2_node05(int value);
int addWrite_DigDir_2_node05(int value);
int getStatus_DigDir_2_node05();
 
#define ID_DigDir_3_node05 328
extern int DigDir_3_node05;
int doWrite_DigDir_3_node05(int value);
int addWrite_DigDir_3_node05(int value);
int getStatus_DigDir_3_node05();
 
#define ID_DigDir_4_node05 329
extern int DigDir_4_node05;
int doWrite_DigDir_4_node05(int value);
int addWrite_DigDir_4_node05(int value);
int getStatus_DigDir_4_node05();
 
#define ID_DigDir_5_node05 330
extern int DigDir_5_node05;
int doWrite_DigDir_5_node05(int value);
int addWrite_DigDir_5_node05(int value);
int getStatus_DigDir_5_node05();
 
#define ID_DigDir_6_node05 331
extern int DigDir_6_node05;
int doWrite_DigDir_6_node05(int value);
int addWrite_DigDir_6_node05(int value);
int getStatus_DigDir_6_node05();
 
#define ID_DigDir_7_node05 332
extern int DigDir_7_node05;
int doWrite_DigDir_7_node05(int value);
int addWrite_DigDir_7_node05(int value);
int getStatus_DigDir_7_node05();
 
#define ID_DigDir_8_node05 333
extern int DigDir_8_node05;
int doWrite_DigDir_8_node05(int value);
int addWrite_DigDir_8_node05(int value);
int getStatus_DigDir_8_node05();
 
#define ID_DigIn_2_node05 334
extern int DigIn_2_node05;
int doWrite_DigIn_2_node05(int value);
int addWrite_DigIn_2_node05(int value);
int getStatus_DigIn_2_node05();
 
#define ID_DigIn_3_node05 335
extern int DigIn_3_node05;
int doWrite_DigIn_3_node05(int value);
int addWrite_DigIn_3_node05(int value);
int getStatus_DigIn_3_node05();
 
#define ID_DigIn_6_node05 336
extern int DigIn_6_node05;
int doWrite_DigIn_6_node05(int value);
int addWrite_DigIn_6_node05(int value);
int getStatus_DigIn_6_node05();
 
#define ID_DigIn_7_node05 337
extern int DigIn_7_node05;
int doWrite_DigIn_7_node05(int value);
int addWrite_DigIn_7_node05(int value);
int getStatus_DigIn_7_node05();
 
#define ID_DigOut_1_node05 338
extern int DigOut_1_node05;
int doWrite_DigOut_1_node05(int value);
int addWrite_DigOut_1_node05(int value);
int getStatus_DigOut_1_node05();
 
#define ID_DigOut_4_node05 339
extern int DigOut_4_node05;
int doWrite_DigOut_4_node05(int value);
int addWrite_DigOut_4_node05(int value);
int getStatus_DigOut_4_node05();
 
#define ID_DigOut_5_node05 340
extern int DigOut_5_node05;
int doWrite_DigOut_5_node05(int value);
int addWrite_DigOut_5_node05(int value);
int getStatus_DigOut_5_node05();
 
#define ID_DigOut_8_node05 341
extern int DigOut_8_node05;
int doWrite_DigOut_8_node05(int value);
int addWrite_DigOut_8_node05(int value);
int getStatus_DigOut_8_node05();
 
#define ID_latency_05_ms 343
extern int32_t latency_05_ms;
int doWrite_latency_05_ms(int32_t value);
int addWrite_latency_05_ms(int32_t value);
int getStatus_latency_05_ms();
 
#define ID_min_latency_05_m 344
extern int32_t min_latency_05_m;
int doWrite_min_latency_05_m(int32_t value);
int addWrite_min_latency_05_m(int32_t value);
int getStatus_min_latency_05_m();
 
#define ID_max_latency_05_m 345
extern int32_t max_latency_05_m;
int doWrite_max_latency_05_m(int32_t value);
int addWrite_max_latency_05_m(int32_t value);
int getStatus_max_latency_05_m();
 
#define ID_errors_05 347
extern int32_t errors_05;
int doWrite_errors_05(int32_t value);
int addWrite_errors_05(int32_t value);
int getStatus_errors_05();
 
#define ID_Addr_node06 350
extern u_int16_t Addr_node06;
int doWrite_Addr_node06(u_int16_t value);
int addWrite_Addr_node06(u_int16_t value);
int getStatus_Addr_node06();
 
#define ID_Life_node06 351
extern u_int16_t Life_node06;
int doWrite_Life_node06(u_int16_t value);
int addWrite_Life_node06(u_int16_t value);
int getStatus_Life_node06();
 
#define ID_AnInCnf_1_node06 352
extern u_int16_t AnInCnf_1_node06;
int doWrite_AnInCnf_1_node06(u_int16_t value);
int addWrite_AnInCnf_1_node06(u_int16_t value);
int getStatus_AnInCnf_1_node06();
 
#define ID_AnInCnf_2_node06 353
extern u_int16_t AnInCnf_2_node06;
int doWrite_AnInCnf_2_node06(u_int16_t value);
int addWrite_AnInCnf_2_node06(u_int16_t value);
int getStatus_AnInCnf_2_node06();
 
#define ID_ValAi1_node06 354
extern int16_t ValAi1_node06;
int doWrite_ValAi1_node06(int16_t value);
int addWrite_ValAi1_node06(int16_t value);
int getStatus_ValAi1_node06();
 
#define ID_ValAi2_node06 355
extern int16_t ValAi2_node06;
int doWrite_ValAi2_node06(int16_t value);
int addWrite_ValAi2_node06(int16_t value);
int getStatus_ValAi2_node06();
 
#define ID_DigDir_1_node06 356
extern int DigDir_1_node06;
int doWrite_DigDir_1_node06(int value);
int addWrite_DigDir_1_node06(int value);
int getStatus_DigDir_1_node06();
 
#define ID_DigDir_2_node06 357
extern int DigDir_2_node06;
int doWrite_DigDir_2_node06(int value);
int addWrite_DigDir_2_node06(int value);
int getStatus_DigDir_2_node06();
 
#define ID_DigDir_3_node06 358
extern int DigDir_3_node06;
int doWrite_DigDir_3_node06(int value);
int addWrite_DigDir_3_node06(int value);
int getStatus_DigDir_3_node06();
 
#define ID_DigDir_4_node06 359
extern int DigDir_4_node06;
int doWrite_DigDir_4_node06(int value);
int addWrite_DigDir_4_node06(int value);
int getStatus_DigDir_4_node06();
 
#define ID_DigDir_5_node06 360
extern int DigDir_5_node06;
int doWrite_DigDir_5_node06(int value);
int addWrite_DigDir_5_node06(int value);
int getStatus_DigDir_5_node06();
 
#define ID_DigDir_6_node06 361
extern int DigDir_6_node06;
int doWrite_DigDir_6_node06(int value);
int addWrite_DigDir_6_node06(int value);
int getStatus_DigDir_6_node06();
 
#define ID_DigDir_7_node06 362
extern int DigDir_7_node06;
int doWrite_DigDir_7_node06(int value);
int addWrite_DigDir_7_node06(int value);
int getStatus_DigDir_7_node06();
 
#define ID_DigDir_8_node06 363
extern int DigDir_8_node06;
int doWrite_DigDir_8_node06(int value);
int addWrite_DigDir_8_node06(int value);
int getStatus_DigDir_8_node06();
 
#define ID_DigIn_2_node06 364
extern int DigIn_2_node06;
int doWrite_DigIn_2_node06(int value);
int addWrite_DigIn_2_node06(int value);
int getStatus_DigIn_2_node06();
 
#define ID_DigIn_3_node06 365
extern int DigIn_3_node06;
int doWrite_DigIn_3_node06(int value);
int addWrite_DigIn_3_node06(int value);
int getStatus_DigIn_3_node06();
 
#define ID_DigIn_6_node06 366
extern int DigIn_6_node06;
int doWrite_DigIn_6_node06(int value);
int addWrite_DigIn_6_node06(int value);
int getStatus_DigIn_6_node06();
 
#define ID_DigIn_7_node06 367
extern int DigIn_7_node06;
int doWrite_DigIn_7_node06(int value);
int addWrite_DigIn_7_node06(int value);
int getStatus_DigIn_7_node06();
 
#define ID_DigOut_1_node06 368
extern int DigOut_1_node06;
int doWrite_DigOut_1_node06(int value);
int addWrite_DigOut_1_node06(int value);
int getStatus_DigOut_1_node06();
 
#define ID_DigOut_4_node06 369
extern int DigOut_4_node06;
int doWrite_DigOut_4_node06(int value);
int addWrite_DigOut_4_node06(int value);
int getStatus_DigOut_4_node06();
 
#define ID_DigOut_5_node06 370
extern int DigOut_5_node06;
int doWrite_DigOut_5_node06(int value);
int addWrite_DigOut_5_node06(int value);
int getStatus_DigOut_5_node06();
 
#define ID_DigOut_8_node06 371
extern int DigOut_8_node06;
int doWrite_DigOut_8_node06(int value);
int addWrite_DigOut_8_node06(int value);
int getStatus_DigOut_8_node06();
 
#define ID_latency_06_ms 373
extern int32_t latency_06_ms;
int doWrite_latency_06_ms(int32_t value);
int addWrite_latency_06_ms(int32_t value);
int getStatus_latency_06_ms();
 
#define ID_min_latency_06_m 374
extern int32_t min_latency_06_m;
int doWrite_min_latency_06_m(int32_t value);
int addWrite_min_latency_06_m(int32_t value);
int getStatus_min_latency_06_m();
 
#define ID_max_latency_06_m 375
extern int32_t max_latency_06_m;
int doWrite_max_latency_06_m(int32_t value);
int addWrite_max_latency_06_m(int32_t value);
int getStatus_max_latency_06_m();
 
#define ID_errors_06 377
extern int32_t errors_06;
int doWrite_errors_06(int32_t value);
int addWrite_errors_06(int32_t value);
int getStatus_errors_06();
 
#define ID_Addr_node07 380
extern u_int16_t Addr_node07;
int doWrite_Addr_node07(u_int16_t value);
int addWrite_Addr_node07(u_int16_t value);
int getStatus_Addr_node07();
 
#define ID_Life_node07 381
extern u_int16_t Life_node07;
int doWrite_Life_node07(u_int16_t value);
int addWrite_Life_node07(u_int16_t value);
int getStatus_Life_node07();
 
#define ID_AnInCnf_1_node07 382
extern u_int16_t AnInCnf_1_node07;
int doWrite_AnInCnf_1_node07(u_int16_t value);
int addWrite_AnInCnf_1_node07(u_int16_t value);
int getStatus_AnInCnf_1_node07();
 
#define ID_AnInCnf_2_node07 383
extern u_int16_t AnInCnf_2_node07;
int doWrite_AnInCnf_2_node07(u_int16_t value);
int addWrite_AnInCnf_2_node07(u_int16_t value);
int getStatus_AnInCnf_2_node07();
 
#define ID_ValAi1_node07 384
extern int16_t ValAi1_node07;
int doWrite_ValAi1_node07(int16_t value);
int addWrite_ValAi1_node07(int16_t value);
int getStatus_ValAi1_node07();
 
#define ID_ValAi2_node07 385
extern int16_t ValAi2_node07;
int doWrite_ValAi2_node07(int16_t value);
int addWrite_ValAi2_node07(int16_t value);
int getStatus_ValAi2_node07();
 
#define ID_DigDir_1_node07 386
extern int DigDir_1_node07;
int doWrite_DigDir_1_node07(int value);
int addWrite_DigDir_1_node07(int value);
int getStatus_DigDir_1_node07();
 
#define ID_DigDir_2_node07 387
extern int DigDir_2_node07;
int doWrite_DigDir_2_node07(int value);
int addWrite_DigDir_2_node07(int value);
int getStatus_DigDir_2_node07();
 
#define ID_DigDir_3_node07 388
extern int DigDir_3_node07;
int doWrite_DigDir_3_node07(int value);
int addWrite_DigDir_3_node07(int value);
int getStatus_DigDir_3_node07();
 
#define ID_DigDir_4_node07 389
extern int DigDir_4_node07;
int doWrite_DigDir_4_node07(int value);
int addWrite_DigDir_4_node07(int value);
int getStatus_DigDir_4_node07();
 
#define ID_DigDir_5_node07 390
extern int DigDir_5_node07;
int doWrite_DigDir_5_node07(int value);
int addWrite_DigDir_5_node07(int value);
int getStatus_DigDir_5_node07();
 
#define ID_DigDir_6_node07 391
extern int DigDir_6_node07;
int doWrite_DigDir_6_node07(int value);
int addWrite_DigDir_6_node07(int value);
int getStatus_DigDir_6_node07();
 
#define ID_DigDir_7_node07 392
extern int DigDir_7_node07;
int doWrite_DigDir_7_node07(int value);
int addWrite_DigDir_7_node07(int value);
int getStatus_DigDir_7_node07();
 
#define ID_DigDir_8_node07 393
extern int DigDir_8_node07;
int doWrite_DigDir_8_node07(int value);
int addWrite_DigDir_8_node07(int value);
int getStatus_DigDir_8_node07();
 
#define ID_DigIn_2_node07 394
extern int DigIn_2_node07;
int doWrite_DigIn_2_node07(int value);
int addWrite_DigIn_2_node07(int value);
int getStatus_DigIn_2_node07();
 
#define ID_DigIn_3_node07 395
extern int DigIn_3_node07;
int doWrite_DigIn_3_node07(int value);
int addWrite_DigIn_3_node07(int value);
int getStatus_DigIn_3_node07();
 
#define ID_DigIn_6_node07 396
extern int DigIn_6_node07;
int doWrite_DigIn_6_node07(int value);
int addWrite_DigIn_6_node07(int value);
int getStatus_DigIn_6_node07();
 
#define ID_DigIn_7_node07 397
extern int DigIn_7_node07;
int doWrite_DigIn_7_node07(int value);
int addWrite_DigIn_7_node07(int value);
int getStatus_DigIn_7_node07();
 
#define ID_DigOut_1_node07 398
extern int DigOut_1_node07;
int doWrite_DigOut_1_node07(int value);
int addWrite_DigOut_1_node07(int value);
int getStatus_DigOut_1_node07();
 
#define ID_DigOut_4_node07 399
extern int DigOut_4_node07;
int doWrite_DigOut_4_node07(int value);
int addWrite_DigOut_4_node07(int value);
int getStatus_DigOut_4_node07();
 
#define ID_DigOut_5_node07 400
extern int DigOut_5_node07;
int doWrite_DigOut_5_node07(int value);
int addWrite_DigOut_5_node07(int value);
int getStatus_DigOut_5_node07();
 
#define ID_DigOut_8_node07 401
extern int DigOut_8_node07;
int doWrite_DigOut_8_node07(int value);
int addWrite_DigOut_8_node07(int value);
int getStatus_DigOut_8_node07();
 
#define ID_latency_07_ms 403
extern int32_t latency_07_ms;
int doWrite_latency_07_ms(int32_t value);
int addWrite_latency_07_ms(int32_t value);
int getStatus_latency_07_ms();
 
#define ID_min_latency_07_m 404
extern int32_t min_latency_07_m;
int doWrite_min_latency_07_m(int32_t value);
int addWrite_min_latency_07_m(int32_t value);
int getStatus_min_latency_07_m();
 
#define ID_max_latency_07_m 405
extern int32_t max_latency_07_m;
int doWrite_max_latency_07_m(int32_t value);
int addWrite_max_latency_07_m(int32_t value);
int getStatus_max_latency_07_m();
 
#define ID_errors_07 407
extern int32_t errors_07;
int doWrite_errors_07(int32_t value);
int addWrite_errors_07(int32_t value);
int getStatus_errors_07();
 
#define ID_Addr_node08 410
extern u_int16_t Addr_node08;
int doWrite_Addr_node08(u_int16_t value);
int addWrite_Addr_node08(u_int16_t value);
int getStatus_Addr_node08();
 
#define ID_Life_node08 411
extern u_int16_t Life_node08;
int doWrite_Life_node08(u_int16_t value);
int addWrite_Life_node08(u_int16_t value);
int getStatus_Life_node08();
 
#define ID_AnInCnf_1_node08 412
extern u_int16_t AnInCnf_1_node08;
int doWrite_AnInCnf_1_node08(u_int16_t value);
int addWrite_AnInCnf_1_node08(u_int16_t value);
int getStatus_AnInCnf_1_node08();
 
#define ID_AnInCnf_2_node08 413
extern u_int16_t AnInCnf_2_node08;
int doWrite_AnInCnf_2_node08(u_int16_t value);
int addWrite_AnInCnf_2_node08(u_int16_t value);
int getStatus_AnInCnf_2_node08();
 
#define ID_ValAi1_node08 414
extern int16_t ValAi1_node08;
int doWrite_ValAi1_node08(int16_t value);
int addWrite_ValAi1_node08(int16_t value);
int getStatus_ValAi1_node08();
 
#define ID_ValAi2_node08 415
extern int16_t ValAi2_node08;
int doWrite_ValAi2_node08(int16_t value);
int addWrite_ValAi2_node08(int16_t value);
int getStatus_ValAi2_node08();
 
#define ID_DigDir_1_node08 416
extern int DigDir_1_node08;
int doWrite_DigDir_1_node08(int value);
int addWrite_DigDir_1_node08(int value);
int getStatus_DigDir_1_node08();
 
#define ID_DigDir_2_node08 417
extern int DigDir_2_node08;
int doWrite_DigDir_2_node08(int value);
int addWrite_DigDir_2_node08(int value);
int getStatus_DigDir_2_node08();
 
#define ID_DigDir_3_node08 418
extern int DigDir_3_node08;
int doWrite_DigDir_3_node08(int value);
int addWrite_DigDir_3_node08(int value);
int getStatus_DigDir_3_node08();
 
#define ID_DigDir_4_node08 419
extern int DigDir_4_node08;
int doWrite_DigDir_4_node08(int value);
int addWrite_DigDir_4_node08(int value);
int getStatus_DigDir_4_node08();
 
#define ID_DigDir_5_node08 420
extern int DigDir_5_node08;
int doWrite_DigDir_5_node08(int value);
int addWrite_DigDir_5_node08(int value);
int getStatus_DigDir_5_node08();
 
#define ID_DigDir_6_node08 421
extern int DigDir_6_node08;
int doWrite_DigDir_6_node08(int value);
int addWrite_DigDir_6_node08(int value);
int getStatus_DigDir_6_node08();
 
#define ID_DigDir_7_node08 422
extern int DigDir_7_node08;
int doWrite_DigDir_7_node08(int value);
int addWrite_DigDir_7_node08(int value);
int getStatus_DigDir_7_node08();
 
#define ID_DigDir_8_node08 423
extern int DigDir_8_node08;
int doWrite_DigDir_8_node08(int value);
int addWrite_DigDir_8_node08(int value);
int getStatus_DigDir_8_node08();
 
#define ID_DigIn_2_node08 424
extern int DigIn_2_node08;
int doWrite_DigIn_2_node08(int value);
int addWrite_DigIn_2_node08(int value);
int getStatus_DigIn_2_node08();
 
#define ID_DigIn_3_node08 425
extern int DigIn_3_node08;
int doWrite_DigIn_3_node08(int value);
int addWrite_DigIn_3_node08(int value);
int getStatus_DigIn_3_node08();
 
#define ID_DigIn_6_node08 426
extern int DigIn_6_node08;
int doWrite_DigIn_6_node08(int value);
int addWrite_DigIn_6_node08(int value);
int getStatus_DigIn_6_node08();
 
#define ID_DigIn_7_node08 427
extern int DigIn_7_node08;
int doWrite_DigIn_7_node08(int value);
int addWrite_DigIn_7_node08(int value);
int getStatus_DigIn_7_node08();
 
#define ID_DigOut_1_node08 428
extern int DigOut_1_node08;
int doWrite_DigOut_1_node08(int value);
int addWrite_DigOut_1_node08(int value);
int getStatus_DigOut_1_node08();
 
#define ID_DigOut_4_node08 429
extern int DigOut_4_node08;
int doWrite_DigOut_4_node08(int value);
int addWrite_DigOut_4_node08(int value);
int getStatus_DigOut_4_node08();
 
#define ID_DigOut_5_node08 430
extern int DigOut_5_node08;
int doWrite_DigOut_5_node08(int value);
int addWrite_DigOut_5_node08(int value);
int getStatus_DigOut_5_node08();
 
#define ID_DigOut_8_node08 431
extern int DigOut_8_node08;
int doWrite_DigOut_8_node08(int value);
int addWrite_DigOut_8_node08(int value);
int getStatus_DigOut_8_node08();
 
#define ID_latency_08_ms 433
extern int32_t latency_08_ms;
int doWrite_latency_08_ms(int32_t value);
int addWrite_latency_08_ms(int32_t value);
int getStatus_latency_08_ms();
 
#define ID_min_latency_08_m 434
extern int32_t min_latency_08_m;
int doWrite_min_latency_08_m(int32_t value);
int addWrite_min_latency_08_m(int32_t value);
int getStatus_min_latency_08_m();
 
#define ID_max_latency_08_m 435
extern int32_t max_latency_08_m;
int doWrite_max_latency_08_m(int32_t value);
int addWrite_max_latency_08_m(int32_t value);
int getStatus_max_latency_08_m();
 
#define ID_errors_08 437
extern int32_t errors_08;
int doWrite_errors_08(int32_t value);
int addWrite_errors_08(int32_t value);
int getStatus_errors_08();
 
#define ID_Addr_node09 440
extern u_int16_t Addr_node09;
int doWrite_Addr_node09(u_int16_t value);
int addWrite_Addr_node09(u_int16_t value);
int getStatus_Addr_node09();
 
#define ID_Life_node09 441
extern u_int16_t Life_node09;
int doWrite_Life_node09(u_int16_t value);
int addWrite_Life_node09(u_int16_t value);
int getStatus_Life_node09();
 
#define ID_AnInCnf_1_node09 442
extern u_int16_t AnInCnf_1_node09;
int doWrite_AnInCnf_1_node09(u_int16_t value);
int addWrite_AnInCnf_1_node09(u_int16_t value);
int getStatus_AnInCnf_1_node09();
 
#define ID_AnInCnf_2_node09 443
extern u_int16_t AnInCnf_2_node09;
int doWrite_AnInCnf_2_node09(u_int16_t value);
int addWrite_AnInCnf_2_node09(u_int16_t value);
int getStatus_AnInCnf_2_node09();
 
#define ID_ValAi1_node09 444
extern int16_t ValAi1_node09;
int doWrite_ValAi1_node09(int16_t value);
int addWrite_ValAi1_node09(int16_t value);
int getStatus_ValAi1_node09();
 
#define ID_ValAi2_node09 445
extern int16_t ValAi2_node09;
int doWrite_ValAi2_node09(int16_t value);
int addWrite_ValAi2_node09(int16_t value);
int getStatus_ValAi2_node09();
 
#define ID_DigDir_1_node09 446
extern int DigDir_1_node09;
int doWrite_DigDir_1_node09(int value);
int addWrite_DigDir_1_node09(int value);
int getStatus_DigDir_1_node09();
 
#define ID_DigDir_2_node09 447
extern int DigDir_2_node09;
int doWrite_DigDir_2_node09(int value);
int addWrite_DigDir_2_node09(int value);
int getStatus_DigDir_2_node09();
 
#define ID_DigDir_3_node09 448
extern int DigDir_3_node09;
int doWrite_DigDir_3_node09(int value);
int addWrite_DigDir_3_node09(int value);
int getStatus_DigDir_3_node09();
 
#define ID_DigDir_4_node09 449
extern int DigDir_4_node09;
int doWrite_DigDir_4_node09(int value);
int addWrite_DigDir_4_node09(int value);
int getStatus_DigDir_4_node09();
 
#define ID_DigDir_5_node09 450
extern int DigDir_5_node09;
int doWrite_DigDir_5_node09(int value);
int addWrite_DigDir_5_node09(int value);
int getStatus_DigDir_5_node09();
 
#define ID_DigDir_6_node09 451
extern int DigDir_6_node09;
int doWrite_DigDir_6_node09(int value);
int addWrite_DigDir_6_node09(int value);
int getStatus_DigDir_6_node09();
 
#define ID_DigDir_7_node09 452
extern int DigDir_7_node09;
int doWrite_DigDir_7_node09(int value);
int addWrite_DigDir_7_node09(int value);
int getStatus_DigDir_7_node09();
 
#define ID_DigDir_8_node09 453
extern int DigDir_8_node09;
int doWrite_DigDir_8_node09(int value);
int addWrite_DigDir_8_node09(int value);
int getStatus_DigDir_8_node09();
 
#define ID_DigIn_2_node09 454
extern int DigIn_2_node09;
int doWrite_DigIn_2_node09(int value);
int addWrite_DigIn_2_node09(int value);
int getStatus_DigIn_2_node09();
 
#define ID_DigIn_3_node09 455
extern int DigIn_3_node09;
int doWrite_DigIn_3_node09(int value);
int addWrite_DigIn_3_node09(int value);
int getStatus_DigIn_3_node09();
 
#define ID_DigIn_6_node09 456
extern int DigIn_6_node09;
int doWrite_DigIn_6_node09(int value);
int addWrite_DigIn_6_node09(int value);
int getStatus_DigIn_6_node09();
 
#define ID_DigIn_7_node09 457
extern int DigIn_7_node09;
int doWrite_DigIn_7_node09(int value);
int addWrite_DigIn_7_node09(int value);
int getStatus_DigIn_7_node09();
 
#define ID_DigOut_1_node09 458
extern int DigOut_1_node09;
int doWrite_DigOut_1_node09(int value);
int addWrite_DigOut_1_node09(int value);
int getStatus_DigOut_1_node09();
 
#define ID_DigOut_4_node09 459
extern int DigOut_4_node09;
int doWrite_DigOut_4_node09(int value);
int addWrite_DigOut_4_node09(int value);
int getStatus_DigOut_4_node09();
 
#define ID_DigOut_5_node09 460
extern int DigOut_5_node09;
int doWrite_DigOut_5_node09(int value);
int addWrite_DigOut_5_node09(int value);
int getStatus_DigOut_5_node09();
 
#define ID_DigOut_8_node09 461
extern int DigOut_8_node09;
int doWrite_DigOut_8_node09(int value);
int addWrite_DigOut_8_node09(int value);
int getStatus_DigOut_8_node09();
 
#define ID_latency_09_ms 463
extern int32_t latency_09_ms;
int doWrite_latency_09_ms(int32_t value);
int addWrite_latency_09_ms(int32_t value);
int getStatus_latency_09_ms();
 
#define ID_min_latency_09_m 464
extern int32_t min_latency_09_m;
int doWrite_min_latency_09_m(int32_t value);
int addWrite_min_latency_09_m(int32_t value);
int getStatus_min_latency_09_m();
 
#define ID_max_latency_09_m 465
extern int32_t max_latency_09_m;
int doWrite_max_latency_09_m(int32_t value);
int addWrite_max_latency_09_m(int32_t value);
int getStatus_max_latency_09_m();
 
#define ID_errors_09 467
extern int32_t errors_09;
int doWrite_errors_09(int32_t value);
int addWrite_errors_09(int32_t value);
int getStatus_errors_09();
 
#define ID_Addr_node10 470
extern u_int16_t Addr_node10;
int doWrite_Addr_node10(u_int16_t value);
int addWrite_Addr_node10(u_int16_t value);
int getStatus_Addr_node10();
 
#define ID_Life_node10 471
extern u_int16_t Life_node10;
int doWrite_Life_node10(u_int16_t value);
int addWrite_Life_node10(u_int16_t value);
int getStatus_Life_node10();
 
#define ID_AnInCnf_1_node10 472
extern u_int16_t AnInCnf_1_node10;
int doWrite_AnInCnf_1_node10(u_int16_t value);
int addWrite_AnInCnf_1_node10(u_int16_t value);
int getStatus_AnInCnf_1_node10();
 
#define ID_AnInCnf_2_node10 473
extern u_int16_t AnInCnf_2_node10;
int doWrite_AnInCnf_2_node10(u_int16_t value);
int addWrite_AnInCnf_2_node10(u_int16_t value);
int getStatus_AnInCnf_2_node10();
 
#define ID_ValAi1_node10 474
extern int16_t ValAi1_node10;
int doWrite_ValAi1_node10(int16_t value);
int addWrite_ValAi1_node10(int16_t value);
int getStatus_ValAi1_node10();
 
#define ID_ValAi2_node10 475
extern int16_t ValAi2_node10;
int doWrite_ValAi2_node10(int16_t value);
int addWrite_ValAi2_node10(int16_t value);
int getStatus_ValAi2_node10();
 
#define ID_DigDir_1_node10 476
extern int DigDir_1_node10;
int doWrite_DigDir_1_node10(int value);
int addWrite_DigDir_1_node10(int value);
int getStatus_DigDir_1_node10();
 
#define ID_DigDir_2_node10 477
extern int DigDir_2_node10;
int doWrite_DigDir_2_node10(int value);
int addWrite_DigDir_2_node10(int value);
int getStatus_DigDir_2_node10();
 
#define ID_DigDir_3_node10 478
extern int DigDir_3_node10;
int doWrite_DigDir_3_node10(int value);
int addWrite_DigDir_3_node10(int value);
int getStatus_DigDir_3_node10();
 
#define ID_DigDir_4_node10 479
extern int DigDir_4_node10;
int doWrite_DigDir_4_node10(int value);
int addWrite_DigDir_4_node10(int value);
int getStatus_DigDir_4_node10();
 
#define ID_DigDir_5_node10 480
extern int DigDir_5_node10;
int doWrite_DigDir_5_node10(int value);
int addWrite_DigDir_5_node10(int value);
int getStatus_DigDir_5_node10();
 
#define ID_DigDir_6_node10 481
extern int DigDir_6_node10;
int doWrite_DigDir_6_node10(int value);
int addWrite_DigDir_6_node10(int value);
int getStatus_DigDir_6_node10();
 
#define ID_DigDir_7_node10 482
extern int DigDir_7_node10;
int doWrite_DigDir_7_node10(int value);
int addWrite_DigDir_7_node10(int value);
int getStatus_DigDir_7_node10();
 
#define ID_DigDir_8_node10 483
extern int DigDir_8_node10;
int doWrite_DigDir_8_node10(int value);
int addWrite_DigDir_8_node10(int value);
int getStatus_DigDir_8_node10();
 
#define ID_DigIn_2_node10 484
extern int DigIn_2_node10;
int doWrite_DigIn_2_node10(int value);
int addWrite_DigIn_2_node10(int value);
int getStatus_DigIn_2_node10();
 
#define ID_DigIn_3_node10 485
extern int DigIn_3_node10;
int doWrite_DigIn_3_node10(int value);
int addWrite_DigIn_3_node10(int value);
int getStatus_DigIn_3_node10();
 
#define ID_DigIn_6_node10 486
extern int DigIn_6_node10;
int doWrite_DigIn_6_node10(int value);
int addWrite_DigIn_6_node10(int value);
int getStatus_DigIn_6_node10();
 
#define ID_DigIn_7_node10 487
extern int DigIn_7_node10;
int doWrite_DigIn_7_node10(int value);
int addWrite_DigIn_7_node10(int value);
int getStatus_DigIn_7_node10();
 
#define ID_DigOut_1_node10 488
extern int DigOut_1_node10;
int doWrite_DigOut_1_node10(int value);
int addWrite_DigOut_1_node10(int value);
int getStatus_DigOut_1_node10();
 
#define ID_DigOut_4_node10 489
extern int DigOut_4_node10;
int doWrite_DigOut_4_node10(int value);
int addWrite_DigOut_4_node10(int value);
int getStatus_DigOut_4_node10();
 
#define ID_DigOut_5_node10 490
extern int DigOut_5_node10;
int doWrite_DigOut_5_node10(int value);
int addWrite_DigOut_5_node10(int value);
int getStatus_DigOut_5_node10();
 
#define ID_DigOut_8_node10 491
extern int DigOut_8_node10;
int doWrite_DigOut_8_node10(int value);
int addWrite_DigOut_8_node10(int value);
int getStatus_DigOut_8_node10();
 
#define ID_latency_10_ms 493
extern int32_t latency_10_ms;
int doWrite_latency_10_ms(int32_t value);
int addWrite_latency_10_ms(int32_t value);
int getStatus_latency_10_ms();
 
#define ID_min_latency_10_m 494
extern int32_t min_latency_10_m;
int doWrite_min_latency_10_m(int32_t value);
int addWrite_min_latency_10_m(int32_t value);
int getStatus_min_latency_10_m();
 
#define ID_max_latency_10_m 495
extern int32_t max_latency_10_m;
int doWrite_max_latency_10_m(int32_t value);
int addWrite_max_latency_10_m(int32_t value);
int getStatus_max_latency_10_m();
 
#define ID_errors_10 497
extern int32_t errors_10;
int doWrite_errors_10(int32_t value);
int addWrite_errors_10(int32_t value);
int getStatus_errors_10();
 
#define ID_Addr_node11 500
extern u_int16_t Addr_node11;
int doWrite_Addr_node11(u_int16_t value);
int addWrite_Addr_node11(u_int16_t value);
int getStatus_Addr_node11();
 
#define ID_Life_node11 501
extern u_int16_t Life_node11;
int doWrite_Life_node11(u_int16_t value);
int addWrite_Life_node11(u_int16_t value);
int getStatus_Life_node11();
 
#define ID_AnInCnf_1_node11 502
extern u_int16_t AnInCnf_1_node11;
int doWrite_AnInCnf_1_node11(u_int16_t value);
int addWrite_AnInCnf_1_node11(u_int16_t value);
int getStatus_AnInCnf_1_node11();
 
#define ID_AnInCnf_2_node11 503
extern u_int16_t AnInCnf_2_node11;
int doWrite_AnInCnf_2_node11(u_int16_t value);
int addWrite_AnInCnf_2_node11(u_int16_t value);
int getStatus_AnInCnf_2_node11();
 
#define ID_ValAi1_node11 504
extern int16_t ValAi1_node11;
int doWrite_ValAi1_node11(int16_t value);
int addWrite_ValAi1_node11(int16_t value);
int getStatus_ValAi1_node11();
 
#define ID_ValAi2_node11 505
extern int16_t ValAi2_node11;
int doWrite_ValAi2_node11(int16_t value);
int addWrite_ValAi2_node11(int16_t value);
int getStatus_ValAi2_node11();
 
#define ID_DigDir_1_node11 506
extern int DigDir_1_node11;
int doWrite_DigDir_1_node11(int value);
int addWrite_DigDir_1_node11(int value);
int getStatus_DigDir_1_node11();
 
#define ID_DigDir_2_node11 507
extern int DigDir_2_node11;
int doWrite_DigDir_2_node11(int value);
int addWrite_DigDir_2_node11(int value);
int getStatus_DigDir_2_node11();
 
#define ID_DigDir_3_node11 508
extern int DigDir_3_node11;
int doWrite_DigDir_3_node11(int value);
int addWrite_DigDir_3_node11(int value);
int getStatus_DigDir_3_node11();
 
#define ID_DigDir_4_node11 509
extern int DigDir_4_node11;
int doWrite_DigDir_4_node11(int value);
int addWrite_DigDir_4_node11(int value);
int getStatus_DigDir_4_node11();
 
#define ID_DigDir_5_node11 510
extern int DigDir_5_node11;
int doWrite_DigDir_5_node11(int value);
int addWrite_DigDir_5_node11(int value);
int getStatus_DigDir_5_node11();
 
#define ID_DigDir_6_node11 511
extern int DigDir_6_node11;
int doWrite_DigDir_6_node11(int value);
int addWrite_DigDir_6_node11(int value);
int getStatus_DigDir_6_node11();
 
#define ID_DigDir_7_node11 512
extern int DigDir_7_node11;
int doWrite_DigDir_7_node11(int value);
int addWrite_DigDir_7_node11(int value);
int getStatus_DigDir_7_node11();
 
#define ID_DigDir_8_node11 513
extern int DigDir_8_node11;
int doWrite_DigDir_8_node11(int value);
int addWrite_DigDir_8_node11(int value);
int getStatus_DigDir_8_node11();
 
#define ID_DigIn_2_node11 514
extern int DigIn_2_node11;
int doWrite_DigIn_2_node11(int value);
int addWrite_DigIn_2_node11(int value);
int getStatus_DigIn_2_node11();
 
#define ID_DigIn_3_node11 515
extern int DigIn_3_node11;
int doWrite_DigIn_3_node11(int value);
int addWrite_DigIn_3_node11(int value);
int getStatus_DigIn_3_node11();
 
#define ID_DigIn_6_node11 516
extern int DigIn_6_node11;
int doWrite_DigIn_6_node11(int value);
int addWrite_DigIn_6_node11(int value);
int getStatus_DigIn_6_node11();
 
#define ID_DigIn_7_node11 517
extern int DigIn_7_node11;
int doWrite_DigIn_7_node11(int value);
int addWrite_DigIn_7_node11(int value);
int getStatus_DigIn_7_node11();
 
#define ID_DigOut_1_node11 518
extern int DigOut_1_node11;
int doWrite_DigOut_1_node11(int value);
int addWrite_DigOut_1_node11(int value);
int getStatus_DigOut_1_node11();
 
#define ID_DigOut_4_node11 519
extern int DigOut_4_node11;
int doWrite_DigOut_4_node11(int value);
int addWrite_DigOut_4_node11(int value);
int getStatus_DigOut_4_node11();
 
#define ID_DigOut_5_node11 520
extern int DigOut_5_node11;
int doWrite_DigOut_5_node11(int value);
int addWrite_DigOut_5_node11(int value);
int getStatus_DigOut_5_node11();
 
#define ID_DigOut_8_node11 521
extern int DigOut_8_node11;
int doWrite_DigOut_8_node11(int value);
int addWrite_DigOut_8_node11(int value);
int getStatus_DigOut_8_node11();
 
#define ID_latency_11_ms 523
extern int32_t latency_11_ms;
int doWrite_latency_11_ms(int32_t value);
int addWrite_latency_11_ms(int32_t value);
int getStatus_latency_11_ms();
 
#define ID_min_latency_11_m 524
extern int32_t min_latency_11_m;
int doWrite_min_latency_11_m(int32_t value);
int addWrite_min_latency_11_m(int32_t value);
int getStatus_min_latency_11_m();
 
#define ID_max_latency_11_m 525
extern int32_t max_latency_11_m;
int doWrite_max_latency_11_m(int32_t value);
int addWrite_max_latency_11_m(int32_t value);
int getStatus_max_latency_11_m();
 
#define ID_errors_11 527
extern int32_t errors_11;
int doWrite_errors_11(int32_t value);
int addWrite_errors_11(int32_t value);
int getStatus_errors_11();
 
#define ID_Addr_node12 530
extern u_int16_t Addr_node12;
int doWrite_Addr_node12(u_int16_t value);
int addWrite_Addr_node12(u_int16_t value);
int getStatus_Addr_node12();
 
#define ID_Life_node12 531
extern u_int16_t Life_node12;
int doWrite_Life_node12(u_int16_t value);
int addWrite_Life_node12(u_int16_t value);
int getStatus_Life_node12();
 
#define ID_AnInCnf_1_node12 532
extern u_int16_t AnInCnf_1_node12;
int doWrite_AnInCnf_1_node12(u_int16_t value);
int addWrite_AnInCnf_1_node12(u_int16_t value);
int getStatus_AnInCnf_1_node12();
 
#define ID_AnInCnf_2_node12 533
extern u_int16_t AnInCnf_2_node12;
int doWrite_AnInCnf_2_node12(u_int16_t value);
int addWrite_AnInCnf_2_node12(u_int16_t value);
int getStatus_AnInCnf_2_node12();
 
#define ID_ValAi1_node12 534
extern int16_t ValAi1_node12;
int doWrite_ValAi1_node12(int16_t value);
int addWrite_ValAi1_node12(int16_t value);
int getStatus_ValAi1_node12();
 
#define ID_ValAi2_node12 535
extern int16_t ValAi2_node12;
int doWrite_ValAi2_node12(int16_t value);
int addWrite_ValAi2_node12(int16_t value);
int getStatus_ValAi2_node12();
 
#define ID_DigDir_1_node12 536
extern int DigDir_1_node12;
int doWrite_DigDir_1_node12(int value);
int addWrite_DigDir_1_node12(int value);
int getStatus_DigDir_1_node12();
 
#define ID_DigDir_2_node12 537
extern int DigDir_2_node12;
int doWrite_DigDir_2_node12(int value);
int addWrite_DigDir_2_node12(int value);
int getStatus_DigDir_2_node12();
 
#define ID_DigDir_3_node12 538
extern int DigDir_3_node12;
int doWrite_DigDir_3_node12(int value);
int addWrite_DigDir_3_node12(int value);
int getStatus_DigDir_3_node12();
 
#define ID_DigDir_4_node12 539
extern int DigDir_4_node12;
int doWrite_DigDir_4_node12(int value);
int addWrite_DigDir_4_node12(int value);
int getStatus_DigDir_4_node12();
 
#define ID_DigDir_5_node12 540
extern int DigDir_5_node12;
int doWrite_DigDir_5_node12(int value);
int addWrite_DigDir_5_node12(int value);
int getStatus_DigDir_5_node12();
 
#define ID_DigDir_6_node12 541
extern int DigDir_6_node12;
int doWrite_DigDir_6_node12(int value);
int addWrite_DigDir_6_node12(int value);
int getStatus_DigDir_6_node12();
 
#define ID_DigDir_7_node12 542
extern int DigDir_7_node12;
int doWrite_DigDir_7_node12(int value);
int addWrite_DigDir_7_node12(int value);
int getStatus_DigDir_7_node12();
 
#define ID_DigDir_8_node12 543
extern int DigDir_8_node12;
int doWrite_DigDir_8_node12(int value);
int addWrite_DigDir_8_node12(int value);
int getStatus_DigDir_8_node12();
 
#define ID_DigIn_2_node12 544
extern int DigIn_2_node12;
int doWrite_DigIn_2_node12(int value);
int addWrite_DigIn_2_node12(int value);
int getStatus_DigIn_2_node12();
 
#define ID_DigIn_3_node12 545
extern int DigIn_3_node12;
int doWrite_DigIn_3_node12(int value);
int addWrite_DigIn_3_node12(int value);
int getStatus_DigIn_3_node12();
 
#define ID_DigIn_6_node12 546
extern int DigIn_6_node12;
int doWrite_DigIn_6_node12(int value);
int addWrite_DigIn_6_node12(int value);
int getStatus_DigIn_6_node12();
 
#define ID_DigIn_7_node12 547
extern int DigIn_7_node12;
int doWrite_DigIn_7_node12(int value);
int addWrite_DigIn_7_node12(int value);
int getStatus_DigIn_7_node12();
 
#define ID_DigOut_1_node12 548
extern int DigOut_1_node12;
int doWrite_DigOut_1_node12(int value);
int addWrite_DigOut_1_node12(int value);
int getStatus_DigOut_1_node12();
 
#define ID_DigOut_4_node12 549
extern int DigOut_4_node12;
int doWrite_DigOut_4_node12(int value);
int addWrite_DigOut_4_node12(int value);
int getStatus_DigOut_4_node12();
 
#define ID_DigOut_5_node12 550
extern int DigOut_5_node12;
int doWrite_DigOut_5_node12(int value);
int addWrite_DigOut_5_node12(int value);
int getStatus_DigOut_5_node12();
 
#define ID_DigOut_8_node12 551
extern int DigOut_8_node12;
int doWrite_DigOut_8_node12(int value);
int addWrite_DigOut_8_node12(int value);
int getStatus_DigOut_8_node12();
 
#define ID_latency_12_ms 553
extern int32_t latency_12_ms;
int doWrite_latency_12_ms(int32_t value);
int addWrite_latency_12_ms(int32_t value);
int getStatus_latency_12_ms();
 
#define ID_min_latency_12_m 554
extern int32_t min_latency_12_m;
int doWrite_min_latency_12_m(int32_t value);
int addWrite_min_latency_12_m(int32_t value);
int getStatus_min_latency_12_m();
 
#define ID_max_latency_12_m 555
extern int32_t max_latency_12_m;
int doWrite_max_latency_12_m(int32_t value);
int addWrite_max_latency_12_m(int32_t value);
int getStatus_max_latency_12_m();
 
#define ID_errors_12 557
extern int32_t errors_12;
int doWrite_errors_12(int32_t value);
int addWrite_errors_12(int32_t value);
int getStatus_errors_12();
 
#define ID_Addr_node13 560
extern u_int16_t Addr_node13;
int doWrite_Addr_node13(u_int16_t value);
int addWrite_Addr_node13(u_int16_t value);
int getStatus_Addr_node13();
 
#define ID_Life_node13 561
extern u_int16_t Life_node13;
int doWrite_Life_node13(u_int16_t value);
int addWrite_Life_node13(u_int16_t value);
int getStatus_Life_node13();
 
#define ID_AnInCnf_1_node13 562
extern u_int16_t AnInCnf_1_node13;
int doWrite_AnInCnf_1_node13(u_int16_t value);
int addWrite_AnInCnf_1_node13(u_int16_t value);
int getStatus_AnInCnf_1_node13();
 
#define ID_AnInCnf_2_node13 563
extern u_int16_t AnInCnf_2_node13;
int doWrite_AnInCnf_2_node13(u_int16_t value);
int addWrite_AnInCnf_2_node13(u_int16_t value);
int getStatus_AnInCnf_2_node13();
 
#define ID_ValAi1_node13 564
extern int16_t ValAi1_node13;
int doWrite_ValAi1_node13(int16_t value);
int addWrite_ValAi1_node13(int16_t value);
int getStatus_ValAi1_node13();
 
#define ID_ValAi2_node13 565
extern int16_t ValAi2_node13;
int doWrite_ValAi2_node13(int16_t value);
int addWrite_ValAi2_node13(int16_t value);
int getStatus_ValAi2_node13();
 
#define ID_DigDir_1_node13 566
extern int DigDir_1_node13;
int doWrite_DigDir_1_node13(int value);
int addWrite_DigDir_1_node13(int value);
int getStatus_DigDir_1_node13();
 
#define ID_DigDir_2_node13 567
extern int DigDir_2_node13;
int doWrite_DigDir_2_node13(int value);
int addWrite_DigDir_2_node13(int value);
int getStatus_DigDir_2_node13();
 
#define ID_DigDir_3_node13 568
extern int DigDir_3_node13;
int doWrite_DigDir_3_node13(int value);
int addWrite_DigDir_3_node13(int value);
int getStatus_DigDir_3_node13();
 
#define ID_DigDir_4_node13 569
extern int DigDir_4_node13;
int doWrite_DigDir_4_node13(int value);
int addWrite_DigDir_4_node13(int value);
int getStatus_DigDir_4_node13();
 
#define ID_DigDir_5_node13 570
extern int DigDir_5_node13;
int doWrite_DigDir_5_node13(int value);
int addWrite_DigDir_5_node13(int value);
int getStatus_DigDir_5_node13();
 
#define ID_DigDir_6_node13 571
extern int DigDir_6_node13;
int doWrite_DigDir_6_node13(int value);
int addWrite_DigDir_6_node13(int value);
int getStatus_DigDir_6_node13();
 
#define ID_DigDir_7_node13 572
extern int DigDir_7_node13;
int doWrite_DigDir_7_node13(int value);
int addWrite_DigDir_7_node13(int value);
int getStatus_DigDir_7_node13();
 
#define ID_DigDir_8_node13 573
extern int DigDir_8_node13;
int doWrite_DigDir_8_node13(int value);
int addWrite_DigDir_8_node13(int value);
int getStatus_DigDir_8_node13();
 
#define ID_DigIn_2_node13 574
extern int DigIn_2_node13;
int doWrite_DigIn_2_node13(int value);
int addWrite_DigIn_2_node13(int value);
int getStatus_DigIn_2_node13();
 
#define ID_DigIn_3_node13 575
extern int DigIn_3_node13;
int doWrite_DigIn_3_node13(int value);
int addWrite_DigIn_3_node13(int value);
int getStatus_DigIn_3_node13();
 
#define ID_DigIn_6_node13 576
extern int DigIn_6_node13;
int doWrite_DigIn_6_node13(int value);
int addWrite_DigIn_6_node13(int value);
int getStatus_DigIn_6_node13();
 
#define ID_DigIn_7_node13 577
extern int DigIn_7_node13;
int doWrite_DigIn_7_node13(int value);
int addWrite_DigIn_7_node13(int value);
int getStatus_DigIn_7_node13();
 
#define ID_DigOut_1_node13 578
extern int DigOut_1_node13;
int doWrite_DigOut_1_node13(int value);
int addWrite_DigOut_1_node13(int value);
int getStatus_DigOut_1_node13();
 
#define ID_DigOut_4_node13 579
extern int DigOut_4_node13;
int doWrite_DigOut_4_node13(int value);
int addWrite_DigOut_4_node13(int value);
int getStatus_DigOut_4_node13();
 
#define ID_DigOut_5_node13 580
extern int DigOut_5_node13;
int doWrite_DigOut_5_node13(int value);
int addWrite_DigOut_5_node13(int value);
int getStatus_DigOut_5_node13();
 
#define ID_DigOut_8_node13 581
extern int DigOut_8_node13;
int doWrite_DigOut_8_node13(int value);
int addWrite_DigOut_8_node13(int value);
int getStatus_DigOut_8_node13();
 
#define ID_latency_13_ms 583
extern int32_t latency_13_ms;
int doWrite_latency_13_ms(int32_t value);
int addWrite_latency_13_ms(int32_t value);
int getStatus_latency_13_ms();
 
#define ID_min_latency_13_m 584
extern int32_t min_latency_13_m;
int doWrite_min_latency_13_m(int32_t value);
int addWrite_min_latency_13_m(int32_t value);
int getStatus_min_latency_13_m();
 
#define ID_max_latency_13_m 585
extern int32_t max_latency_13_m;
int doWrite_max_latency_13_m(int32_t value);
int addWrite_max_latency_13_m(int32_t value);
int getStatus_max_latency_13_m();
 
#define ID_errors_13 587
extern int32_t errors_13;
int doWrite_errors_13(int32_t value);
int addWrite_errors_13(int32_t value);
int getStatus_errors_13();
 
#define ID_Addr_node14 590
extern u_int16_t Addr_node14;
int doWrite_Addr_node14(u_int16_t value);
int addWrite_Addr_node14(u_int16_t value);
int getStatus_Addr_node14();
 
#define ID_Life_node14 591
extern u_int16_t Life_node14;
int doWrite_Life_node14(u_int16_t value);
int addWrite_Life_node14(u_int16_t value);
int getStatus_Life_node14();
 
#define ID_AnInCnf_1_node14 592
extern u_int16_t AnInCnf_1_node14;
int doWrite_AnInCnf_1_node14(u_int16_t value);
int addWrite_AnInCnf_1_node14(u_int16_t value);
int getStatus_AnInCnf_1_node14();
 
#define ID_AnInCnf_2_node14 593
extern u_int16_t AnInCnf_2_node14;
int doWrite_AnInCnf_2_node14(u_int16_t value);
int addWrite_AnInCnf_2_node14(u_int16_t value);
int getStatus_AnInCnf_2_node14();
 
#define ID_ValAi1_node14 594
extern int16_t ValAi1_node14;
int doWrite_ValAi1_node14(int16_t value);
int addWrite_ValAi1_node14(int16_t value);
int getStatus_ValAi1_node14();
 
#define ID_ValAi2_node14 595
extern int16_t ValAi2_node14;
int doWrite_ValAi2_node14(int16_t value);
int addWrite_ValAi2_node14(int16_t value);
int getStatus_ValAi2_node14();
 
#define ID_DigDir_1_node14 596
extern int DigDir_1_node14;
int doWrite_DigDir_1_node14(int value);
int addWrite_DigDir_1_node14(int value);
int getStatus_DigDir_1_node14();
 
#define ID_DigDir_2_node14 597
extern int DigDir_2_node14;
int doWrite_DigDir_2_node14(int value);
int addWrite_DigDir_2_node14(int value);
int getStatus_DigDir_2_node14();
 
#define ID_DigDir_3_node14 598
extern int DigDir_3_node14;
int doWrite_DigDir_3_node14(int value);
int addWrite_DigDir_3_node14(int value);
int getStatus_DigDir_3_node14();
 
#define ID_DigDir_4_node14 599
extern int DigDir_4_node14;
int doWrite_DigDir_4_node14(int value);
int addWrite_DigDir_4_node14(int value);
int getStatus_DigDir_4_node14();
 
#define ID_DigDir_5_node14 600
extern int DigDir_5_node14;
int doWrite_DigDir_5_node14(int value);
int addWrite_DigDir_5_node14(int value);
int getStatus_DigDir_5_node14();
 
#define ID_DigDir_6_node14 601
extern int DigDir_6_node14;
int doWrite_DigDir_6_node14(int value);
int addWrite_DigDir_6_node14(int value);
int getStatus_DigDir_6_node14();
 
#define ID_DigDir_7_node14 602
extern int DigDir_7_node14;
int doWrite_DigDir_7_node14(int value);
int addWrite_DigDir_7_node14(int value);
int getStatus_DigDir_7_node14();
 
#define ID_DigDir_8_node14 603
extern int DigDir_8_node14;
int doWrite_DigDir_8_node14(int value);
int addWrite_DigDir_8_node14(int value);
int getStatus_DigDir_8_node14();
 
#define ID_DigIn_2_node14 604
extern int DigIn_2_node14;
int doWrite_DigIn_2_node14(int value);
int addWrite_DigIn_2_node14(int value);
int getStatus_DigIn_2_node14();
 
#define ID_DigIn_3_node14 605
extern int DigIn_3_node14;
int doWrite_DigIn_3_node14(int value);
int addWrite_DigIn_3_node14(int value);
int getStatus_DigIn_3_node14();
 
#define ID_DigIn_6_node14 606
extern int DigIn_6_node14;
int doWrite_DigIn_6_node14(int value);
int addWrite_DigIn_6_node14(int value);
int getStatus_DigIn_6_node14();
 
#define ID_DigIn_7_node14 607
extern int DigIn_7_node14;
int doWrite_DigIn_7_node14(int value);
int addWrite_DigIn_7_node14(int value);
int getStatus_DigIn_7_node14();
 
#define ID_DigOut_1_node14 608
extern int DigOut_1_node14;
int doWrite_DigOut_1_node14(int value);
int addWrite_DigOut_1_node14(int value);
int getStatus_DigOut_1_node14();
 
#define ID_DigOut_4_node14 609
extern int DigOut_4_node14;
int doWrite_DigOut_4_node14(int value);
int addWrite_DigOut_4_node14(int value);
int getStatus_DigOut_4_node14();
 
#define ID_DigOut_5_node14 610
extern int DigOut_5_node14;
int doWrite_DigOut_5_node14(int value);
int addWrite_DigOut_5_node14(int value);
int getStatus_DigOut_5_node14();
 
#define ID_DigOut_8_node14 611
extern int DigOut_8_node14;
int doWrite_DigOut_8_node14(int value);
int addWrite_DigOut_8_node14(int value);
int getStatus_DigOut_8_node14();
 
#define ID_latency_14_ms 613
extern int32_t latency_14_ms;
int doWrite_latency_14_ms(int32_t value);
int addWrite_latency_14_ms(int32_t value);
int getStatus_latency_14_ms();
 
#define ID_min_latency_14_m 614
extern int32_t min_latency_14_m;
int doWrite_min_latency_14_m(int32_t value);
int addWrite_min_latency_14_m(int32_t value);
int getStatus_min_latency_14_m();
 
#define ID_max_latency_14_m 615
extern int32_t max_latency_14_m;
int doWrite_max_latency_14_m(int32_t value);
int addWrite_max_latency_14_m(int32_t value);
int getStatus_max_latency_14_m();
 
#define ID_errors_14 617
extern int32_t errors_14;
int doWrite_errors_14(int32_t value);
int addWrite_errors_14(int32_t value);
int getStatus_errors_14();
 
#define ID_Addr_node15 620
extern u_int16_t Addr_node15;
int doWrite_Addr_node15(u_int16_t value);
int addWrite_Addr_node15(u_int16_t value);
int getStatus_Addr_node15();
 
#define ID_Life_node15 621
extern u_int16_t Life_node15;
int doWrite_Life_node15(u_int16_t value);
int addWrite_Life_node15(u_int16_t value);
int getStatus_Life_node15();
 
#define ID_AnInCnf_1_node15 622
extern u_int16_t AnInCnf_1_node15;
int doWrite_AnInCnf_1_node15(u_int16_t value);
int addWrite_AnInCnf_1_node15(u_int16_t value);
int getStatus_AnInCnf_1_node15();
 
#define ID_AnInCnf_2_node15 623
extern u_int16_t AnInCnf_2_node15;
int doWrite_AnInCnf_2_node15(u_int16_t value);
int addWrite_AnInCnf_2_node15(u_int16_t value);
int getStatus_AnInCnf_2_node15();
 
#define ID_ValAi1_node15 624
extern int16_t ValAi1_node15;
int doWrite_ValAi1_node15(int16_t value);
int addWrite_ValAi1_node15(int16_t value);
int getStatus_ValAi1_node15();
 
#define ID_ValAi2_node15 625
extern int16_t ValAi2_node15;
int doWrite_ValAi2_node15(int16_t value);
int addWrite_ValAi2_node15(int16_t value);
int getStatus_ValAi2_node15();
 
#define ID_DigDir_1_node15 626
extern int DigDir_1_node15;
int doWrite_DigDir_1_node15(int value);
int addWrite_DigDir_1_node15(int value);
int getStatus_DigDir_1_node15();
 
#define ID_DigDir_2_node15 627
extern int DigDir_2_node15;
int doWrite_DigDir_2_node15(int value);
int addWrite_DigDir_2_node15(int value);
int getStatus_DigDir_2_node15();
 
#define ID_DigDir_3_node15 628
extern int DigDir_3_node15;
int doWrite_DigDir_3_node15(int value);
int addWrite_DigDir_3_node15(int value);
int getStatus_DigDir_3_node15();
 
#define ID_DigDir_4_node15 629
extern int DigDir_4_node15;
int doWrite_DigDir_4_node15(int value);
int addWrite_DigDir_4_node15(int value);
int getStatus_DigDir_4_node15();
 
#define ID_DigDir_5_node15 630
extern int DigDir_5_node15;
int doWrite_DigDir_5_node15(int value);
int addWrite_DigDir_5_node15(int value);
int getStatus_DigDir_5_node15();
 
#define ID_DigDir_6_node15 631
extern int DigDir_6_node15;
int doWrite_DigDir_6_node15(int value);
int addWrite_DigDir_6_node15(int value);
int getStatus_DigDir_6_node15();
 
#define ID_DigDir_7_node15 632
extern int DigDir_7_node15;
int doWrite_DigDir_7_node15(int value);
int addWrite_DigDir_7_node15(int value);
int getStatus_DigDir_7_node15();
 
#define ID_DigDir_8_node15 633
extern int DigDir_8_node15;
int doWrite_DigDir_8_node15(int value);
int addWrite_DigDir_8_node15(int value);
int getStatus_DigDir_8_node15();
 
#define ID_DigIn_2_node15 634
extern int DigIn_2_node15;
int doWrite_DigIn_2_node15(int value);
int addWrite_DigIn_2_node15(int value);
int getStatus_DigIn_2_node15();
 
#define ID_DigIn_3_node15 635
extern int DigIn_3_node15;
int doWrite_DigIn_3_node15(int value);
int addWrite_DigIn_3_node15(int value);
int getStatus_DigIn_3_node15();
 
#define ID_DigIn_6_node15 636
extern int DigIn_6_node15;
int doWrite_DigIn_6_node15(int value);
int addWrite_DigIn_6_node15(int value);
int getStatus_DigIn_6_node15();
 
#define ID_DigIn_7_node15 637
extern int DigIn_7_node15;
int doWrite_DigIn_7_node15(int value);
int addWrite_DigIn_7_node15(int value);
int getStatus_DigIn_7_node15();
 
#define ID_DigOut_1_node15 638
extern int DigOut_1_node15;
int doWrite_DigOut_1_node15(int value);
int addWrite_DigOut_1_node15(int value);
int getStatus_DigOut_1_node15();
 
#define ID_DigOut_4_node15 639
extern int DigOut_4_node15;
int doWrite_DigOut_4_node15(int value);
int addWrite_DigOut_4_node15(int value);
int getStatus_DigOut_4_node15();
 
#define ID_DigOut_5_node15 640
extern int DigOut_5_node15;
int doWrite_DigOut_5_node15(int value);
int addWrite_DigOut_5_node15(int value);
int getStatus_DigOut_5_node15();
 
#define ID_DigOut_8_node15 641
extern int DigOut_8_node15;
int doWrite_DigOut_8_node15(int value);
int addWrite_DigOut_8_node15(int value);
int getStatus_DigOut_8_node15();
 
#define ID_latency_15_ms 643
extern int32_t latency_15_ms;
int doWrite_latency_15_ms(int32_t value);
int addWrite_latency_15_ms(int32_t value);
int getStatus_latency_15_ms();
 
#define ID_min_latency_15_m 644
extern int32_t min_latency_15_m;
int doWrite_min_latency_15_m(int32_t value);
int addWrite_min_latency_15_m(int32_t value);
int getStatus_min_latency_15_m();
 
#define ID_max_latency_15_m 645
extern int32_t max_latency_15_m;
int doWrite_max_latency_15_m(int32_t value);
int addWrite_max_latency_15_m(int32_t value);
int getStatus_max_latency_15_m();
 
#define ID_errors_15 647
extern int32_t errors_15;
int doWrite_errors_15(int32_t value);
int addWrite_errors_15(int32_t value);
int getStatus_errors_15();
 
#define ID_Addr_node16 650
extern u_int16_t Addr_node16;
int doWrite_Addr_node16(u_int16_t value);
int addWrite_Addr_node16(u_int16_t value);
int getStatus_Addr_node16();
 
#define ID_Life_node16 651
extern u_int16_t Life_node16;
int doWrite_Life_node16(u_int16_t value);
int addWrite_Life_node16(u_int16_t value);
int getStatus_Life_node16();
 
#define ID_AnInCnf_1_node16 652
extern u_int16_t AnInCnf_1_node16;
int doWrite_AnInCnf_1_node16(u_int16_t value);
int addWrite_AnInCnf_1_node16(u_int16_t value);
int getStatus_AnInCnf_1_node16();
 
#define ID_AnInCnf_2_node16 653
extern u_int16_t AnInCnf_2_node16;
int doWrite_AnInCnf_2_node16(u_int16_t value);
int addWrite_AnInCnf_2_node16(u_int16_t value);
int getStatus_AnInCnf_2_node16();
 
#define ID_ValAi1_node16 654
extern int16_t ValAi1_node16;
int doWrite_ValAi1_node16(int16_t value);
int addWrite_ValAi1_node16(int16_t value);
int getStatus_ValAi1_node16();
 
#define ID_ValAi2_node16 655
extern int16_t ValAi2_node16;
int doWrite_ValAi2_node16(int16_t value);
int addWrite_ValAi2_node16(int16_t value);
int getStatus_ValAi2_node16();
 
#define ID_DigDir_1_node16 656
extern int DigDir_1_node16;
int doWrite_DigDir_1_node16(int value);
int addWrite_DigDir_1_node16(int value);
int getStatus_DigDir_1_node16();
 
#define ID_DigDir_2_node16 657
extern int DigDir_2_node16;
int doWrite_DigDir_2_node16(int value);
int addWrite_DigDir_2_node16(int value);
int getStatus_DigDir_2_node16();
 
#define ID_DigDir_3_node16 658
extern int DigDir_3_node16;
int doWrite_DigDir_3_node16(int value);
int addWrite_DigDir_3_node16(int value);
int getStatus_DigDir_3_node16();
 
#define ID_DigDir_4_node16 659
extern int DigDir_4_node16;
int doWrite_DigDir_4_node16(int value);
int addWrite_DigDir_4_node16(int value);
int getStatus_DigDir_4_node16();
 
#define ID_DigDir_5_node16 660
extern int DigDir_5_node16;
int doWrite_DigDir_5_node16(int value);
int addWrite_DigDir_5_node16(int value);
int getStatus_DigDir_5_node16();
 
#define ID_DigDir_6_node16 661
extern int DigDir_6_node16;
int doWrite_DigDir_6_node16(int value);
int addWrite_DigDir_6_node16(int value);
int getStatus_DigDir_6_node16();
 
#define ID_DigDir_7_node16 662
extern int DigDir_7_node16;
int doWrite_DigDir_7_node16(int value);
int addWrite_DigDir_7_node16(int value);
int getStatus_DigDir_7_node16();
 
#define ID_DigDir_8_node16 663
extern int DigDir_8_node16;
int doWrite_DigDir_8_node16(int value);
int addWrite_DigDir_8_node16(int value);
int getStatus_DigDir_8_node16();
 
#define ID_DigIn_2_node16 664
extern int DigIn_2_node16;
int doWrite_DigIn_2_node16(int value);
int addWrite_DigIn_2_node16(int value);
int getStatus_DigIn_2_node16();
 
#define ID_DigIn_3_node16 665
extern int DigIn_3_node16;
int doWrite_DigIn_3_node16(int value);
int addWrite_DigIn_3_node16(int value);
int getStatus_DigIn_3_node16();
 
#define ID_DigIn_6_node16 666
extern int DigIn_6_node16;
int doWrite_DigIn_6_node16(int value);
int addWrite_DigIn_6_node16(int value);
int getStatus_DigIn_6_node16();
 
#define ID_DigIn_7_node16 667
extern int DigIn_7_node16;
int doWrite_DigIn_7_node16(int value);
int addWrite_DigIn_7_node16(int value);
int getStatus_DigIn_7_node16();
 
#define ID_DigOut_1_node16 668
extern int DigOut_1_node16;
int doWrite_DigOut_1_node16(int value);
int addWrite_DigOut_1_node16(int value);
int getStatus_DigOut_1_node16();
 
#define ID_DigOut_4_node16 669
extern int DigOut_4_node16;
int doWrite_DigOut_4_node16(int value);
int addWrite_DigOut_4_node16(int value);
int getStatus_DigOut_4_node16();
 
#define ID_DigOut_5_node16 670
extern int DigOut_5_node16;
int doWrite_DigOut_5_node16(int value);
int addWrite_DigOut_5_node16(int value);
int getStatus_DigOut_5_node16();
 
#define ID_DigOut_8_node16 671
extern int DigOut_8_node16;
int doWrite_DigOut_8_node16(int value);
int addWrite_DigOut_8_node16(int value);
int getStatus_DigOut_8_node16();
 
#define ID_latency_16_ms 673
extern int32_t latency_16_ms;
int doWrite_latency_16_ms(int32_t value);
int addWrite_latency_16_ms(int32_t value);
int getStatus_latency_16_ms();
 
#define ID_min_latency_16_m 674
extern int32_t min_latency_16_m;
int doWrite_min_latency_16_m(int32_t value);
int addWrite_min_latency_16_m(int32_t value);
int getStatus_min_latency_16_m();
 
#define ID_max_latency_16_m 675
extern int32_t max_latency_16_m;
int doWrite_max_latency_16_m(int32_t value);
int addWrite_max_latency_16_m(int32_t value);
int getStatus_max_latency_16_m();
 
#define ID_errors_16 677
extern int32_t errors_16;
int doWrite_errors_16(int32_t value);
int addWrite_errors_16(int32_t value);
int getStatus_errors_16();
 
#define ID_Addr_node17 680
extern u_int16_t Addr_node17;
int doWrite_Addr_node17(u_int16_t value);
int addWrite_Addr_node17(u_int16_t value);
int getStatus_Addr_node17();
 
#define ID_Life_node17 681
extern u_int16_t Life_node17;
int doWrite_Life_node17(u_int16_t value);
int addWrite_Life_node17(u_int16_t value);
int getStatus_Life_node17();
 
#define ID_AnInCnf_1_node17 682
extern u_int16_t AnInCnf_1_node17;
int doWrite_AnInCnf_1_node17(u_int16_t value);
int addWrite_AnInCnf_1_node17(u_int16_t value);
int getStatus_AnInCnf_1_node17();
 
#define ID_AnInCnf_2_node17 683
extern u_int16_t AnInCnf_2_node17;
int doWrite_AnInCnf_2_node17(u_int16_t value);
int addWrite_AnInCnf_2_node17(u_int16_t value);
int getStatus_AnInCnf_2_node17();
 
#define ID_ValAi1_node17 684
extern int16_t ValAi1_node17;
int doWrite_ValAi1_node17(int16_t value);
int addWrite_ValAi1_node17(int16_t value);
int getStatus_ValAi1_node17();
 
#define ID_ValAi2_node17 685
extern int16_t ValAi2_node17;
int doWrite_ValAi2_node17(int16_t value);
int addWrite_ValAi2_node17(int16_t value);
int getStatus_ValAi2_node17();
 
#define ID_DigDir_1_node17 686
extern int DigDir_1_node17;
int doWrite_DigDir_1_node17(int value);
int addWrite_DigDir_1_node17(int value);
int getStatus_DigDir_1_node17();
 
#define ID_DigDir_2_node17 687
extern int DigDir_2_node17;
int doWrite_DigDir_2_node17(int value);
int addWrite_DigDir_2_node17(int value);
int getStatus_DigDir_2_node17();
 
#define ID_DigDir_3_node17 688
extern int DigDir_3_node17;
int doWrite_DigDir_3_node17(int value);
int addWrite_DigDir_3_node17(int value);
int getStatus_DigDir_3_node17();
 
#define ID_DigDir_4_node17 689
extern int DigDir_4_node17;
int doWrite_DigDir_4_node17(int value);
int addWrite_DigDir_4_node17(int value);
int getStatus_DigDir_4_node17();
 
#define ID_DigDir_5_node17 690
extern int DigDir_5_node17;
int doWrite_DigDir_5_node17(int value);
int addWrite_DigDir_5_node17(int value);
int getStatus_DigDir_5_node17();
 
#define ID_DigDir_6_node17 691
extern int DigDir_6_node17;
int doWrite_DigDir_6_node17(int value);
int addWrite_DigDir_6_node17(int value);
int getStatus_DigDir_6_node17();
 
#define ID_DigDir_7_node17 692
extern int DigDir_7_node17;
int doWrite_DigDir_7_node17(int value);
int addWrite_DigDir_7_node17(int value);
int getStatus_DigDir_7_node17();
 
#define ID_DigDir_8_node17 693
extern int DigDir_8_node17;
int doWrite_DigDir_8_node17(int value);
int addWrite_DigDir_8_node17(int value);
int getStatus_DigDir_8_node17();
 
#define ID_DigIn_2_node17 694
extern int DigIn_2_node17;
int doWrite_DigIn_2_node17(int value);
int addWrite_DigIn_2_node17(int value);
int getStatus_DigIn_2_node17();
 
#define ID_DigIn_3_node17 695
extern int DigIn_3_node17;
int doWrite_DigIn_3_node17(int value);
int addWrite_DigIn_3_node17(int value);
int getStatus_DigIn_3_node17();
 
#define ID_DigIn_6_node17 696
extern int DigIn_6_node17;
int doWrite_DigIn_6_node17(int value);
int addWrite_DigIn_6_node17(int value);
int getStatus_DigIn_6_node17();
 
#define ID_DigIn_7_node17 697
extern int DigIn_7_node17;
int doWrite_DigIn_7_node17(int value);
int addWrite_DigIn_7_node17(int value);
int getStatus_DigIn_7_node17();
 
#define ID_DigOut_1_node17 698
extern int DigOut_1_node17;
int doWrite_DigOut_1_node17(int value);
int addWrite_DigOut_1_node17(int value);
int getStatus_DigOut_1_node17();
 
#define ID_DigOut_4_node17 699
extern int DigOut_4_node17;
int doWrite_DigOut_4_node17(int value);
int addWrite_DigOut_4_node17(int value);
int getStatus_DigOut_4_node17();
 
#define ID_DigOut_5_node17 700
extern int DigOut_5_node17;
int doWrite_DigOut_5_node17(int value);
int addWrite_DigOut_5_node17(int value);
int getStatus_DigOut_5_node17();
 
#define ID_DigOut_8_node17 701
extern int DigOut_8_node17;
int doWrite_DigOut_8_node17(int value);
int addWrite_DigOut_8_node17(int value);
int getStatus_DigOut_8_node17();
 
#define ID_latency_17_ms 703
extern int32_t latency_17_ms;
int doWrite_latency_17_ms(int32_t value);
int addWrite_latency_17_ms(int32_t value);
int getStatus_latency_17_ms();
 
#define ID_min_latency_17_m 704
extern int32_t min_latency_17_m;
int doWrite_min_latency_17_m(int32_t value);
int addWrite_min_latency_17_m(int32_t value);
int getStatus_min_latency_17_m();
 
#define ID_max_latency_17_m 705
extern int32_t max_latency_17_m;
int doWrite_max_latency_17_m(int32_t value);
int addWrite_max_latency_17_m(int32_t value);
int getStatus_max_latency_17_m();
 
#define ID_errors_17 707
extern int32_t errors_17;
int doWrite_errors_17(int32_t value);
int addWrite_errors_17(int32_t value);
int getStatus_errors_17();
 
#define ID_Addr_node18 710
extern u_int16_t Addr_node18;
int doWrite_Addr_node18(u_int16_t value);
int addWrite_Addr_node18(u_int16_t value);
int getStatus_Addr_node18();
 
#define ID_Life_node18 711
extern u_int16_t Life_node18;
int doWrite_Life_node18(u_int16_t value);
int addWrite_Life_node18(u_int16_t value);
int getStatus_Life_node18();
 
#define ID_AnInCnf_1_node18 712
extern u_int16_t AnInCnf_1_node18;
int doWrite_AnInCnf_1_node18(u_int16_t value);
int addWrite_AnInCnf_1_node18(u_int16_t value);
int getStatus_AnInCnf_1_node18();
 
#define ID_AnInCnf_2_node18 713
extern u_int16_t AnInCnf_2_node18;
int doWrite_AnInCnf_2_node18(u_int16_t value);
int addWrite_AnInCnf_2_node18(u_int16_t value);
int getStatus_AnInCnf_2_node18();
 
#define ID_ValAi1_node18 714
extern int16_t ValAi1_node18;
int doWrite_ValAi1_node18(int16_t value);
int addWrite_ValAi1_node18(int16_t value);
int getStatus_ValAi1_node18();
 
#define ID_ValAi2_node18 715
extern int16_t ValAi2_node18;
int doWrite_ValAi2_node18(int16_t value);
int addWrite_ValAi2_node18(int16_t value);
int getStatus_ValAi2_node18();
 
#define ID_DigDir_1_node18 716
extern int DigDir_1_node18;
int doWrite_DigDir_1_node18(int value);
int addWrite_DigDir_1_node18(int value);
int getStatus_DigDir_1_node18();
 
#define ID_DigDir_2_node18 717
extern int DigDir_2_node18;
int doWrite_DigDir_2_node18(int value);
int addWrite_DigDir_2_node18(int value);
int getStatus_DigDir_2_node18();
 
#define ID_DigDir_3_node18 718
extern int DigDir_3_node18;
int doWrite_DigDir_3_node18(int value);
int addWrite_DigDir_3_node18(int value);
int getStatus_DigDir_3_node18();
 
#define ID_DigDir_4_node18 719
extern int DigDir_4_node18;
int doWrite_DigDir_4_node18(int value);
int addWrite_DigDir_4_node18(int value);
int getStatus_DigDir_4_node18();
 
#define ID_DigDir_5_node18 720
extern int DigDir_5_node18;
int doWrite_DigDir_5_node18(int value);
int addWrite_DigDir_5_node18(int value);
int getStatus_DigDir_5_node18();
 
#define ID_DigDir_6_node18 721
extern int DigDir_6_node18;
int doWrite_DigDir_6_node18(int value);
int addWrite_DigDir_6_node18(int value);
int getStatus_DigDir_6_node18();
 
#define ID_DigDir_7_node18 722
extern int DigDir_7_node18;
int doWrite_DigDir_7_node18(int value);
int addWrite_DigDir_7_node18(int value);
int getStatus_DigDir_7_node18();
 
#define ID_DigDir_8_node18 723
extern int DigDir_8_node18;
int doWrite_DigDir_8_node18(int value);
int addWrite_DigDir_8_node18(int value);
int getStatus_DigDir_8_node18();
 
#define ID_DigIn_2_node18 724
extern int DigIn_2_node18;
int doWrite_DigIn_2_node18(int value);
int addWrite_DigIn_2_node18(int value);
int getStatus_DigIn_2_node18();
 
#define ID_DigIn_3_node18 725
extern int DigIn_3_node18;
int doWrite_DigIn_3_node18(int value);
int addWrite_DigIn_3_node18(int value);
int getStatus_DigIn_3_node18();
 
#define ID_DigIn_6_node18 726
extern int DigIn_6_node18;
int doWrite_DigIn_6_node18(int value);
int addWrite_DigIn_6_node18(int value);
int getStatus_DigIn_6_node18();
 
#define ID_DigIn_7_node18 727
extern int DigIn_7_node18;
int doWrite_DigIn_7_node18(int value);
int addWrite_DigIn_7_node18(int value);
int getStatus_DigIn_7_node18();
 
#define ID_DigOut_1_node18 728
extern int DigOut_1_node18;
int doWrite_DigOut_1_node18(int value);
int addWrite_DigOut_1_node18(int value);
int getStatus_DigOut_1_node18();
 
#define ID_DigOut_4_node18 729
extern int DigOut_4_node18;
int doWrite_DigOut_4_node18(int value);
int addWrite_DigOut_4_node18(int value);
int getStatus_DigOut_4_node18();
 
#define ID_DigOut_5_node18 730
extern int DigOut_5_node18;
int doWrite_DigOut_5_node18(int value);
int addWrite_DigOut_5_node18(int value);
int getStatus_DigOut_5_node18();
 
#define ID_DigOut_8_node18 731
extern int DigOut_8_node18;
int doWrite_DigOut_8_node18(int value);
int addWrite_DigOut_8_node18(int value);
int getStatus_DigOut_8_node18();
 
#define ID_latency_18_ms 733
extern int32_t latency_18_ms;
int doWrite_latency_18_ms(int32_t value);
int addWrite_latency_18_ms(int32_t value);
int getStatus_latency_18_ms();
 
#define ID_min_latency_18_m 734
extern int32_t min_latency_18_m;
int doWrite_min_latency_18_m(int32_t value);
int addWrite_min_latency_18_m(int32_t value);
int getStatus_min_latency_18_m();
 
#define ID_max_latency_18_m 735
extern int32_t max_latency_18_m;
int doWrite_max_latency_18_m(int32_t value);
int addWrite_max_latency_18_m(int32_t value);
int getStatus_max_latency_18_m();
 
#define ID_errors_18 737
extern int32_t errors_18;
int doWrite_errors_18(int32_t value);
int addWrite_errors_18(int32_t value);
int getStatus_errors_18();
 
#define ID_Addr_node19 740
extern u_int16_t Addr_node19;
int doWrite_Addr_node19(u_int16_t value);
int addWrite_Addr_node19(u_int16_t value);
int getStatus_Addr_node19();
 
#define ID_Life_node19 741
extern u_int16_t Life_node19;
int doWrite_Life_node19(u_int16_t value);
int addWrite_Life_node19(u_int16_t value);
int getStatus_Life_node19();
 
#define ID_AnInCnf_1_node19 742
extern u_int16_t AnInCnf_1_node19;
int doWrite_AnInCnf_1_node19(u_int16_t value);
int addWrite_AnInCnf_1_node19(u_int16_t value);
int getStatus_AnInCnf_1_node19();
 
#define ID_AnInCnf_2_node19 743
extern u_int16_t AnInCnf_2_node19;
int doWrite_AnInCnf_2_node19(u_int16_t value);
int addWrite_AnInCnf_2_node19(u_int16_t value);
int getStatus_AnInCnf_2_node19();
 
#define ID_ValAi1_node19 744
extern int16_t ValAi1_node19;
int doWrite_ValAi1_node19(int16_t value);
int addWrite_ValAi1_node19(int16_t value);
int getStatus_ValAi1_node19();
 
#define ID_ValAi2_node19 745
extern int16_t ValAi2_node19;
int doWrite_ValAi2_node19(int16_t value);
int addWrite_ValAi2_node19(int16_t value);
int getStatus_ValAi2_node19();
 
#define ID_DigDir_1_node19 746
extern int DigDir_1_node19;
int doWrite_DigDir_1_node19(int value);
int addWrite_DigDir_1_node19(int value);
int getStatus_DigDir_1_node19();
 
#define ID_DigDir_2_node19 747
extern int DigDir_2_node19;
int doWrite_DigDir_2_node19(int value);
int addWrite_DigDir_2_node19(int value);
int getStatus_DigDir_2_node19();
 
#define ID_DigDir_3_node19 748
extern int DigDir_3_node19;
int doWrite_DigDir_3_node19(int value);
int addWrite_DigDir_3_node19(int value);
int getStatus_DigDir_3_node19();
 
#define ID_DigDir_4_node19 749
extern int DigDir_4_node19;
int doWrite_DigDir_4_node19(int value);
int addWrite_DigDir_4_node19(int value);
int getStatus_DigDir_4_node19();
 
#define ID_DigDir_5_node19 750
extern int DigDir_5_node19;
int doWrite_DigDir_5_node19(int value);
int addWrite_DigDir_5_node19(int value);
int getStatus_DigDir_5_node19();
 
#define ID_DigDir_6_node19 751
extern int DigDir_6_node19;
int doWrite_DigDir_6_node19(int value);
int addWrite_DigDir_6_node19(int value);
int getStatus_DigDir_6_node19();
 
#define ID_DigDir_7_node19 752
extern int DigDir_7_node19;
int doWrite_DigDir_7_node19(int value);
int addWrite_DigDir_7_node19(int value);
int getStatus_DigDir_7_node19();
 
#define ID_DigDir_8_node19 753
extern int DigDir_8_node19;
int doWrite_DigDir_8_node19(int value);
int addWrite_DigDir_8_node19(int value);
int getStatus_DigDir_8_node19();
 
#define ID_DigIn_2_node19 754
extern int DigIn_2_node19;
int doWrite_DigIn_2_node19(int value);
int addWrite_DigIn_2_node19(int value);
int getStatus_DigIn_2_node19();
 
#define ID_DigIn_3_node19 755
extern int DigIn_3_node19;
int doWrite_DigIn_3_node19(int value);
int addWrite_DigIn_3_node19(int value);
int getStatus_DigIn_3_node19();
 
#define ID_DigIn_6_node19 756
extern int DigIn_6_node19;
int doWrite_DigIn_6_node19(int value);
int addWrite_DigIn_6_node19(int value);
int getStatus_DigIn_6_node19();
 
#define ID_DigIn_7_node19 757
extern int DigIn_7_node19;
int doWrite_DigIn_7_node19(int value);
int addWrite_DigIn_7_node19(int value);
int getStatus_DigIn_7_node19();
 
#define ID_DigOut_1_node19 758
extern int DigOut_1_node19;
int doWrite_DigOut_1_node19(int value);
int addWrite_DigOut_1_node19(int value);
int getStatus_DigOut_1_node19();
 
#define ID_DigOut_4_node19 759
extern int DigOut_4_node19;
int doWrite_DigOut_4_node19(int value);
int addWrite_DigOut_4_node19(int value);
int getStatus_DigOut_4_node19();
 
#define ID_DigOut_5_node19 760
extern int DigOut_5_node19;
int doWrite_DigOut_5_node19(int value);
int addWrite_DigOut_5_node19(int value);
int getStatus_DigOut_5_node19();
 
#define ID_DigOut_8_node19 761
extern int DigOut_8_node19;
int doWrite_DigOut_8_node19(int value);
int addWrite_DigOut_8_node19(int value);
int getStatus_DigOut_8_node19();
 
#define ID_latency_19_ms 763
extern int32_t latency_19_ms;
int doWrite_latency_19_ms(int32_t value);
int addWrite_latency_19_ms(int32_t value);
int getStatus_latency_19_ms();
 
#define ID_min_latency_19_m 764
extern int32_t min_latency_19_m;
int doWrite_min_latency_19_m(int32_t value);
int addWrite_min_latency_19_m(int32_t value);
int getStatus_min_latency_19_m();
 
#define ID_max_latency_19_m 765
extern int32_t max_latency_19_m;
int doWrite_max_latency_19_m(int32_t value);
int addWrite_max_latency_19_m(int32_t value);
int getStatus_max_latency_19_m();
 
#define ID_errors_19 767
extern int32_t errors_19;
int doWrite_errors_19(int32_t value);
int addWrite_errors_19(int32_t value);
int getStatus_errors_19();
 
#define ID_Addr_node20 770
extern u_int16_t Addr_node20;
int doWrite_Addr_node20(u_int16_t value);
int addWrite_Addr_node20(u_int16_t value);
int getStatus_Addr_node20();
 
#define ID_Life_node20 771
extern u_int16_t Life_node20;
int doWrite_Life_node20(u_int16_t value);
int addWrite_Life_node20(u_int16_t value);
int getStatus_Life_node20();
 
#define ID_AnInCnf_1_node20 772
extern u_int16_t AnInCnf_1_node20;
int doWrite_AnInCnf_1_node20(u_int16_t value);
int addWrite_AnInCnf_1_node20(u_int16_t value);
int getStatus_AnInCnf_1_node20();
 
#define ID_AnInCnf_2_node20 773
extern u_int16_t AnInCnf_2_node20;
int doWrite_AnInCnf_2_node20(u_int16_t value);
int addWrite_AnInCnf_2_node20(u_int16_t value);
int getStatus_AnInCnf_2_node20();
 
#define ID_ValAi1_node20 774
extern int16_t ValAi1_node20;
int doWrite_ValAi1_node20(int16_t value);
int addWrite_ValAi1_node20(int16_t value);
int getStatus_ValAi1_node20();
 
#define ID_ValAi2_node20 775
extern int16_t ValAi2_node20;
int doWrite_ValAi2_node20(int16_t value);
int addWrite_ValAi2_node20(int16_t value);
int getStatus_ValAi2_node20();
 
#define ID_DigDir_1_node20 776
extern int DigDir_1_node20;
int doWrite_DigDir_1_node20(int value);
int addWrite_DigDir_1_node20(int value);
int getStatus_DigDir_1_node20();
 
#define ID_DigDir_2_node20 777
extern int DigDir_2_node20;
int doWrite_DigDir_2_node20(int value);
int addWrite_DigDir_2_node20(int value);
int getStatus_DigDir_2_node20();
 
#define ID_DigDir_3_node20 778
extern int DigDir_3_node20;
int doWrite_DigDir_3_node20(int value);
int addWrite_DigDir_3_node20(int value);
int getStatus_DigDir_3_node20();
 
#define ID_DigDir_4_node20 779
extern int DigDir_4_node20;
int doWrite_DigDir_4_node20(int value);
int addWrite_DigDir_4_node20(int value);
int getStatus_DigDir_4_node20();
 
#define ID_DigDir_5_node20 780
extern int DigDir_5_node20;
int doWrite_DigDir_5_node20(int value);
int addWrite_DigDir_5_node20(int value);
int getStatus_DigDir_5_node20();
 
#define ID_DigDir_6_node20 781
extern int DigDir_6_node20;
int doWrite_DigDir_6_node20(int value);
int addWrite_DigDir_6_node20(int value);
int getStatus_DigDir_6_node20();
 
#define ID_DigDir_7_node20 782
extern int DigDir_7_node20;
int doWrite_DigDir_7_node20(int value);
int addWrite_DigDir_7_node20(int value);
int getStatus_DigDir_7_node20();
 
#define ID_DigDir_8_node20 783
extern int DigDir_8_node20;
int doWrite_DigDir_8_node20(int value);
int addWrite_DigDir_8_node20(int value);
int getStatus_DigDir_8_node20();
 
#define ID_DigIn_2_node20 784
extern int DigIn_2_node20;
int doWrite_DigIn_2_node20(int value);
int addWrite_DigIn_2_node20(int value);
int getStatus_DigIn_2_node20();
 
#define ID_DigIn_3_node20 785
extern int DigIn_3_node20;
int doWrite_DigIn_3_node20(int value);
int addWrite_DigIn_3_node20(int value);
int getStatus_DigIn_3_node20();
 
#define ID_DigIn_6_node20 786
extern int DigIn_6_node20;
int doWrite_DigIn_6_node20(int value);
int addWrite_DigIn_6_node20(int value);
int getStatus_DigIn_6_node20();
 
#define ID_DigIn_7_node20 787
extern int DigIn_7_node20;
int doWrite_DigIn_7_node20(int value);
int addWrite_DigIn_7_node20(int value);
int getStatus_DigIn_7_node20();
 
#define ID_DigOut_1_node20 788
extern int DigOut_1_node20;
int doWrite_DigOut_1_node20(int value);
int addWrite_DigOut_1_node20(int value);
int getStatus_DigOut_1_node20();
 
#define ID_DigOut_4_node20 789
extern int DigOut_4_node20;
int doWrite_DigOut_4_node20(int value);
int addWrite_DigOut_4_node20(int value);
int getStatus_DigOut_4_node20();
 
#define ID_DigOut_5_node20 790
extern int DigOut_5_node20;
int doWrite_DigOut_5_node20(int value);
int addWrite_DigOut_5_node20(int value);
int getStatus_DigOut_5_node20();
 
#define ID_DigOut_8_node20 791
extern int DigOut_8_node20;
int doWrite_DigOut_8_node20(int value);
int addWrite_DigOut_8_node20(int value);
int getStatus_DigOut_8_node20();
 
#define ID_latency_20_ms 793
extern int32_t latency_20_ms;
int doWrite_latency_20_ms(int32_t value);
int addWrite_latency_20_ms(int32_t value);
int getStatus_latency_20_ms();
 
#define ID_min_latency_20_m 794
extern int32_t min_latency_20_m;
int doWrite_min_latency_20_m(int32_t value);
int addWrite_min_latency_20_m(int32_t value);
int getStatus_min_latency_20_m();
 
#define ID_max_latency_20_m 795
extern int32_t max_latency_20_m;
int doWrite_max_latency_20_m(int32_t value);
int addWrite_max_latency_20_m(int32_t value);
int getStatus_max_latency_20_m();
 
#define ID_errors_20 797
extern int32_t errors_20;
int doWrite_errors_20(int32_t value);
int addWrite_errors_20(int32_t value);
int getStatus_errors_20();
 
#define ID_Addr_node21 800
extern u_int16_t Addr_node21;
int doWrite_Addr_node21(u_int16_t value);
int addWrite_Addr_node21(u_int16_t value);
int getStatus_Addr_node21();
 
#define ID_Life_node21 801
extern u_int16_t Life_node21;
int doWrite_Life_node21(u_int16_t value);
int addWrite_Life_node21(u_int16_t value);
int getStatus_Life_node21();
 
#define ID_AnInCnf_1_node21 802
extern u_int16_t AnInCnf_1_node21;
int doWrite_AnInCnf_1_node21(u_int16_t value);
int addWrite_AnInCnf_1_node21(u_int16_t value);
int getStatus_AnInCnf_1_node21();
 
#define ID_AnInCnf_2_node21 803
extern u_int16_t AnInCnf_2_node21;
int doWrite_AnInCnf_2_node21(u_int16_t value);
int addWrite_AnInCnf_2_node21(u_int16_t value);
int getStatus_AnInCnf_2_node21();
 
#define ID_ValAi1_node21 804
extern int16_t ValAi1_node21;
int doWrite_ValAi1_node21(int16_t value);
int addWrite_ValAi1_node21(int16_t value);
int getStatus_ValAi1_node21();
 
#define ID_ValAi2_node21 805
extern int16_t ValAi2_node21;
int doWrite_ValAi2_node21(int16_t value);
int addWrite_ValAi2_node21(int16_t value);
int getStatus_ValAi2_node21();
 
#define ID_DigDir_1_node21 806
extern int DigDir_1_node21;
int doWrite_DigDir_1_node21(int value);
int addWrite_DigDir_1_node21(int value);
int getStatus_DigDir_1_node21();
 
#define ID_DigDir_2_node21 807
extern int DigDir_2_node21;
int doWrite_DigDir_2_node21(int value);
int addWrite_DigDir_2_node21(int value);
int getStatus_DigDir_2_node21();
 
#define ID_DigDir_3_node21 808
extern int DigDir_3_node21;
int doWrite_DigDir_3_node21(int value);
int addWrite_DigDir_3_node21(int value);
int getStatus_DigDir_3_node21();
 
#define ID_DigDir_4_node21 809
extern int DigDir_4_node21;
int doWrite_DigDir_4_node21(int value);
int addWrite_DigDir_4_node21(int value);
int getStatus_DigDir_4_node21();
 
#define ID_DigDir_5_node21 810
extern int DigDir_5_node21;
int doWrite_DigDir_5_node21(int value);
int addWrite_DigDir_5_node21(int value);
int getStatus_DigDir_5_node21();
 
#define ID_DigDir_6_node21 811
extern int DigDir_6_node21;
int doWrite_DigDir_6_node21(int value);
int addWrite_DigDir_6_node21(int value);
int getStatus_DigDir_6_node21();
 
#define ID_DigDir_7_node21 812
extern int DigDir_7_node21;
int doWrite_DigDir_7_node21(int value);
int addWrite_DigDir_7_node21(int value);
int getStatus_DigDir_7_node21();
 
#define ID_DigDir_8_node21 813
extern int DigDir_8_node21;
int doWrite_DigDir_8_node21(int value);
int addWrite_DigDir_8_node21(int value);
int getStatus_DigDir_8_node21();
 
#define ID_DigIn_2_node21 814
extern int DigIn_2_node21;
int doWrite_DigIn_2_node21(int value);
int addWrite_DigIn_2_node21(int value);
int getStatus_DigIn_2_node21();
 
#define ID_DigIn_3_node21 815
extern int DigIn_3_node21;
int doWrite_DigIn_3_node21(int value);
int addWrite_DigIn_3_node21(int value);
int getStatus_DigIn_3_node21();
 
#define ID_DigIn_6_node21 816
extern int DigIn_6_node21;
int doWrite_DigIn_6_node21(int value);
int addWrite_DigIn_6_node21(int value);
int getStatus_DigIn_6_node21();
 
#define ID_DigIn_7_node21 817
extern int DigIn_7_node21;
int doWrite_DigIn_7_node21(int value);
int addWrite_DigIn_7_node21(int value);
int getStatus_DigIn_7_node21();
 
#define ID_DigOut_1_node21 818
extern int DigOut_1_node21;
int doWrite_DigOut_1_node21(int value);
int addWrite_DigOut_1_node21(int value);
int getStatus_DigOut_1_node21();
 
#define ID_DigOut_4_node21 819
extern int DigOut_4_node21;
int doWrite_DigOut_4_node21(int value);
int addWrite_DigOut_4_node21(int value);
int getStatus_DigOut_4_node21();
 
#define ID_DigOut_5_node21 820
extern int DigOut_5_node21;
int doWrite_DigOut_5_node21(int value);
int addWrite_DigOut_5_node21(int value);
int getStatus_DigOut_5_node21();
 
#define ID_DigOut_8_node21 821
extern int DigOut_8_node21;
int doWrite_DigOut_8_node21(int value);
int addWrite_DigOut_8_node21(int value);
int getStatus_DigOut_8_node21();
 
#define ID_latency_21_ms 823
extern int32_t latency_21_ms;
int doWrite_latency_21_ms(int32_t value);
int addWrite_latency_21_ms(int32_t value);
int getStatus_latency_21_ms();
 
#define ID_min_latency_21_m 824
extern int32_t min_latency_21_m;
int doWrite_min_latency_21_m(int32_t value);
int addWrite_min_latency_21_m(int32_t value);
int getStatus_min_latency_21_m();
 
#define ID_max_latency_21_m 825
extern int32_t max_latency_21_m;
int doWrite_max_latency_21_m(int32_t value);
int addWrite_max_latency_21_m(int32_t value);
int getStatus_max_latency_21_m();
 
#define ID_errors_21 827
extern int32_t errors_21;
int doWrite_errors_21(int32_t value);
int addWrite_errors_21(int32_t value);
int getStatus_errors_21();
 
#define ID_Addr_node22 830
extern u_int16_t Addr_node22;
int doWrite_Addr_node22(u_int16_t value);
int addWrite_Addr_node22(u_int16_t value);
int getStatus_Addr_node22();
 
#define ID_Life_node22 831
extern u_int16_t Life_node22;
int doWrite_Life_node22(u_int16_t value);
int addWrite_Life_node22(u_int16_t value);
int getStatus_Life_node22();
 
#define ID_AnInCnf_1_node22 832
extern u_int16_t AnInCnf_1_node22;
int doWrite_AnInCnf_1_node22(u_int16_t value);
int addWrite_AnInCnf_1_node22(u_int16_t value);
int getStatus_AnInCnf_1_node22();
 
#define ID_AnInCnf_2_node22 833
extern u_int16_t AnInCnf_2_node22;
int doWrite_AnInCnf_2_node22(u_int16_t value);
int addWrite_AnInCnf_2_node22(u_int16_t value);
int getStatus_AnInCnf_2_node22();
 
#define ID_ValAi1_node22 834
extern int16_t ValAi1_node22;
int doWrite_ValAi1_node22(int16_t value);
int addWrite_ValAi1_node22(int16_t value);
int getStatus_ValAi1_node22();
 
#define ID_ValAi2_node22 835
extern int16_t ValAi2_node22;
int doWrite_ValAi2_node22(int16_t value);
int addWrite_ValAi2_node22(int16_t value);
int getStatus_ValAi2_node22();
 
#define ID_DigDir_1_node22 836
extern int DigDir_1_node22;
int doWrite_DigDir_1_node22(int value);
int addWrite_DigDir_1_node22(int value);
int getStatus_DigDir_1_node22();
 
#define ID_DigDir_2_node22 837
extern int DigDir_2_node22;
int doWrite_DigDir_2_node22(int value);
int addWrite_DigDir_2_node22(int value);
int getStatus_DigDir_2_node22();
 
#define ID_DigDir_3_node22 838
extern int DigDir_3_node22;
int doWrite_DigDir_3_node22(int value);
int addWrite_DigDir_3_node22(int value);
int getStatus_DigDir_3_node22();
 
#define ID_DigDir_4_node22 839
extern int DigDir_4_node22;
int doWrite_DigDir_4_node22(int value);
int addWrite_DigDir_4_node22(int value);
int getStatus_DigDir_4_node22();
 
#define ID_DigDir_5_node22 840
extern int DigDir_5_node22;
int doWrite_DigDir_5_node22(int value);
int addWrite_DigDir_5_node22(int value);
int getStatus_DigDir_5_node22();
 
#define ID_DigDir_6_node22 841
extern int DigDir_6_node22;
int doWrite_DigDir_6_node22(int value);
int addWrite_DigDir_6_node22(int value);
int getStatus_DigDir_6_node22();
 
#define ID_DigDir_7_node22 842
extern int DigDir_7_node22;
int doWrite_DigDir_7_node22(int value);
int addWrite_DigDir_7_node22(int value);
int getStatus_DigDir_7_node22();
 
#define ID_DigDir_8_node22 843
extern int DigDir_8_node22;
int doWrite_DigDir_8_node22(int value);
int addWrite_DigDir_8_node22(int value);
int getStatus_DigDir_8_node22();
 
#define ID_DigIn_2_node22 844
extern int DigIn_2_node22;
int doWrite_DigIn_2_node22(int value);
int addWrite_DigIn_2_node22(int value);
int getStatus_DigIn_2_node22();
 
#define ID_DigIn_3_node22 845
extern int DigIn_3_node22;
int doWrite_DigIn_3_node22(int value);
int addWrite_DigIn_3_node22(int value);
int getStatus_DigIn_3_node22();
 
#define ID_DigIn_6_node22 846
extern int DigIn_6_node22;
int doWrite_DigIn_6_node22(int value);
int addWrite_DigIn_6_node22(int value);
int getStatus_DigIn_6_node22();
 
#define ID_DigIn_7_node22 847
extern int DigIn_7_node22;
int doWrite_DigIn_7_node22(int value);
int addWrite_DigIn_7_node22(int value);
int getStatus_DigIn_7_node22();
 
#define ID_DigOut_1_node22 848
extern int DigOut_1_node22;
int doWrite_DigOut_1_node22(int value);
int addWrite_DigOut_1_node22(int value);
int getStatus_DigOut_1_node22();
 
#define ID_DigOut_4_node22 849
extern int DigOut_4_node22;
int doWrite_DigOut_4_node22(int value);
int addWrite_DigOut_4_node22(int value);
int getStatus_DigOut_4_node22();
 
#define ID_DigOut_5_node22 850
extern int DigOut_5_node22;
int doWrite_DigOut_5_node22(int value);
int addWrite_DigOut_5_node22(int value);
int getStatus_DigOut_5_node22();
 
#define ID_DigOut_8_node22 851
extern int DigOut_8_node22;
int doWrite_DigOut_8_node22(int value);
int addWrite_DigOut_8_node22(int value);
int getStatus_DigOut_8_node22();
 
#define ID_latency_22_ms 853
extern int32_t latency_22_ms;
int doWrite_latency_22_ms(int32_t value);
int addWrite_latency_22_ms(int32_t value);
int getStatus_latency_22_ms();
 
#define ID_min_latency_22_m 854
extern int32_t min_latency_22_m;
int doWrite_min_latency_22_m(int32_t value);
int addWrite_min_latency_22_m(int32_t value);
int getStatus_min_latency_22_m();
 
#define ID_max_latency_22_m 855
extern int32_t max_latency_22_m;
int doWrite_max_latency_22_m(int32_t value);
int addWrite_max_latency_22_m(int32_t value);
int getStatus_max_latency_22_m();
 
#define ID_errors_22 857
extern int32_t errors_22;
int doWrite_errors_22(int32_t value);
int addWrite_errors_22(int32_t value);
int getStatus_errors_22();
 
#define ID_Addr_node23 860
extern u_int16_t Addr_node23;
int doWrite_Addr_node23(u_int16_t value);
int addWrite_Addr_node23(u_int16_t value);
int getStatus_Addr_node23();
 
#define ID_Life_node23 861
extern u_int16_t Life_node23;
int doWrite_Life_node23(u_int16_t value);
int addWrite_Life_node23(u_int16_t value);
int getStatus_Life_node23();
 
#define ID_AnInCnf_1_node23 862
extern u_int16_t AnInCnf_1_node23;
int doWrite_AnInCnf_1_node23(u_int16_t value);
int addWrite_AnInCnf_1_node23(u_int16_t value);
int getStatus_AnInCnf_1_node23();
 
#define ID_AnInCnf_2_node23 863
extern u_int16_t AnInCnf_2_node23;
int doWrite_AnInCnf_2_node23(u_int16_t value);
int addWrite_AnInCnf_2_node23(u_int16_t value);
int getStatus_AnInCnf_2_node23();
 
#define ID_ValAi1_node23 864
extern int16_t ValAi1_node23;
int doWrite_ValAi1_node23(int16_t value);
int addWrite_ValAi1_node23(int16_t value);
int getStatus_ValAi1_node23();
 
#define ID_ValAi2_node23 865
extern int16_t ValAi2_node23;
int doWrite_ValAi2_node23(int16_t value);
int addWrite_ValAi2_node23(int16_t value);
int getStatus_ValAi2_node23();
 
#define ID_DigDir_1_node23 866
extern int DigDir_1_node23;
int doWrite_DigDir_1_node23(int value);
int addWrite_DigDir_1_node23(int value);
int getStatus_DigDir_1_node23();
 
#define ID_DigDir_2_node23 867
extern int DigDir_2_node23;
int doWrite_DigDir_2_node23(int value);
int addWrite_DigDir_2_node23(int value);
int getStatus_DigDir_2_node23();
 
#define ID_DigDir_3_node23 868
extern int DigDir_3_node23;
int doWrite_DigDir_3_node23(int value);
int addWrite_DigDir_3_node23(int value);
int getStatus_DigDir_3_node23();
 
#define ID_DigDir_4_node23 869
extern int DigDir_4_node23;
int doWrite_DigDir_4_node23(int value);
int addWrite_DigDir_4_node23(int value);
int getStatus_DigDir_4_node23();
 
#define ID_DigDir_5_node23 870
extern int DigDir_5_node23;
int doWrite_DigDir_5_node23(int value);
int addWrite_DigDir_5_node23(int value);
int getStatus_DigDir_5_node23();
 
#define ID_DigDir_6_node23 871
extern int DigDir_6_node23;
int doWrite_DigDir_6_node23(int value);
int addWrite_DigDir_6_node23(int value);
int getStatus_DigDir_6_node23();
 
#define ID_DigDir_7_node23 872
extern int DigDir_7_node23;
int doWrite_DigDir_7_node23(int value);
int addWrite_DigDir_7_node23(int value);
int getStatus_DigDir_7_node23();
 
#define ID_DigDir_8_node23 873
extern int DigDir_8_node23;
int doWrite_DigDir_8_node23(int value);
int addWrite_DigDir_8_node23(int value);
int getStatus_DigDir_8_node23();
 
#define ID_DigIn_2_node23 874
extern int DigIn_2_node23;
int doWrite_DigIn_2_node23(int value);
int addWrite_DigIn_2_node23(int value);
int getStatus_DigIn_2_node23();
 
#define ID_DigIn_3_node23 875
extern int DigIn_3_node23;
int doWrite_DigIn_3_node23(int value);
int addWrite_DigIn_3_node23(int value);
int getStatus_DigIn_3_node23();
 
#define ID_DigIn_6_node23 876
extern int DigIn_6_node23;
int doWrite_DigIn_6_node23(int value);
int addWrite_DigIn_6_node23(int value);
int getStatus_DigIn_6_node23();
 
#define ID_DigIn_7_node23 877
extern int DigIn_7_node23;
int doWrite_DigIn_7_node23(int value);
int addWrite_DigIn_7_node23(int value);
int getStatus_DigIn_7_node23();
 
#define ID_DigOut_1_node23 878
extern int DigOut_1_node23;
int doWrite_DigOut_1_node23(int value);
int addWrite_DigOut_1_node23(int value);
int getStatus_DigOut_1_node23();
 
#define ID_DigOut_4_node23 879
extern int DigOut_4_node23;
int doWrite_DigOut_4_node23(int value);
int addWrite_DigOut_4_node23(int value);
int getStatus_DigOut_4_node23();
 
#define ID_DigOut_5_node23 880
extern int DigOut_5_node23;
int doWrite_DigOut_5_node23(int value);
int addWrite_DigOut_5_node23(int value);
int getStatus_DigOut_5_node23();
 
#define ID_DigOut_8_node23 881
extern int DigOut_8_node23;
int doWrite_DigOut_8_node23(int value);
int addWrite_DigOut_8_node23(int value);
int getStatus_DigOut_8_node23();
 
#define ID_latency_23_ms 883
extern int32_t latency_23_ms;
int doWrite_latency_23_ms(int32_t value);
int addWrite_latency_23_ms(int32_t value);
int getStatus_latency_23_ms();
 
#define ID_min_latency_23_m 884
extern int32_t min_latency_23_m;
int doWrite_min_latency_23_m(int32_t value);
int addWrite_min_latency_23_m(int32_t value);
int getStatus_min_latency_23_m();
 
#define ID_max_latency_23_m 885
extern int32_t max_latency_23_m;
int doWrite_max_latency_23_m(int32_t value);
int addWrite_max_latency_23_m(int32_t value);
int getStatus_max_latency_23_m();
 
#define ID_errors_23 887
extern int32_t errors_23;
int doWrite_errors_23(int32_t value);
int addWrite_errors_23(int32_t value);
int getStatus_errors_23();
 
#define ID_Addr_node24 890
extern u_int16_t Addr_node24;
int doWrite_Addr_node24(u_int16_t value);
int addWrite_Addr_node24(u_int16_t value);
int getStatus_Addr_node24();
 
#define ID_Life_node24 891
extern u_int16_t Life_node24;
int doWrite_Life_node24(u_int16_t value);
int addWrite_Life_node24(u_int16_t value);
int getStatus_Life_node24();
 
#define ID_AnInCnf_1_node24 892
extern u_int16_t AnInCnf_1_node24;
int doWrite_AnInCnf_1_node24(u_int16_t value);
int addWrite_AnInCnf_1_node24(u_int16_t value);
int getStatus_AnInCnf_1_node24();
 
#define ID_AnInCnf_2_node24 893
extern u_int16_t AnInCnf_2_node24;
int doWrite_AnInCnf_2_node24(u_int16_t value);
int addWrite_AnInCnf_2_node24(u_int16_t value);
int getStatus_AnInCnf_2_node24();
 
#define ID_ValAi1_node24 894
extern int16_t ValAi1_node24;
int doWrite_ValAi1_node24(int16_t value);
int addWrite_ValAi1_node24(int16_t value);
int getStatus_ValAi1_node24();
 
#define ID_ValAi2_node24 895
extern int16_t ValAi2_node24;
int doWrite_ValAi2_node24(int16_t value);
int addWrite_ValAi2_node24(int16_t value);
int getStatus_ValAi2_node24();
 
#define ID_DigDir_1_node24 896
extern int DigDir_1_node24;
int doWrite_DigDir_1_node24(int value);
int addWrite_DigDir_1_node24(int value);
int getStatus_DigDir_1_node24();
 
#define ID_DigDir_2_node24 897
extern int DigDir_2_node24;
int doWrite_DigDir_2_node24(int value);
int addWrite_DigDir_2_node24(int value);
int getStatus_DigDir_2_node24();
 
#define ID_DigDir_3_node24 898
extern int DigDir_3_node24;
int doWrite_DigDir_3_node24(int value);
int addWrite_DigDir_3_node24(int value);
int getStatus_DigDir_3_node24();
 
#define ID_DigDir_4_node24 899
extern int DigDir_4_node24;
int doWrite_DigDir_4_node24(int value);
int addWrite_DigDir_4_node24(int value);
int getStatus_DigDir_4_node24();
 
#define ID_DigDir_5_node24 900
extern int DigDir_5_node24;
int doWrite_DigDir_5_node24(int value);
int addWrite_DigDir_5_node24(int value);
int getStatus_DigDir_5_node24();
 
#define ID_DigDir_6_node24 901
extern int DigDir_6_node24;
int doWrite_DigDir_6_node24(int value);
int addWrite_DigDir_6_node24(int value);
int getStatus_DigDir_6_node24();
 
#define ID_DigDir_7_node24 902
extern int DigDir_7_node24;
int doWrite_DigDir_7_node24(int value);
int addWrite_DigDir_7_node24(int value);
int getStatus_DigDir_7_node24();
 
#define ID_DigDir_8_node24 903
extern int DigDir_8_node24;
int doWrite_DigDir_8_node24(int value);
int addWrite_DigDir_8_node24(int value);
int getStatus_DigDir_8_node24();
 
#define ID_DigIn_2_node24 904
extern int DigIn_2_node24;
int doWrite_DigIn_2_node24(int value);
int addWrite_DigIn_2_node24(int value);
int getStatus_DigIn_2_node24();
 
#define ID_DigIn_3_node24 905
extern int DigIn_3_node24;
int doWrite_DigIn_3_node24(int value);
int addWrite_DigIn_3_node24(int value);
int getStatus_DigIn_3_node24();
 
#define ID_DigIn_6_node24 906
extern int DigIn_6_node24;
int doWrite_DigIn_6_node24(int value);
int addWrite_DigIn_6_node24(int value);
int getStatus_DigIn_6_node24();
 
#define ID_DigIn_7_node24 907
extern int DigIn_7_node24;
int doWrite_DigIn_7_node24(int value);
int addWrite_DigIn_7_node24(int value);
int getStatus_DigIn_7_node24();
 
#define ID_DigOut_1_node24 908
extern int DigOut_1_node24;
int doWrite_DigOut_1_node24(int value);
int addWrite_DigOut_1_node24(int value);
int getStatus_DigOut_1_node24();
 
#define ID_DigOut_4_node24 909
extern int DigOut_4_node24;
int doWrite_DigOut_4_node24(int value);
int addWrite_DigOut_4_node24(int value);
int getStatus_DigOut_4_node24();
 
#define ID_DigOut_5_node24 910
extern int DigOut_5_node24;
int doWrite_DigOut_5_node24(int value);
int addWrite_DigOut_5_node24(int value);
int getStatus_DigOut_5_node24();
 
#define ID_DigOut_8_node24 911
extern int DigOut_8_node24;
int doWrite_DigOut_8_node24(int value);
int addWrite_DigOut_8_node24(int value);
int getStatus_DigOut_8_node24();
 
#define ID_latency_24_ms 913
extern int32_t latency_24_ms;
int doWrite_latency_24_ms(int32_t value);
int addWrite_latency_24_ms(int32_t value);
int getStatus_latency_24_ms();
 
#define ID_min_latency_24_m 914
extern int32_t min_latency_24_m;
int doWrite_min_latency_24_m(int32_t value);
int addWrite_min_latency_24_m(int32_t value);
int getStatus_min_latency_24_m();
 
#define ID_max_latency_24_m 915
extern int32_t max_latency_24_m;
int doWrite_max_latency_24_m(int32_t value);
int addWrite_max_latency_24_m(int32_t value);
int getStatus_max_latency_24_m();
 
#define ID_errors_24 917
extern int32_t errors_24;
int doWrite_errors_24(int32_t value);
int addWrite_errors_24(int32_t value);
int getStatus_errors_24();
 
#define ID_RTU0_TYPE_PORT 5000
extern u_int32_t RTU0_TYPE_PORT;
int doWrite_RTU0_TYPE_PORT(u_int32_t value);
int addWrite_RTU0_TYPE_PORT(u_int32_t value);
int getStatus_RTU0_TYPE_PORT();
 
#define ID_RTU0_BAUDRATE 5001
extern u_int32_t RTU0_BAUDRATE;
int doWrite_RTU0_BAUDRATE(u_int32_t value);
int addWrite_RTU0_BAUDRATE(u_int32_t value);
int getStatus_RTU0_BAUDRATE();
 
#define ID_RTU0_STATUS 5002
extern u_int32_t RTU0_STATUS;
int doWrite_RTU0_STATUS(u_int32_t value);
int addWrite_RTU0_STATUS(u_int32_t value);
int getStatus_RTU0_STATUS();
 
#define ID_RTU0_READS 5003
extern u_int32_t RTU0_READS;
int doWrite_RTU0_READS(u_int32_t value);
int addWrite_RTU0_READS(u_int32_t value);
int getStatus_RTU0_READS();
 
#define ID_RTU0_WRITES 5004
extern u_int32_t RTU0_WRITES;
int doWrite_RTU0_WRITES(u_int32_t value);
int addWrite_RTU0_WRITES(u_int32_t value);
int getStatus_RTU0_WRITES();
 
#define ID_RTU0_TIMEOUTS 5005
extern u_int32_t RTU0_TIMEOUTS;
int doWrite_RTU0_TIMEOUTS(u_int32_t value);
int addWrite_RTU0_TIMEOUTS(u_int32_t value);
int getStatus_RTU0_TIMEOUTS();
 
#define ID_RTU0_COMM_ERRORS 5006
extern u_int32_t RTU0_COMM_ERRORS;
int doWrite_RTU0_COMM_ERRORS(u_int32_t value);
int addWrite_RTU0_COMM_ERRORS(u_int32_t value);
int getStatus_RTU0_COMM_ERRORS();
 
#define ID_RTU0_LAST_ERROR 5007
extern u_int32_t RTU0_LAST_ERROR;
int doWrite_RTU0_LAST_ERROR(u_int32_t value);
int addWrite_RTU0_LAST_ERROR(u_int32_t value);
int getStatus_RTU0_LAST_ERROR();
 
#define ID_RTU0_WRITE_QUEUE 5008
extern u_int32_t RTU0_WRITE_QUEUE;
int doWrite_RTU0_WRITE_QUEUE(u_int32_t value);
int addWrite_RTU0_WRITE_QUEUE(u_int32_t value);
int getStatus_RTU0_WRITE_QUEUE();
 
#define ID_RTU0_READ_QUEUE 5009
extern u_int32_t RTU0_READ_QUEUE;
int doWrite_RTU0_READ_QUEUE(u_int32_t value);
int addWrite_RTU0_READ_QUEUE(u_int32_t value);
int getStatus_RTU0_READ_QUEUE();
 
#define ID_RTU1_TYPE_PORT 5010
extern u_int32_t RTU1_TYPE_PORT;
int doWrite_RTU1_TYPE_PORT(u_int32_t value);
int addWrite_RTU1_TYPE_PORT(u_int32_t value);
int getStatus_RTU1_TYPE_PORT();
 
#define ID_RTU1_BAUDRATE 5011
extern u_int32_t RTU1_BAUDRATE;
int doWrite_RTU1_BAUDRATE(u_int32_t value);
int addWrite_RTU1_BAUDRATE(u_int32_t value);
int getStatus_RTU1_BAUDRATE();
 
#define ID_RTU1_STATUS 5012
extern u_int32_t RTU1_STATUS;
int doWrite_RTU1_STATUS(u_int32_t value);
int addWrite_RTU1_STATUS(u_int32_t value);
int getStatus_RTU1_STATUS();
 
#define ID_RTU1_READS 5013
extern u_int32_t RTU1_READS;
int doWrite_RTU1_READS(u_int32_t value);
int addWrite_RTU1_READS(u_int32_t value);
int getStatus_RTU1_READS();
 
#define ID_RTU1_WRITES 5014
extern u_int32_t RTU1_WRITES;
int doWrite_RTU1_WRITES(u_int32_t value);
int addWrite_RTU1_WRITES(u_int32_t value);
int getStatus_RTU1_WRITES();
 
#define ID_RTU1_TIMEOUTS 5015
extern u_int32_t RTU1_TIMEOUTS;
int doWrite_RTU1_TIMEOUTS(u_int32_t value);
int addWrite_RTU1_TIMEOUTS(u_int32_t value);
int getStatus_RTU1_TIMEOUTS();
 
#define ID_RTU1_COMM_ERRORS 5016
extern u_int32_t RTU1_COMM_ERRORS;
int doWrite_RTU1_COMM_ERRORS(u_int32_t value);
int addWrite_RTU1_COMM_ERRORS(u_int32_t value);
int getStatus_RTU1_COMM_ERRORS();
 
#define ID_RTU1_LAST_ERROR 5017
extern u_int32_t RTU1_LAST_ERROR;
int doWrite_RTU1_LAST_ERROR(u_int32_t value);
int addWrite_RTU1_LAST_ERROR(u_int32_t value);
int getStatus_RTU1_LAST_ERROR();
 
#define ID_RTU1_WRITE_QUEUE 5018
extern u_int32_t RTU1_WRITE_QUEUE;
int doWrite_RTU1_WRITE_QUEUE(u_int32_t value);
int addWrite_RTU1_WRITE_QUEUE(u_int32_t value);
int getStatus_RTU1_WRITE_QUEUE();
 
#define ID_RTU1_READ_QUEUE 5019
extern u_int32_t RTU1_READ_QUEUE;
int doWrite_RTU1_READ_QUEUE(u_int32_t value);
int addWrite_RTU1_READ_QUEUE(u_int32_t value);
int getStatus_RTU1_READ_QUEUE();
 
#define ID_RTU3_TYPE_PORT 5020
extern u_int32_t RTU3_TYPE_PORT;
int doWrite_RTU3_TYPE_PORT(u_int32_t value);
int addWrite_RTU3_TYPE_PORT(u_int32_t value);
int getStatus_RTU3_TYPE_PORT();
 
#define ID_RTU3_BAUDRATE 5021
extern u_int32_t RTU3_BAUDRATE;
int doWrite_RTU3_BAUDRATE(u_int32_t value);
int addWrite_RTU3_BAUDRATE(u_int32_t value);
int getStatus_RTU3_BAUDRATE();
 
#define ID_RTU3_STATUS 5022
extern u_int32_t RTU3_STATUS;
int doWrite_RTU3_STATUS(u_int32_t value);
int addWrite_RTU3_STATUS(u_int32_t value);
int getStatus_RTU3_STATUS();
 
#define ID_RTU3_READS 5023
extern u_int32_t RTU3_READS;
int doWrite_RTU3_READS(u_int32_t value);
int addWrite_RTU3_READS(u_int32_t value);
int getStatus_RTU3_READS();
 
#define ID_RTU3_WRITES 5024
extern u_int32_t RTU3_WRITES;
int doWrite_RTU3_WRITES(u_int32_t value);
int addWrite_RTU3_WRITES(u_int32_t value);
int getStatus_RTU3_WRITES();
 
#define ID_RTU3_TIMEOUTS 5025
extern u_int32_t RTU3_TIMEOUTS;
int doWrite_RTU3_TIMEOUTS(u_int32_t value);
int addWrite_RTU3_TIMEOUTS(u_int32_t value);
int getStatus_RTU3_TIMEOUTS();
 
#define ID_RTU3_COMM_ERRORS 5026
extern u_int32_t RTU3_COMM_ERRORS;
int doWrite_RTU3_COMM_ERRORS(u_int32_t value);
int addWrite_RTU3_COMM_ERRORS(u_int32_t value);
int getStatus_RTU3_COMM_ERRORS();
 
#define ID_RTU3_LAST_ERROR 5027
extern u_int32_t RTU3_LAST_ERROR;
int doWrite_RTU3_LAST_ERROR(u_int32_t value);
int addWrite_RTU3_LAST_ERROR(u_int32_t value);
int getStatus_RTU3_LAST_ERROR();
 
#define ID_RTU3_WRITE_QUEUE 5028
extern u_int32_t RTU3_WRITE_QUEUE;
int doWrite_RTU3_WRITE_QUEUE(u_int32_t value);
int addWrite_RTU3_WRITE_QUEUE(u_int32_t value);
int getStatus_RTU3_WRITE_QUEUE();
 
#define ID_RTU3_READ_QUEUE 5029
extern u_int32_t RTU3_READ_QUEUE;
int doWrite_RTU3_READ_QUEUE(u_int32_t value);
int addWrite_RTU3_READ_QUEUE(u_int32_t value);
int getStatus_RTU3_READ_QUEUE();
 
#define ID_CAN0_TYPE_PORT 5030
extern u_int32_t CAN0_TYPE_PORT;
int doWrite_CAN0_TYPE_PORT(u_int32_t value);
int addWrite_CAN0_TYPE_PORT(u_int32_t value);
int getStatus_CAN0_TYPE_PORT();
 
#define ID_CAN0_BAUDRATE 5031
extern u_int32_t CAN0_BAUDRATE;
int doWrite_CAN0_BAUDRATE(u_int32_t value);
int addWrite_CAN0_BAUDRATE(u_int32_t value);
int getStatus_CAN0_BAUDRATE();
 
#define ID_CAN0_STATUS 5032
extern u_int32_t CAN0_STATUS;
int doWrite_CAN0_STATUS(u_int32_t value);
int addWrite_CAN0_STATUS(u_int32_t value);
int getStatus_CAN0_STATUS();
 
#define ID_CAN0_READS 5033
extern u_int32_t CAN0_READS;
int doWrite_CAN0_READS(u_int32_t value);
int addWrite_CAN0_READS(u_int32_t value);
int getStatus_CAN0_READS();
 
#define ID_CAN0_WRITES 5034
extern u_int32_t CAN0_WRITES;
int doWrite_CAN0_WRITES(u_int32_t value);
int addWrite_CAN0_WRITES(u_int32_t value);
int getStatus_CAN0_WRITES();
 
#define ID_CAN0_TIMEOUTS 5035
extern u_int32_t CAN0_TIMEOUTS;
int doWrite_CAN0_TIMEOUTS(u_int32_t value);
int addWrite_CAN0_TIMEOUTS(u_int32_t value);
int getStatus_CAN0_TIMEOUTS();
 
#define ID_CAN0_COMM_ERRORS 5036
extern u_int32_t CAN0_COMM_ERRORS;
int doWrite_CAN0_COMM_ERRORS(u_int32_t value);
int addWrite_CAN0_COMM_ERRORS(u_int32_t value);
int getStatus_CAN0_COMM_ERRORS();
 
#define ID_CAN0_LAST_ERROR 5037
extern u_int32_t CAN0_LAST_ERROR;
int doWrite_CAN0_LAST_ERROR(u_int32_t value);
int addWrite_CAN0_LAST_ERROR(u_int32_t value);
int getStatus_CAN0_LAST_ERROR();
 
#define ID_CAN0_WRITE_QUEUE 5038
extern u_int32_t CAN0_WRITE_QUEUE;
int doWrite_CAN0_WRITE_QUEUE(u_int32_t value);
int addWrite_CAN0_WRITE_QUEUE(u_int32_t value);
int getStatus_CAN0_WRITE_QUEUE();
 
#define ID_CAN0_READ_QUEUE 5039
extern u_int32_t CAN0_READ_QUEUE;
int doWrite_CAN0_READ_QUEUE(u_int32_t value);
int addWrite_CAN0_READ_QUEUE(u_int32_t value);
int getStatus_CAN0_READ_QUEUE();
 
#define ID_CAN1_TYPE_PORT 5040
extern u_int32_t CAN1_TYPE_PORT;
int doWrite_CAN1_TYPE_PORT(u_int32_t value);
int addWrite_CAN1_TYPE_PORT(u_int32_t value);
int getStatus_CAN1_TYPE_PORT();
 
#define ID_CAN1_BAUDRATE 5041
extern u_int32_t CAN1_BAUDRATE;
int doWrite_CAN1_BAUDRATE(u_int32_t value);
int addWrite_CAN1_BAUDRATE(u_int32_t value);
int getStatus_CAN1_BAUDRATE();
 
#define ID_CAN1_STATUS 5042
extern u_int32_t CAN1_STATUS;
int doWrite_CAN1_STATUS(u_int32_t value);
int addWrite_CAN1_STATUS(u_int32_t value);
int getStatus_CAN1_STATUS();
 
#define ID_CAN1_READS 5043
extern u_int32_t CAN1_READS;
int doWrite_CAN1_READS(u_int32_t value);
int addWrite_CAN1_READS(u_int32_t value);
int getStatus_CAN1_READS();
 
#define ID_CAN1_WRITES 5044
extern u_int32_t CAN1_WRITES;
int doWrite_CAN1_WRITES(u_int32_t value);
int addWrite_CAN1_WRITES(u_int32_t value);
int getStatus_CAN1_WRITES();
 
#define ID_CAN1_TIMEOUTS 5045
extern u_int32_t CAN1_TIMEOUTS;
int doWrite_CAN1_TIMEOUTS(u_int32_t value);
int addWrite_CAN1_TIMEOUTS(u_int32_t value);
int getStatus_CAN1_TIMEOUTS();
 
#define ID_CAN1_COMM_ERRORS 5046
extern u_int32_t CAN1_COMM_ERRORS;
int doWrite_CAN1_COMM_ERRORS(u_int32_t value);
int addWrite_CAN1_COMM_ERRORS(u_int32_t value);
int getStatus_CAN1_COMM_ERRORS();
 
#define ID_CAN1_LAST_ERROR 5047
extern u_int32_t CAN1_LAST_ERROR;
int doWrite_CAN1_LAST_ERROR(u_int32_t value);
int addWrite_CAN1_LAST_ERROR(u_int32_t value);
int getStatus_CAN1_LAST_ERROR();
 
#define ID_CAN1_WRITE_QUEUE 5048
extern u_int32_t CAN1_WRITE_QUEUE;
int doWrite_CAN1_WRITE_QUEUE(u_int32_t value);
int addWrite_CAN1_WRITE_QUEUE(u_int32_t value);
int getStatus_CAN1_WRITE_QUEUE();
 
#define ID_CAN1_READ_QUEUE 5049
extern u_int32_t CAN1_READ_QUEUE;
int doWrite_CAN1_READ_QUEUE(u_int32_t value);
int addWrite_CAN1_READ_QUEUE(u_int32_t value);
int getStatus_CAN1_READ_QUEUE();
 
#define ID_TCPS_TYPE_PORT 5050
extern u_int32_t TCPS_TYPE_PORT;
int doWrite_TCPS_TYPE_PORT(u_int32_t value);
int addWrite_TCPS_TYPE_PORT(u_int32_t value);
int getStatus_TCPS_TYPE_PORT();
 
#define ID_TCPS_IP_ADDRESS 5051
extern u_int32_t TCPS_IP_ADDRESS;
int doWrite_TCPS_IP_ADDRESS(u_int32_t value);
int addWrite_TCPS_IP_ADDRESS(u_int32_t value);
int getStatus_TCPS_IP_ADDRESS();
 
#define ID_TCPS_STATUS 5052
extern u_int32_t TCPS_STATUS;
int doWrite_TCPS_STATUS(u_int32_t value);
int addWrite_TCPS_STATUS(u_int32_t value);
int getStatus_TCPS_STATUS();
 
#define ID_TCPS_READS 5053
extern u_int32_t TCPS_READS;
int doWrite_TCPS_READS(u_int32_t value);
int addWrite_TCPS_READS(u_int32_t value);
int getStatus_TCPS_READS();
 
#define ID_TCPS_WRITES 5054
extern u_int32_t TCPS_WRITES;
int doWrite_TCPS_WRITES(u_int32_t value);
int addWrite_TCPS_WRITES(u_int32_t value);
int getStatus_TCPS_WRITES();
 
#define ID_TCPS_TIMEOUTS 5055
extern u_int32_t TCPS_TIMEOUTS;
int doWrite_TCPS_TIMEOUTS(u_int32_t value);
int addWrite_TCPS_TIMEOUTS(u_int32_t value);
int getStatus_TCPS_TIMEOUTS();
 
#define ID_TCPS_COMM_ERRORS 5056
extern u_int32_t TCPS_COMM_ERRORS;
int doWrite_TCPS_COMM_ERRORS(u_int32_t value);
int addWrite_TCPS_COMM_ERRORS(u_int32_t value);
int getStatus_TCPS_COMM_ERRORS();
 
#define ID_TCPS_LAST_ERROR 5057
extern u_int32_t TCPS_LAST_ERROR;
int doWrite_TCPS_LAST_ERROR(u_int32_t value);
int addWrite_TCPS_LAST_ERROR(u_int32_t value);
int getStatus_TCPS_LAST_ERROR();
 
#define ID_TCPS_WRITE_QUEUE 5058
extern u_int32_t TCPS_WRITE_QUEUE;
int doWrite_TCPS_WRITE_QUEUE(u_int32_t value);
int addWrite_TCPS_WRITE_QUEUE(u_int32_t value);
int getStatus_TCPS_WRITE_QUEUE();
 
#define ID_TCPS_READ_QUEUE 5059
extern u_int32_t TCPS_READ_QUEUE;
int doWrite_TCPS_READ_QUEUE(u_int32_t value);
int addWrite_TCPS_READ_QUEUE(u_int32_t value);
int getStatus_TCPS_READ_QUEUE();
 
#define ID_TCP0_TYPE_PORT 5060
extern u_int32_t TCP0_TYPE_PORT;
int doWrite_TCP0_TYPE_PORT(u_int32_t value);
int addWrite_TCP0_TYPE_PORT(u_int32_t value);
int getStatus_TCP0_TYPE_PORT();
 
#define ID_TCP0_IP_ADDRESS 5061
extern u_int32_t TCP0_IP_ADDRESS;
int doWrite_TCP0_IP_ADDRESS(u_int32_t value);
int addWrite_TCP0_IP_ADDRESS(u_int32_t value);
int getStatus_TCP0_IP_ADDRESS();
 
#define ID_TCP0_STATUS 5062
extern u_int32_t TCP0_STATUS;
int doWrite_TCP0_STATUS(u_int32_t value);
int addWrite_TCP0_STATUS(u_int32_t value);
int getStatus_TCP0_STATUS();
 
#define ID_TCP0_READS 5063
extern u_int32_t TCP0_READS;
int doWrite_TCP0_READS(u_int32_t value);
int addWrite_TCP0_READS(u_int32_t value);
int getStatus_TCP0_READS();
 
#define ID_TCP0_WRITES 5064
extern u_int32_t TCP0_WRITES;
int doWrite_TCP0_WRITES(u_int32_t value);
int addWrite_TCP0_WRITES(u_int32_t value);
int getStatus_TCP0_WRITES();
 
#define ID_TCP0_TIMEOUTS 5065
extern u_int32_t TCP0_TIMEOUTS;
int doWrite_TCP0_TIMEOUTS(u_int32_t value);
int addWrite_TCP0_TIMEOUTS(u_int32_t value);
int getStatus_TCP0_TIMEOUTS();
 
#define ID_TCP0_COMM_ERRORS 5066
extern u_int32_t TCP0_COMM_ERRORS;
int doWrite_TCP0_COMM_ERRORS(u_int32_t value);
int addWrite_TCP0_COMM_ERRORS(u_int32_t value);
int getStatus_TCP0_COMM_ERRORS();
 
#define ID_TCP0_LAST_ERROR 5067
extern u_int32_t TCP0_LAST_ERROR;
int doWrite_TCP0_LAST_ERROR(u_int32_t value);
int addWrite_TCP0_LAST_ERROR(u_int32_t value);
int getStatus_TCP0_LAST_ERROR();
 
#define ID_TCP0_WRITE_QUEUE 5068
extern u_int32_t TCP0_WRITE_QUEUE;
int doWrite_TCP0_WRITE_QUEUE(u_int32_t value);
int addWrite_TCP0_WRITE_QUEUE(u_int32_t value);
int getStatus_TCP0_WRITE_QUEUE();
 
#define ID_TCP0_READ_QUEUE 5069
extern u_int32_t TCP0_READ_QUEUE;
int doWrite_TCP0_READ_QUEUE(u_int32_t value);
int addWrite_TCP0_READ_QUEUE(u_int32_t value);
int getStatus_TCP0_READ_QUEUE();
 
#define ID_TCP1_TYPE_PORT 5070
extern u_int32_t TCP1_TYPE_PORT;
int doWrite_TCP1_TYPE_PORT(u_int32_t value);
int addWrite_TCP1_TYPE_PORT(u_int32_t value);
int getStatus_TCP1_TYPE_PORT();
 
#define ID_TCP1_IP_ADDRESS 5071
extern u_int32_t TCP1_IP_ADDRESS;
int doWrite_TCP1_IP_ADDRESS(u_int32_t value);
int addWrite_TCP1_IP_ADDRESS(u_int32_t value);
int getStatus_TCP1_IP_ADDRESS();
 
#define ID_TCP1_STATUS 5072
extern u_int32_t TCP1_STATUS;
int doWrite_TCP1_STATUS(u_int32_t value);
int addWrite_TCP1_STATUS(u_int32_t value);
int getStatus_TCP1_STATUS();
 
#define ID_TCP1_READS 5073
extern u_int32_t TCP1_READS;
int doWrite_TCP1_READS(u_int32_t value);
int addWrite_TCP1_READS(u_int32_t value);
int getStatus_TCP1_READS();
 
#define ID_TCP1_WRITES 5074
extern u_int32_t TCP1_WRITES;
int doWrite_TCP1_WRITES(u_int32_t value);
int addWrite_TCP1_WRITES(u_int32_t value);
int getStatus_TCP1_WRITES();
 
#define ID_TCP1_TIMEOUTS 5075
extern u_int32_t TCP1_TIMEOUTS;
int doWrite_TCP1_TIMEOUTS(u_int32_t value);
int addWrite_TCP1_TIMEOUTS(u_int32_t value);
int getStatus_TCP1_TIMEOUTS();
 
#define ID_TCP1_COMM_ERRORS 5076
extern u_int32_t TCP1_COMM_ERRORS;
int doWrite_TCP1_COMM_ERRORS(u_int32_t value);
int addWrite_TCP1_COMM_ERRORS(u_int32_t value);
int getStatus_TCP1_COMM_ERRORS();
 
#define ID_TCP1_LAST_ERROR 5077
extern u_int32_t TCP1_LAST_ERROR;
int doWrite_TCP1_LAST_ERROR(u_int32_t value);
int addWrite_TCP1_LAST_ERROR(u_int32_t value);
int getStatus_TCP1_LAST_ERROR();
 
#define ID_TCP1_WRITE_QUEUE 5078
extern u_int32_t TCP1_WRITE_QUEUE;
int doWrite_TCP1_WRITE_QUEUE(u_int32_t value);
int addWrite_TCP1_WRITE_QUEUE(u_int32_t value);
int getStatus_TCP1_WRITE_QUEUE();
 
#define ID_TCP1_READ_QUEUE 5079
extern u_int32_t TCP1_READ_QUEUE;
int doWrite_TCP1_READ_QUEUE(u_int32_t value);
int addWrite_TCP1_READ_QUEUE(u_int32_t value);
int getStatus_TCP1_READ_QUEUE();
 
#define ID_TCP2_TYPE_PORT 5080
extern u_int32_t TCP2_TYPE_PORT;
int doWrite_TCP2_TYPE_PORT(u_int32_t value);
int addWrite_TCP2_TYPE_PORT(u_int32_t value);
int getStatus_TCP2_TYPE_PORT();
 
#define ID_TCP2_IP_ADDRESS 5081
extern u_int32_t TCP2_IP_ADDRESS;
int doWrite_TCP2_IP_ADDRESS(u_int32_t value);
int addWrite_TCP2_IP_ADDRESS(u_int32_t value);
int getStatus_TCP2_IP_ADDRESS();
 
#define ID_TCP2_STATUS 5082
extern u_int32_t TCP2_STATUS;
int doWrite_TCP2_STATUS(u_int32_t value);
int addWrite_TCP2_STATUS(u_int32_t value);
int getStatus_TCP2_STATUS();
 
#define ID_TCP2_READS 5083
extern u_int32_t TCP2_READS;
int doWrite_TCP2_READS(u_int32_t value);
int addWrite_TCP2_READS(u_int32_t value);
int getStatus_TCP2_READS();
 
#define ID_TCP2_WRITES 5084
extern u_int32_t TCP2_WRITES;
int doWrite_TCP2_WRITES(u_int32_t value);
int addWrite_TCP2_WRITES(u_int32_t value);
int getStatus_TCP2_WRITES();
 
#define ID_TCP2_TIMEOUTS 5085
extern u_int32_t TCP2_TIMEOUTS;
int doWrite_TCP2_TIMEOUTS(u_int32_t value);
int addWrite_TCP2_TIMEOUTS(u_int32_t value);
int getStatus_TCP2_TIMEOUTS();
 
#define ID_TCP2_COMM_ERRORS 5086
extern u_int32_t TCP2_COMM_ERRORS;
int doWrite_TCP2_COMM_ERRORS(u_int32_t value);
int addWrite_TCP2_COMM_ERRORS(u_int32_t value);
int getStatus_TCP2_COMM_ERRORS();
 
#define ID_TCP2_LAST_ERROR 5087
extern u_int32_t TCP2_LAST_ERROR;
int doWrite_TCP2_LAST_ERROR(u_int32_t value);
int addWrite_TCP2_LAST_ERROR(u_int32_t value);
int getStatus_TCP2_LAST_ERROR();
 
#define ID_TCP2_WRITE_QUEUE 5088
extern u_int32_t TCP2_WRITE_QUEUE;
int doWrite_TCP2_WRITE_QUEUE(u_int32_t value);
int addWrite_TCP2_WRITE_QUEUE(u_int32_t value);
int getStatus_TCP2_WRITE_QUEUE();
 
#define ID_TCP2_READ_QUEUE 5089
extern u_int32_t TCP2_READ_QUEUE;
int doWrite_TCP2_READ_QUEUE(u_int32_t value);
int addWrite_TCP2_READ_QUEUE(u_int32_t value);
int getStatus_TCP2_READ_QUEUE();
 
#define ID_TCP3_TYPE_PORT 5090
extern u_int32_t TCP3_TYPE_PORT;
int doWrite_TCP3_TYPE_PORT(u_int32_t value);
int addWrite_TCP3_TYPE_PORT(u_int32_t value);
int getStatus_TCP3_TYPE_PORT();
 
#define ID_TCP3_IP_ADDRESS 5091
extern u_int32_t TCP3_IP_ADDRESS;
int doWrite_TCP3_IP_ADDRESS(u_int32_t value);
int addWrite_TCP3_IP_ADDRESS(u_int32_t value);
int getStatus_TCP3_IP_ADDRESS();
 
#define ID_TCP3_STATUS 5092
extern u_int32_t TCP3_STATUS;
int doWrite_TCP3_STATUS(u_int32_t value);
int addWrite_TCP3_STATUS(u_int32_t value);
int getStatus_TCP3_STATUS();
 
#define ID_TCP3_READS 5093
extern u_int32_t TCP3_READS;
int doWrite_TCP3_READS(u_int32_t value);
int addWrite_TCP3_READS(u_int32_t value);
int getStatus_TCP3_READS();
 
#define ID_TCP3_WRITES 5094
extern u_int32_t TCP3_WRITES;
int doWrite_TCP3_WRITES(u_int32_t value);
int addWrite_TCP3_WRITES(u_int32_t value);
int getStatus_TCP3_WRITES();
 
#define ID_TCP3_TIMEOUTS 5095
extern u_int32_t TCP3_TIMEOUTS;
int doWrite_TCP3_TIMEOUTS(u_int32_t value);
int addWrite_TCP3_TIMEOUTS(u_int32_t value);
int getStatus_TCP3_TIMEOUTS();
 
#define ID_TCP3_COMM_ERRORS 5096
extern u_int32_t TCP3_COMM_ERRORS;
int doWrite_TCP3_COMM_ERRORS(u_int32_t value);
int addWrite_TCP3_COMM_ERRORS(u_int32_t value);
int getStatus_TCP3_COMM_ERRORS();
 
#define ID_TCP3_LAST_ERROR 5097
extern u_int32_t TCP3_LAST_ERROR;
int doWrite_TCP3_LAST_ERROR(u_int32_t value);
int addWrite_TCP3_LAST_ERROR(u_int32_t value);
int getStatus_TCP3_LAST_ERROR();
 
#define ID_TCP3_WRITE_QUEUE 5098
extern u_int32_t TCP3_WRITE_QUEUE;
int doWrite_TCP3_WRITE_QUEUE(u_int32_t value);
int addWrite_TCP3_WRITE_QUEUE(u_int32_t value);
int getStatus_TCP3_WRITE_QUEUE();
 
#define ID_TCP3_READ_QUEUE 5099
extern u_int32_t TCP3_READ_QUEUE;
int doWrite_TCP3_READ_QUEUE(u_int32_t value);
int addWrite_TCP3_READ_QUEUE(u_int32_t value);
int getStatus_TCP3_READ_QUEUE();
 
#define ID_TCP4_TYPE_PORT 5100
extern u_int32_t TCP4_TYPE_PORT;
int doWrite_TCP4_TYPE_PORT(u_int32_t value);
int addWrite_TCP4_TYPE_PORT(u_int32_t value);
int getStatus_TCP4_TYPE_PORT();
 
#define ID_TCP4_IP_ADDRESS 5101
extern u_int32_t TCP4_IP_ADDRESS;
int doWrite_TCP4_IP_ADDRESS(u_int32_t value);
int addWrite_TCP4_IP_ADDRESS(u_int32_t value);
int getStatus_TCP4_IP_ADDRESS();
 
#define ID_TCP4_STATUS 5102
extern u_int32_t TCP4_STATUS;
int doWrite_TCP4_STATUS(u_int32_t value);
int addWrite_TCP4_STATUS(u_int32_t value);
int getStatus_TCP4_STATUS();
 
#define ID_TCP4_READS 5103
extern u_int32_t TCP4_READS;
int doWrite_TCP4_READS(u_int32_t value);
int addWrite_TCP4_READS(u_int32_t value);
int getStatus_TCP4_READS();
 
#define ID_TCP4_WRITES 5104
extern u_int32_t TCP4_WRITES;
int doWrite_TCP4_WRITES(u_int32_t value);
int addWrite_TCP4_WRITES(u_int32_t value);
int getStatus_TCP4_WRITES();
 
#define ID_TCP4_TIMEOUTS 5105
extern u_int32_t TCP4_TIMEOUTS;
int doWrite_TCP4_TIMEOUTS(u_int32_t value);
int addWrite_TCP4_TIMEOUTS(u_int32_t value);
int getStatus_TCP4_TIMEOUTS();
 
#define ID_TCP4_COMM_ERRORS 5106
extern u_int32_t TCP4_COMM_ERRORS;
int doWrite_TCP4_COMM_ERRORS(u_int32_t value);
int addWrite_TCP4_COMM_ERRORS(u_int32_t value);
int getStatus_TCP4_COMM_ERRORS();
 
#define ID_TCP4_LAST_ERROR 5107
extern u_int32_t TCP4_LAST_ERROR;
int doWrite_TCP4_LAST_ERROR(u_int32_t value);
int addWrite_TCP4_LAST_ERROR(u_int32_t value);
int getStatus_TCP4_LAST_ERROR();
 
#define ID_TCP4_WRITE_QUEUE 5108
extern u_int32_t TCP4_WRITE_QUEUE;
int doWrite_TCP4_WRITE_QUEUE(u_int32_t value);
int addWrite_TCP4_WRITE_QUEUE(u_int32_t value);
int getStatus_TCP4_WRITE_QUEUE();
 
#define ID_TCP4_READ_QUEUE 5109
extern u_int32_t TCP4_READ_QUEUE;
int doWrite_TCP4_READ_QUEUE(u_int32_t value);
int addWrite_TCP4_READ_QUEUE(u_int32_t value);
int getStatus_TCP4_READ_QUEUE();
 
#define ID_TCP5_TYPE_PORT 5110
extern u_int32_t TCP5_TYPE_PORT;
int doWrite_TCP5_TYPE_PORT(u_int32_t value);
int addWrite_TCP5_TYPE_PORT(u_int32_t value);
int getStatus_TCP5_TYPE_PORT();
 
#define ID_TCP5_IP_ADDRESS 5111
extern u_int32_t TCP5_IP_ADDRESS;
int doWrite_TCP5_IP_ADDRESS(u_int32_t value);
int addWrite_TCP5_IP_ADDRESS(u_int32_t value);
int getStatus_TCP5_IP_ADDRESS();
 
#define ID_TCP5_STATUS 5112
extern u_int32_t TCP5_STATUS;
int doWrite_TCP5_STATUS(u_int32_t value);
int addWrite_TCP5_STATUS(u_int32_t value);
int getStatus_TCP5_STATUS();
 
#define ID_TCP5_READS 5113
extern u_int32_t TCP5_READS;
int doWrite_TCP5_READS(u_int32_t value);
int addWrite_TCP5_READS(u_int32_t value);
int getStatus_TCP5_READS();
 
#define ID_TCP5_WRITES 5114
extern u_int32_t TCP5_WRITES;
int doWrite_TCP5_WRITES(u_int32_t value);
int addWrite_TCP5_WRITES(u_int32_t value);
int getStatus_TCP5_WRITES();
 
#define ID_TCP5_TIMEOUTS 5115
extern u_int32_t TCP5_TIMEOUTS;
int doWrite_TCP5_TIMEOUTS(u_int32_t value);
int addWrite_TCP5_TIMEOUTS(u_int32_t value);
int getStatus_TCP5_TIMEOUTS();
 
#define ID_TCP5_COMM_ERRORS 5116
extern u_int32_t TCP5_COMM_ERRORS;
int doWrite_TCP5_COMM_ERRORS(u_int32_t value);
int addWrite_TCP5_COMM_ERRORS(u_int32_t value);
int getStatus_TCP5_COMM_ERRORS();
 
#define ID_TCP5_LAST_ERROR 5117
extern u_int32_t TCP5_LAST_ERROR;
int doWrite_TCP5_LAST_ERROR(u_int32_t value);
int addWrite_TCP5_LAST_ERROR(u_int32_t value);
int getStatus_TCP5_LAST_ERROR();
 
#define ID_TCP5_WRITE_QUEUE 5118
extern u_int32_t TCP5_WRITE_QUEUE;
int doWrite_TCP5_WRITE_QUEUE(u_int32_t value);
int addWrite_TCP5_WRITE_QUEUE(u_int32_t value);
int getStatus_TCP5_WRITE_QUEUE();
 
#define ID_TCP5_READ_QUEUE 5119
extern u_int32_t TCP5_READ_QUEUE;
int doWrite_TCP5_READ_QUEUE(u_int32_t value);
int addWrite_TCP5_READ_QUEUE(u_int32_t value);
int getStatus_TCP5_READ_QUEUE();
 
#define ID_TCP6_TYPE_PORT 5120
extern u_int32_t TCP6_TYPE_PORT;
int doWrite_TCP6_TYPE_PORT(u_int32_t value);
int addWrite_TCP6_TYPE_PORT(u_int32_t value);
int getStatus_TCP6_TYPE_PORT();
 
#define ID_TCP6_IP_ADDRESS 5121
extern u_int32_t TCP6_IP_ADDRESS;
int doWrite_TCP6_IP_ADDRESS(u_int32_t value);
int addWrite_TCP6_IP_ADDRESS(u_int32_t value);
int getStatus_TCP6_IP_ADDRESS();
 
#define ID_TCP6_STATUS 5122
extern u_int32_t TCP6_STATUS;
int doWrite_TCP6_STATUS(u_int32_t value);
int addWrite_TCP6_STATUS(u_int32_t value);
int getStatus_TCP6_STATUS();
 
#define ID_TCP6_READS 5123
extern u_int32_t TCP6_READS;
int doWrite_TCP6_READS(u_int32_t value);
int addWrite_TCP6_READS(u_int32_t value);
int getStatus_TCP6_READS();
 
#define ID_TCP6_WRITES 5124
extern u_int32_t TCP6_WRITES;
int doWrite_TCP6_WRITES(u_int32_t value);
int addWrite_TCP6_WRITES(u_int32_t value);
int getStatus_TCP6_WRITES();
 
#define ID_TCP6_TIMEOUTS 5125
extern u_int32_t TCP6_TIMEOUTS;
int doWrite_TCP6_TIMEOUTS(u_int32_t value);
int addWrite_TCP6_TIMEOUTS(u_int32_t value);
int getStatus_TCP6_TIMEOUTS();
 
#define ID_TCP6_COMM_ERRORS 5126
extern u_int32_t TCP6_COMM_ERRORS;
int doWrite_TCP6_COMM_ERRORS(u_int32_t value);
int addWrite_TCP6_COMM_ERRORS(u_int32_t value);
int getStatus_TCP6_COMM_ERRORS();
 
#define ID_TCP6_LAST_ERROR 5127
extern u_int32_t TCP6_LAST_ERROR;
int doWrite_TCP6_LAST_ERROR(u_int32_t value);
int addWrite_TCP6_LAST_ERROR(u_int32_t value);
int getStatus_TCP6_LAST_ERROR();
 
#define ID_TCP6_WRITE_QUEUE 5128
extern u_int32_t TCP6_WRITE_QUEUE;
int doWrite_TCP6_WRITE_QUEUE(u_int32_t value);
int addWrite_TCP6_WRITE_QUEUE(u_int32_t value);
int getStatus_TCP6_WRITE_QUEUE();
 
#define ID_TCP6_READ_QUEUE 5129
extern u_int32_t TCP6_READ_QUEUE;
int doWrite_TCP6_READ_QUEUE(u_int32_t value);
int addWrite_TCP6_READ_QUEUE(u_int32_t value);
int getStatus_TCP6_READ_QUEUE();
 
#define ID_TCP7_TYPE_PORT 5130
extern u_int32_t TCP7_TYPE_PORT;
int doWrite_TCP7_TYPE_PORT(u_int32_t value);
int addWrite_TCP7_TYPE_PORT(u_int32_t value);
int getStatus_TCP7_TYPE_PORT();
 
#define ID_TCP7_IP_ADDRESS 5131
extern u_int32_t TCP7_IP_ADDRESS;
int doWrite_TCP7_IP_ADDRESS(u_int32_t value);
int addWrite_TCP7_IP_ADDRESS(u_int32_t value);
int getStatus_TCP7_IP_ADDRESS();
 
#define ID_TCP7_STATUS 5132
extern u_int32_t TCP7_STATUS;
int doWrite_TCP7_STATUS(u_int32_t value);
int addWrite_TCP7_STATUS(u_int32_t value);
int getStatus_TCP7_STATUS();
 
#define ID_TCP7_READS 5133
extern u_int32_t TCP7_READS;
int doWrite_TCP7_READS(u_int32_t value);
int addWrite_TCP7_READS(u_int32_t value);
int getStatus_TCP7_READS();
 
#define ID_TCP7_WRITES 5134
extern u_int32_t TCP7_WRITES;
int doWrite_TCP7_WRITES(u_int32_t value);
int addWrite_TCP7_WRITES(u_int32_t value);
int getStatus_TCP7_WRITES();
 
#define ID_TCP7_TIMEOUTS 5135
extern u_int32_t TCP7_TIMEOUTS;
int doWrite_TCP7_TIMEOUTS(u_int32_t value);
int addWrite_TCP7_TIMEOUTS(u_int32_t value);
int getStatus_TCP7_TIMEOUTS();
 
#define ID_TCP7_COMM_ERRORS 5136
extern u_int32_t TCP7_COMM_ERRORS;
int doWrite_TCP7_COMM_ERRORS(u_int32_t value);
int addWrite_TCP7_COMM_ERRORS(u_int32_t value);
int getStatus_TCP7_COMM_ERRORS();
 
#define ID_TCP7_LAST_ERROR 5137
extern u_int32_t TCP7_LAST_ERROR;
int doWrite_TCP7_LAST_ERROR(u_int32_t value);
int addWrite_TCP7_LAST_ERROR(u_int32_t value);
int getStatus_TCP7_LAST_ERROR();
 
#define ID_TCP7_WRITE_QUEUE 5138
extern u_int32_t TCP7_WRITE_QUEUE;
int doWrite_TCP7_WRITE_QUEUE(u_int32_t value);
int addWrite_TCP7_WRITE_QUEUE(u_int32_t value);
int getStatus_TCP7_WRITE_QUEUE();
 
#define ID_TCP7_READ_QUEUE 5139
extern u_int32_t TCP7_READ_QUEUE;
int doWrite_TCP7_READ_QUEUE(u_int32_t value);
int addWrite_TCP7_READ_QUEUE(u_int32_t value);
int getStatus_TCP7_READ_QUEUE();
 
#define ID_TCP8_TYPE_PORT 5140
extern u_int32_t TCP8_TYPE_PORT;
int doWrite_TCP8_TYPE_PORT(u_int32_t value);
int addWrite_TCP8_TYPE_PORT(u_int32_t value);
int getStatus_TCP8_TYPE_PORT();
 
#define ID_TCP8_IP_ADDRESS 5141
extern u_int32_t TCP8_IP_ADDRESS;
int doWrite_TCP8_IP_ADDRESS(u_int32_t value);
int addWrite_TCP8_IP_ADDRESS(u_int32_t value);
int getStatus_TCP8_IP_ADDRESS();
 
#define ID_TCP8_STATUS 5142
extern u_int32_t TCP8_STATUS;
int doWrite_TCP8_STATUS(u_int32_t value);
int addWrite_TCP8_STATUS(u_int32_t value);
int getStatus_TCP8_STATUS();
 
#define ID_TCP8_READS 5143
extern u_int32_t TCP8_READS;
int doWrite_TCP8_READS(u_int32_t value);
int addWrite_TCP8_READS(u_int32_t value);
int getStatus_TCP8_READS();
 
#define ID_TCP8_WRITES 5144
extern u_int32_t TCP8_WRITES;
int doWrite_TCP8_WRITES(u_int32_t value);
int addWrite_TCP8_WRITES(u_int32_t value);
int getStatus_TCP8_WRITES();
 
#define ID_TCP8_TIMEOUTS 5145
extern u_int32_t TCP8_TIMEOUTS;
int doWrite_TCP8_TIMEOUTS(u_int32_t value);
int addWrite_TCP8_TIMEOUTS(u_int32_t value);
int getStatus_TCP8_TIMEOUTS();
 
#define ID_TCP8_COMM_ERRORS 5146
extern u_int32_t TCP8_COMM_ERRORS;
int doWrite_TCP8_COMM_ERRORS(u_int32_t value);
int addWrite_TCP8_COMM_ERRORS(u_int32_t value);
int getStatus_TCP8_COMM_ERRORS();
 
#define ID_TCP8_LAST_ERROR 5147
extern u_int32_t TCP8_LAST_ERROR;
int doWrite_TCP8_LAST_ERROR(u_int32_t value);
int addWrite_TCP8_LAST_ERROR(u_int32_t value);
int getStatus_TCP8_LAST_ERROR();
 
#define ID_TCP8_WRITE_QUEUE 5148
extern u_int32_t TCP8_WRITE_QUEUE;
int doWrite_TCP8_WRITE_QUEUE(u_int32_t value);
int addWrite_TCP8_WRITE_QUEUE(u_int32_t value);
int getStatus_TCP8_WRITE_QUEUE();
 
#define ID_TCP8_READ_QUEUE 5149
extern u_int32_t TCP8_READ_QUEUE;
int doWrite_TCP8_READ_QUEUE(u_int32_t value);
int addWrite_TCP8_READ_QUEUE(u_int32_t value);
int getStatus_TCP8_READ_QUEUE();
 
#define ID_TCP9_TYPE_PORT 5150
extern u_int32_t TCP9_TYPE_PORT;
int doWrite_TCP9_TYPE_PORT(u_int32_t value);
int addWrite_TCP9_TYPE_PORT(u_int32_t value);
int getStatus_TCP9_TYPE_PORT();
 
#define ID_TCP9_IP_ADDRESS 5151
extern u_int32_t TCP9_IP_ADDRESS;
int doWrite_TCP9_IP_ADDRESS(u_int32_t value);
int addWrite_TCP9_IP_ADDRESS(u_int32_t value);
int getStatus_TCP9_IP_ADDRESS();
 
#define ID_TCP9_STATUS 5152
extern u_int32_t TCP9_STATUS;
int doWrite_TCP9_STATUS(u_int32_t value);
int addWrite_TCP9_STATUS(u_int32_t value);
int getStatus_TCP9_STATUS();
 
#define ID_TCP9_READS 5153
extern u_int32_t TCP9_READS;
int doWrite_TCP9_READS(u_int32_t value);
int addWrite_TCP9_READS(u_int32_t value);
int getStatus_TCP9_READS();
 
#define ID_TCP9_WRITES 5154
extern u_int32_t TCP9_WRITES;
int doWrite_TCP9_WRITES(u_int32_t value);
int addWrite_TCP9_WRITES(u_int32_t value);
int getStatus_TCP9_WRITES();
 
#define ID_TCP9_TIMEOUTS 5155
extern u_int32_t TCP9_TIMEOUTS;
int doWrite_TCP9_TIMEOUTS(u_int32_t value);
int addWrite_TCP9_TIMEOUTS(u_int32_t value);
int getStatus_TCP9_TIMEOUTS();
 
#define ID_TCP9_COMM_ERRORS 5156
extern u_int32_t TCP9_COMM_ERRORS;
int doWrite_TCP9_COMM_ERRORS(u_int32_t value);
int addWrite_TCP9_COMM_ERRORS(u_int32_t value);
int getStatus_TCP9_COMM_ERRORS();
 
#define ID_TCP9_LAST_ERROR 5157
extern u_int32_t TCP9_LAST_ERROR;
int doWrite_TCP9_LAST_ERROR(u_int32_t value);
int addWrite_TCP9_LAST_ERROR(u_int32_t value);
int getStatus_TCP9_LAST_ERROR();
 
#define ID_TCP9_WRITE_QUEUE 5158
extern u_int32_t TCP9_WRITE_QUEUE;
int doWrite_TCP9_WRITE_QUEUE(u_int32_t value);
int addWrite_TCP9_WRITE_QUEUE(u_int32_t value);
int getStatus_TCP9_WRITE_QUEUE();
 
#define ID_TCP9_READ_QUEUE 5159
extern u_int32_t TCP9_READ_QUEUE;
int doWrite_TCP9_READ_QUEUE(u_int32_t value);
int addWrite_TCP9_READ_QUEUE(u_int32_t value);
int getStatus_TCP9_READ_QUEUE();
 
#define ID_NODE_01_DEV_NODE 5172
extern u_int32_t NODE_01_DEV_NODE;
int doWrite_NODE_01_DEV_NODE(u_int32_t value);
int addWrite_NODE_01_DEV_NODE(u_int32_t value);
int getStatus_NODE_01_DEV_NODE();
 
#define ID_NODE_01_STATUS 5173
extern u_int32_t NODE_01_STATUS;
int doWrite_NODE_01_STATUS(u_int32_t value);
int addWrite_NODE_01_STATUS(u_int32_t value);
int getStatus_NODE_01_STATUS();
 
#define ID_NODE_02_DEV_NODE 5174
extern u_int32_t NODE_02_DEV_NODE;
int doWrite_NODE_02_DEV_NODE(u_int32_t value);
int addWrite_NODE_02_DEV_NODE(u_int32_t value);
int getStatus_NODE_02_DEV_NODE();
 
#define ID_NODE_02_STATUS 5175
extern u_int32_t NODE_02_STATUS;
int doWrite_NODE_02_STATUS(u_int32_t value);
int addWrite_NODE_02_STATUS(u_int32_t value);
int getStatus_NODE_02_STATUS();
 
#define ID_NODE_03_DEV_NODE 5176
extern u_int32_t NODE_03_DEV_NODE;
int doWrite_NODE_03_DEV_NODE(u_int32_t value);
int addWrite_NODE_03_DEV_NODE(u_int32_t value);
int getStatus_NODE_03_DEV_NODE();
 
#define ID_NODE_03_STATUS 5177
extern u_int32_t NODE_03_STATUS;
int doWrite_NODE_03_STATUS(u_int32_t value);
int addWrite_NODE_03_STATUS(u_int32_t value);
int getStatus_NODE_03_STATUS();
 
#define ID_NODE_04_DEV_NODE 5178
extern u_int32_t NODE_04_DEV_NODE;
int doWrite_NODE_04_DEV_NODE(u_int32_t value);
int addWrite_NODE_04_DEV_NODE(u_int32_t value);
int getStatus_NODE_04_DEV_NODE();
 
#define ID_NODE_04_STATUS 5179
extern u_int32_t NODE_04_STATUS;
int doWrite_NODE_04_STATUS(u_int32_t value);
int addWrite_NODE_04_STATUS(u_int32_t value);
int getStatus_NODE_04_STATUS();
 
#define ID_NODE_05_DEV_NODE 5180
extern u_int32_t NODE_05_DEV_NODE;
int doWrite_NODE_05_DEV_NODE(u_int32_t value);
int addWrite_NODE_05_DEV_NODE(u_int32_t value);
int getStatus_NODE_05_DEV_NODE();
 
#define ID_NODE_05_STATUS 5181
extern u_int32_t NODE_05_STATUS;
int doWrite_NODE_05_STATUS(u_int32_t value);
int addWrite_NODE_05_STATUS(u_int32_t value);
int getStatus_NODE_05_STATUS();
 
#define ID_NODE_06_DEV_NODE 5182
extern u_int32_t NODE_06_DEV_NODE;
int doWrite_NODE_06_DEV_NODE(u_int32_t value);
int addWrite_NODE_06_DEV_NODE(u_int32_t value);
int getStatus_NODE_06_DEV_NODE();
 
#define ID_NODE_06_STATUS 5183
extern u_int32_t NODE_06_STATUS;
int doWrite_NODE_06_STATUS(u_int32_t value);
int addWrite_NODE_06_STATUS(u_int32_t value);
int getStatus_NODE_06_STATUS();
 
#define ID_NODE_07_DEV_NODE 5184
extern u_int32_t NODE_07_DEV_NODE;
int doWrite_NODE_07_DEV_NODE(u_int32_t value);
int addWrite_NODE_07_DEV_NODE(u_int32_t value);
int getStatus_NODE_07_DEV_NODE();
 
#define ID_NODE_07_STATUS 5185
extern u_int32_t NODE_07_STATUS;
int doWrite_NODE_07_STATUS(u_int32_t value);
int addWrite_NODE_07_STATUS(u_int32_t value);
int getStatus_NODE_07_STATUS();
 
#define ID_NODE_08_DEV_NODE 5186
extern u_int32_t NODE_08_DEV_NODE;
int doWrite_NODE_08_DEV_NODE(u_int32_t value);
int addWrite_NODE_08_DEV_NODE(u_int32_t value);
int getStatus_NODE_08_DEV_NODE();
 
#define ID_NODE_08_STATUS 5187
extern u_int32_t NODE_08_STATUS;
int doWrite_NODE_08_STATUS(u_int32_t value);
int addWrite_NODE_08_STATUS(u_int32_t value);
int getStatus_NODE_08_STATUS();
 
#define ID_NODE_09_DEV_NODE 5188
extern u_int32_t NODE_09_DEV_NODE;
int doWrite_NODE_09_DEV_NODE(u_int32_t value);
int addWrite_NODE_09_DEV_NODE(u_int32_t value);
int getStatus_NODE_09_DEV_NODE();
 
#define ID_NODE_09_STATUS 5189
extern u_int32_t NODE_09_STATUS;
int doWrite_NODE_09_STATUS(u_int32_t value);
int addWrite_NODE_09_STATUS(u_int32_t value);
int getStatus_NODE_09_STATUS();
 
#define ID_NODE_10_DEV_NODE 5190
extern u_int32_t NODE_10_DEV_NODE;
int doWrite_NODE_10_DEV_NODE(u_int32_t value);
int addWrite_NODE_10_DEV_NODE(u_int32_t value);
int getStatus_NODE_10_DEV_NODE();
 
#define ID_NODE_10_STATUS 5191
extern u_int32_t NODE_10_STATUS;
int doWrite_NODE_10_STATUS(u_int32_t value);
int addWrite_NODE_10_STATUS(u_int32_t value);
int getStatus_NODE_10_STATUS();
 
#define ID_NODE_11_DEV_NODE 5192
extern u_int32_t NODE_11_DEV_NODE;
int doWrite_NODE_11_DEV_NODE(u_int32_t value);
int addWrite_NODE_11_DEV_NODE(u_int32_t value);
int getStatus_NODE_11_DEV_NODE();
 
#define ID_NODE_11_STATUS 5193
extern u_int32_t NODE_11_STATUS;
int doWrite_NODE_11_STATUS(u_int32_t value);
int addWrite_NODE_11_STATUS(u_int32_t value);
int getStatus_NODE_11_STATUS();
 
#define ID_NODE_12_DEV_NODE 5194
extern u_int32_t NODE_12_DEV_NODE;
int doWrite_NODE_12_DEV_NODE(u_int32_t value);
int addWrite_NODE_12_DEV_NODE(u_int32_t value);
int getStatus_NODE_12_DEV_NODE();
 
#define ID_NODE_12_STATUS 5195
extern u_int32_t NODE_12_STATUS;
int doWrite_NODE_12_STATUS(u_int32_t value);
int addWrite_NODE_12_STATUS(u_int32_t value);
int getStatus_NODE_12_STATUS();
 
#define ID_NODE_13_DEV_NODE 5196
extern u_int32_t NODE_13_DEV_NODE;
int doWrite_NODE_13_DEV_NODE(u_int32_t value);
int addWrite_NODE_13_DEV_NODE(u_int32_t value);
int getStatus_NODE_13_DEV_NODE();
 
#define ID_NODE_13_STATUS 5197
extern u_int32_t NODE_13_STATUS;
int doWrite_NODE_13_STATUS(u_int32_t value);
int addWrite_NODE_13_STATUS(u_int32_t value);
int getStatus_NODE_13_STATUS();
 
#define ID_NODE_14_DEV_NODE 5198
extern u_int32_t NODE_14_DEV_NODE;
int doWrite_NODE_14_DEV_NODE(u_int32_t value);
int addWrite_NODE_14_DEV_NODE(u_int32_t value);
int getStatus_NODE_14_DEV_NODE();
 
#define ID_NODE_14_STATUS 5199
extern u_int32_t NODE_14_STATUS;
int doWrite_NODE_14_STATUS(u_int32_t value);
int addWrite_NODE_14_STATUS(u_int32_t value);
int getStatus_NODE_14_STATUS();
 
#define ID_NODE_15_DEV_NODE 5200
extern u_int32_t NODE_15_DEV_NODE;
int doWrite_NODE_15_DEV_NODE(u_int32_t value);
int addWrite_NODE_15_DEV_NODE(u_int32_t value);
int getStatus_NODE_15_DEV_NODE();
 
#define ID_NODE_15_STATUS 5201
extern u_int32_t NODE_15_STATUS;
int doWrite_NODE_15_STATUS(u_int32_t value);
int addWrite_NODE_15_STATUS(u_int32_t value);
int getStatus_NODE_15_STATUS();
 
#define ID_NODE_16_DEV_NODE 5202
extern u_int32_t NODE_16_DEV_NODE;
int doWrite_NODE_16_DEV_NODE(u_int32_t value);
int addWrite_NODE_16_DEV_NODE(u_int32_t value);
int getStatus_NODE_16_DEV_NODE();
 
#define ID_NODE_16_STATUS 5203
extern u_int32_t NODE_16_STATUS;
int doWrite_NODE_16_STATUS(u_int32_t value);
int addWrite_NODE_16_STATUS(u_int32_t value);
int getStatus_NODE_16_STATUS();
 
#define ID_NODE_17_DEV_NODE 5204
extern u_int32_t NODE_17_DEV_NODE;
int doWrite_NODE_17_DEV_NODE(u_int32_t value);
int addWrite_NODE_17_DEV_NODE(u_int32_t value);
int getStatus_NODE_17_DEV_NODE();
 
#define ID_NODE_17_STATUS 5205
extern u_int32_t NODE_17_STATUS;
int doWrite_NODE_17_STATUS(u_int32_t value);
int addWrite_NODE_17_STATUS(u_int32_t value);
int getStatus_NODE_17_STATUS();
 
#define ID_NODE_18_DEV_NODE 5206
extern u_int32_t NODE_18_DEV_NODE;
int doWrite_NODE_18_DEV_NODE(u_int32_t value);
int addWrite_NODE_18_DEV_NODE(u_int32_t value);
int getStatus_NODE_18_DEV_NODE();
 
#define ID_NODE_18_STATUS 5207
extern u_int32_t NODE_18_STATUS;
int doWrite_NODE_18_STATUS(u_int32_t value);
int addWrite_NODE_18_STATUS(u_int32_t value);
int getStatus_NODE_18_STATUS();
 
#define ID_NODE_19_DEV_NODE 5208
extern u_int32_t NODE_19_DEV_NODE;
int doWrite_NODE_19_DEV_NODE(u_int32_t value);
int addWrite_NODE_19_DEV_NODE(u_int32_t value);
int getStatus_NODE_19_DEV_NODE();
 
#define ID_NODE_19_STATUS 5209
extern u_int32_t NODE_19_STATUS;
int doWrite_NODE_19_STATUS(u_int32_t value);
int addWrite_NODE_19_STATUS(u_int32_t value);
int getStatus_NODE_19_STATUS();
 
#define ID_NODE_20_DEV_NODE 5210
extern u_int32_t NODE_20_DEV_NODE;
int doWrite_NODE_20_DEV_NODE(u_int32_t value);
int addWrite_NODE_20_DEV_NODE(u_int32_t value);
int getStatus_NODE_20_DEV_NODE();
 
#define ID_NODE_20_STATUS 5211
extern u_int32_t NODE_20_STATUS;
int doWrite_NODE_20_STATUS(u_int32_t value);
int addWrite_NODE_20_STATUS(u_int32_t value);
int getStatus_NODE_20_STATUS();
 
#define ID_NODE_21_DEV_NODE 5212
extern u_int32_t NODE_21_DEV_NODE;
int doWrite_NODE_21_DEV_NODE(u_int32_t value);
int addWrite_NODE_21_DEV_NODE(u_int32_t value);
int getStatus_NODE_21_DEV_NODE();
 
#define ID_NODE_21_STATUS 5213
extern u_int32_t NODE_21_STATUS;
int doWrite_NODE_21_STATUS(u_int32_t value);
int addWrite_NODE_21_STATUS(u_int32_t value);
int getStatus_NODE_21_STATUS();
 
#define ID_NODE_22_DEV_NODE 5214
extern u_int32_t NODE_22_DEV_NODE;
int doWrite_NODE_22_DEV_NODE(u_int32_t value);
int addWrite_NODE_22_DEV_NODE(u_int32_t value);
int getStatus_NODE_22_DEV_NODE();
 
#define ID_NODE_22_STATUS 5215
extern u_int32_t NODE_22_STATUS;
int doWrite_NODE_22_STATUS(u_int32_t value);
int addWrite_NODE_22_STATUS(u_int32_t value);
int getStatus_NODE_22_STATUS();
 
#define ID_NODE_23_DEV_NODE 5216
extern u_int32_t NODE_23_DEV_NODE;
int doWrite_NODE_23_DEV_NODE(u_int32_t value);
int addWrite_NODE_23_DEV_NODE(u_int32_t value);
int getStatus_NODE_23_DEV_NODE();
 
#define ID_NODE_23_STATUS 5217
extern u_int32_t NODE_23_STATUS;
int doWrite_NODE_23_STATUS(u_int32_t value);
int addWrite_NODE_23_STATUS(u_int32_t value);
int getStatus_NODE_23_STATUS();
 
#define ID_NODE_24_DEV_NODE 5218
extern u_int32_t NODE_24_DEV_NODE;
int doWrite_NODE_24_DEV_NODE(u_int32_t value);
int addWrite_NODE_24_DEV_NODE(u_int32_t value);
int getStatus_NODE_24_DEV_NODE();
 
#define ID_NODE_24_STATUS 5219
extern u_int32_t NODE_24_STATUS;
int doWrite_NODE_24_STATUS(u_int32_t value);
int addWrite_NODE_24_STATUS(u_int32_t value);
int getStatus_NODE_24_STATUS();
 
#define ID_PLC_DigIn_1 5300
extern int PLC_DigIn_1;
int doWrite_PLC_DigIn_1(int value);
int addWrite_PLC_DigIn_1(int value);
int getStatus_PLC_DigIn_1();
 
#define ID_PLC_DigIn_2 5301
extern int PLC_DigIn_2;
int doWrite_PLC_DigIn_2(int value);
int addWrite_PLC_DigIn_2(int value);
int getStatus_PLC_DigIn_2();
 
#define ID_PLC_DigIn_3 5302
extern int PLC_DigIn_3;
int doWrite_PLC_DigIn_3(int value);
int addWrite_PLC_DigIn_3(int value);
int getStatus_PLC_DigIn_3();
 
#define ID_PLC_DigIn_4 5303
extern int PLC_DigIn_4;
int doWrite_PLC_DigIn_4(int value);
int addWrite_PLC_DigIn_4(int value);
int getStatus_PLC_DigIn_4();
 
#define ID_PLC_DigIn_5 5304
extern int PLC_DigIn_5;
int doWrite_PLC_DigIn_5(int value);
int addWrite_PLC_DigIn_5(int value);
int getStatus_PLC_DigIn_5();
 
#define ID_PLC_DigIn_6 5305
extern int PLC_DigIn_6;
int doWrite_PLC_DigIn_6(int value);
int addWrite_PLC_DigIn_6(int value);
int getStatus_PLC_DigIn_6();
 
#define ID_PLC_DigIn_7 5306
extern int PLC_DigIn_7;
int doWrite_PLC_DigIn_7(int value);
int addWrite_PLC_DigIn_7(int value);
int getStatus_PLC_DigIn_7();
 
#define ID_PLC_DigIn_8 5307
extern int PLC_DigIn_8;
int doWrite_PLC_DigIn_8(int value);
int addWrite_PLC_DigIn_8(int value);
int getStatus_PLC_DigIn_8();
 
#define ID_PLC_Reserved_1 5308
extern int PLC_Reserved_1;
int doWrite_PLC_Reserved_1(int value);
int addWrite_PLC_Reserved_1(int value);
int getStatus_PLC_Reserved_1();
 
#define ID_PLC_DigOut_1 5309
extern int PLC_DigOut_1;
int doWrite_PLC_DigOut_1(int value);
int addWrite_PLC_DigOut_1(int value);
int getStatus_PLC_DigOut_1();
 
#define ID_PLC_DigOut_2 5310
extern int PLC_DigOut_2;
int doWrite_PLC_DigOut_2(int value);
int addWrite_PLC_DigOut_2(int value);
int getStatus_PLC_DigOut_2();
 
#define ID_PLC_DigOut_3 5311
extern int PLC_DigOut_3;
int doWrite_PLC_DigOut_3(int value);
int addWrite_PLC_DigOut_3(int value);
int getStatus_PLC_DigOut_3();
 
#define ID_PLC_DigOut_4 5312
extern int PLC_DigOut_4;
int doWrite_PLC_DigOut_4(int value);
int addWrite_PLC_DigOut_4(int value);
int getStatus_PLC_DigOut_4();
 
#define ID_PLC_DigOut_5 5313
extern int PLC_DigOut_5;
int doWrite_PLC_DigOut_5(int value);
int addWrite_PLC_DigOut_5(int value);
int getStatus_PLC_DigOut_5();
 
#define ID_PLC_DigOut_6 5314
extern int PLC_DigOut_6;
int doWrite_PLC_DigOut_6(int value);
int addWrite_PLC_DigOut_6(int value);
int getStatus_PLC_DigOut_6();
 
#define ID_PLC_DigOut_7 5315
extern int PLC_DigOut_7;
int doWrite_PLC_DigOut_7(int value);
int addWrite_PLC_DigOut_7(int value);
int getStatus_PLC_DigOut_7();
 
#define ID_PLC_DigOut_8 5316
extern int PLC_DigOut_8;
int doWrite_PLC_DigOut_8(int value);
int addWrite_PLC_DigOut_8(int value);
int getStatus_PLC_DigOut_8();
 
#define ID_PLC_DigOut_9 5317
extern int PLC_DigOut_9;
int doWrite_PLC_DigOut_9(int value);
int addWrite_PLC_DigOut_9(int value);
int getStatus_PLC_DigOut_9();
 
#define ID_PLC_DigOut_10 5318
extern int PLC_DigOut_10;
int doWrite_PLC_DigOut_10(int value);
int addWrite_PLC_DigOut_10(int value);
int getStatus_PLC_DigOut_10();
 
#define ID_PLC_DigOut_11 5319
extern int PLC_DigOut_11;
int doWrite_PLC_DigOut_11(int value);
int addWrite_PLC_DigOut_11(int value);
int getStatus_PLC_DigOut_11();
 
#define ID_PLC_DigOut_12 5320
extern int PLC_DigOut_12;
int doWrite_PLC_DigOut_12(int value);
int addWrite_PLC_DigOut_12(int value);
int getStatus_PLC_DigOut_12();
 
#define ID_PLC_Hwconf 5321
extern u_int16_t PLC_Hwconf;
int doWrite_PLC_Hwconf(u_int16_t value);
int addWrite_PLC_Hwconf(u_int16_t value);
int getStatus_PLC_Hwconf();
 
#define ID_PLC_Revisione 5322
extern u_int16_t PLC_Revisione;
int doWrite_PLC_Revisione(u_int16_t value);
int addWrite_PLC_Revisione(u_int16_t value);
int getStatus_PLC_Revisione();
 
#define ID_PLC_StatusReg 5323
extern u_int16_t PLC_StatusReg;
int doWrite_PLC_StatusReg(u_int16_t value);
int addWrite_PLC_StatusReg(u_int16_t value);
int getStatus_PLC_StatusReg();
 
#define ID_PLC_Heartbeat 5324
extern u_int16_t PLC_Heartbeat;
int doWrite_PLC_Heartbeat(u_int16_t value);
int addWrite_PLC_Heartbeat(u_int16_t value);
int getStatus_PLC_Heartbeat();
 
#define ID_PLC_AnIn_1 5325
extern int16_t PLC_AnIn_1;
int doWrite_PLC_AnIn_1(int16_t value);
int addWrite_PLC_AnIn_1(int16_t value);
int getStatus_PLC_AnIn_1();
 
#define ID_PLC_AnIn_2 5326
extern int16_t PLC_AnIn_2;
int doWrite_PLC_AnIn_2(int16_t value);
int addWrite_PLC_AnIn_2(int16_t value);
int getStatus_PLC_AnIn_2();
 
#define ID_PLC_AnIn_3 5327
extern int16_t PLC_AnIn_3;
int doWrite_PLC_AnIn_3(int16_t value);
int addWrite_PLC_AnIn_3(int16_t value);
int getStatus_PLC_AnIn_3();
 
#define ID_PLC_AnIn_4 5328
extern int16_t PLC_AnIn_4;
int doWrite_PLC_AnIn_4(int16_t value);
int addWrite_PLC_AnIn_4(int16_t value);
int getStatus_PLC_AnIn_4();
 
#define ID_PLC_EncoderCo_Lo 5329
extern u_int16_t PLC_EncoderCo_Lo;
int doWrite_PLC_EncoderCo_Lo(u_int16_t value);
int addWrite_PLC_EncoderCo_Lo(u_int16_t value);
int getStatus_PLC_EncoderCo_Lo();
 
#define ID_PLC_EncoderCo_Hi 5330
extern u_int16_t PLC_EncoderCo_Hi;
int doWrite_PLC_EncoderCo_Hi(u_int16_t value);
int addWrite_PLC_EncoderCo_Hi(u_int16_t value);
int getStatus_PLC_EncoderCo_Hi();
 
#define ID_PLC_CaptureT1_Lo 5331
extern u_int16_t PLC_CaptureT1_Lo;
int doWrite_PLC_CaptureT1_Lo(u_int16_t value);
int addWrite_PLC_CaptureT1_Lo(u_int16_t value);
int getStatus_PLC_CaptureT1_Lo();
 
#define ID_PLC_CaptureT1_Hi 5332
extern u_int16_t PLC_CaptureT1_Hi;
int doWrite_PLC_CaptureT1_Hi(u_int16_t value);
int addWrite_PLC_CaptureT1_Hi(u_int16_t value);
int getStatus_PLC_CaptureT1_Hi();
 
#define ID_PLC_CaptureT2_Lo 5333
extern u_int16_t PLC_CaptureT2_Lo;
int doWrite_PLC_CaptureT2_Lo(u_int16_t value);
int addWrite_PLC_CaptureT2_Lo(u_int16_t value);
int getStatus_PLC_CaptureT2_Lo();
 
#define ID_PLC_CaptureT2_Hi 5334
extern u_int16_t PLC_CaptureT2_Hi;
int doWrite_PLC_CaptureT2_Hi(u_int16_t value);
int addWrite_PLC_CaptureT2_Hi(u_int16_t value);
int getStatus_PLC_CaptureT2_Hi();
 
#define ID_PLC_RPM 5335
extern u_int16_t PLC_RPM;
int doWrite_PLC_RPM(u_int16_t value);
int addWrite_PLC_RPM(u_int16_t value);
int getStatus_PLC_RPM();
 
#define ID_PLC_Tamb 5336
extern int16_t PLC_Tamb;
int doWrite_PLC_Tamb(int16_t value);
int addWrite_PLC_Tamb(int16_t value);
int getStatus_PLC_Tamb();
 
#define ID_PLC_EnableEnc 5337
extern u_int16_t PLC_EnableEnc;
int doWrite_PLC_EnableEnc(u_int16_t value);
int addWrite_PLC_EnableEnc(u_int16_t value);
int getStatus_PLC_EnableEnc();
 
#define ID_PLC_ResetCount 5338
extern u_int16_t PLC_ResetCount;
int doWrite_PLC_ResetCount(u_int16_t value);
int addWrite_PLC_ResetCount(u_int16_t value);
int getStatus_PLC_ResetCount();
 
#define ID_PLC_AnInConf_1 5339
extern u_int16_t PLC_AnInConf_1;
int doWrite_PLC_AnInConf_1(u_int16_t value);
int addWrite_PLC_AnInConf_1(u_int16_t value);
int getStatus_PLC_AnInConf_1();
 
#define ID_PLC_AnInConf_2 5340
extern u_int16_t PLC_AnInConf_2;
int doWrite_PLC_AnInConf_2(u_int16_t value);
int addWrite_PLC_AnInConf_2(u_int16_t value);
int getStatus_PLC_AnInConf_2();
 
#define ID_PLC_AnInConf_3 5341
extern u_int16_t PLC_AnInConf_3;
int doWrite_PLC_AnInConf_3(u_int16_t value);
int addWrite_PLC_AnInConf_3(u_int16_t value);
int getStatus_PLC_AnInConf_3();
 
#define ID_PLC_AnInConf_4 5342
extern u_int16_t PLC_AnInConf_4;
int doWrite_PLC_AnInConf_4(u_int16_t value);
int addWrite_PLC_AnInConf_4(u_int16_t value);
int getStatus_PLC_AnInConf_4();
 
#define ID_PLC_AnOutConf_1 5343
extern u_int16_t PLC_AnOutConf_1;
int doWrite_PLC_AnOutConf_1(u_int16_t value);
int addWrite_PLC_AnOutConf_1(u_int16_t value);
int getStatus_PLC_AnOutConf_1();
 
#define ID_PLC_AnOutConf_2 5344
extern u_int16_t PLC_AnOutConf_2;
int doWrite_PLC_AnOutConf_2(u_int16_t value);
int addWrite_PLC_AnOutConf_2(u_int16_t value);
int getStatus_PLC_AnOutConf_2();
 
#define ID_PLC_Reserved_2 5345
extern u_int16_t PLC_Reserved_2;
int doWrite_PLC_Reserved_2(u_int16_t value);
int addWrite_PLC_Reserved_2(u_int16_t value);
int getStatus_PLC_Reserved_2();
 
#define ID_PLC_Reserved_3 5346
extern u_int16_t PLC_Reserved_3;
int doWrite_PLC_Reserved_3(u_int16_t value);
int addWrite_PLC_Reserved_3(u_int16_t value);
int getStatus_PLC_Reserved_3();
 
#define ID_PLC_AnOut_1 5347
extern int16_t PLC_AnOut_1;
int doWrite_PLC_AnOut_1(int16_t value);
int addWrite_PLC_AnOut_1(int16_t value);
int getStatus_PLC_AnOut_1();
 
#define ID_PLC_AnOut_2 5348
extern int16_t PLC_AnOut_2;
int doWrite_PLC_AnOut_2(int16_t value);
int addWrite_PLC_AnOut_2(int16_t value);
int getStatus_PLC_AnOut_2();
 
#define ID_PLC_Reserved_4 5349
extern int16_t PLC_Reserved_4;
int doWrite_PLC_Reserved_4(int16_t value);
int addWrite_PLC_Reserved_4(int16_t value);
int getStatus_PLC_Reserved_4();
 
#define ID_PLC_Reserved_5 5350
extern int16_t PLC_Reserved_5;
int doWrite_PLC_Reserved_5(int16_t value);
int addWrite_PLC_Reserved_5(int16_t value);
int getStatus_PLC_Reserved_5();
 
#define ID_PLC_FiltAnIn_1 5351
extern u_int16_t PLC_FiltAnIn_1;
int doWrite_PLC_FiltAnIn_1(u_int16_t value);
int addWrite_PLC_FiltAnIn_1(u_int16_t value);
int getStatus_PLC_FiltAnIn_1();
 
#define ID_PLC_FiltAnIn_2 5352
extern u_int16_t PLC_FiltAnIn_2;
int doWrite_PLC_FiltAnIn_2(u_int16_t value);
int addWrite_PLC_FiltAnIn_2(u_int16_t value);
int getStatus_PLC_FiltAnIn_2();
 
#define ID_PLC_FiltAnIn_3 5353
extern u_int16_t PLC_FiltAnIn_3;
int doWrite_PLC_FiltAnIn_3(u_int16_t value);
int addWrite_PLC_FiltAnIn_3(u_int16_t value);
int getStatus_PLC_FiltAnIn_3();
 
#define ID_PLC_FiltAnIn_4 5354
extern u_int16_t PLC_FiltAnIn_4;
int doWrite_PLC_FiltAnIn_4(u_int16_t value);
int addWrite_PLC_FiltAnIn_4(u_int16_t value);
int getStatus_PLC_FiltAnIn_4();
 
#define ID_CH0_NETRUN 5357
extern int CH0_NETRUN;
int doWrite_CH0_NETRUN(int value);
int addWrite_CH0_NETRUN(int value);
int getStatus_CH0_NETRUN();
 
#define ID_CH0_NETGOOD 5358
extern int CH0_NETGOOD;
int doWrite_CH0_NETGOOD(int value);
int addWrite_CH0_NETGOOD(int value);
int getStatus_CH0_NETGOOD();
 
#define ID_CH0_NETERR 5359
extern u_int32_t CH0_NETERR;
int doWrite_CH0_NETERR(u_int32_t value);
int addWrite_CH0_NETERR(u_int32_t value);
int getStatus_CH0_NETERR();
 
#define ID_CH0_NETRST 5360
extern int CH0_NETRST;
int doWrite_CH0_NETRST(int value);
int addWrite_CH0_NETRST(int value);
int getStatus_CH0_NETRST();
 
#define ID_CH0_NETDIS 5361
extern int CH0_NETDIS;
int doWrite_CH0_NETDIS(int value);
int addWrite_CH0_NETDIS(int value);
int getStatus_CH0_NETDIS();
 
#define ID_CH0_01_NODERUN 5362
extern int CH0_01_NODERUN;
int doWrite_CH0_01_NODERUN(int value);
int addWrite_CH0_01_NODERUN(int value);
int getStatus_CH0_01_NODERUN();
 
#define ID_CH0_01_NODEGOOD 5363
extern int CH0_01_NODEGOOD;
int doWrite_CH0_01_NODEGOOD(int value);
int addWrite_CH0_01_NODEGOOD(int value);
int getStatus_CH0_01_NODEGOOD();
 
#define ID_CH0_01_NODEERR 5364
extern u_int32_t CH0_01_NODEERR;
int doWrite_CH0_01_NODEERR(u_int32_t value);
int addWrite_CH0_01_NODEERR(u_int32_t value);
int getStatus_CH0_01_NODEERR();
 
#define ID_CH0_01_NODERST 5365
extern int CH0_01_NODERST;
int doWrite_CH0_01_NODERST(int value);
int addWrite_CH0_01_NODERST(int value);
int getStatus_CH0_01_NODERST();
 
#define ID_CH0_01_NODEDIS 5366
extern int CH0_01_NODEDIS;
int doWrite_CH0_01_NODEDIS(int value);
int addWrite_CH0_01_NODEDIS(int value);
int getStatus_CH0_01_NODEDIS();
 
#define ID_PLC_time 5390
extern float PLC_time;
int doWrite_PLC_time(float value);
int addWrite_PLC_time(float value);
int getStatus_PLC_time();
 
#define ID_PLC_timeMin 5391
extern float PLC_timeMin;
int doWrite_PLC_timeMin(float value);
int addWrite_PLC_timeMin(float value);
int getStatus_PLC_timeMin();
 
#define ID_PLC_timeMax 5392
extern float PLC_timeMax;
int doWrite_PLC_timeMax(float value);
int addWrite_PLC_timeMax(float value);
int getStatus_PLC_timeMax();
 
#define ID_PLC_timeWin 5393
extern float PLC_timeWin;
int doWrite_PLC_timeWin(float value);
int addWrite_PLC_timeWin(float value);
int getStatus_PLC_timeWin();
 
#define ID_PLC_Version 5394
extern u_int16_t PLC_Version;
int doWrite_PLC_Version(u_int16_t value);
int addWrite_PLC_Version(u_int16_t value);
int getStatus_PLC_Version();
 
#define ID_PLC_EngineStatus 5395
extern u_int16_t PLC_EngineStatus;
int doWrite_PLC_EngineStatus(u_int16_t value);
int addWrite_PLC_EngineStatus(u_int16_t value);
int getStatus_PLC_EngineStatus();
 
#define ID_PLC_ResetValues 5396
extern int PLC_ResetValues;
int doWrite_PLC_ResetValues(int value);
int addWrite_PLC_ResetValues(int value);
int getStatus_PLC_ResetValues();
 
#define ID_PLC_buzzerOn 5397
extern int PLC_buzzerOn;
int doWrite_PLC_buzzerOn(int value);
int addWrite_PLC_buzzerOn(int value);
int getStatus_PLC_buzzerOn();
 
#ifdef __cplusplus
}
#endif
#endif
