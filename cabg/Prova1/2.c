#include "rims.h"



void main()
{ unsigned char dose = 0;//váriavel que armazena quantidade de dose do cliente
   unsigned char edose = 250;//estoque
   while (1) { 
      if(A0 == 1 && edose > 0){// condição de pedido e estoque disponível
          
          edose = edose -1;//estoque é decrementado quando cliente pega uma dose
          dose = dose +1; //
          while(A0 == 1){// fica até quando acabar o atendimento
          B0 = 1;//Led de atendimento
          }
   }
   if(A0 == 1  && edose <=0){//quando o cliente pede a dose e não tem no estoque
       B1 = 1;//led que avisa ao gerente para repor o estoque
       }
 
	B0=0;//quando não entra nas outras condições
	B1=0;//quando não entra nas outras condições
}
}
