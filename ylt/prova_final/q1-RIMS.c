/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2,8 --- 1/4/2016 11:38:36 PST
*/

#include "rims.h"

signed char erro;
unsigned char valor_atual, valor_desejado;
valor_atual = (A & 0x0F);
valor_desejado = ((A & 0xF0) >> 4);
unsigned char checaTemperatura(){
erro = valor_desejado - valor_atual;
if(erro <= 0){B = 0;}
else{B = 1;}
}
unsigned char PSEQ1_Clk;
void TimerISR() {
   PSEQ1_Clk = 1;
}

enum PSEQ1_States { PSEQ1_Estado_Inicial, PSEQ1_Controlador_ON_OFF } PSEQ1_State;

TickFct_q1_Yuji() {
   switch(PSEQ1_State) { // Transitions
      case -1:
         PSEQ1_State = PSEQ1_Estado_Inicial;
         break;
         case PSEQ1_Estado_Inicial: 
         if (1) {
            PSEQ1_State = PSEQ1_Controlador_ON_OFF;
         }
         break;
      case PSEQ1_Controlador_ON_OFF: 
         if (1) {
            PSEQ1_State = PSEQ1_Controlador_ON_OFF;
            checaTemperatura();
         }
         break;
      default:
         PSEQ1_State = PSEQ1_Estado_Inicial;
   } // Transitions

   switch(PSEQ1_State) { // State actions
      case PSEQ1_Estado_Inicial:
         B = 0;
         break;
      case PSEQ1_Controlador_ON_OFF:
         break;
      default: // ADD default behaviour below
      break;
   } // State actions

}

int main() {

   const unsigned int periodq1_Yuji = 1000; // 1000 ms default
   TimerSet(periodq1_Yuji);
   TimerOn();
   
   PSEQ1_State = -1; // Initial state
   B = 0; // Init outputs

   while(1) {
      TickFct_q1_Yuji();
      while(!PSEQ1_Clk);
      PSEQ1_Clk = 0;
   } // while (1)
} // Main