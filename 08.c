#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float n_horas, Salario_M, Salario_Reaj, H_trab, Salario_B, Imposto;
	
	printf ("Entre com o valor de salario minimo e o numero de horas trbalhadas\n");
   scanf ("%f%f", &n_horas, Salario_M);
   
   H_trab = Salario_M/2;
   Salario_B = n_horas * H_trab;
   Imposto = (Salario_B + (3/100));
   Salario_Reaj = Salario_B - Imposto;
   
   printf ("O salario a receber e de %f", Salario_Reaj);
   
	return 0;
}
