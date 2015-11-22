/*
 César Augusto B. Gonçalves(Exe7)
 Teste Hexadecimal
*/

#include "rims.h"

void main()
{
   while (1) { 
      if(!A1 && !A0){
          B = 0x00;
      }
      else if(!A1 && A0){
          B = 0x55;
      }
      else if(A1 && !A0){
           B = 0xAA;    
      }
      else if(A1 && A0){
            B = 0xFF;
      }
   }
}
