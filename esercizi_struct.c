/* Esempio di utilizzo di array struct */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Paziente
{
    char nome[50];
    int eta;
    float peso;
};

struct Paziente Cerca(char *nome, struct Paziente *p, int nPaz)
{
    struct Paziente retValue;
    int iPaz = 0;
    while (iPaz < nPaz && strcmp(nome, p[iPaz].nome) != 0)
    {
        iPaz++;
    }
    if (iPaz < nPaz)
    {
        retValue = p[iPaz];
    }
    else
        retValue.nome[0] = '\0';
    return retValue;
}
int main()
{

    struct Paziente *vPaz;
    int nPaz, iPaz;
    char nome[50];
    struct Paziente paz;
    char cerca = 's';

    // Creazione del vettore di pazienti
    printf("numero di pazienti ? ");
    scanf("%d", &nPaz);
    vPaz = (struct Paziente *)malloc(nPaz * sizeof(struct Paziente));
    // Inserimento dei dati
    for (iPaz = 0; iPaz < nPaz; iPaz++)
    {
        getchar();
        printf("Nome paziente %d: ", iPaz + 1);
        scanf("%s", vPaz[iPaz].nome);
        getchar();
        printf("Età paziente %d: ", iPaz + 1);
        scanf("%d", &vPaz[iPaz].eta);
        printf("Peso paziente %d: ", iPaz + 1);
        scanf("%f", &vPaz[iPaz].peso);
    }
    // Ricerca
    printf("inserisci nome da cercare : ");
    getchar();
    scanf("%s", nome);
    paz = Cerca(nome, vPaz, nPaz);
    // Liberazione della memoria
    free(vPaz);
    printf("paziente restituito : %s", paz.nome);
    return 0;
}