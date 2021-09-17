#include <stdio.h>
#include <stdlib.h>


int main() {
	int N [10], Soma1, Soma2, Media_P, Media_I;
    	for (int i =0; i<9;i++){
         	printf ("Digite o %d numero",++i\n);
             	scanf ("%f",&N[i]);
	
                 	if (N[i]%2==0){
                     	Soma1+=N[i];
                   	else
 	            Soma2+=N[i];
              }
            }
         Media_P = Soma1/10;
      Media_I = Soma2/10;
   printf ("A media dos numeros pares e %d e dos impares e %d ",Media_P, Media_I);
return 0;
}
