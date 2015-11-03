#Inputs:
A0 - sensor na frente da porta;

A1 - sensor atrás da porta.


#Outputs:
B0 - sensor que abre a porta;


***

if(A1 && !A0 && !B0) { // Se a porta é fechada (B0 = 0) e uma pessoa se aproxima atrás (A1 = 1) a porta não se abre (B0 continua no estado 0).

} else if ((A0 == !A1) && !B0) { // A porta abre (B0 = 1) quando uma pessoa se aproxima da porta (A0 = 1 e A1 = 0).

} else if ((A0 || A1) && B0) { // A porta se mantem aberta (B0 = 1) enquanto a pessoa estiver na frente ou atrás (A0 = 1 ou A1 = 1).
