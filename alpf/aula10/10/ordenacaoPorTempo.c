#include "rims.h"
void main()
{
  B = 0;
  while (1){
      while(!A1 && !A0);
      if (A1){
            B = 0;
      }
      else {
            B = B + 1;
            while (A0);
      }     
  }
}
