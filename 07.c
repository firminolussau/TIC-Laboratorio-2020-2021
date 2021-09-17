#include <stdio.h>
#include <stdlib.h>


int main() {
	float Preco_F, Perc_L, Perc_I, Imposto, Lucro_D, Preco_Final;
	
	printf ("Entre com o preco da fabrica. \nO percentual de lucros do distribuidor.\n E o percentual de impostos da fabrica\n ");
	scanf ("%f%f%f", &Preco_F, Perc_L, &Perc_I);
	
	Lucro_D = (Preco_F * (Perc_L/100));
	Imposto = (Preco_F * (Perc_I/100));
	Preco_Final = (Preco_F + (Lucro_D + Imposto));
	
	printf ("O preco final do veiculo e %f", Preco_Final);
	return 0;
}
