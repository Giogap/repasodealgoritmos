#include <stdio.h>

int main()
{
    int edad;

    printf("ingrese su edad\n");
    scanf("%d", &edad);

    if (edad > 17)
    {
        printf("ud es mayor de edad\n");
    }
    else
    {
        printf("ud es menor de edad\n");
    }
}