#include <stdio.h>

int main()
{
    int num1, num2, resultado;

    printf("ingrese el primer valor\n");
    scanf("%d", &num1);
    printf("ingrese el segundo valor\n");
    scanf("%d", &num2);

    resultado = num1 + num2;
    printf("el rsultado es %d\n", resultado);
}