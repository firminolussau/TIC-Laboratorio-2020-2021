#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n, Suc;
	do{
		printf ("**Entre com um numero**\n");
		scanf ("%i",&n);
		
	      Suc= n+1;
		printf ("O sucessor do numero digitado, e %i \n", Suc);		

	}while (n>0);
	printf ("Foi digitado numero negativo - Fim do programa");
	
	return 0;	
}
