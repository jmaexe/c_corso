#include <stdio.h>

int main()
{
    char buf[20] = "helloworld";
    int i = 0;
    while (buf[i] != '\0')
    {
        printf("%c", buf[i]);
        i++;
    }
    printf("%d", i);
}