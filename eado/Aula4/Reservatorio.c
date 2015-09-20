#include "rims.h"
         

void main()
{
     while (1) { 
      int i = 1+( rand()% 9);
      
       if (i < 7)
           {
             A0 = 1;
             A1 = 0;
             A2 = 0;
             A3 = 0;
             A4 = 0;
             A5 = 0;
             A6 = 0;
             A7 = 0;
             
             
            
           }else{
             A0 = 0;
             A1 = 1;
             A2 = 0;
             A3 = 0;
             A4 = 0;
             A5 = 0;
             A6 = 0;
             A7 = 0;
          
           }
          
         
        B0 = !A0 && A1;
        B1 = A0 && !A1;
     
   }
}
