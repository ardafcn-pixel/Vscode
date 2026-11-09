#include <stdio.h>
#include <string.h>

int main()
{
    //ismini ve yaşını soran komut

    char isim[30];
    int yas;

        printf("\nadın ne dostum? ");
            fgets(isim, 30, stdin);
            isim[strlen(isim)-1] = '\0';
        
            while (strlen(isim)==0)
            {
                printf("\nhiçbir isim girmedin.\n\nisim gir lan. ");
                fgets(isim, 30, stdin);
                isim[strlen(isim)-1] = '\0';

            }
            

        printf("\nkaç yaşındasın? ");
            scanf("%d", &yas);

             while (yas <= 0)
            {
                printf("\nyaşını girmedin.\n\nyaşını söyle lan. ");
                scanf("%d", &yas);

            }

                printf("\naaa %s, güzel isim! %dden daha genç gösteriyosun\n", isim , yas);

    return 0;
}