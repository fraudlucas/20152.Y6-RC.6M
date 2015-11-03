#include "rims.h"

void main() {
	while(1){
		if(A1 && !A0 && !B0) {
			B0 = 0;
		} else if ((A0 == !A1) && !B0) {
			B0 = 1;
		} else if ((A0 || A1) && B0) {
			B0 = 1;
		} else {
			B0 = 0;
		}
	}
}