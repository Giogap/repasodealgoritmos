#include <stdio.h>
#include <stdlib.h>

/** 
 * Realizar un algoritmo que lea tres numeros, si el primero es positivo calcule el producto de los 
tres numeros y en otro caso la suma. 
Se usan tres variables enteras - Numero1, Numero2, Numero3, en las que se leen losdatos, y otras dos 
variables Producto y Suma en las que se calcula, o bien el producto, o bienla suma. El algoritmo que 
resuelve el problema es el siguiente.*/

int produc_sum(int a, int b, int c)
{
    int producto = 0, suma = 0; 

    if (a > 0)
    {
        producto = a * b * c;
        return(producto);
    }
    else
    {
        suma = a + b + c;
        return(suma);
    }
    return(0);
}