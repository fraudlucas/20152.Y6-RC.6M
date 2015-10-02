#include "rims.h"

/*Exercicio slide 41
  Autor: Jonathan Soares
Escrever um programa em C na ferramenta RIM
que define B0 = 1 quando o número de 1s no A2,
A1, A0 é de dois ou mais (ou seja, quando A2 A1
A0 são 011, 110, 101 ou 111). Dica: Use
operador lógico “ou” (||) além de sua lógica
pessoal.*/

void main()
{
   while (1) { 
      B0 = (A0 && A1)||(A1 && A2)||(A0 && A2)||(A0 && A1 && A2);
   }
}
