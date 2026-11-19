#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

double toplama(double x, double y)
{
    return x + y;
}

int main()
{
    
    double xfiyat , yfiyat ;

        printf("DLC'lerin aralarında boşluk olacak şekilde fiyatlarını giriniz\n");
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
