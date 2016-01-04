/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2,7 --- 1/4/2016 0:55:46 PST
*/

#include "rims.h"

Periodo : 100ns
unsigned char L, H, i;
unsigned char SM1_Clk;
void TimerISR() {
   SM1_Clk = 1;
}

enum SM1_States { SM1_inicio, SM1_pwmH, SM1_pwmL } SM1_State;

TickFct_State_machine_1() {
   switch(SM1_State) { // Transitions
      case -1:
         SM1_State = SM1_inicio;
         break;
         case SM1_inicio: 
         if (1) {
            SM1_State = SM1_pwmH;
            i = 0;
         }
         break;
      case SM1_pwmH: 
         if (1) {
            SM1_State = SM1_pwmL;
            !(i<H)
            i = 0;
         }
         else if (1) {
            SM1_State = SM1_pwmH;
            i<H
            
         }
         break;
      case SM1_pwmL: 
         if (1) {
            SM1_State = SM1_pwmL;
            i<L
         }
         else if (1) {
            SM1_State = SM1_pwmH;
            !(i<L)
            i = 0;
         }
         break;
      default:
         SM1_State = SM1_inicio;
   } // Transitions

   switch(SM1_State) { // State actions
      case SM1_inicio:
         B0 = 0;
         H = 10;
         L = 6;
         
         break;
      case SM1_pwmH:
         B0 = 1;
         ++i
         break;
      case SM1_pwmL:
         B0 = 0;
         ++1;
         break;
      default: // ADD default behaviour below
      break;
   } // State actions

}

int main() {

   const unsigned int periodState_machine_1 = 1000; // 1000 ms default
   TimerSet(periodState_machine_1);
   TimerOn();
   
   SM1_State = -1; // Initial state
   B = 0; // Init outputs

   while(1) {
      TickFct_State_machine_1();
      while(!SM1_Clk);
      SM1_Clk = 0;
   } // while (1)
} // Main