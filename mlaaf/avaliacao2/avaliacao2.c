#include "rims.h"


void main()
{
   unsigned char qtd = 0;
   
   while (1) {
      
      
      if (A2) { // Permite entrada apenas entre 6:30 e 7:55
      
          while (!A0);
          
          B6 = !A5 && !A4; // Acende caso a entrada seja permitida
          qtd = qtd + B6; // Caso permitido a passagem incrementa.
          B = (qtd & 0x0F) + ((B6 << 6) & 0x40); 

          while (A0);
          
          B4 = !A4; // Acende caso não tenha todos os alunos na escola
          B5 = A4; // Acende caso tenha todos os alunos na escola
          
          B6 = 0;
                    
      } else if (A3) { // Permite saída após 1 hora
      
          while (!A1); 
          B7 = 1; // Acende quando é permitido sair 
          while (A1);
          B7 = 0;
      }
      
   }
}
