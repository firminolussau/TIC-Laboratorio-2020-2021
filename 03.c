#include <stdio.h>
#include <stdlib.h>

int main() {
	int Ano_N, Ano_A, Idade1, Idade2;
	   printf ("Entre com o seu ano de nascimento e o ano actual\n");
      	Scanf ("%d%d",&Ano_N,&Ano_A);
	
        	Idade1 = Ano_A - Ano_N;
       	Idade2 = 2050 - Ano_N;
	printf ("A pessoa tem %d anos de idade, e em 2050 terá %d anos de idade",Idade1, Idade2);
return 0;
}
