#include <stdio.h>

void main(){
int r0 = 0;
r0 = 2;
printf("Valor de r0 inicial %d\n", r0);
if (r0 < 3){
	r0 += 1;
    }
printf("Valor actual de r0: %d\n", r0);
if(r0 < 3){
	r0+=1;
    }
printf("Valor actual de r0: %d\n", r0);
}
