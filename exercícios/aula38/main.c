#include <stdio.h>
#include <stdlib.h>
//função que soma 10 ao valor recebido

void soma10(int x)
{
    x = x + 10;
    return;
}

void soma10p(int *x)                //mudar o valor na main sem retorno :3
{
    *x = *x + 10;
    return;
}

int main(void)
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero digitado foi: %d \n", numero);

    //chamada da funcao
    soma10(numero);

    printf("Agora o numero vale: %d \n", numero);
    //*x
    soma10p(&numero);

    printf("\n\n\n\nAgora o numero vale: %d \n", numero);

    return (0);
}
