#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int num;
    
    printf("Digite um n�mero inteiro para saber seu antecessor e sucessor:\n");
    scanf("%i", &num);

    printf("O antecessor de %i �: %i.\nO sucessor de %i �: %i.\n", num, num-1, num, num+1);
    
    system("pause");
    return (0);
}
