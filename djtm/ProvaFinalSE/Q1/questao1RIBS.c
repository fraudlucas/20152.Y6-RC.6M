#include "rims.h"

unsigned char SM1_Clk;
void TimerISR() {
   SM1_Clk = 1;
}

enum SM1_States { SM1_Inicio, SM1_Chuveiro } SM1_State;

TickFct_Diego_Q1() {
   switch(SM1_State) { // Transitions
      case -1:
         SM1_State = SM1_Inicio;
         break;
         case SM1_Inicio: 
         if (1) {
            SM1_State = SM1_Chuveiro;
         }
         break;
      case SM1_Chuveiro: 
         if ((controlador < resistencia)) {
            SM1_State = SM1_Chuveiro;
            B--;
         }
         break;
      default:
         SM1_State = SM1_Inicio;
   } // Transitions

   switch(SM1_State) { // State actions
      case SM1_Inicio:
         break;
      case SM1_Chuveiro:
         erro = B - A;
         break;
      default: // ADD default behaviour below
      break;
   } // State actions

}

int main() {

   const unsigned int periodDiego_Q1 = 1000; // 1000 ms default
   TimerSet(periodDiego_Q1);
   TimerOn();
   
   SM1_State = -1; // Initial state
   B = 0; // Init outputs

   while(1) {
      TickFct_Diego_Q1();
      while(!SM1_Clk);
      SM1_Clk = 0;
   } // while (1)
} // Main