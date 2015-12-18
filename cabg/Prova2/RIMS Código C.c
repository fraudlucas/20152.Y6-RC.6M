//César Augusto B. Gonçalves
//Prova 2
#include "rims.h"


void main()
{
    int tempo_entrada = 100;
    int tempo_aula;
    
    unsigned count;
    
   while (1) { 
      if((count < 15) && (tempo_entrada == 0))
         B6 = 1;
         tempo_aula++;//ativa a saÃ­da B6 se o tempo de entrada   chegou ao fim e faltam alunos
      
      if(tempo_aula == 150)
         tempo_entrada = tempo_aula;//calcula o tempo para a saÃ­da dos alunos
         
      while(tempo_entrada){
         B = count;
         if (B == 15)
         B5 = 1;//ativa sensor B5 se o nÃºmero de alunos for igual a 15
         tempo_entrada--;
         
      while((A0 == 1) && (count < 15)){
         count = count + 1;//entrada de alunos liberada pelo sensor A
         while(A0 == 1){
             }
          }
         tempo_entrada--;
         tempo_aula = 0;
         
   }
}
}

