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
      switch (A)
      {
          case 0 : B = 0x77; break; // 0111 0111 (0)
          case 1 : B = 0x24; break; // 0010 0100 (1)
          case 2 : B = 0x5D; break; // 0101 1101 (2)
          case 3 : B = 0x6D; break; // 0110 1101 (3)
          case 4 : B = 
          case 5 : B = 
          case 6 : B = 
          case 7 : B =
          case 8 : B =
          case 9 : B = 0x6F; break; // 0110 1111 (9)
          default: B = 0x5B; break; // 0101 1011 (E for Error)
      }
}
