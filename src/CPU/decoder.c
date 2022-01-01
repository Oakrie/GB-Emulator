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
  //TODO: move this to the switch statement below 
  if(opcode == PREFIX_CB_OPCODE){
    //TODO, DECODE
    *PREFIX_CB_flag = 0x1;
        OPERATION_s tmp  = { .op=CNTRL, .instruction=PREFIX_CB,
                         .bytes=1, .RD=NAR, .R1=NAR};
    *operation = tmp;
    //Prefix CB sets a flag and we get next intruction
    return operation;
  }

  // return NULL;

  // most significant half byte
  uint8_t opcode_mshb = (opcode >> 4) & 0x0F;

  printf("opcode_mshb = 0x%X\n", opcode_mshb);
  // least significant half byte
  uint8_t opcode_lshb = opcode & 0x0F;
  printf("opcode_lshb = 0x%X\n", opcode_lshb);

  int ret = 0;
  switch (opcode_mshb)
  {
    case 0x00:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_0(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_0(opcode_lshb, operation);
      }
      break;

    case 0x01:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_1(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_1(opcode_lshb, operation);
      }
      break;

    case 0x02:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_2(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_2(opcode_lshb, operation);
      }
      break;

    case 0x03:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_3(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_3(opcode_lshb, operation);
      }
      break;

    case 0x04:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_4(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_4(opcode_lshb, operation);
      }
      break;

    case 0x05:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_5(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_5(opcode_lshb, operation);
      }
      break;

    case 0x06:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_6(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_6(opcode_lshb, operation);
      }
      break;

    case 0x07:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_7(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_7(opcode_lshb, operation);
      }
      break;

    case 0x08:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_8(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_8(opcode_lshb, operation);
      }
      break;
    case 0x09:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_9(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_9(opcode_lshb, operation);
      }
      break;

    case 0x0A:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_A(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_A(opcode_lshb, operation);
      }
      break;

    case 0x0B:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_B(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_B(opcode_lshb, operation);
      }
      break;

    case 0x0C:
      if(!(*PREFIX_CB_flag)){
        if(opcode == PREFIX_CB_OPCODE){
          *PREFIX_CB_flag = 1;
        }
        ret = decode_row_C(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_C(opcode_lshb, operation);
      }
      break;

    case 0x0D:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_D(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_D(opcode_lshb, operation);
      }
      break;

    case 0x0E:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_E(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_E(opcode_lshb, operation);
      }
      break;

    case 0x0F:
      if(!(*PREFIX_CB_flag)){
        ret = decode_row_F(opcode_lshb, operation);
      } else {
        ret = cb_decode_row_F(opcode_lshb, operation);
      }
      break;

    default:
      printf("ERROR: MSBH was not set properly\n");
      ret = -1;
      break;
    }

  // Check return value of decode row, if its 1, means operation is PREFIX CB
  if (ret == -1){
    printf("ERROR: Could not decode operation 0x%X\n", opcode);
  } else if (ret == 0){
    *PREFIX_CB_flag = 0;
  } else if (ret == 1){
    *PREFIX_CB_flag = 1;
  } else {
    printf("ERROR: Unkown return value after decode: %d\n", ret);
  }
  
  return operation;
}