#include "rims.h"

unsigned char SetBit(unsigned char x, unsigned char k, unsigned char b){
            return (b?(x|(0x01 << k)) : (x & ~(0x01 << k)));
}
void main()
{
   while (1) {
    B = 0Xf1;
    B = SetBit(B, 2, 1);
    B = SetBit(B, 5, 0);
   }
}
