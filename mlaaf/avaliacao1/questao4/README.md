Inputs:
A0 - sensor na frente da porta;
A1 - sensor atr�s da porta.

Outputs:
B0 - sensor que abre a porta;


if(A1 && !A0 && !B0) { // Se a porta � fechada (B0 = 0) e uma pessoa se aproxima atr�s (A1 = 1) a porta n�o se abre (B0 continua no estado 0).
} else if ((A0 == !A1) && !B0) { // A porta abre (B0 = 1) quando uma pessoa se aproxima da porta (A0 = 1 e A1 = 0).
} else if ((A0 || A1) && B0) { // A porta se mantem aberta (B0 = 1) enquanto a pessoa estiver na frente ou atr�s (A0 = 1 ou A1 = 1).