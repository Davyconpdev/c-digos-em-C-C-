#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int primeironumero;
    int segundonumero;
    int terceironumero;
    int maior;
    int menor;

    printf("digite um n�mero:");
    scanf("%d",&primeironumero);

    printf("digite outro n�mero:");
    scanf("%d",&segundonumero);

    printf("digite mais outro n�mero:");
    scanf("%d",&terceironumero);

    system("cls || clear");
    
 
  maior = primeironumero > segundonumero ? primeironumero : segundonumero;
  maior = maior > terceironumero ? maior : terceironumero;

  menor = primeironumero < segundonumero ? primeironumero : segundonumero;
  menor = menor < terceironumero ? menor : terceironumero;



   printf("primeiro n�mero: %d \n",primeironumero);
   printf("segundo n�mero: %d \n",segundonumero);
   printf("terceiro n�mero: %d \n",terceironumero);
   printf("MAIOR n�mero: %d \n",maior);
   printf("MENOR n�mero: %d \n",menor);

    return 0;
}