#include "rims.h"

/*Exercicio 2 slide 48
  Autor: Jonathan Soares
Um programa deve se comportar da seguinte
maneira: Setar B0 com 1 se exatamente uma das
entradas A0 ou A1 é 1. Desenhe o diagrama de
tempo ilustrando esse comportamento*/

void main()
{
   while (1) { 
      B0 = A0 || A1;
   }
}
