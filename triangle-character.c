#include <stdio.h>

int main()
{
    int satir;
    char karakter;

    printf("\nsatır sayısı? ");
        scanf("%d", &satir);

    printf("\nhangi karakteri yazim? ");
        scanf(" %c", &karakter);

    for (int i=1; i<=satir; i++){

        for (int j=1; j<=i; j++){
        
            printf("%c", karakter);

        }
        
    printf("\n");
    
    }

    int satir2 = satir;
    int karakter2 = karakter;

    for (int i=1; i<=satir2; i++){

        for (int j=1; j<=satir2-i; j++){
        
            printf("%c", karakter2);

        }
        
    printf("\n");
    
    }
    
    return 0;
}
