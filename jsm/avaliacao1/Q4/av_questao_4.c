#include "rims.h"

//        ENTRADAS
//A0 SENSOR FRONTAL
//A1 SENSOR TRASEIRO

//         SAIDAS
//B0 ABRIR PORTA

void main()
{
   while (1) { 
      if(A0==0&&A1==1||A0==1&&A1==0)B=1;
      else B=0;
   }
}
