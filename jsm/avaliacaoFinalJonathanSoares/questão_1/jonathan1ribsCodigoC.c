#include "rims.h"

signed char erro;
unsigned char temperaturaDesejada;
unsigned char temperaturaAtual;

unsigned char SM1_Clk;
void TimerISR() {
   SM1_Clk = 1;
}

enum SM1_States { SM1_estadoInicial, SM1_controladorTemperatura } SM1_State;

TickFct_State_machine_1() {
   switch(SM1_State) { // Transitions
      case -1:
         SM1_State = SM1_estadoInicial;
         break;
         case SM1_estadoInicial: 
         if (1) {
            SM1_State = SM1_controladorTemperatura;
         }
         break;
      case SM1_controladorTemperatura: 
         if (1) {
            SM1_State = SM1_controladorTemperatura;
            if(erro < 0){            B = 0;            } else if (erro == 0){            B = 0;            } else {            B = 1;            }
         }
         break;
      default:
         SM1_State = SM1_estadoInicial;
   } // Transitions

   switch(SM1_State) { // State actions
      case SM1_estadoInicial:
         break;
      case SM1_controladorTemperatura:
         temperaturaDesejada=(A&0x0F);
         temperaturaAtual=((A&0xF0)>>4);
         erro = temperaturaDesejada - temperaturaAtual;
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