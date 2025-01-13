#include <stdio.h>
#include <stdlib.h>

void creaVettore()
{
    for (int i = 0; i < 100000; i++)
    {
        int *numeri = (int *)malloc(1000 * sizeof(int));
        if (numeri == NULL)
        {
            printf("Memoria insufficiente.\n");
            return;
        }
        numeri[0] = i;
        free(numeri);
    }
    printf("creato memory leak");
}
int main()
{
    creaVettore();
    return 0;
}