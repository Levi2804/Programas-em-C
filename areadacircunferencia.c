#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float area, PI, raio;
    PI = 3.14;
    
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor do raio da circunfer�ncia: ");
    scanf("%f", &raio);
    
    area = PI*(raio*raio);

    printf("A �rea da circunfer�ncia �: %.2f.", area);
    
    system("pause");
    return 0;
}
