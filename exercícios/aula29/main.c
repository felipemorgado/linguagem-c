#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)                              //comparando strings
{
    char str1[] = "abc";
    char str2[] = "abd";
    //char str1[15] = "curso de c";
    //char str2[15] = "curso de java";

    int retorno;

    retorno = strcmp(str1,str2);
    //retorno = strncmp(str1,str2, 5);

    /*
        0: conteudo das string s�o iguais
        < 0: conteudo da str1 � menor  do que a str2
        > 0: conteudo da str1 � a maior do q a str2
    */

    printf("Retorno = %d\n", retorno);
    return (0);
}
