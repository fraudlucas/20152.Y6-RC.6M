#include "rims.h"

void main()
{
   while (1) { 
      B0 = A0 && !A1;
      B1 = A0 && A1;
      B2 = B1;
   }
}
