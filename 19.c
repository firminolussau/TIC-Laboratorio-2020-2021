
#include<stdio.h>

main(){
int Fibon = 0, n1 = 1, n2 = 2;

printf("0, 1 ");
for(int i = 1; i < 19; i++){
Fibon = n1 + n2;
n1 = n2;
n2 = Fibon;
printf(",%d ", Fibon);
}
}