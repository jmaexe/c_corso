#include <stdio.h>

int checkOperazione(char);

int main()
{
    // 1
    //  int array[] = {2, 3, 6, 8, 32, 63, 52, 7, 7, 8};
    //  float media = 0;

    // for (int i = 0; i < 10; i++)
    // {
    //     media += array[i];
    // }
    // media /= 10;
    // printf("MEDIA :%.2f", media);

    // 2
    // int n_numeri;
    // int i = 0;
    // float media = 0;
    // int numero = 0;

    // printf("Quanti numeri vuoi inserire ? ");
    // scanf("%d", &n_numeri);

    // while (i < n_numeri)
    // {
    //     printf("Inserisci numero: ");
    //     scanf("%d", &numero);
    //     media += numero;
    //     i++;
    // }

    // media /= n_numeri;
    // printf("%3.2f", media);

    // 3
    // int numero;
    // int i = 2;
    // printf("Inserisci numero: ");
    // scanf("%d", &numero);

    // while (i < numero)
    // {
    //     if (numero % i == 0)
    //     {
    //         printf("NON PRIMO : %d", numero);
    //         return 0;
    //     }
    //     i++;
    // }
    // printf("PRIMO %d", numero);

    // 4
    // int array[] = {2, 1, 6, 8, 32, 63, 52, 7, 7, 8};
    // int max = array[0], min = array[0];

    // for (int i = 0; i < 10; i++)
    // {
    //     if (< array[i])
    //     {
    //         max = array[i];
    //     }
    //     if (min > array[i])
    //     {
    //         min = array[i];
    //     }
    // }
    // printf("Max : %d, MIN : %d", max, min);

    // 5

    // int i = 0;
    // int numero;
    // int risultato = 1;

    // printf("Inserisci un numero : ");
    // scanf("%d", &numero);

    // for (int i = numero; i > 0; i--)
    // {
    //     risultato *= i;
    // }
    // printf("Fattoriale di %d", risultato);

    // Stringhe es 1
    // char parola[20];
    // char vocali[] = {'a', 'e', 'i', 'o', 'u'};
    // int n_vocali = 0;
    // int n_consonanti = 0;
    // int flag = 0;
    // printf("Inserisci parola max 20 caratteri : ");
    // scanf("%s", &parola);

    // int i = 0;
    // int lunghezza = 0;
    // while (parola[i] != '\0')
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (parola[i] == vocali[j])
    //         {
    //             n_vocali++;
    //             flag++;
    //             break;
    //         }
    //     }
    //     if (flag == 0)
    //         n_consonanti++;
    //     flag = 0;
    //     i++;
    // }
    // lunghezza = i;
    // printf("Lunghezza parola : %d", i);
    // printf(" Numero vocali : %d, numero consonanti : %d ", n_vocali, n_consonanti);

    // 2
    // char stringa[100];
    // char vocali[] = {'a', 'e', 'i', 'o', 'u'};
    // int flag = 0;

    // printf("Inserisci la stringa : ");
    // fgets(stringa, 100, stdin);

    // for (int i = 0; stringa[i] != '\0'; i++)
    // {

    //     if (stringa[i] == ' ')
    //     {
    //         stringa[i] = '*';
    //     }
    //     else
    //     {

    //         for (int j = 0; j < 5; j++)
    //         {
    //             if (stringa[i] == vocali[j])
    //             {
    //                 stringa[i] = '.';
    //                 flag++;
    //             }
    //         }
    //         if (flag == 0)
    //             stringa[i] = '-';
    //         flag = 0;
    //     }
    // }

    // printf("\nNuova stringa :\n %s ", stringa);

    //  char operazione;
    //     int a, b, risultato, corretto;
    //     printf("inserisci a : ");
    //     scanf("%d", &a);
    //     printf("inserisci b : ");
    //     scanf("%d", &b);

    //     do
    //     {
    //         printf("inserisci l'operazione da effettuare (+,-,/,x) : ");
    //         scanf(" %c", &operazione);
    //         corretto = checkOperazione(operazione);
    //         while (getchar() != '\n')
    //             ;
    //     } while (corretto != 1);

    //     switch (operazione)
    //     {
    //     case '+':
    //         risultato = a + b;
    //         break;
    //     case '-':
    //         risultato = a - b;
    //         break;
    //     case 'x':
    //         risultato = a * b;
    //         break;
    //     case '/':
    //     {
    //         if (b != 0)
    //             risultato = a / b;
    //         else
    //         {
    //             printf("b e' uguale a 0, impossibile eseguire divisione\n");
    //             return 0;
    //         }
    //     }
    //     break;
    //     default:
    //         printf("input sbagliato !");
    //     }
    //     printf("risultato tra %d %c %d : %d", a, operazione, b, risultato);
}

// int checkOperazione(char op)
// {
//     if (op == '+' || op == '/' || op == '-' || op == 'x')
//         return 1;
//     else
//         return 0;
// }
