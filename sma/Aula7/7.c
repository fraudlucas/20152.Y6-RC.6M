#include "rims.h"

/* This is a sample program.  You can save/compile/run it, 
   modify it first, or just load a different program.      */

/* Sets B0 to 1 as quickly as possible when A0==1 and A1==0*/

/* Note that A0 - A7 can be set by clicking the switches to 
   the left, and B0 - B7 can be viewed as LEDs to the right
   (green corresponds to '1', red to '0').                 */

void main()
{
   while (1) {
       if(!A1 && !A0){
           B = 0x00; // 0000 0000
       }
       else if (!A1 && A0) {
           B = 0x55; // 0101 0101
       }
       else if (A1 && !A0) {
           B = 0xAA; // 1010 1010
       }
       else if (A1 && A0) {
           B = 0xFF; // 1111 1111
       }
   }
}
