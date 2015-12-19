/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2,8 --- 12/19/2015 19:55:0 PST
*/

#include "rims.h"

unsigned char cracha[15];
unsigned int tempoAl[15];
unsigned int tempoBl;
unsigned long tempo;
tempo++;
unsigned char SM1_Clk;
void TimerISR() {
   SM1_Clk = 1;
}

enum SM1_States { SM1_Catraca_Travada, SM1_Liberada_Hora, SM1_Max_Alunos, SM1_Bloqueio_Hora, SM1_Segunda_Tentativa, SM1_Entrada_Aluno, SM1_Bloqueio_Tempo, SM1_Saida_Aluno, SM1_Qtd_Menor_Alunos } SM1_State;

TickFct_State_machine_1() {
   switch(SM1_State) { // Transitions
      case -1:
         SM1_State = SM1_Catraca_Travada;
         break;
         case SM1_Catraca_Travada: 
         if (1) {
            SM1_State = SM1_Liberada_Hora;
            B5 =0;
            B6 =0;
         }
         break;
      case SM1_Liberada_Hora: 
         if (A == 15;) {
            SM1_State = SM1_Max_Alunos;
         }
         else if (tempo == 5100;) {
            SM1_State = SM1_Bloqueio_Hora;
         }
         else if (cracha[A] == A;) {
            SM1_State = SM1_Segunda_Tentativa;
            B6=1;
         }
         else if (A<=15;) {
            SM1_State = SM1_Entrada_Aluno;
            cracha[A] = A;
            tempoAl[A] = tempo;
         }
         break;
      case SM1_Max_Alunos: 
         if (A == 15;) {
            SM1_State = SM1_Catraca_Travada;
             B5=1;
         }
         break;
      case SM1_Bloqueio_Hora: 
         if (A == 15) {
            SM1_State = SM1_Catraca_Travada;
         }
         else if (A < 15;) {
            SM1_State = SM1_Qtd_Menor_Alunos;
         }
         break;
      case SM1_Segunda_Tentativa: 
         if (1) {
            SM1_State = SM1_Bloqueio_Tempo;
            tempoBl = tempo;
         }
         break;
      case SM1_Entrada_Aluno: 
         if (tempo - tempoAl[A] >= 3600;) {
            SM1_State = SM1_Saida_Aluno;
         }
         break;
      case SM1_Bloqueio_Tempo: 
         if (1) {
            SM1_State = SM1_Liberada_Hora;
            tempo - tempoBl >= 900;
         }
         break;
      case SM1_Saida_Aluno: 
         if (1) {
            SM1_State = SM1_Liberada_Hora;
            A--;
         }
         break;
      case SM1_Qtd_Menor_Alunos: 
         if (A<15) {
            SM1_State = SM1_Catraca_Travada;
            B7=1;
         }
         break;
      default:
         SM1_State = SM1_Catraca_Travada;
   } // Transitions

   switch(SM1_State) { // State actions
      case SM1_Catraca_Travada:
         A = 0x00;
         B = 0x00;
         break;
      case SM1_Liberada_Hora:
         break;
      case SM1_Max_Alunos:
         break;
      case SM1_Bloqueio_Hora:
         break;
      case SM1_Segunda_Tentativa:
         break;
      case SM1_Entrada_Aluno:
         A++;
         break;
      case SM1_Bloqueio_Tempo:
         break;
      case SM1_Saida_Aluno:
         break;
      case SM1_Qtd_Menor_Alunos:
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