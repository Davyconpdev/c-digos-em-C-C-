#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int tamanho = 3;
    float nota[tamanho];
    float soma =0;
    float media;

    for (i = 0; i < tamanho; i++)
    {

        printf("digite a %d� nota:", i+1);
        scanf("%f", &nota[i]);
        soma += nota[i];

    }
    system("cls");
    printf("Exibindo notas.\n");
    printf("\n");
    
    media = soma / tamanho;

    if (media >= 7)
    {
        printf("APROVADO!\n");
    } else if (media >= 5)
    {
        printf("RECUPERA��O.\n");
    } else {
        printf("REPROVADO.\n");
    }

    for (i = 0; i < tamanho; i++)
    {
    printf("%d� nota: %.1f \n",i+1, nota[i]); 
    }
    printf("M�dia: %.1f\n",media);

    return 0;
}