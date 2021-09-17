#include <stdio.h>
#include <stdlib.h>

int main() {
	float Salario_M, Quant_K, ValorCada_K, Valor_P, Valor_P2;
	
	printf ("Entre com o valor do salario minimo e aquantidade de kilowatt\n");
	scanf ("%f%f", &Salario_M, &Quant_K);
	
	ValorCada_K = (Salario_M * (1/5));
	Valor_P = ValorCada_K * Quant_K;
	Valor_P2 = (Valor_P - (Valor_P * 0.15));
	
	
	printf ("O valor de cada kilowatt e %.2f\n O valor a ser pago e %.2f\n O valor a ser pago com desconto de 15%% e %.2f", ValorCada_K, Valor_P, Valor_P2);
	return 0;
}
