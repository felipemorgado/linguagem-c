#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)      //tamanho de uma string
{
    char str[] = "Curso";
    int tamanho;

    tamanho = strlen(str);

    printf("O tamanho da string %s vale: %d\n", str, tamanho);

    return (0);
}
