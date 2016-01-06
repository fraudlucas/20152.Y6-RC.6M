#include "rims.h"

signed char errotemperatura;
unsigned char resistor;
unsigned char atual;
unsigned char Controlador;

void main()
{
     
    B=30;//temperatura desejada
    
    while (1) {
        
        
        atual = A;//temperatura atual
        errotemperatura = B - atual;//erro = Temperatura desejada - a atual
        
       while(errotemperatura != 0){//enquando erro for diferente de zero
           
           resistor = B;
           Controlador = A;
           
           
           if(resistor > Controlador){
               errotemperatura--;
               B = errotemperatura;
               }
           if(resistor < Controlador){
                     errotemperatura ++;
                     B = errotemperatura;
                     break;
                   }
           if(resistor == Controlador){//quando erro for igual a zero
               break;
               }
       }
                
      
   }
}
