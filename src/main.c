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

  // run init, pass the ROM FILE PATH
  // init(char rgv[1]);
  //Need to read the ROM into memory, then process each op code
  //Open file, pass pointer to file which has the instr set around.

  //run the following steps until
  while(1){
    //Decode
    //Execute
  }

  return RET_OK;
}