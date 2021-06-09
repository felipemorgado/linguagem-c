#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float notas[5] = {7, 8, 9.5, 9.9, 5.2};
    int c;

    printf("Exibindo os valores do vetor \n\n");

    for (c = 0; c < 5; c++) {
        printf("notas[%d] = %.1f\n", c, notas[c]);
    }

    return (0);
}
