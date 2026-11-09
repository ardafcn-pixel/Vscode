#include <stdio.h>
#include <string.h>

int main()
{
    //array içinde verilen değerleri değiştirip yazan kod
    
    char aa[10] = "r25";
    char bb[20] = "ford focus";
    char c[30] = "skoda superb";
    char d[30] = "tesla jupiter";
    char e[50] = "tehlikeli";
    char f[50] = "fiyat performans";
    char g[50] = "tank gibi tank";
    char h[50] = "az yakan çok kaçan";

    printf("\n%-9s | %-16s | %-14s | %s \n", aa, bb, c, d);

    strcpy(aa, e);
    strcpy(bb, f);
    strcpy(c, g);
    strcpy(d, h);

    printf("--------------------------------------------------------------------");
    printf("\n%s | %s | %s | %s \n\n", aa, bb, c, d);

    return 0;
}