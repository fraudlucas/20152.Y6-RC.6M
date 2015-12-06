#include "rims.h"

unsigned char SetBit(unsigned char x, unsigned char k, unsigned char b){
            return (b?(x|(0x01 << k)) : (x & ~(0x01 << k)));
}
void main()
{
   unsigned char i, val;
   while (1) {
       //Realizar experiencias mudando o valor do AO
      val = A0;
      for (i=0; i < 4; i++){
         B = SetBit(B, i, val);
      }
   }
}
