#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int num, cubo;

    printf("Digite um n�mero para saber seu cubo: ");
    scanf("%i", &num);

    cubo = pow(num,3);

    printf("O cubo de %i � %i.\n", num, cubo);
    
    system("pause");
    return 0;
}
