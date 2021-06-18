#include <stdio.h>
#include <stdlib.h>

int main(void)      //matriz
{
    //int m[2][2] = {10,20,30,40};
    int m[2][3] = {{10,20,99},
                        {30,40,77}};

    printf("Linha 0, coluna 0 = %d\n", m[0][0]);
    printf("Linha 0, coluna 1 = %d\n", m[0][1]);
    printf("Linha 0, coluna 2 = %d\n\n", m[0][2]);
    printf("Linha 1, coluna 0 = %d\n", m[1][0]);
    printf("Linha 1, coluna 1 = %d\n", m[1][1]);
    printf("Linha 1, coluna 2 = %d\n", m[1][2]);

    return (0);
}
