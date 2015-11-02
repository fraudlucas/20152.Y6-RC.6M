#include "rims.h"



void main()
{int porta;
   while (1) { 
      B0 = A0 && !A1;
      while (B0) 
         B0 = A0 || A1;
   }
}
