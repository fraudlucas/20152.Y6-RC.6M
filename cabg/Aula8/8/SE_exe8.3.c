/*César Augusto B. Gonçalves
Escreva um programa no RIMS que seta B3-B0 para A5-A2 e seta as demais saídas com 0s. 
Teste no RIMS e crie um vetor de teste.
 */

#include "rims.h"

void main()
{
   while (1) { 
      B = (A >> 2) & 0x0F;
   }
}
