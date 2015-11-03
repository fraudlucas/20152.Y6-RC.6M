#include "rims.h"

short barril = 20, cont = 0;

void main() {
	while(1) {
		while(A0 == 1) {
			if(barril >= 0) {
				B0=1;
				printf("O cliente bebeu %d doses \n  ", cont);
			} else {
				B0=0;
				B1=1;
				printf("Notificar o gerente que a cerveja acabou! \n  ");
			}
			cont++;
			barril = barril - 1;
		}
    }
}