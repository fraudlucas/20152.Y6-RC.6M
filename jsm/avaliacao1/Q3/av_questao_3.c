#include "rims.h"

char L1=0,L2=0,L3=0;

void main()
{
  while(1){ 
   if(A0==0&&A1==0||L1==1){
         L1=1;
         if(A0==1&&A1==0||L2==1){
               L2=1;
               if(A0==0&&A1==1||L3==1){
                     L3=1;
                     if(A0==1&&A1==1)B0=1;
                     
                   }
             }
       }
  }
}
