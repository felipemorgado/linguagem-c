#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char nome1[15];
    char nome2[15] = "Folpa";

    printf("DIgite o nome: ");
    scanf("%s", &nome1);

    printf("\nNome1 = %s\n", nome1);

    strncpy(nome2, nome1,5);

    printf("\nNome2 = %s\n", nome2);

    return (0);
}
