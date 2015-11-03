#include "rims.h"
void main()
{
    int tini = 0;
    int tfim = 0;
    int intervalo; //define um intervalo de duracao
    
   while (intervalo < 50) { //enquando o tempo da corrida não se completa
		intervalo = tfim - tini; //calcula o intervalo de duracao
		B0 = A0 && A1 && A2 && A3; //indica 4 carros ocupados
        B1 = !B0; //B1 - representa a duracao da corrida
        B2 = B1; //B2 - representa pista segura sem energia
		if (intervalo >= 50){ //corrida atinge o tempo limite
			B1 = B0; //emite sinal sonoro de fim de corrida
			B2 = B1; //emite sinal de pista segura
			B0 = !(A0 && A1 && A2 && A3); //pessoas saem dos carros
		}
		tfim++;
   }
}
