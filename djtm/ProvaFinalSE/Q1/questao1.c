#include "rims.h"

unsigned char resistencia;
unsigned char controlador;
signed char erro;

void main() {
	B = 30;
    
    while (1) {
        erro = B - A;
			while(erro != 0) {
            resistencia = B;
            controlador = A;
           
			if(controlador > resistencia) {
				B++;
				break;
			} else {
				B--;
			}
        }
    }
}