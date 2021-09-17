#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main (){

int a,b,c;
float D, x1, x2;

printf("Calculando equacao do segundo grau \n");

    printf("Digite o Valor de A, B, C\n");
      scanf("%i%i%i",&a, &b, &c);
      if (a!=0){
D =(pow(b,2) - (4*a*c));
printf("Delta = %.1f",D);
}else{
	printf ("Digite novamente o valor de A, B, e C\n");
}
if( D < 0){
printf("Raizes Imaginárias");
}else if(D == 0){
printf("A Nossa Equação tem Apenas uma Solução: \n");
x1 = x2 = (-b)/2*a;
printf("X1 e X2 = %.1f , %.1f", x1,x2 );

}else if(D > 0){
printf("A Nossa Equação tem Duas Soluções: \n");
x1 = (- b + sqrt(D) )/2*a;
x2 = (- b - sqrt(D) )/2*a;
printf("X1 = %.1f\n", x1 );
printf("X2 = %.1f\n", x2 );
}

return 0;
}


