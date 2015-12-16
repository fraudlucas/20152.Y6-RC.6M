/*César Augusto B. Gonçalves

Um carro tem um sensor que inicializa A com o peso do passageiro 
(se o passageiro pesar 59 kg, A7...A0 = 00111011). Isso é 
importante pois alguns carros só acionam o airbag com peso minimo. 
Escreva um programa no RIMS que habilita o sistema de airbag do 
carro (B0=1) se o peso do passageiro for igual ou maior que 48 kg. 
Tambem ligue uma luz "Airbag off" (B1=1) se peso > 2,5 kg mas
peso < 48 kg.
*/

#include "rims.h"

void main()
{
   while (1) { 
      if (A >= 48) {
         B = 0x01;         
      } else if (A > 2 && A < 48) {
         B = 0x02;   
      } else {
         B = 0x00;
      }
   }
}
