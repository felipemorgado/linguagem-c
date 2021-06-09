#include <stdio.h>
#include <stdlib.h>

void imprime_cabec(void);       //isso é um prototipo, caso eu queira colocar a função em baixo da main

int main(void)
{
    imprime_cabec();
    printf("Hello world!\n");
    return (0);
}

void imprime_cabec(void)
{
    printf("*******************\n");
    return;     //se é void, só escreve return
}
