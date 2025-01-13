#include <stdio.h>
#include <stdlib.h>
// void doppioVal(int a)
// {
//     a = a * 2;
// }

// void doppioInd(int *a)
// {
//     *a = *a * 2;
// }
int main()
{

    int *array = NULL;
    char scelta;

    do
    {
        printf("creare o distruggere il vettore c/d ?");
        scanf("%c", &scelta);

        getchar();

        if (scelta == 'c')
        {
            free(array);
            array = (int *)malloc(5 * sizeof(int));
        }
        else
        {
            free(array);
            array = NULL;
        }
        free(array);
    } while (scelta == 'c' || scelta == 'd');
    // int matrix[3][4];

    // printf("Inserisci i valori della matrice : \n");

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         scanf("%d", &matrix[i][j]);
    //     }
    // }

    // printf("Matrice : \n");
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%d \t", matrix[i][j]);
    //     }
    //     printf("\n");
    // }
    // int flag = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if (matrix[i][j] == 0)
    //         {
    //             flag = 1;
    //             printf("posizione di 0 in [%d,%d]", i, j);
    //             break;
    //         }
    //     }
    //     printf("\n");
    // }
    // !flag &&printf("nessuno 0 presente nella matrice");

    // int n = 5;
    // printf("%d\n", n);

    // doppioVal(n);
    // printf("%d\n", n);
    // doppioInd(&n);
    // printf("%d\n", n);
}