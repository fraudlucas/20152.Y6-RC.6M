#include "rims.h"

void main() {
   short timer = 25;     
   while ( 1 ) { 
      
       B0 = ( A0 == 0 );
       B1 = ( A1 && A2 && A3 && A4 == 1 );
       
       if ( B1 == 1 ) {
           while ( timer > 0 ) {
               timer--;
            }
       } 
       
       if ( timer == 0 ) {
           B2 = 1;
       }
       
   }
   
}
