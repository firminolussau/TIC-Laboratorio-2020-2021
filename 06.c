#include <stdio.h>
#include <stdlib.h>

int main() {
	float Custo_E, Preco_C, Quant_C;
	printf ("Entre com preco do do custo do espetaculo e o preco do convite\n");
	scanf ("%f%f", &Custo_E, &Preco_C);
	
	    Quant_C = Custo_E/Preco_C;
	    
	    printf ("A quantidade de convites que devem ser vendidos e de %.0f", Quant_C);
	
	
	return 0;
}
