#include "decoder.h"
//Prefix CD flag used to run other operations, this is set when op 0xCB is set

uint8_t *PREFIX_CB_flag;

void init_decoder(){
  PREFIX_CB_flag = malloc(sizeof(char));
  *PREFIX_CB_flag = 0x00;

}




OPERATION_s* decoder(uint8_t opcode){
  OPERATION_s* operation = malloc(sizeof(OPERATION_s));
  // check if Prefix CB 
  if(opcode == PREFIX_CB_OPCODE){
    *PREFIX_CB_flag = 0x1;
  }

  operation->RD = decode_rd(opcode);


}

REGS_t decode_rd(uint8_t opcode){
  REGS_t ret = -1;
  isBRD(opcode)? ret = B : printf("RD is not B");
  

}
