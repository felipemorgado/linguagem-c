#include <stdio.h>
#include <stdlib.h>

void imprime_cabec(void);       //isso � um prototipo, caso eu queira colocar a fun��o em baixo da main

int main(void)
{
    imprime_cabec();
    printf("Hello world!\n");
    return (0);
}

void imprime_cabec(void)
{
    printf("*******************\n");
    return;     //se � void, s� escreve return
}
