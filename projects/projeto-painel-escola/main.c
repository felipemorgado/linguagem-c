#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula, idade;
    char nome[50];
    char sexo[10];
    float nota[2][2];
} info;

info aluno[50];
int total = 0;

//declarção dos parametros
void adicionar(void);
void exibir(void);
void menu_aprovados(void);
void ap_maiorigual7(void);
void ap_maiorigual9(void);
void menu_menu(void);
void menu_reprovados(void);
void rp_inferior5(void);
void rp_inferior7(void);
void alunos_todos(void);
void menu_salvar_carregar(void);
void salvar(void);
void carregar(void);

int main(void)
{
    int op;

    do {
        system("cls");
        printf("Projeto UniCarioca - Painel Escola\n\n");
        printf("\n[1] - Adicionar\n");
        printf("\n[2] - Exibir\n");
        printf("\n[3] - Salvar/Carregar\n");
        printf("\n[0] - Sair\n");

        printf("\n\nEscolha a opcao desejada: ");
        scanf("%d", &op);

        switch(op) {
            case 0:
                printf("\nAplicativo encerrado com sucesso!\n\n");
                system("pause");
                exit(0);
            break;

            case 1:
                adicionar();
            break;

            case 2:
                exibir();
            break;

            case 3:
                menu_salvar_carregar();
            break;

            default:
                printf("\nErro: Opcao invalida! Digite somente valores de 0 a 4\n\n");
                system("pause");
        }

    } while (op != 0);

    return (0);
}

void adicionar(void) {
    system("cls");
    int busca_matri, aux2;
    float vaux[3], media;

    if (total < 50) {
        printf("Programa UniCarioca - Questao 2\n\n");

        printf("\nInforme a matricula: ");
        scanf("%d", &aluno[total].matricula);
        busca_matri = aluno[total].matricula;

        for (int i =0; i < total; i++) {
            if (busca_matri == aluno[i].matricula) {
                aux2 = 1;
            }
        }

        if (aux2 != 1) {
            printf("\nInforme o nome: ");
            scanf("%s", aluno[total].nome);

            printf("\nInforme o sexo: ");
            scanf("%s", aluno[total].sexo);

            printf("\nInforme a idade: ");
            scanf("%d", &aluno[total].idade);

            printf("\nInforme a AV1: ");
            scanf("%f", &vaux[0]);

            printf("\nInforme a AV2: ");
            scanf("%f", &vaux[1]);

            printf("\nInforme a AV3: ");
            scanf("%f", &vaux[2]);

            //testando a nota maior e fazendo a media
            if (vaux[0] > vaux[1]) {
                if (vaux[1] > vaux[2]) {
                    media = (vaux[0] + vaux[1]) / 2;
                } else {
                    media = (vaux[0] + vaux[2]) / 2;
                }
            } else if (vaux[1] > vaux[2]) {
                if (vaux[2] > vaux[0]) {
                    media = (vaux[1] + vaux[2]) / 2;
                } else {
                    media = (vaux[1] + vaux[0]) / 2;
                }
            } else {
                if (vaux[0] > vaux[1]) {
                    media = (vaux[2] + vaux[0]) / 2;
                } else {
                    media = (vaux[2] + vaux[1]) / 2;
                }
            }

            aluno[total].nota[0][0] = vaux[0];
            aluno[total].nota[0][1] = vaux[1];
            aluno[total].nota[1][0] = vaux[2];
            aluno[total].nota[1][1] = media;


            printf("\nAluno(a) adicionado com sucesso!\n\n");
            total++;

            system("pause");
        } else {
            printf("\n\nO aluno(a) ja se encontra presente!\n\n");
            system("pause");
        }
///--------------------------

    } else {
        printf("\n\nErro: Sistema lotado!\n\n");
        system("pause");
    }
}

void exibir(void) {
    int op_exibir;
    system("cls");
    printf("Programa UniCarioca - Exibir Alunos\n\n");

    printf("\n[1] - Aprovados\n");
    printf("\n[2] - Reprovados\n");
    printf("\n[3] - Todos\n");
    printf("\n[0] - Voltar\n");

    printf("\n\nEscolha a opcao desejada: ");
    scanf("%d", &op_exibir);

    switch (op_exibir) {
        case 0:
            menu_menu();
        break;

        case 1:
            menu_aprovados();
        break;

        case 2:
            menu_reprovados();
        break;

        case 3:
            alunos_todos();
        break;

        default:
            printf("\nErro: Opcao invalida! Digite somente valores de 0 a 3\n\n");
            system("pause");
            exibir();
    }
}

void menu_aprovados(void) {
    int op_exibir;
    system("cls");
    printf("Programa UniCarioca - Aprovados\n\n");

    printf("\n[1] - Media superior ou igual a 7\n");
    printf("\n[2] - Media superior ou igual a 9\n");
    printf("\n[0] - Voltar\n");

    printf("\n\nEscolha a opcao desejada: ");
    scanf("%d", &op_exibir);

    switch (op_exibir) {
        case 0:
            exibir();
        break;

        case 1:
            ap_maiorigual7();
        break;

        case 2:
            ap_maiorigual9();
        break;

        default:
            printf("\nErro: Opcao invalida! Digite somente valores de 0 a 2\n\n");
            system("pause");
            menu_aprovados();
    }
}

