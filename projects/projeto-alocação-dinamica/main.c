#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int op;
    int total = 10;
    int *v = malloc(total*sizeof(int));
    int aux = 0;


    do {
        system("cls");
        aux = aux;

        printf("-----------------------------------------------\n");
        printf("    Programa UniCarioca - Alocação Dinâmica\n");
        printf("\n\n[1] Alocar");
        printf("\n\n[2] Armazenar");
        printf("\n\n[3] Exibir");
        printf("\n\n[0] Sair");

        printf("\n\n              By: Felipe Morgado\n");
        printf("-----------------------------------------------\n");

        printf("\nEscolha a opção: ");
        scanf("%d", &op);

        switch(op) {
            case 0:
                printf("\nAplicativo encerrado com sucesso!\n\n");
                system("pause");
                exit(0);

            case 1:
                system("cls");
                aux = 1;

                printf("-----------------------------------------------\n");
                printf("Programa UniCarioca - Alocação Dinâmica\n");

                printf("\n\nInforme quantos números serão adicionados: ");
                scanf("%d", &total);

                v = (int *)realloc(v, total * sizeof(int));

                printf("\n\n              By: Felipe Morgado\n");
                printf("-----------------------------------------------\n");

                system("pause");
            break;

            case 2:
                system("cls");

                if (aux == 0) {
                    printf("-----------------------------------------------\n");
                    printf("Programa UniCarioca - Alocação Dinâmica\n");

                    printf("\n\nErro: Informe primeiro quantos elementos deverão ser alocados!\n");

                    printf("\n\n              By: Felipe Morgado\n");
                    printf("-----------------------------------------------\n");
                    system("pause");
                } else {
                    printf("-----------------------------------------------\n");
                    printf("Programa UniCarioca - Alocação Dinâmica\n\n");

                    for (int i = 0; i < total; i++) {
                        printf("\nElemento %d: ", i);
                        scanf("%d", &v[i]);
                    }
                    printf("\n\n              By: Felipe Morgado\n");
                    printf("-----------------------------------------------\n");

                    system("pause");
                    }
            break;

            case 3:
                system("cls");

                if (aux == 0) {
                    printf("-----------------------------------------------\n");
                    printf("Programa UniCarioca - Alocação Dinâmica\n");
                    printf("\n\nErro: Informe primeiro elementos a serem exibidos!\n");

                    printf("\n\n              By: Felipe Morgado\n");
                    printf("-----------------------------------------------\n");

                    system("pause");
                } else {
                    printf("-----------------------------------------------\n");
                    printf("Programa UniCarioca - Alocação Dinâmica\n\n");

                    for(int i = 0; i < total; i++) {
                        printf("\nElemento %d: %d", i, v[i]);
                    }
                    printf("\n\n\n              By: Felipe Morgado\n");
                    printf("-----------------------------------------------\n");

                    system("pause");
                    }
            break;

            default:
                 printf("\nErro: Opção inválida! Digite somente valores de 0 a 4\n\n");
                system("pause");
        }

    } while (op != 0);

    free(v);
    return (0);
}
