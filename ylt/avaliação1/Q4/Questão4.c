#include "rims.h"

void main()
{
   while (1) {
       if(A0 == 1 && A1 == 0){
          B=0x01;
       } else if(B == 0 && A0 == 0 && A1 == 1){
          B=0x00; 
       } else if(A0 == 0 && A1 == 1){
           B=0x01;
       } else {
          B=0x00;
       }
   }
}