void ap_maiorigual7(void) {
    system("cls");

    printf("Programa UniCarioca - Aprovados\n\n");
    printf("\nAlunos aprovados com media maior ou igual a 7:\n\n");
    printf("----------------------------------------\n");
    printf("ALUNO             |              MEDIA  \n");
    printf("----------------------------------------\n");

    if (total == 0) {
        printf("\nErro: Nenhum aluno foi adicionado, adicione e tente novamente!\n\n");
        system("pause");
    } else {

        for(int i = 0; i < total; i++) {
        if (aluno[i].nota[1][1] >= 7) {
            printf("\n%-28s     %.2f", aluno[i].nome, aluno[i].nota[1][1]);
        }
    }
        printf("\n----------------------------------------\n");
        system("pause");
    }
    menu_aprovados();
}

void ap_maiorigual9(void) {
    system("cls");

    printf("Programa UniCarioca - Aprovados\n\n");
    printf("\nAlunos aprovados com media maior ou igual a 9:\n\n");
    printf("----------------------------------------\n");
    printf("ALUNO             |              MEDIA  \n");
    printf("----------------------------------------\n");

    if (total == 0) {
        printf("\nErro: Nenhum aluno foi adicionado, adicione e tente novamente!\n\n");
        system("pause");
    } else {

        for(int i = 0; i < total; i++) {
        if (aluno[i].nota[1][1] >= 9) {
            printf("\n%-28s     %.2f", aluno[i].nome, aluno[i].nota[1][1]);
        }
    }
        printf("\n----------------------------------------\n");
        system("pause");
    }
    menu_aprovados();
}

void menu_reprovados(void) {
    int op_exibir;
    system("cls");
    printf("Programa UniCarioca - Reprovados\n\n");

    printf("\n[1] - Media inferior a 5\n");
    printf("\n[2] - Media inferior a 7\n");
    printf("\n[0] - Voltar\n");

    printf("\n\nEscolha a opcao desejada: ");
    scanf("%d", &op_exibir);

    switch (op_exibir) {
        case 0:
            exibir();
        break;

        case 1:
            rp_inferior5();
        break;

        case 2:
            rp_inferior7();
        break;

        default:
            printf("\nErro: Opcao invalida! Digite somente valores de 0 a 2\n\n");
            system("pause");
            menu_reprovados();
    }
}

void rp_inferior5(void) {
    system("cls");

    printf("Programa UniCarioca - Reprovados\n\n");
    printf("\nAlunos reprovados com media inferior a 5:\n\n");
    printf("----------------------------------------\n");
    printf("ALUNO             |              MEDIA  \n");
    printf("----------------------------------------\n");

    if (total == 0) {
        printf("\nErro: Nenhum aluno foi adicionado, adicione e tente novamente!\n\n");
        system("pause");
    } else {

        for(int i = 0; i < total; i++) {
        if (aluno[i].nota[1][1] < 5) {
            printf("\n%-28s     %.2f", aluno[i].nome, aluno[i].nota[1][1]);
        }
    }
        printf("\n----------------------------------------\n");
        system("pause");
    }
    menu_reprovados();
}

void rp_inferior7(void) {
    system("cls");

    printf("Programa UniCarioca - Reprovados\n\n");
    printf("\nAlunos reprovados com media inferior a 7:\n\n");
    printf("----------------------------------------\n");
    printf("ALUNO             |              MEDIA  \n");
    printf("----------------------------------------\n");

    if (total == 0) {
        printf("\nErro: Nenhum aluno foi adicionado, adicione e tente novamente!\n\n");
        system("pause");
    } else {

        for(int i = 0; i < total; i++) {
        if (aluno[i].nota[1][1] < 7) {
            printf("\n%-28s     %.2f", aluno[i].nome, aluno[i].nota[1][1]);
        }
    }
        printf("\n----------------------------------------\n");
        system("pause");
    }
    menu_reprovados();
}

void menu_menu(void) {
    int op1;

    do {
        system("cls");
        printf("Programa UniCarioca - Questao 2\n\n");
        printf("\n[1] - Adicionar\n");
        printf("\n[2] - Exibir\n");
        printf("\n[3] - Salvar/Carregar\n");
        printf("\n[0] - Sair\n");

        printf("\n\nEscolha a opcao desejada: ");
        scanf("%d", &op1);

        switch(op1) {
            case 0:
                printf("\nAplicativo encerrado com sucesso!\n\n");
                system("pause");
                exit(0);
            break;

            case 1:
                adicionar();
            break;

            case 2:
                exibir();
            break;

            case 3:
                menu_salvar_carregar();
            break;

            default:
                printf("\nErro: Opcao invalida! Digite somente valores de 0 a 3\n\n");
                system("pause");
        }

    } while (op1 != 0);
}

