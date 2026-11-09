#include <stdio.h>
#include <string.h>


int main()
{
int sayi3 = 0;
    int toplam3 = 0;
    char tm3[1000];
    char ty[1000];
    
    // print ve doğru cevabı verene kadar tekrar eden while kodu

    printf("\n -1 diyince durucam tamam mı ");
        fgets(tm3, sizeof(tm3), stdin);
            tm3[strcspn(tm3, "\n")] = 0;
    
    while (strcmp(tm3, "tamam") != 0){

        printf("\nyou must follow my words baby... ");
            fgets(tm3, sizeof(tm3), stdin);
                tm3[strcspn(tm3, "\n")] = 0;
    }

    //sayıları toplayan ve sonunda doğru teşekkürler komutunu isteyen do while döngüsü

    do{
        printf("\nbana istediğin kadar pozitif tam sayı söyle onları topliyim ");
            scanf("%d", &sayi3);

        if (sayi3 > 0){
            toplam3 += sayi3;
        }
        
        }
        while (sayi3 != -1);
            printf("\nbu sayıların toplamı %d teşekkür et ", toplam3);

        getchar();
                fgets(ty, sizeof(ty), stdin);
                ty[strcspn(ty, "\n")] = 0;
          
        //doğru cevap verilene kadar tekrar eden while döngüsü

        while (strcmp(ty, "teşekkürler") != 0)
        {
            printf("\ndediğimi yap ");
                fgets(ty, sizeof(ty), stdin);
                    ty[strcspn(ty, "\n")] = 0;
    }

        printf("\nuslu köpek \n\n");
    
    return 0;
}