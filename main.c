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
long int somatoriaRecursiva(int x,int y){
if(x<=y){
long int soma = x;
long int resultado = somatoriaRecursiva(x+1, y);
printf("%ld - ",resultado);
return soma + resultado;
}
else{
return 0;
}
}
//produtorioRecursivo
long int produtoriaRecursiva(int x, int y){
if(y>=x){
//long int produto=y;
long int resultado = produtoriaRecursiva(x,y-1);
printf("%ld - ", resultado);
return y*resultado;
}
else{
return 1;
}
}
int main(void) {
printf("\n\n ::::::::: INICIO DO PROGRAMA ::::::: \n\n");
printf("\n\nDigite o n�mero x: ");
scanf("%d",&x);
printf("\n\nDigite o n�mero y: ");
scanf("%d",&y);
printf("\nA somat�ria �: %ld",somatoriaRecursiva(x,y));
printf("\nA produt�ria �: %ld",produtoriaRecursiva(x,y));
return 0;
}

