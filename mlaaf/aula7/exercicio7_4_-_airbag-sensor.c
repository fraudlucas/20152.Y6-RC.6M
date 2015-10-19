#include "rims.h"


void main()
{
   while (1) { 
      if (A >= 48) {
         B = 0x01;         
      } else if (A > 2 && A < 48) {
         B = 0x02;   
      } else {
         B = 0x00;
      }
   }
}
