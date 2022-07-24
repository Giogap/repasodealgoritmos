#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**  Diseñar un algoritmo que diga si un numero positivo es primo */

int primo(int p)
{
    int i;
    int j = 1;   

    for (i = 2; i <= p; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i = j && i % 2)
            {
                printf("%d Es Primo  ", i);
            }
        }
                               
    } 
    printf("\n");
    return(0); 
}