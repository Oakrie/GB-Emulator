#ifndef OPCODE_ROWS_H
#define OPCODE_ROWS_H

/*=======================       INCLUDES        =======================*/
#include "../defines.h"

/*=====================================================================*/
/*=======================        MACROS         =======================*/

/*=====================================================================*/
/*=======================         ENUM          =======================*/

/*=====================================================================*/
/*=======================        STRUCTS        =======================*/

/*=====================================================================*/
/*=======================        GLOBALS        =======================*/

/*=====================================================================*/
/*=======================       PROTOTYPES      =======================*/

int decode_row_0(uint8_t lshb, OPERATION_s* op);
int decode_row_1(uint8_t lshb, OPERATION_s* op);
int decode_row_2(uint8_t lshb, OPERATION_s* op);
int decode_row_3(uint8_t lshb, OPERATION_s* op);
int decode_row_4(uint8_t lshb, OPERATION_s* op);
int decode_row_5(uint8_t lshb, OPERATION_s* op);
int decode_row_6(uint8_t lshb, OPERATION_s* op);
int decode_row_7(uint8_t lshb, OPERATION_s* op);
int decode_row_8(uint8_t lshb, OPERATION_s* op);
int decode_row_9(uint8_t lshb, OPERATION_s* op);
int decode_row_A(uint8_t lshb, OPERATION_s* op);
int decode_row_B(uint8_t lshb, OPERATION_s* op);
int decode_row_C(uint8_t lshb, OPERATION_s* op);
int decode_row_D(uint8_t lshb, OPERATION_s* op);
int decode_row_E(uint8_t lshb, OPERATION_s* op);
int decode_row_F(uint8_t lshb, OPERATION_s* op);

// PREFIX CB rows
int cb_decode_row_0(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_1(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_2(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_3(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_4(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_5(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_6(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_7(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_8(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_9(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_A(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_B(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_C(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_D(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_E(uint8_t lshb, OPERATION_s* op);
int cb_decode_row_F(uint8_t lshb, OPERATION_s* op);
/*=====================================================================*/
#endif