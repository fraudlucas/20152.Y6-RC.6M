#include "rims.h"

unsigned char GetBit(unsigned char x, unsigned char k){
       return ((x & (0x01 << k)) !=0);
}
void main()
{
   while (1) {
       B = 0xCC;
       B = GetBit(A, 3);
   }
}
