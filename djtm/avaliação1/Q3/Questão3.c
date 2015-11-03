#include "rims.h"

char D1 = 0, D2 = 0, D3 = 0;

void main() {
	while(1) { 
		if(A0 == 0 && A1 == 0 || D1 == 1) {
			D1 = 1;
			
			if( A0 == 1 && A1 == 0 || D2 == 1) {
				D2 = 1;
				
				if(A0 == 0 && A1 == 1 || D3 == 1) {
					D3 = 1;
                    
					if(A0 == 1 && A1 == 1) {
						B0 = 1;
					}	
                }
            }
        }
    }
}