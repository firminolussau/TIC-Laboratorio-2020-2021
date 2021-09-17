

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
int num, primeiro, segundo, penultimo, ultimo;

printf("Entre com  um numero de 5 Digitos: ");
scanf("%i",&num);
if(num >= 10000 && num <= 99999)
 primeiro = ((num/10000) %10);
 segundo = ((num/1000)%10);
 penultimo = ((num/10)%10);
 ultimo = ((num/1)%10);

if ( primeiro == ultimo && segundo == penultimo){
printf("Numero Polindrome");
}else{
printf("Numeros Nao Polindrome");
}



return (0);
}


