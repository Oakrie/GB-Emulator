#include "./CPU/decoder.h"


// void init(char *file_path){
//   gb_file = fopen(file_path, )
// }



int main(int argc, char *argv[]) {
  //input should be path to ROM 

  if(argc != 2){
    printf("Usage: \n ./GM-Emulator {Path to ROM}\n");
    return RET_ERR;
  }

  printf("Opening ROM: %s\n", argv[1]);
  FILE *romfp = fopen(argv[1], "rb");

  // Get the ROM file size
  fseek(romfp, 0, SEEK_END);
  size_t fsize = ftell(romfp);
  fseek(romfp, 0, SEEK_SET);

  uint8_t *buf = malloc(sizeof(uint8_t) * fsize + 1);
  size_t t = fread(buf,1, fsize , romfp);
  fclose(romfp);

  
  // run init, pass the ROM FILE PATH
  init_decoder();
  //Need to read the ROM into memory, then process each op code
  //Open file, pass pointer to file which has the instr set around.

  //run the following steps until
  for (size_t i = 0; i < fsize; i++)
  {
    /* code */
    OPERATION_s *operation = decoder(buf[i]);
    if (operation != NULL){
      printf("D: op-type: %d instruction: %d bytes: %d RD: %d R!: %d\n",operation->op,
      operation->instruction, operation->bytes, operation->RD, operation->R1);
    }
  }
  

  return RET_OK;
}
