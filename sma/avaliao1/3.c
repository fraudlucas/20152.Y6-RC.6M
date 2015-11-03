#include "rims.h"
// Para se ter o efeito de começar por A == 0x00 , set A2 para 1
void main()
{
     while(1) {
         if (A==0x00) //Primeiro passo aciondo por A0 = 0 e A1 = 0
            B0 = 1;
        
     while(B0){
         if (A == 0x01) // Segundo passo acionado por A0 = 1 e A1 = 0
            B1 = 1;
            
     while(B1){
         if (A==0x02) //Terceiro passo acionado por A0 = 0 e A1 = 1
            B2 = 1;
            
     while(B2){
         if (A==0x03) //Quarto passo acionado por A0 = 1 e A1 = 1
            B3 = 1;
            
            }}}
            
                  
        
   }  
   
}
