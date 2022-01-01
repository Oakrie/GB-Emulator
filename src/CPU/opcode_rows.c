#include "opcode_rows.h"


int decode_row_0(uint8_t lshb, OPERATION_s* op){

  switch (lshb)
  {
  case 0x00:
    //NOP
    OPERATION_s tmp = {.op=CNTRL,
                       .instruction=NOP,
                       .RD=NAR,
                       .R1=NAR,
                       .bytes=1,
                       .cycles=4,
                       .REG_F=0x0,
                       .masked_reg=NORM,
                       .hl_reg=NO_MASK};
    break;

  case 0x01:
    // LD BC,d16
    OPERATION_s tmp = {.op=LSM,
                       .instruction=LD,
                       .RD=BC,
                       .R1=d16,
                       .bytes=3,
                       .cycles=12,
                       .REG_F=0x0,
                       .masked_reg=NORM,
                       .hl_reg=NO_MASK};
    break;
  case 0x02:
    // LD (BC), A
    OPERATION_s tmp = {.op=LSM,
                       .instruction=LD,
                       .RD=BC,
                       .R1=A,
                       .bytes=1,
                       .cycles=8,
                       .REG_F=0x0,
                       .masked_reg=NORM,
                       .hl_reg=MASK_RD};
    break;
  case 0x03:
    /* code */
    OPERATION_s tmp = {.op=ARITH,
                       .instruction=INC,
                       .RD=BC,
                       .R1=d16, //Technically a d-16, but is 0x01
                       .bytes=1,
                       .cycles=8,
                       .REG_F=0x0,
                       .masked_reg=NORM,
                       .hl_reg=NO_MASK};
    break;
  case 0x04:
    /* code */
    OPERATION_s tmp = {.op=ARITH,
                       .instruction=INC,
                       .RD=B,
                       .R1=d8,  //Technically a d-8, but is 0x01
                       .bytes=1,
                       .cycles=4,
                       .REG_F=FLAG_Z|FLAG_H,
                       .masked_reg=NORM,
                       .hl_reg=NO_MASK};
    break;
  case 0x05:
    /* code */
    OPERATION_s tmp = {.op=ARITH,
                       .instruction=DEC,
                       .RD=B,
                       .R1=d8,  //Technically a d-8, but is 0x01
                       .bytes=1,
                       .cycles=4,
                       .REG_F=FLAG_Z|FLAG_N|FLAG_H,
                       .masked_reg=NORM,
                       .hl_reg=NO_MASK};
    break;
  case 0x06:
    /* code */
    OPERATION_s tmp = {.op=LSM,
                       .instruction=LD,
                       .RD=B,
                       .R1=d8,  //Technically a d-8, but is 0x01
                       .bytes=2,
                       .cycles=8,
                       .REG_F=0x0,
                       .masked_reg=NORM,
                       .hl_reg=NO_MASK};
    break;
  case 0x07:
    /* code */
    OPERATION_s tmp = {.op=SHIFT,
                       .instruction=RLCA,
                       .RD=NAR,
                       .R1=NAR,  //Technically a d-8, but is 0x01
                       .bytes=1,
                       .cycles=4,
                       .REG_F=FLAG_C,
                       .masked_reg=NORM,
                       .hl_reg=NO_MASK};
    break;
  case 0x08:
    /* code */
    OPERATION_s tmp = {.op=LSM,
                       .instruction=LD,
                       .RD=a16,
                       .R1=SP,  //Technically a d-8, but is 0x01
                       .bytes=3,
                       .cycles=20,
                       .REG_F=0x0,
                       .masked_reg=NORM, //i.e. the bracket ones
                       .hl_reg=NO_MASK};
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }

}

int decode_row_1(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_2(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_3(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_4(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_5(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_6(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_7(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_8(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_9(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_A(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_B(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_C(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_D(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_E(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int decode_row_F(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

// PREFIX CB rows
int cb_decode_row_0(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_1(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_2(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_3(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_4(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_5(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_6(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_7(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_8(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_9(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_A(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_B(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_C(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_D(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_E(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}

int cb_decode_row_F(uint8_t lshb, OPERATION_s* op){
  switch (lshb)
  {
  case 0x00:
    /* code */
    break;
  case 0x01:
    /* code */
    break;
  case 0x02:
    /* code */
    break;
  case 0x03:
    /* code */
    break;
  case 0x04:
    /* code */
    break;
  case 0x05:
    /* code */
    break;
  case 0x06:
    /* code */
    break;
  case 0x07:
    /* code */
    break;
  case 0x08:
    /* code */
    break;
  case 0x09:
    /* code */
    break;
  case 0x0A:
    /* code */
    break;
  case 0x0B:
    /* code */
    break;
  case 0x0C:
    /* code */
    break;
  case 0x0D:
    /* code */
    break;
  case 0x0E:
    /* code */
    break;
  case 0x0F:
    /* code */
    break;
  default:
    break;
  }
}
