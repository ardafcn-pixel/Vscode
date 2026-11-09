#include <stdio.h>
#include <math.h>

int main()
{
    // 2 kenar ve arasındaki açıdan 2. kenarı bulan komut
    
    double k1;
    double k2;
    double aci;

        printf("\nşimdi bi üçgen yapalım sen bana 2 kenarı söyle sana 3. kenarı söyliyim \n");

            printf("\nilk kenar = ");
                scanf("%lf", &k1);

            printf("\nikinci kenar = ");
                scanf("%lf", &k2);

            printf("\naradaki açı kaç derece = ");
                scanf("%lf", &aci);

        double aci2 = aci * M_PI / 180;
            double k3 = sqrt(k1*k1 + k2*k2 - 2*k1*k2*cos(aci2));
        
        printf("\n3. kenarın uzunluğu : %.1f\n", k3);
        
    return 0;
}
