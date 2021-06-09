#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float n1, n2, res;
    int op, res2, auxiliar, auxiliar2, n3, n4;


   do {
    system("cls");
    printf("===================================\n");
    printf("======== Calculadora em C =========\n");
    printf("======= By: Felipe Morgado ========\n");

    printf("\nDigite o primeiro número: ");
    scanf("%f", &n1);

    printf("\nDigite o segundo número: ");
    scanf("%f", &n2);
    system("cls");


    printf("===================================\n");
    printf("======== Calculadora em C =========\n");
    printf("======= By: Felipe Morgado ========\n");

    printf("\n| 0 - Sair                        |\n");
    printf("\n| 1 - Adição                      |\n");
    printf("\n| 2 - Subtração                   | \n");
    printf("\n| 3 - Multiplicação               | \n");
    printf("\n| 4 - Divisão                     |\n");
    printf("\n| 5 - Resto                       |\n");
    printf("\n| 6 - Potenciação                 |\n");

    printf("\n\nDigite o número da operação a ser realizada: ");
    scanf("%d", &op);

    auxiliar = n1;
    auxiliar2 = n2;

    n3 = n1;
    n4 = n2;
    if (auxiliar == n1 && auxiliar2 == n2) {     // se o resultado for inteiro
        switch (op) {
            case 1:
                res2 = n3 + n4;
                printf("\nO resultado desta operação é %d\n", res2);
                break;

            case 2:
                res2= n3 - n4;
                printf("\nO resultado desta operação é %d\n", res2);
                break;

            case 3:
                res2 = n3 * n4;
                printf("\nO resultado desta operação é %d\n", res2);
                break;

            case 4:
                if (n1 == 0 || n2 == 0) {
                    printf("\nImpossível realizar esta operação com o valor 0!\n");
                } else {
                    res = n1 / n2;
                    printf("\nO resultado desta operação é %.2f\n", res);
                }
                break;

            case 5:
                if (n1 == 0 || n2 == 0) {
                    printf("\nImpossível realizar esta operação com o valor 0!\n");
                } else {
                    res2 = n3 % n4;
                    printf("\nO resultado desta operação é %d\n", res2);
                }
                break;

            case 6:
                res2 = pow(n3, n4);
                printf("\nO resultado desta operação é %d\n", res2);
                break;

            default:
                op = 0;
                system("cls");
                printf("\n\nO valor informado não é um formato válido. Programa Encerrado\n\n");
                exit(0);
                break;
        }
    } else {            // se o resultado for float
        switch (op) {
            case 1:
                res = n1 + n2;
                printf("\nO resultado desta operação é %.2f\n", res);
                break;

            case 2:
                res = n1 - n2;
                printf("\nO resultado desta operação é %.2f\n", res);
                break;

            case 3:
                res = n1 * n2;
                printf("\nO resultado desta operação é %.2f\n", res);
                break;

            case 4:
                if (n1 == 0 || n2 == 0) {
                    printf("\nImpossível realizar esta operação com o valor 0!\n");
                } else {
                    res = n1 / n2;
                    printf("\nO resultado desta operação é %.2f\n", res);
                }
                break;

            case 5:
                if (n1 == 0 || n2 == 0) {
                    printf("\nImpossível realizar esta operação com o valor 0!\n");
                } else {
                    res2 = n3 % n4;
                    printf("\nO resultado desta operação é %d\n", res2);
                }
                break;

            case 6:
                res = pow(n1, n2);
                printf("\nO resultado da operação é %.2f\n", res);
                break;

            default:
                op = 0;
                system("cls");
                printf("\n\nO valor informado não é um formato válido. Programa Encerrado!\n\n");
                exit(0);
                break;

        }
    }

    printf("\n\nDeseja sair do programa? \n0 - Sim // 1 - Não\n -> "); // qualquer outro valor, o programa irá fechar
    scanf("%d", &op);

    if (op != 0 && op != 1) {
        exit(0);
    }
        } while (op != 0);

    return (0);
}
