#include <stdio.h>
#include <math.h>
void somatoria(int x, int y){
int i;
long int soma = 0;
for(i = x; i <= y; i = i + 1){
soma = soma + i;
}
printf("\nA somat�ria � %ld\n",soma);
}
int main(void) {
printf("\n\n ::::::::: INICIO DO PROGRAMA ::::::: \n\n");
printf("\n\nDigite o n�mero x: ");
scanf("%d",&x);
printf("\n\nDigite o n�mero y: ");
scanf("%d",&y);
soma(x,y);
return 0;
}

