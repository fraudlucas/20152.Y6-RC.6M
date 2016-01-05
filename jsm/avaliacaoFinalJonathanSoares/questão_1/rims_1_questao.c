#include "rims.h"

signed char erro;
unsigned char temperaturaDesejada;
unsigned char temperaturaAtual;

int main() {
   
   while(1) {
	temperaturaDesejada=(A&0x0F);
        temperaturaAtual=((A&0xF0)>>4);
        erro = temperaturaDesejada - temperaturaAtual;
      if(erro < 0){            
	B = 0;            
	} else if (erro == 0){            
	B = 0;            
	} else {   
        B = 1;           
	}
   } 
} 