#include <stdio.h>
#include <math.h>

// double modulo(double *, double *);
// double fase(double *, double *);
int main()
{
    double r, i;
    printf("Inserisci R : ");

    scanf("%lf", &r);

    printf("Inserisci I : ");
    scanf("%lf", &i);
}

double modulo(double *r, double *i)
{
    return sqrt(pow(*r, 2) + pow(*i, 2));
}

double fase(double *r, double *i)
{
    return atan(*i / *r);
}