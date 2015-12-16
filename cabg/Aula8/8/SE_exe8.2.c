/*César Augusto B. Gonçalves
Considere um sistema com um sensor de som com uma saída de 4-bits conectada a A3...A0, 
o (0000) significa sem som, 15 (1111) significa som alto. Um segundo sensor conecta A7...A4. 
Um sistema deve adicionar esses dois valores de 4-bits (soma) na saída B */

#include "rims.h"


void main()
{
   unsigned char som1 = 0;
   unsigned char som2 = 0;
   
   while (1) { 
      
      som1 = A & 0x0f;
      som2 = A >> 4;
      B = som1 + som2;
      
   }
}
