/*
 * Chiedere tre numeri interi all’utente e indicare quale sia il maggiore.
 */

#include <stdio.h>
int a,b,c;
void main() {
/* lettura dei numeri da tastiera */
    printf("Primo numero: ");
    scanf("%d", &a);
    printf("Secondo numero: ");
    scanf("%d", &b);
    printf("Terzo numero: ");
    scanf("%d", &c);


/* confronti e stampa del messaggio */
    if (a>b)
    {
        if (a>c) //b<c<a||c<b<a||b=c<a
            printf("Numero maggiore: il primo; valore = %d. \n", a);
        else if (a<c) //b<a<c
            printf("Numero maggiore: il terzo; valore = %d. \n", c);
        else //b<a=c
            printf("Numero maggiore: 1° e 3°; valore = %d. \n", c);
    }
    else if (a<b)
    {
        if (b>c) //a<c<b||c<a<b||a=c<b
            printf("Numero maggiore: il secondo; valore = %d.\n",b);
        else if (b<c) //a<b<c
            printf("Numero maggiore: il terzo; valore = %d. \n", c);
        else //a<b=c
            printf("Numero maggiore: 2° e 3°; valore = %d. \n", c);
    }
    else //a==b
    {
        if (a>c) //c<a=b
            printf("Numero maggiore: 1° e 2°; valore = %d. \n", a);
        else if (a<c) //a=b<c
            printf("Numero maggiore: il terzo; valore = %d. \n", c);
        else //a=b=c
            printf("Numero maggiore: 1°, 2° e 3°; valore = %d. \n", c);
    }
}

    return 0;
}
