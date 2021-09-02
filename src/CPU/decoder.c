#include <../defines.h>

//Prefix CD flag used to run other operations, this is set when op 0xCB is set

uint8_t *PREFIX_CB;

void init_decoder(){
  PREFIX_CB = malloc(sizeof(char));
  *PREFIX_CB = 0x00;
}

int deccoder(){

}