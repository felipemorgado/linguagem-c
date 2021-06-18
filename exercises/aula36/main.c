#include <stdio.h>
#include <stdlib.h>
#include <conio.h>      /// n�o sei pq mas o getch s� funciona com isso

int main(void)  // vamo aprender ponteiro
{
    //valor � a variavel que ser� apontada pelo ponteiro
    int valor = 27;

    //declara��o de variavel ponteiro (todo ponteiro precisa do *)
    int *ptr;

    //atribuindo o endere�o da variavel valor ao ponteiro (o & significa endere�o de valor)
    ptr = &valor;

    printf("Utilizando ponteiros\n\n");
    printf("Conteudo da variavel valor: %d\n", valor);
    printf("Endere�o da variavel valor: %x\n", &valor);     //%x = n�meros hexadecimais
    printf("Conteudo da variavel ponteiro ptr: %x\n", ptr);

    getch();    // ahh serve pra pausar a tela

    return (0);
}
