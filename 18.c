#include <stdio.h>
#include <stdlib.h>

int main(){
	float num, cont_C, cont_C1, cont_C2;
	char nome;
	printf ("Digite o seu nome e o numero de diaria\n");
	scanf ("%f%s", &num, &nome);
	if (num<15){
		cont_C = (400 + (5000*num));
		printf ("O Sr. %c tem a conta de %fUSD\n", nome, cont_C);
	}else
		if (num==15){
		cont_C1 = (360 + (5000*num));
		printf ("O Sr. %s tem a conta de %fUSD\n", nome, cont_C1);
	}
	
	if (num>15){
		cont_C2 = (300 + (5000*num));
		printf ("O Sr. %s tem a conta de %fUSD\n", nome, cont_C2);
	}

	return 0;
}
