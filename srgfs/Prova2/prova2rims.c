#include "rims.h"

/* This is a sample program.  You can save/compile/run it, 
   modify it first, or just load a different program.      */

/* Sets B0 to 1 as quickly as possible when A0==1 and A1==0*/

/* Note that A0 - A7 can be set by clicking the switches to 
   the left, and B0 - B7 can be viewed as LEDs to the right
   (green corresponds to '1', red to '0').                 */

void main()
{
    unsigned char alunos = 0;
    unsigned short tempoaula = 1000;
    unsigned short horario = 1500;
	unsigned short cartão = 500;
   while (1) {
      
      if(A1){//horário das 6:30 ás 7:55
      if(horario<=0){
      A0 = 0;
      A1 = 0;
          }
      horario = horario - 1;//Relogio
      tempoaula = tempoaula - 1;//tempo de aula que tem que ficar 1h
            if(A0 && alunos!=15){
                alunos = alunos + 1;//incrementação quando aluno passa
                B = alunos;//led de B0 a B4 
                
                while(A0){
                horario = horario - 1;
                    }
      }
      if(alunos==15 && tempoaula!=0 ){// se chegar a 15 alunos B5 acende
      B = alunos;
      B5=1;
      
          }
          if(alunos<15 && tempoaula!=0){// se for menos que 15 no dia acende B6
          B6=1;
              }
   }
   if(A0==1 && A3==1){//Se passar duas vezes com mesmo cartão
	   B7=1;
   }
}
}