#include "rims.h"


void main()
{
   while (1) { 
      while (!A0 && !A1);
      if (A0) {
          B0 = 1;
      } else {
          B0 = 0;
      }
   }
}
