Inputs:
A0 - mensagem avisando que querem uma dose;
A1 - existência de doses no barril.

Outputs:
B0 - luz na mesa do gerente para comprar mais bebida;
B1 - luz para dizer que uma mensagem está sendo atendida;
B2 - incrementa ou não contador que indica quantas doses cada pessoa bebeu.


B0 = A0 && !A1; // caso o estado de B0 seja 1, o gerente precisa comprar mais bebidas.
B1 = A0 && A1; // caso o estado de B1 seja 1, indica que uma mensagem está sendo atendida.
B2 = B1; // caso o estado de B2 seja 1, contador de quantas doses foram bebidas é incrementado.