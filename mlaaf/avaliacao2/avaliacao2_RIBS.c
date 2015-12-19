/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2.7 --- 12/18/2015 18:18:34 PST
*/

#include "rims.h"

enum SM2_States { SM2_espera, SM2_entrar, SM2_sair, SM2_entPermitida, SM2_saiPermitida } SM2_State;

TickFct_State_machine_2() {
   switch(SM2_State) { // Transitions
      case -1:
         SM2_State = SM2_espera;
         break;
         case SM2_espera: 
         if (A2) {
            SM2_State = SM2_entrar;
         }
         else if (A3) {
            SM2_State = SM2_sair;
         }
         break;
      case SM2_entrar: 
         if (!A2) {
            SM2_State = SM2_espera;
         }
         else if (A0 && !A4 && !A5) {
            SM2_State = SM2_entPermitida;
         }
         break;
      case SM2_sair: 
         if (!A3) {
            SM2_State = SM2_espera;
         }
         else if (A1) {
            SM2_State = SM2_saiPermitida;
         }
         break;
      case SM2_entPermitida: 
         if (!A0) {
            SM2_State = SM2_entrar;
         }
         break;
      case SM2_saiPermitida: 
         if (!A1) {
            SM2_State = SM2_sair;
         }
         break;
      default:
         SM2_State = SM2_espera;
   } // Transitions

   switch(SM2_State) { // State actions
      case SM2_espera:
         break;
      case SM2_entrar:
         B6 =0;
         B4 = !A4;
         B5 = A4;
         break;
      case SM2_sair:
         B7 = 0;
         break;
      case SM2_entPermitida:
         B6 = 1;
         break;
      case SM2_saiPermitida:
         B7 = 1;
         break;
      default: // ADD default behaviour below
      break;
   } // State actions

}

int main() {

   
   SM2_State = -1; // Initial state
   B = 0; // Init outputs

   while(1) {
      TickFct_State_machine_2();} // while (1)
} // Main