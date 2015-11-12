#include "rims.h"


void main()
{
   unsigned char qtd = 0;
   while (1) {
       qtd = A0 + A1 + A2 + A3 + A4 + A5;
       B = (qtd << 5) + (A7 && A6);
   }
}
