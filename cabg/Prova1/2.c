/*
C�sar Augusto B. Gon�alves
1� Avalia��o Q2
*/

#include "rims.h"



void main()
{ unsigned char dose = 0;//v�riavel que armazena quantidade de dose do cliente
   unsigned char edose = 250;//estoque
   while (1) { 
      if(A0 == 1 && edose > 0){// condi��o de pedido e estoque disponivel
          
          edose = edose -1;//estoque � decrementado quando cliente pega uma dose
          dose = dose +1; //
          while(A0 == 1){// fica at� quando acabar o atendimento
          B0 = 1;//Led de atendimento
          }
   }
   if(A0 == 1  && edose <=0){//quando o cliente pede a dose e n�o tem no estoque
       B1 = 1;//led que avisa ao gerente para repor o estoque
       }
 
	B0=0;//quando n�o entra nas outras condi��es
	B1=0;//quando n�o entra nas outras condi��es
}
}
