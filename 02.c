#include <stdio.h>
#include <stdlib.h>



int main() {
	float Salario, Salario_M, Quant_M;
	
       	printf ("Entre com o valor do seu salario e o valor do salario minimo\n");
        	scanf ("%f%f", &Salario, &Salario_M);
	
	             Quant_M = Salario/Salario_M;
	       printf ("A quantidade de salario minimo do funcionario e de %f\n", Quant_M);
	return 0;
}
