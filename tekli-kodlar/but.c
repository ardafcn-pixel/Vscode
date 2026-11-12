//2025-26 BUT SINAV

#include <stdio.h>

int main() {

    int i;
    int sayilar[5] = {4, 9, 125, 7, 5};
    int enbuyuk = sayilar[0];

        for (i = 1; i < 5; i++){
            if(enbuyuk < sayilar[i]){
                enbuyuk = sayilar[i];
            }
        }
    
        printf("%d ", enbuyuk);

    return 0;
}