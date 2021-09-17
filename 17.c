#include <stdio.h>
#include <stdlib.h>



int main() {
	int n, j, Soma=1;
	printf ("Entre com um numero\n");
	scanf ("%i", &n);
	
	while (n>=1){
		printf ("%i x ", n);
		Soma+=n;
		n--;
	}
	printf ("= %i", Soma);
	return 0;
}
