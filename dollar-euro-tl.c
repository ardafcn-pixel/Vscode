#include <stdio.h>
#include <ctype.h>

int main()
{
    //elindeki dövizi tl kuruna çeviren komut
    
        char doviz;
        float ytl;

            printf("\npara birimini (S) veya (E) belirtiniz ");
            scanf(" %c", &doviz);

            doviz = toupper(doviz);

        if (doviz == 'S'){
            printf("\nkaç doların var? ");
            scanf("%f", &ytl);
            ytl = (ytl * 49.70);
            printf("\nparan %.2f türk lirası ediyor\n", ytl);
        }
        else if (doviz == 'E'){
            printf("kaç euron var? ");
            scanf("%f", &ytl);
            ytl = (ytl * 55.46);
            printf("\nparan %.2f türk lirası ediyor\n", ytl);
        }
        else{
            printf("geçersiz para birimi girdiniz*\n ");

        }
    
    return 0;
}