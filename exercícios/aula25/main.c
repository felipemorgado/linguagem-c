#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    //char nome_cliente[7] = "Fulano";
    char nome_cliente[50] = "Fulano";
    int i, cont;
    //nome_cliente[5] = '\0';

    for (i = 0; nome_cliente[i] != '\0'; i++) {
        printf("Valor do elemento %d da string = %c\n", i, nome_cliente[i]);
        cont++;
    }

    printf("\nQuantidade de string usando strlen: %d\n", strlen(nome_cliente));


    return (0);
}
