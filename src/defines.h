#include <stdint.h>

//Total of 7 different operaiton types, with variable bytes used
typedef enum OPTYPE{CNTRL, JUMPS, LSM, ARITH, SHIFT} OPTYPE_t;

//Control instructions
enum CNTRL_instr{NOP, STOP, HALT, PREFIX_CB, DI, EI};

//Jump instructions
enum JUMPS_instr{JR, RET, JP, CALL, RST, JP, RST, RETI};

//Load/Store/Move instructions
enum LSM_instr {LD, LDH, POP, PUSH};

//Arithmetic Instructions 
enum ARITH_instr{INC, DEC, };

//registers
typedef enum REGS{BC, B, C, DE, D, E, HL, H, L, AF, A, F, SP, PC} REGS_t;

typedef struct operation 
{
  OPTYPE_t op;
  uint8_t bytes;
  REGS_t RD;
  REGS_t R1;
} operation;
