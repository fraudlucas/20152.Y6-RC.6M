 #include "rims.h"
 
unsigned short ti=300;
unsigned short tf;
void main(){   
    while(1){        
      
      if(A0 == 1 && A1==1 && A2==1 && A3==1 && A4==1){
         B0 = 1; //Brinquedo ligado
         B1 = 1; //Pista ocupada
         B2 = 1; //Carros ocupados
         while(tf < ti){
             tf++;
         }
      }else if(A0 == 0 && A1==0 && A2==0 && A3==0 && A4==0){
          B0 = 0; //Brinquedo desligado
          B1 = 0; //Pista livre
          B2 = 0; //Carros desocupados  
          
      }else if(A == 1){
         B0 = 1; //Brinquedo ligado
         B1 = 1; //Pista ocupada           
      }
         if(tf >= ti){
      B3 = 1;//Fim da brincadeira
      }
      
    }  
}
