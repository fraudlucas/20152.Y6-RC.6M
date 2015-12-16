/*
César Augusto B. Gonçalves
Escreva um programa em C no RIMS que repetidamente executa B = 7. 
Note que as saídas B2, B1 e B0 tornam-se 1, porque 7 = 00000111 
(perceba que 7 aparece na abaixo dos pinos de saída no RIMS). 
Depois, inicialize os switches de entrada A3=1, A2=0, A1=0 e A0=1 
com as outras entradas em 0 e note que 9 aparece. Por que?
*/

#include "rims.h"

void main()
{
   while (1) { 
      B = 7;
   }
}
