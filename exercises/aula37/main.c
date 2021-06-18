#include <stdio.h>
#include <stdlib.h>

int main(void)          // ponteiro de ponteiro
{
    int x, *ptrx, **pptrx;

    //inicializando variavel com zero

    x = 0;
    printf("\nvalor de x = %d\n", x);
    printf("\nendereco de x = %d\n\n", &x);

    //atribuindo os endereços para os ponteiros

    ptrx = &x;              //ptrx aponta pra x
    pptrx = &ptrx;        //pptrx aponta pra pptrx

    printf("\nvalor de x = %d", x);
    printf("\nendereco apotando por ptrx = %x", ptrx);

    printf("\nvalor da variavel x que esta sendo apotanda por ptrx = %d\n", *ptrx);

    printf("\nendereco de memoria da variavel  ptrx = %x\n", &ptrx);

    system("pause");
    // nao entendi nada dps estuddar ponteiros

    return (0);
}
