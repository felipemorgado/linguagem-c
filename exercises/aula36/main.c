#include <stdio.h>
#include <stdlib.h>
#include <conio.h>      /// não sei pq mas o getch só funciona com isso

int main(void)  // vamo aprender ponteiro
{
    //valor é a variavel que será apontada pelo ponteiro
    int valor = 27;

    //declaração de variavel ponteiro (todo ponteiro precisa do *)
    int *ptr;

    //atribuindo o endereço da variavel valor ao ponteiro (o & significa endereço de valor)
    ptr = &valor;

    printf("Utilizando ponteiros\n\n");
    printf("Conteudo da variavel valor: %d\n", valor);
    printf("Endereço da variavel valor: %x\n", &valor);     //%x = números hexadecimais
    printf("Conteudo da variavel ponteiro ptr: %x\n", ptr);

    getch();    // ahh serve pra pausar a tela

    return (0);
}
