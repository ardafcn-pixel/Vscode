#include <stdio.h>

int main() 
{
    // writing plain text w/ data types
    
    printf("\nahmetin şuana kadar yediği sütlü baklava sayısı = ");
        int baklavaSayisi = 67;
        printf("%d\n", baklavaSayisi);

    printf("\nahmetin baba pro ardadan kötü olduğu oyunlar = ");
        char oyunlar[] = "en başta valorant olmak üzere bütün oyunlar";
        printf("%s\n", oyunlar);

    printf("\nahmetin s25 inin fiyatı = ");
        float s25 = 55.999921391941294194912;
        printf("%.3f tl \n", s25);

    printf("\nardanın boyu ahmetin boyundan ");
        int arda = 40;
        int ahmet = 10;
        int sonuc = arda - ahmet ;
            printf("%d cm uzun\n",sonuc);
    
    return 0;
} 