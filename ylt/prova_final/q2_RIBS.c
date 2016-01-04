/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2,8 --- 1/4/2016 13:59:43 PST
*/

#include "rims.h"

unsigned char tempo, H, L;
unsigned char PSEQ2_Clk;
void TimerISR() {
   PSEQ2_Clk = 1;
}

enum PSEQ2_States { PSEQ2_estado_Inicial, PSEQ2_Parte_H, PSEQ2_Parte_L } PSEQ2_State;

TickFct_q2_Yuji() {
   switch(PSEQ2_State) { // Transitions
      case -1:
         PSEQ2_State = PSEQ2_estado_Inicial;
         break;
         case PSEQ2_estado_Inicial: 
         if (1) {
            PSEQ2_State = PSEQ2_Parte_H;
         }
         break;
      case PSEQ2_Parte_H: 
         if (tempo < H) {
            PSEQ2_State = PSEQ2_Parte_H;
         }
         else if (tempo >= H) {
            PSEQ2_State = PSEQ2_Parte_L;
            tempo = 0;
         }
         break;
      case PSEQ2_Parte_L: 
         if (tempo < L) {
            PSEQ2_State = PSEQ2_Parte_L;
         }
         else if (tempo >= L) {
            PSEQ2_State = PSEQ2_Parte_H;
            tempo = 0;
            B = 0;
         }
         break;
      default:
         PSEQ2_State = PSEQ2_estado_Inicial;
   } // Transitions

   switch(PSEQ2_State) { // State actions
      case PSEQ2_estado_Inicial:
         tempo = 0;
         H = 8;
         L = 12;
         break;
      case PSEQ2_Parte_H:
         tempo++;
         B = 1;
         break;
      case PSEQ2_Parte_L:
         tempo++;
         B = 2;
         break;
      default: // ADD default behaviour below
      break;
   } // State actions

}

int main() {

   const unsigned int periodq2_Yuji = 100;
   TimerSet(periodq2_Yuji);
   TimerOn();
   
   PSEQ2_State = -1; // Initial state
   B = 0; // Init outputs

   while(1) {
      TickFct_q2_Yuji();
      while(!PSEQ2_Clk);
      PSEQ2_Clk = 0;
   } // while (1)
} // Main