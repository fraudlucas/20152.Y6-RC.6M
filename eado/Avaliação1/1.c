#include "rims.h"

int t,x,y;
void main()
{ 
   while (1) { 
     t=A0; 
     // A0 botão que ao ser acionado energiza o brinquedo
     B2 = 0; // Sinal audivel que Alerta o final do tempo da brincadeira
     B1 = 1;//Sinal que indica que a pista está segura.
     B0 = A7 && A6 && A5 && A4; //Sinal que indica que todos os carrinhos estão ocupados.
     
     
          
          
   while (t){
       
       B1 = 0;
      for( x =0; x<100 ; x++) //Temporizador do brinquedo
       if (x==100)
       t = 0;
      
       
       
       
       
       for( y =0; y<5 ; y++) // Temporizador do alerta de fim do  
        B2 = 1;                   // brinquedo
        t = 0;
   }
   
     
          
   }  

}