#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho() {

printf("\n=================================\n");
printf("\tSENAI");
printf("\n=================================\n");
}

void limpatela() {
system("cls || clear");
}

float calculo(float num1, float num2) {
return (num1 + num2) / 2;
}

int main() {
setlocale(LC_ALL,"portuguese");

float numero1, numero2;

cabecalho();

printf("Informe o primeiro n�mero: ");
scanf("%f",&numero1);

printf("Informe o segundo n�mero: ");
scanf("%f",&numero2);
limpatela();

printf("M�dia: %.1f\n", calculo(numero1, numero2));
    return 0;
}