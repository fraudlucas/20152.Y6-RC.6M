/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2,7 --- 1/6/2016 18:57:52 PST
*/

#include "rims.h"

unsigned char SM2_Clk;
void TimerISR() {
   SM2_Clk = 1;
}

enum SM2_States { SM2_Inicio, SM2_H, SM2_L } SM2_State;

TickFct_Diego_Q2() {
   switch(SM2_State) { // Transitions
      case -1:
         SM2_State = SM2_Inicio;
         break;
         case SM2_Inicio: 
         if (1) {
            SM2_State = SM2_H;
         }
         break;
      case SM2_H: 
         if (tempo < H) {
            SM2_State = SM2_H;
         }
         else if (tempo >= H) {
            SM2_State = SM2_L;
            tempo = 0;
         }
         break;
      case SM2_L: 
         if (tempo < L) {
            SM2_State = SM2_L;
         }
         break;
      default:
         SM2_State = SM2_Inicio;
   } // Transitions

   switch(SM2_State) { // State actions
      case SM2_Inicio:
         tempo = 0;
         
         break;
      case SM2_H:
         tempo++;
         break;
      case SM2_L:
         tempo++;
         
         break;
      default: // ADD default behaviour below
      break;
   } // State actions

}

int main() {

   const unsigned int periodDiego_Q2 = 100;
   TimerSet(periodDiego_Q2);
   TimerOn();
   
   SM2_State = -1; // Initial state
   B = 0; // Init outputs

   while(1) {
      TickFct_Diego_Q2();
      while(!SM2_Clk);
      SM2_Clk = 0;
   } // while (1)
} // Main