#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int n=1, Soma, impar, cont;
	do{
		printf ("Digite um numero\n");
		scanf ("%i",&n);
		
		if (n%2==0){
			cont++;
			}else
			impar=n;
		if (impar%3==0){
			Soma+= impar;
		}
		
		}while (n<=500);
	

			printf ("A soma dos numeros impares e multiplos de 3 e igual a %i", Soma);
	return 0;

}

