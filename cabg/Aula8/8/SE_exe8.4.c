/*C�sar Augusto B. Gon�alves
[Sensor de vaga de estacionamento] Um estacionamento tem 8 espa�os, cada um com um 
sensor conectada a entrada do RIMS (A7...A0). Um entrada sendo 1, significa que um carro foi 
detectado no espa�o correspondente. A7 e A6 s�o reservados para deficientes. Escreva um 
programa no RIMS que: (1) Seta B0 com 1 se ambos os espa�os de deficientes est�o ocupados; 
(2) Seta B7...B5 igual ao n�mero de espa�os dispon�veis para n�o deficientes */

#include "rims.h"


void main()
{
   while (1) { 
       
      B = (A6 && A7) + ((A0 + A1 + A2 + A3 + A4 + A5) << 5);
   }
}
