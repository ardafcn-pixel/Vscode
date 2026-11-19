#include <stdio.h>
int main(){

    int sayi[100];
    int tek[100];
    int cift[100];
    int teksayi = 0;
    int ciftsayi = 0;
    int a, i, j, k, n;

        printf("Eleman sayisini giriniz: ");
            scanf("%d", &n);

        printf("%d adet sayi giriniz:\n", n);
            
            for(a = 0; a < n; a++) {
                scanf("%d", &sayi[a]);
            }

        for(i=0; i<n; i++)
        {
            if (sayi[i]%2 == 0)
            {
                cift[ciftsayi]=sayi[i];
                ciftsayi = ciftsayi + 1;
            }
            else{
                tek[teksayi]=sayi[i];
                teksayi = teksayi + 1;
            }
        }
            printf("tek sayılar \n");

        for (j = 0; j < teksayi; j++)
        {
            printf("%d\n", tek[j]);
        }
        
            printf("çift sayılar \n");

        for (k = 0; k < ciftsayi; k++)
        {
            printf("%d\n", cift[k]);
        }



    return 0;
}