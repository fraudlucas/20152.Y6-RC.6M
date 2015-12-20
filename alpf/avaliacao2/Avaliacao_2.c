/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2,7 --- 12/19/2015 22:14:2 PST
*/

#include "rims.h"

/*Define user variables and functions for this state machine here.*/
unsigned char SM1_Clk;
void TimerISR() {
   SM1_Clk = 1;
}

enum SM1_States { SM1_EntradaBloqueada, SM1_InicioDoHorario, SM1_ChecaHora, SM1_AntesDoTermino, SM1_AposOTermino, SM1_ChecaQtde, SM1_QtdeMenorQueMaximo, SM1_QtdeMaiorQueMaximo, SM1_EntraEIncrementa } SM1_State;

TickFct_State_machine_1() {
   switch(SM1_State) { // Transitions
      case -1:
         SM1_State = SM1_EntradaBloqueada;
         break;
         case SM1_EntradaBloqueada: 
         if (A0) {
            SM1_State = SM1_InicioDoHorario;
         }
         break;
      case SM1_InicioDoHorario: 
         if (A1) {
            SM1_State = SM1_ChecaHora;
         }
         break;
      case SM1_ChecaHora: 
         if (A1) {
            SM1_State = SM1_AntesDoTermino;
         }
         else if (!A0) {
            SM1_State = SM1_AposOTermino;
         }
         break;
      case SM1_AntesDoTermino: 
         if (1) {
            SM1_State = SM1_ChecaQtde;
         }
         break;
      case SM1_AposOTermino: 
         if (!A0) {
            SM1_State = SM1_EntradaBloqueada;
         }
         break;
      case SM1_ChecaQtde: 
         if (1) {
            SM1_State = SM1_ChecaQtde;
         }
         else if (A2) {
            SM1_State = SM1_QtdeMenorQueMaximo;
         }
         else if (!A0 && !A1) {
            SM1_State = SM1_QtdeMaiorQueMaximo;
         }
         break;
      case SM1_QtdeMenorQueMaximo: 
         if (A3) {
            SM1_State = SM1_EntraEIncrementa;
         }
         break;
      case SM1_QtdeMaiorQueMaximo: 
         if (!A0) {
            SM1_State = SM1_EntradaBloqueada;
         }
         break;
      case SM1_EntraEIncrementa: 
         if (A1 && A2) {
            SM1_State = SM1_ChecaQtde;
         }
         break;
      default:
         SM1_State = SM1_EntradaBloqueada;
   } // Transitions

   switch(SM1_State) { // State actions
      case SM1_EntradaBloqueada:
         B0 = !A0
         break;
      case SM1_InicioDoHorario:
         B0 = A0;
         break;
      case SM1_ChecaHora:
         B1 = A0;
         break;
      case SM1_AntesDoTermino:
         B2 = A0 && A1;
         break;
      case SM1_AposOTermino:
         B1 = !A0;
         break;
      case SM1_ChecaQtde:
         break;
      case SM1_QtdeMenorQueMaximo:
         B3 = A0 && A1;
         break;
      case SM1_QtdeMaiorQueMaximo:
         B2 = !A0 && !A1;
         break;
      case SM1_EntraEIncrementa:
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