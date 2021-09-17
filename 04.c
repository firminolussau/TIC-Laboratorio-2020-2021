#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float Salario, Novo_S;
    	printf ("Entre com o valor do seu salario\n");
        	scanf ("%f",&Salario);
	
        	Novo_S = (Salario + (Salario*0,25));
       	printf ("O novo salario do funcionario e de %f USD", Novo_S);
	return 0;
}
