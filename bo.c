#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5
int fat(int n)
{
    if (n == 0)
        return 1;
    return n * fat(n - 1);
}
int main()
{
    int n = fat(4);
    printf("%d", n);
    int v[SIZE] = {1, 2, 3, 4, 5};
    int temp = 0;
    for (int i = 0; i < SIZE / 2; i++)
    {
        temp = v[i];
        v[i] = v[SIZE - i - 1];
        v[SIZE - 1 - i] = temp;
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d, ", v[i]);
    }

    // int v[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the value for v[%d]: ", i);
    //     scanf("%d", &v[i]);
    // }

    // int vi[10];
    // int j = 9;
    // for (int i = 0; i < 10; i++)
    // {
    //     vi[j] = v[i];
    //     j--;
    // }

    // printf("Original array: ");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", v[i]);
    // }
    // printf("\nReversed array: ");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", vi[i]);
    // }

    // matrici
    // int matrix[3][3];
    // int value = 1;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         matrix[i][j] = value++;
    //         printf("%d", matrix[i][j]);
    //     }
    // }
    // char a[5];
    // printf("inserisci stringa : ");
    // scanf("%s", &a);

    // printf("%d", sizeof(a));
    // if (a[5] == '\0')
    // {
    //     printf("carattere di fine stringa ");
    // }
    // else
    // {
    //     printf("niente %c", a[5]);
    // }
    // int lunghezza = strlen(a);
    // int j = lunghezza - 1;
    // int isPalindroma = 1;
    // for (int i = 0; i < (lunghezza / 2); i++)
    // {
    //     if (a[i] != a[j])
    //     {
    //         isPalindroma = 0;
    //         break;
    //     }
    //     j--;
    // }

    // printf((isPalindroma) ? "è palindroma" : "non è palindroma");
}

// int bo(int[] v)
// {
//     printf(v[0]);
// }