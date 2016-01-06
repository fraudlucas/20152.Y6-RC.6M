/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2,7 --- 1/6/2016 17:41:3 PST
*/

#include "rims.h"

unsigned char T;//tempo
unsigned char H;
unsigned char L;

unsigned char SM1_Clk;
void TimerISR() {
   SM1_Clk = 1;
}

enum SM1_States { SM1_Inicio, SM1_P_H, SM1_P_L } SM1_State;

TickFct_Quesito2_Saulo() {
   switch(SM1_State) { // Transitions
      case -1:
         SM1_State = SM1_Inicio;
         break;
         case SM1_Inicio: 
         if (T==0;) {
            SM1_State = SM1_P_H;
         }
         break;
      case SM1_P_H: 
         if (if( T >= H)
) {
            SM1_State = SM1_P_L;
            T = 0;
         }
         else if (T< H) {
            SM1_State = SM1_P_H;
         }
         break;
      case SM1_P_L: 
         if (T < L) {
            SM1_State = SM1_P_L;
         }
         else if (T >= L
) {
            SM1_State = SM1_P_H;
            T = 0;
            B = 0;
         }
         break;
      default:
         SM1_State = SM1_Inicio;
   } // Transitions

   switch(SM1_State) { // State actions
      case SM1_Inicio:
         T = 0;
         T = B;
         H = 8;
         L = 12;
         break;
      case SM1_P_H:
         T++
         B=1
         break;
      case SM1_P_L:
         tempo++;
         B = 0;
         break;
      default: // ADD default behaviour below
      break;
   } // State actions

}

int main() {

   const unsigned int periodQuesito2_Saulo = 100;
   TimerSet(periodQuesito2_Saulo);
   TimerOn();
   
   SM1_State = -1; // Initial state
   B = 0; // Init outputs

   while(1) {
      TickFct_Quesito2_Saulo();
      while(!SM1_Clk);
      SM1_Clk = 0;
   } // while (1)
} // Main