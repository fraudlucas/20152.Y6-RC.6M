#include "rims.h"


void main(){
   int tempo_entrada = 100 ; 
   int tempo_aula; 
    
unsigned count ;
while(1){         
       if  ((count < 15)&&(tempo_entrada==00))
                    B6 = 1;
                    tempo_aula++;           //ativa a saida B6 se o tempo de entrada chegou ao fim e o numero de alunosestá imcompleto
       if (tempo_aula == 150)
                tempo_entrada = tempo_aula;  //calcula o tempo para a saida dos alunos
       
   while (tempo_entrada) { 
                 B=count;
              if (count == 15)    //sensor B5 ativado se o numero de alunos for igual a 15
                    B5 = 1;
             tempo_entrada--;

      while ((A0 == 1) && (count<15)){
           
                   count= count+1;   //libera a entrada de alunos comandada pelo sensor A0
                   
         while (A0 ==1){
           
            
              
                   
             
        }
       
      }
            tempo_entrada--;
            tempo_aula =0;      //seta variaveis
   
       
       
}
    }
   
  }
       

}
