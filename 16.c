#include <stdio.h>
#include <stdlib.h>

int main() {
	int N[15];
	float menor, maior, i;
	for (i=0; i<15; i++){
		printf ("**Entre com a sua altura**\n");
		scanf ("%d", &N[i]);
		
		if (i==0){
		maior = N[i]; 
			}else
		  	if (N[i]>maior){
		  		maior = N[i];
		  }else
		  	menor = N[i];
		  }	  
	
	printf ("A maior altura do grupo e de %f\n A menor altura do grupo e de %f\n", maior, menor);
	 
	return 0;
}
