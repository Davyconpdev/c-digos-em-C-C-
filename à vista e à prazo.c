#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
 setlocale(LC_ALL,"portuguese");

    float precoproduto;
    float desconto;
    float precofinal;
    float precoparcelado;
    int opcao;
    int parcelas;

    printf("pre�o do produto:");
    scanf("%f",&precoproduto);

    printf("\nForma de pagamento.\n");
    printf("1- � vista \n");
    printf("2- A prazo \n");
    printf("\nDigite a op��o desejada:\n");
    scanf("%d",&opcao);
    system("cls || clear");

    switch (opcao)
    {
    case 1:
        desconto = precoproduto * 0.1;
        precofinal = precoproduto - desconto;
{
     printf("Pre�o do produto: R$ %.2f \n", precoproduto);
        printf("Forma de pagamento: � vista \n" );
        printf("Desconto: R$ %.2f \n", desconto);
        printf("Pre�o final: R$ %.2f \n", precofinal);
}
break;

    case 2:
        do
        {
            printf("Quantidade de parcelas:");
            scanf("%d",&parcelas);

            if (parcelas > 6)
            {
                printf("Parcelamento em at� 6x. \n");
                printf("Digite a quantidade de parcelas novamente. \n");
            } 
        } while (parcelas > 6);

        precoparcelado = precoproduto / parcelas;
        precofinal = precoproduto;
            system("cls");
{
    printf("Quantidade de parcela: %d \n", parcelas);
        printf("Pre�o das parcelas: R$ %.2f \n", precoparcelado);
        printf("Pre�o final: R$ %.2f \n", precofinal);
}
break;

    default:
        printf("Op��o inv�lida.");
    }
    return 0;
}