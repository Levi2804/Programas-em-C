#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    float dolar, real;

    printf("Qual a atual cotac�o do dolar:\n");
    scanf("%f", &dolar);

    printf("Qual o valor em reais:\n");
    scanf("%f", &real);

    printf("A convers�o � R$%.2f.\n", real/dolar);

	system("pause");
    return 0;
}
