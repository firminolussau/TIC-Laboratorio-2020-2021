#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float Salario, Novo_S, Perc_S, Aumento_Perc;
     	printf ("Entre com o salArio e percentual de aumento do salario\n");
        	scanf ("%f%f",&Salario,&Perc_S);
	
             	Aumento_Perc = (Salario * (Perc_S/100));
	    	Novo_S = Salario + Aumento_Perc;
    	printf ("O valor de aumento e de %f e o novo salario, corresponde a %f", Aumento_Perc, Novo_S);
	return 0;
}
