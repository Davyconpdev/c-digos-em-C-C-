#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somar(int n1, int n2) {
int resultado;
resultado = n1 + n2;
return  resultado;
};

int subtrair(int n1, int n2) {
int resultado;
resultado = n1 - n2;
return  resultado;
};

int multiplicar(int n1, int n2) {
int resultado;
resultado = n1 * n2;
return  resultado;
};

float dividir(float n1, float n2) {
float resultado;
resultado = n1 / n2;
return  resultado;
};

int main() {
setlocale(LC_ALL,"portuguese");

int primeironumero, segundonumero;
int soma = 0, subtracao = 0, multiplicacao = 0;
float divisao = 0;

printf("Digite o primeiro n�mero:");
scanf("%d",&primeironumero);

printf("Digite o segundo n�mero:");
scanf("%d",&segundonumero);

soma = somar(primeironumero, segundonumero);
subtracao = subtrair(primeironumero, segundonumero);
multiplicacao = multiplicar(primeironumero, segundonumero);
divisao = dividir(primeironumero, segundonumero);

printf("Soma: %d\n", soma);
printf("Subtra��o: %d\n", subtracao);
printf("Multiplica��o: %d\n", multiplicacao);
printf("Divis�o: %.3f\n", divisao);

return 0;
}