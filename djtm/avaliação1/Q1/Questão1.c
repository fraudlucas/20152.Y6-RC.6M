#include "rims.h"

short tempo = 5000; 
short cont = 0;  

void main() {
    while (1) {
		
		if(A1 == 1 && A2 == 1 && A3 == 1 && A4 == 1){
			B1 = 1;
        } else {
			B1 = 0;
        }
		
		if(A5 == 1 && A1 == 1 && A2 == 1 && A3 == 1 && A4 == 1){ 
			while(cont < tempo) {
				++cont;
			}	
		}
       
		if (A0 == 1){ 
			B0 = 0;
		} else {
			B0 = 1;
        }
		
        if (A6 == 1){ 
			B4 = 1;
        } else {
			B4 = 0;
		}
		
		if(cont == tempo){ 
			B2 = 1; 
			B3 = 1;
		}
    }
 }