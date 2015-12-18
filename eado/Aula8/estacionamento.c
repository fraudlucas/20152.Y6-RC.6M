#include "rims.h"

unsigned  char GetBit (unsigned char x, unsigned char k){
return (( x & (0x01 << k )) != 0); }
   
void main()
{ unsigned char i;
  unsigned char cnt;
    
   while (1) { 
       cnt = 0;
   for( i=0; i<8 ; i++){
       if(GetBit (A , i)){
           cnt++;
       }
   }
   B = cnt;
       
   }
}
