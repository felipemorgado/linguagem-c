#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)          // type - variavel
{                       // n1 armazena tipo de dados de numeros inteiros (int � o tipo)

    int n1 = 10;
    int n2 = 50;

    setlocale(LC_ALL, "Portuguese");
    printf("O n2 � %d e o n1 � %d\n", n2, n1);  //%d � a marca��o dos numero inteiro (� o ${n1} do JS)
                                                // n2 vai ficar no primeio %d e o n1 vai ficar no segundo
     int n3 = 65;

    printf("O valor agora e %d e ta sem acento\n", n3);

	system("pause");
	return 0;
}
