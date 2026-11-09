#include <stdio.h>

double toplama(double fiyat1, double fiyat2)

{
    return fiyat1 + fiyat2;
    }

int main ()
{
    //kendi yaptığımız fonksiyonla toplama yapan if while koşul yapısı

    double xfiyat , yfiyat ;

        printf("\n2 DLC'nin fiyatlarını aralarında boşluk olacak şekilde giriniz ");
        scanf("%lf %lf", &xfiyat, &yfiyat);

    double toplam = toplama(xfiyat , yfiyat);

    if(toplam <= 1000){
    printf("%.2lf'tl bence alınabilir", toplam);
    }

    else if(toplam > 1000 && toplam < 5000){
    printf("%.2lf moruk çok pahalı ama sen bilirsin", toplam);
    }

    else{
        printf("%.2lf alınmaz aq o paralara araba alırım", toplam);
    }
    
    return 0;
}