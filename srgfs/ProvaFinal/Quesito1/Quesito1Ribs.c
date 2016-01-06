/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2,7 --- 1/6/2016 17:49:28 PST
*/

#include "rims.h"

unsigned char SM1_Clk;
void TimerISR() {
   SM1_Clk = 1;
}

enum SM1_States { SM1_Temperatura Atual, SM1_Controlador, SM1_Temperatura Ideal } SM1_State;

TickFct_Quesito1Ribs() {
   switch(SM1_State) { // Transitions
      case -1:
         SM1_State = SM1_Temperatura Atual;
         break;
         case SM1_Temperatura Atual: 
         if (if(errotemperatura != 0)) {
            SM1_State = SM1_Controlador;
         }
         break;
      case SM1_Controlador: 
         if (if(errotemperatura==0);) {
            SM1_State = SM1_Temperatura Ideal;
         }
         else if (1) {
            SM1_State = SM1_Controlador;
         }
         break;
      case SM1_Temperatura Ideal: 
         if (if(errotemperatura != 0)) {
            SM1_State = SM1_Controlador;
         }
         break;
      default:
         SM1_State = SM1_Temperatura Atual;
   } // Transitions

   switch(SM1_State) { // State actions
      case SM1_Temperatura Atual:
         Atuador == 0;
         break;
      case SM1_Controlador:
         break;
      case SM1_Temperatura Ideal:
         break;
      default: // ADD default behaviour below
      break;
   } // State actions

}

int main() {

   const unsigned int periodQuesito1Ribs = 1000; // 1000 ms default
   TimerSet(periodQuesito1Ribs);
   TimerOn();
   
   SM1_State = -1; // Initial state
   B = 0; // Init outputs

   while(1) {
      TickFct_Quesito1Ribs();
      while(!SM1_Clk);
      SM1_Clk = 0;
   } // while (1)
} // Main