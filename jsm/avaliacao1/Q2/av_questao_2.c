#include "rims.h"

short barril=20,cont=0;
void main()
{
  while(1){
     while(A0==1){
      if(barril >= 0){
          
          B0=1;
          printf("cliente tomou %d doses \n  ",cont);
       
      }else {
          B0=0;
          B1=1;
          printf("acionar o gerente acabou a cerveja \n  ");
      }
      cont++;
      barril=barril-1;
     }
   }
}