void alunos_todos(void) {
    system("cls");

    printf("Programa UniCarioca - Todos os Alunos\n\n");
    printf("\nTodos os alunos adicionados:\n\n");

    printf("--------------------------------------------------------------------------------\n");
    printf("ALUNO             |            MEDIA         |          MATRICULA\n");
    printf("--------------------------------------------------------------------------------\n");

    if (total == 0) {
        printf("\nErro: Nenhum aluno foi adicionado, adicione e tente novamente!\n\n");
        system("pause");
    } else {

        for(int i = 0; i < total; i++) {
            printf("\n%-26s     %-24.2f     %d", aluno[i].nome, aluno[i].nota[1][1], aluno[i].matricula);
        }
        printf("\n--------------------------------------------------------------------------------\n");
        system("pause");
    }
    exibir();
}

void menu_salvar_carregar(void) {
    int op_exibir;
    system("cls");
    printf("Programa UniCarioca - Salvar e Carregar\n\n");

    printf("\n[1] - Salvar\n");
    printf("\n[2] - Carregar\n");
    printf("\n[0] - Voltar\n");

    printf("\n\nEscolha a opcao desejada: ");
    scanf("%d", &op_exibir);

    switch (op_exibir) {
        case 0:
            menu_menu();
        break;

        case 1:
            salvar();
        break;

        case 2:
            carregar();
        break;

        default:
            printf("\nErro: Opcao invalida! Digite somente valores de 0 a 2\n\n");
            system("pause");
            menu_menu();
    }
}

void salvar(void) {
    system("cls");
    FILE *arqv;
    char nome_arqv[50];

    printf("Programa UniCarioca - Salvar\n\n");

    printf("\nInsira o nome do novo arquivo: ");
    scanf("%s", nome_arqv);
    strcat(nome_arqv, ".txt");

    arqv = fopen(nome_arqv, "w");

    if (arqv == NULL) {
        printf("\n\nErro: Arquivo nao pode ser aberto, aplicativo encerrado!\n\n");
        menu_salvar_carregar();
        exit(0);
    }

    fprintf(arqv, "Total: %d", total);
    fprintf(arqv, "\n------------------------------\n");

    for(int i = 0; i < total; i++) {
        fprintf(arqv, "Matricula: %d", aluno[i].matricula);
        fprintf(arqv, "\nNome: %s", aluno[i].nome);
        fprintf(arqv, "\nIdade: %d", aluno[i].idade);
        fprintf(arqv, "\nSexo: %s", aluno[i].sexo);
        fprintf(arqv, "\nAV1: %.2f", aluno[i].nota[0][0]);
        fprintf(arqv, "\nAV2: %.2f", aluno[i].nota[0][1]);
        fprintf(arqv, "\nAV3: %.2f", aluno[i].nota[1][0]);
        fprintf(arqv, "\nMedia: %.2f", aluno[i].nota[1][1]);
        fprintf(arqv, "\n------------------------------\n");
    }

    printf("\n\nO Arquivo %s foi salvo com sucesso!\n\n", nome_arqv);
    system("pause");
    fclose(arqv);
    menu_salvar_carregar();
}

void carregar(void) {
    system("cls");
    FILE *arqv;
    char nome_arqv[50];

    printf("Programa UniCarioca - Carregar\n\n");

    printf("\nInsira o nome do arquivo a ser carregado: ");
    scanf("%s", nome_arqv);
    strcat(nome_arqv, ".txt");

    arqv = fopen(nome_arqv, "r");

    if (arqv == NULL) {
        printf("\n\nErro: Arquivo nao encontrado!\n\n");
        system("pause");
        menu_salvar_carregar();
    } else {
        fseek(arqv, 7, 0);
        fscanf(arqv, "%d", &total);
        fseek(arqv, 33, 1);

        for(int i = 0; i < total; i++) {

        fseek(arqv, 11, 1);
        fscanf(arqv, "%d\n", &aluno[i].matricula);

        fseek(arqv, 6, 1);
        fscanf(arqv, "%s\n", aluno[i].nome);

        fseek(arqv, 7, 1);
        fscanf(arqv, "%d\n", &aluno[i].idade);

        fseek(arqv, 6, 1);
        fscanf(arqv, "%s\n", aluno[i].sexo);

        fseek(arqv, 5, 1);
        fscanf(arqv, "%f\n", &aluno[i].nota[0][0]);

        fseek(arqv, 5, 1);
        fscanf(arqv, "%f\n", &aluno[i].nota[0][1]);

        fseek(arqv, 5, 1);
        fscanf(arqv, "%f\n", &aluno[i].nota[1][0]);

        fseek(arqv, 7, 1);
        fscanf(arqv, "%f", &aluno[i].nota[1][1]);
        fseek(arqv, 33, 1);
        }
    }
    printf("\n\nO Arquivo %s foi carregado com sucesso!\n\n", nome_arqv);
    system("pause");
    fclose(arqv);
}
