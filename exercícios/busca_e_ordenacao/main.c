#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int buscaOrd(int n, int valor, int *vet);
void insercaoDireita(int *vet, int n);

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int vet[10], n1, res;

    printf("Programa UniCarioca - Atividade 03\n");

    for (int i = 0; i < 10; i++) {
        printf("\n[%d] - Informe um número para preencher o vetor: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\n\nInfome um número para ser procuradono vetor: ");
    scanf("%d", &n1);

    insercaoDireita(vet, 10);
    res = buscaOrd(10, n1, vet);

    if (res == -1) {
        printf("\n\nO valor informado não foi encontrado!\n\n");
    } else {
        printf("\n\nO valor informado foi encontrado!\n\n", res);
    }

    system("pause");
    return (0);
}

int buscaOrd(int n, int valor, int *vet1) {
    int i;
    for (i = 0; i < n; i++) {
        if (vet1[i] == valor) {
            return i;
        } if (vet1[i] > valor) {
            return -1;
        }
    }
    return -1;
}

void insercaoDireita(int *vet, int n) {
    int i, j, aux;
    for (i = 1; i < n; i++) {
        aux = vet[i];
        j = i-1;

        while (j >= 0 && aux < vet[j]) {
            vet[j+1] = vet[j];
            j = j-1;
        }
        vet[j+1] = aux;
    }
}
