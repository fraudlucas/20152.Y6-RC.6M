/*C�sar Augusto B. Gon�alves 
Escreva um simples programa em C no RIMS que seta B com A exceto que B1 e B0 s�o sempre 0. 
Use as duas formas, bitwise e booleana. Teste ap�s a escrita*/

#include "rims.h"

void main()
{
   while (1) { 
       
      //B = (A << 2);
      B = (A & 0xFC);
      
   }
}
