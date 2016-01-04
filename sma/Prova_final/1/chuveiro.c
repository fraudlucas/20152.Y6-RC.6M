/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2,7 --- 1/4/2016 0:56:11 PST
*/

#include "rims.h"

atuador = 0
unsigned char SM1_Clk;
void TimerISR() {
   SM1_Clk = 1;
}

enum SM1_States { SM1_Inicio, SM1_Controlador } SM1_State;

TickFct_State_machine_1() {
   switch(SM1_State) { // Transitions
      case -1:
         SM1_State = SM1_Inicio;
         break;
         case SM1_Inicio: 
         if (1) {
            SM1_State = SM1_Controlador;
         }
         break;
      case SM1_Controlador: 
         if (1) {
            SM1_State = SM1_Controlador;
         }
         break;
      default:
         SM1_State = SM1_Inicio;
   } // Transitions

   switch(SM1_State) { // State actions
      case SM1_Inicio:
         atuador  = 0;
         break;
      case SM1_Controlador:
         erro = atuador -controlador
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