#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"portuguese");

int i = 0, par = 0, impar = 0, positivo = 0, negativo = 0;
int maiornumero = 0, menornumero = 0, n = 5, numero[n];
float soma = 0, media = 0;

for (i = 0; i < n; i++) {

    printf("digite o %d� n�mero:",i+1);
    scanf("%d",&numero[i]);
    fflush(stdin);
    
    if(numero[i] %2 == 0) {
        par++;
    } else {
        impar++;
    }
    
    if(numero[i] >= 0) {
        positivo++;
    } else {
       negativo++; 
    }
    
    maiornumero = numero[i] > maiornumero ? numero[i] : maiornumero;
    menornumero = numero[i] < menornumero ? numero[i] : menornumero;
    
    soma += numero[i];
}
    media = soma / n;

 system("cls");
 printf("Quantidade de n�meros pares: %d\n", par);
 printf("Quantidade de n�meros impares: %d\n", impar);
 printf("\n");
 printf("Quantidade de n�meros positivos: %d\n", positivo);
 printf("Quantidade de n�meros negativos: %d\n", negativo);
 printf("\n");
 printf("Maior n�mero: %d\n", maiornumero);
 printf("Menor n�mero: %d\n", menornumero);
 printf("\n");
 printf("Quantidade de n�meros inseridos: %d\n", n);
 printf("M�dia dos n�meros inseridos: %.1f\n", media);

 return 0;
}