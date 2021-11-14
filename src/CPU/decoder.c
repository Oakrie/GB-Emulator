#include "decoder.h"
//Prefix CD flag used to run other operations, this is set when op 0xCB is set

uint8_t *PREFIX_CB_flag;

void init_decoder(){
  PREFIX_CB_flag = malloc(sizeof(char));
  *PREFIX_CB_flag = 0x00;
}

OPERATION_s* deccoder(){
  OPERATION_s* operation = malloc(sizeof(OPERATION_s));


}