#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    int dim;

    printf("Inserisci dimensione del vettore : ");
    scanf("%d", &dim);

    array = (int *)malloc(dim * sizeof(int));

    for (int i = 0; i < dim; i++)
    {
        array[i] = i * 2;
    }

    printf("Vettore : ");
    for (int i = 0; i < dim; i++)
    {
        printf("%d ", array[i]);
    }
}