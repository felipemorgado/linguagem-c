#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*  Criar um vetor denominado A com 10 posiçoes do tipo int, preencher o vetor recebendo dados
         via teclado e multiplicaro conteudo de cada elemento do vetor A por 10,
         armazenando o resultado em outro vetor denominado B */

    int i, a[10] = {0}, b[10] = {0};

    for (i = 0; i < 10; i++) {
        printf("%d - Digite um numero: ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++) {
        b[i] = a[i] * 10;

        printf("\nB[%d] = %d\n", i, b[i]);
    }


    return (0);
}
