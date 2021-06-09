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

    printf("\nDigite o primeiro n�mero: ");
    scanf("%f", &n1);

    printf("\nDigite o segundo n�mero: ");
    scanf("%f", &n2);
    system("cls");


    printf("===================================\n");
    printf("======== Calculadora em C =========\n");
    printf("======= By: Felipe Morgado ========\n");

    printf("\n| 0 - Sair                        |\n");
    printf("\n| 1 - Adi��o                      |\n");
    printf("\n| 2 - Subtra��o                   | \n");
    printf("\n| 3 - Multiplica��o               | \n");
    printf("\n| 4 - Divis�o                     |\n");
    printf("\n| 5 - Resto                       |\n");
    printf("\n| 6 - Potencia��o                 |\n");

    printf("\n\nDigite o n�mero da opera��o a ser realizada: ");
    scanf("%d", &op);

    auxiliar = n1;
    auxiliar2 = n2;

    n3 = n1;
    n4 = n2;
    if (auxiliar == n1 && auxiliar2 == n2) {     // se o resultado for inteiro
        switch (op) {
            case 1:
                res2 = n3 + n4;
                printf("\nO resultado desta opera��o � %d\n", res2);
                break;

            case 2:
                res2= n3 - n4;
                printf("\nO resultado desta opera��o � %d\n", res2);
                break;

            case 3:
                res2 = n3 * n4;
                printf("\nO resultado desta opera��o � %d\n", res2);
                break;

            case 4:
                if (n1 == 0 || n2 == 0) {
                    printf("\nImposs�vel realizar esta opera��o com o valor 0!\n");
                } else {
                    res = n1 / n2;
                    printf("\nO resultado desta opera��o � %.2f\n", res);
                }
                break;

            case 5:
                if (n1 == 0 || n2 == 0) {
                    printf("\nImposs�vel realizar esta opera��o com o valor 0!\n");
                } else {
                    res2 = n3 % n4;
                    printf("\nO resultado desta opera��o � %d\n", res2);
                }
                break;

            case 6:
                res2 = pow(n3, n4);
                printf("\nO resultado desta opera��o � %d\n", res2);
                break;

            default:
                op = 0;
                system("cls");
                printf("\n\nO valor informado n�o � um formato v�lido. Programa Encerrado\n\n");
                exit(0);
                break;
        }
    } else {            // se o resultado for float
        switch (op) {
            case 1:
                res = n1 + n2;
                printf("\nO resultado desta opera��o � %.2f\n", res);
                break;

            case 2:
                res = n1 - n2;
                printf("\nO resultado desta opera��o � %.2f\n", res);
                break;

            case 3:
                res = n1 * n2;
                printf("\nO resultado desta opera��o � %.2f\n", res);
                break;

            case 4:
                if (n1 == 0 || n2 == 0) {
                    printf("\nImposs�vel realizar esta opera��o com o valor 0!\n");
                } else {
                    res = n1 / n2;
                    printf("\nO resultado desta opera��o � %.2f\n", res);
                }
                break;

            case 5:
                if (n1 == 0 || n2 == 0) {
                    printf("\nImposs�vel realizar esta opera��o com o valor 0!\n");
                } else {
                    res2 = n3 % n4;
                    printf("\nO resultado desta opera��o � %d\n", res2);
                }
                break;

            case 6:
                res = pow(n1, n2);
                printf("\nO resultado da opera��o � %.2f\n", res);
                break;

            default:
                op = 0;
                system("cls");
                printf("\n\nO valor informado n�o � um formato v�lido. Programa Encerrado!\n\n");
                exit(0);
                break;

        }
    }

    printf("\n\nDeseja sair do programa? \n0 - Sim // 1 - N�o\n -> "); // qualquer outro valor, o programa ir� fechar
    scanf("%d", &op);

    if (op != 0 && op != 1) {
        exit(0);
    }
        } while (op != 0);

    return (0);
}
