/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2,7 --- 12/18/2015 21:37:10 PST
*/

#include "rims.h"

int hour;
int alunos;
int time;
unsigned char SM1_Clk;
void TimerISR() {
   SM1_Clk = 1;
}

enum SM1_States { SM1_s1, SM1_s2, SM1_s3 } SM1_State;

TickFct_State_machine_1() {
   switch(SM1_State) { // Transitions
      case -1:
         SM1_State = SM1_s1;
         break;
         case SM1_s1: 
         if (if(hour >=6:30)) {
            SM1_State = SM1_s2;
         }
         break;
      case SM1_s2: 
         if (if (alunos ==15)) {
            SM1_State = SM1_s3;
         }
         else if (if ( hour > 7:55)) {
            SM1_State = SM1_s3;
         }
         break;
      case SM1_s3: 
         if (if (time > 60)) {
            SM1_State = SM1_s2;
         }
         break;
      default:
         SM1_State = SM1_s1;
   } // Transitions

   switch(SM1_State) { // State actions
      case SM1_s1:
         closed;
         break;
      case SM1_s2:
         open;
         break;
      case SM1_s3:
         closed; full;
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