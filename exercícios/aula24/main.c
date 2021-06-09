#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[20], i;

    // inicializando vetor com zeros

    for (i = 0; i < 20; i++) {
        vetor[i] = 0;
    }


    for (i = 0; i < 20; i++) {
        printf("vetor%d = %d\n", i, vetor[i]);
    }

///POREM E MAIS FACIL COLOCAR     int vetor[20] {0};
// ele ja coloca todos com numero 0 (mas so funciona pra 0)

    return (0);
}
