//César Augusto B. Gonçalves(Exe4)

#include "rims.h"

void main()
{
   while (1) { 
         
      A0 = (1 + rand() % 15); 
      if (A0 > 7){
         B0 = 0;
         B1 = 1; 
      }else if (A0 ==7){ 
         B0 = 0;
         B1 = 0; 
      }else if (A0 < 7){ 
         B0 = 1;
         B1 = 0;
      }
   }
}
