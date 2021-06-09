#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;

    for (i = 0; ; i++) {
        printf("Ciclo infinito %d\n", i);

        if (i == 500) {
            printf("Saindo do ciclco\n");
            break;
        }
    }
    printf("saindo do programa");
    return (0);
}
