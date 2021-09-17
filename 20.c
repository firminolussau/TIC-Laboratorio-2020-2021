#include <stdio.h>
main(){
int Anos=0;
float H_Chico=1.50, H_Juca=1.10;
while(H_Chico>H_Juca){
H_Chico += H_Chico + 0.02;
H_Juca += H_Juca + 0.03;
Anos = Anos + 1;
}

printf("Sao necessarios %d Anos para que o Juca seja maior que o Chico\n",Anos);

}


