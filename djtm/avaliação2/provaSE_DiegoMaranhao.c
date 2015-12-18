/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2,7 --- 12/19/2015 18:34:8 PST
*/

#include "rims.h"

// B5 é o alarme para avisar que todos os alunos chegaram.
// B6 é o alarme para quando faltaram alunos.
// B7 é o alarme pra se o aluno passou o crachá duas vezes.

unsigned char SM1_Clk;
void TimerISR() {
   SM1_Clk = 1;
}

enum SM1_States { SM1_travada, SM1_aberta, SM1_maxAlunos, SM1_duasTentativas, SM1_entrada, SM1_bloqueioTempoDuasTentativas, SM1_saida, SM1_esperaObrigatoria, SM1_faltouAluno } SM1_State;

TickFct_State_machine_1() {
   switch(SM1_State) { // Transitions
      case -1:
         SM1_State = SM1_travada;
         break;
         case SM1_travada: 
         if (hora == 6:30) {
            SM1_State = SM1_aberta;
         }
         break;
      case SM1_aberta: 
         if (B == 15) {
            SM1_State = SM1_maxAlunos;
         }
         else if (tentativas == 2) {
            SM1_State = SM1_duasTentativas;
         }
         else if (1) {
            SM1_State = SM1_entrada;
         }
         else if (hora == 7:55 && B < 15) {
            SM1_State = SM1_faltouAluno;
         }
         break;
      case SM1_maxAlunos: 
         if (1) {
            SM1_State = SM1_travada;
         }
         break;
      case SM1_duasTentativas: 
         if (1) {
            SM1_State = SM1_bloqueioTempoDuasTentativas;
         }
         break;
      case SM1_entrada: 
         if (1) {
            SM1_State = SM1_esperaObrigatoria;
         }
         break;
      case SM1_bloqueioTempoDuasTentativas: 
         if (hora < 7:55) {
            SM1_State = SM1_aberta;
         }
         break;
      case SM1_saida: 
         if (hora < 7:55) {
            SM1_State = SM1_aberta;
         }
         else if (hora >= 7:55) {
            SM1_State = SM1_travada;
         }
         break;
      case SM1_esperaObrigatoria: 
         if (tempo == 0) {
            SM1_State = SM1_saida;
         }
         break;
      case SM1_faltouAluno: 
         if (1) {
            SM1_State = SM1_travada;
         }
         break;
      default:
         SM1_State = SM1_travada;
   } // Transitions

   switch(SM1_State) { // State actions
      case SM1_travada:
         B = A;
         break;
      case SM1_aberta:
         break;
      case SM1_maxAlunos:
         B5 = 1;
         break;
      case SM1_duasTentativas:
         B7 = 1;
         break;
      case SM1_entrada:
         A++;
         break;
      case SM1_bloqueioTempoDuasTentativas:
         tempoSegundaTentativa = 900;
         break;
      case SM1_saida:
         A--;
         break;
      case SM1_esperaObrigatoria:
         tempo = 3600;
         break;
      case SM1_faltouAluno:
         B6 = 1;
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