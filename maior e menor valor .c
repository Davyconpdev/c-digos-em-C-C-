#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

setlocale(LC_ALL,"portuguese");

//declarar variáveis.
int primeironumero;
int segundonumero;
int soma;
int produto;
int maior;
int menor;
float media;

printf ("digite um n�mero:");
scanf ("%d",&primeironumero);

printf ("digite outro n�mero:");
scanf ("%d",&segundonumero);

//calculando...
soma = primeironumero + segundonumero;
produto = primeironumero * segundonumero;
media = soma / 2;

//verificar maior e menor.
menor = primeironumero < segundonumero ? primeironumero : segundonumero;
maior = primeironumero > segundonumero ? primeironumero : segundonumero;


printf("soma: %d \n",soma);
printf("produto: %d \n" ,produto);
printf("M�dia: %.2f \n",media);
printf("Maior n�mero: %d \n",maior);
printf("Menor n�mero: %d \n",menor);



    
    
    return 0;
}