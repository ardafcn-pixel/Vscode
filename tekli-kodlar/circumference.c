#include <stdio.h>
#include <math.h>

int main()
{
    //yarıçaptan çevre bulan kod
    
    int a;
        printf("\nbana bir sayı versene senin verdiğin sayıyı yarıçap kabul eden dairenin çevresini yazıcam ");
        scanf("%d", &a);

                double b = 2 * a * M_PI ;
                printf("\nbu dairenin çevresi %.1f olurdu\n", b);
                
    return 0;
}