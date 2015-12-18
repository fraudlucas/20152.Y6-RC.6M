//CÈsar Augusto B. GonÁalves
//Prova 2
/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2,7 --- 12/18/2015 20:56:22 PST
*/

#include "rims.h"

//B5  alarme que indica a chegada de todos os alunos
//B6  alarme que indica falta de alguns alunos
//B7  alarme p/ avisar cracha passado duas vezes
unsigned char SM1_Clk;
void TimerISR() {
   SM1_Clk = 1;
}

enum SM1_States { SM1_portaTravada, SM1_maxAlunos, SM1_portaAberta, SM1_faltaAluno, SM1_sa√≠da, SM1_duasTentativas, SM1_bloqueioTempoDuasTentativas, SM1_entrada, SM1_esperaObrigat√≥ria } SM1_State;

TickFct_State_machine_1() {
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
