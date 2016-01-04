#include "rims.h"

unsigned char resistencia;
signed char erro;
unsigned char controle;


void main()
{   B = 30;
//professor esse programa pode controlar a  temperatura final usando a saida e comparando com a entrada fazendo com que o chuveiro esquente e esfrie de acordo com a temperatura pré determinada  o B++ representa a resistencia ligada e o B-- a resistencia desligada, o erro a diferença entre temperatura atual e a temperatura pré determinada    
       
   while (1) { erro = B - A;
         while ( erro != 0){
             resistencia = B;
             controle = A;
             
              if(resistencia > controle)
                    B--;
                   
               else
                      B++;            
                     break;
         }
                    
                      
                      
   }
}
