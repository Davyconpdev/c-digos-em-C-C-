#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//void mensagem(int numero) {
//if (numero %2 == 0)
//{
//printf("PAR.\n",numero);
//} else {
//printf("�MPAR.\n",numero);
//}
//}
// OPERADOR TERN�RIO
void mensagem(int numero) {    
numero %2 == 0 ? printf("%d - par\n",numero) : printf("%d - �mpar\n",numero); }

int main() {
setlocale(LC_ALL,"portuguese");

int numero;

printf("digite um n�mero:");
scanf("%d",&numero);

mensagem(numero);

    return 0;
}