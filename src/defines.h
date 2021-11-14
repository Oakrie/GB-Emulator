/*=======================       INCLUDES        =======================*/
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
/*=====================================================================*/
/*=======================        MACROS         =======================*/
#define DEBUG 0
#define RET_ERR 1
#define RET_OK 0
/*=====================================================================*/
/*=======================         ENUM          =======================*/

//Total of 7 different operaiton types, with variable bytes used
typedef enum OPTYPE{CNTRL, JUMPS, LSM, ARITH, SHIFT} OPTYPE_t;

//Control instructions
enum CNTRL_instr{NOP, STOP, HALT, PREFIX_CB, DI, EI};

//Jump instructions
enum JUMPS_instr{JR, RET, CALL, RST, JP, RETI};

//Load/Store/Move instructions
enum LSM_instr {LD, LDH, POP, PUSH};

//Arithmetic Instructions 
enum ARITH_instr{INC, DEC, ADD, DAA, SCF, CPL, CFF, ADC, SUB, SBC, AND, XOR, OR, CP};

// Rotations and Shifts
enum SHIFT_instr{RLCA, RRCA, RLA, RRA, RLC, RRC, RL, RR, SLA, SRA, SWAP, SRL, BIT0, BIT1, BIT2, BIT3, BIT4, BIT5, BIT6, BIT7, RES0, RES1, RES2, RES3, RES4, RES5, RES6, RES7, SET0, SET1, SET2, SET3, SET4, SET5, SET6, SET7};

//registers
typedef enum REGS{BC, B, C, DE, D, E, HL, H, L, AF, A, F, SP, PC} REGS_t;

/*=====================================================================*/
/*=======================        STRUCTS        =======================*/
typedef struct operation 
{
  OPTYPE_t op;
  uint8_t instruction;
  uint8_t bytes;
  REGS_t RD;
  REGS_t R1;
} OPERATION_s;

/*=====================================================================*/
/*=======================        GLOBALS        =======================*/
uint32_t *PC_r;
uint8_t *PREFIX_CB_f;
FILE *gb_file;
/*=====================================================================*/