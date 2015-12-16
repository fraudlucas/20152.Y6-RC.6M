/*César Augusto B. Gonçalves
[Sensor de vaga de estacionamento] Um estacionamento tem 8 espaços, cada um com um 
sensor conectada a entrada do RIMS (A7...A0). Um entrada sendo 1, significa que um carro foi 
detectado no espaço correspondente. A7 e A6 são reservados para deficientes. Escreva um 
programa no RIMS que: (1) Seta B0 com 1 se ambos os espaços de deficientes estão ocupados; 
(2) Seta B7...B5 igual ao número de espaços disponíveis para não deficientes */

#include "rims.h"


void main()
{
   while (1) { 
       
      B = (A6 && A7) + ((A0 + A1 + A2 + A3 + A4 + A5) << 5);
   }
}
