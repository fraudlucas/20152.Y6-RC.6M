#include "rims.h"

/* exercicio slide 72
   autor: jonathan soares
   Um carro tem um sensor conectado a A0 (1
significa que o carro está ligado), outro sensor
conectado em A1 (1 significa que uma pessoa
está sentada no banco do motorista) e por fim
um sensor está conectado em A2 (1 significa que
o cinto de segurança está colocado). Escreva um
código C no RIM para um sistema de verificação
do cinto de segurança, que ilumina uma luz no
painel (B0 = 1) quando um carro é ligado, um
motorista está sentado e o cinto não está
apertado. Teste o código escrito no RIM para
todas as possíveis combinações A2, A1 e A0 e
gere o diagrama de tempo. */

void main()
{
   while (1) { 
      B0 = A0 && A1 && !A2;
   }
}
