#include <stdio.h>

int main(){

    int dongu;
    int xx;
    int faktoryel = 1;
    int ust = 1;
    int sayi;
    int toplam = 0;
    int i;

    printf("Dongu sayisini giriniz: \n");
        scanf("%d", &dongu);
    printf("Bölünecek/Çarpılacak sayıyı giriniz: \n");
        scanf("%d", &xx);

    for (i = 1; i <= dongu; i++)
    {
        faktoryel = faktoryel * i;
        ust = ust * xx;
        sayi = i%2;

        if (sayi ==0)
        {
            toplam = toplam + ust / i;
        }
        
        else
        {
            toplam = toplam + faktoryel / xx;
        }
    }
    printf("toplam = %d", toplam);

    

    int A[10];
    int B[10];
    int j = 0;

        for (i = 1; i <= 10; i++)
        {
            printf("%d. sayiyi giriniz: \n", i);
                scanf("%d", &A[i-1]);
        }
            for (i = 0; i < 10; i++)
            {
                if (A[i] %2 == 0)
                {
                        B[j]=A[i];
                        j++;
                }
                
            }
        for (i = 0; i < j; i++)
        {
            printf("\n %d \n", B[i]);
        }
        
        
        
    int a[3];

        for ( i = 1; i < 4; i++)
        {
            printf("%d. sayiyi giriniz: ", i);
                scanf("%d", &a[i-1]);
        }
        if (a[0]>a[1] && a[2])
        {
            printf("%d", a[0]);
        }
        else if(a[1]>a[0] && a[2])
        {
            printf("%d", a[1]);
        }
        else{
            printf("%d", a[2]);
        }
        
    

            int n;
            toplam=0;

            printf("Bir sayı giriniz: ");
                scanf("%d", &n);

            for (i = 1; i <=n ; i++)
            {
                toplam=toplam+i;
            }
                printf("%d ", toplam);

            i=1;
            toplam=0;

            while (i<=n)
            {
                toplam=toplam+i;
                i++;
            }
            
                printf("%d ", toplam);

    /*  İç içe döngüyle şu çıktıları veren kodları yaz:
     (a)  *       (b)  1 2 3 4      (c)        *
          **           1 2 3                  **
          ***          1 2                   ***
          ****         1                    ****
    */ 

        int k;
        int satir;
        int sutun;

        
        printf("kaç satır olsun? ");
            scanf("%d", &satir);

        printf("kaç sütün olsun? ");
            scanf("%d", &sutun);

        for (i = 0; i < satir; i++)
        {
            for (j=0; j<=i; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        for (i=satir; i>0 ; i--)
        {
            for (j=1; j<i+1; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
        
        for (i=0; i<satir; i++)
        {   
            for (k=0; k<satir-1-i; k++)
            {
                printf(" ");
            }   
            for (j=0; j<=i; j++)
            {
                
                printf("*");
            }
            printf("\n");
        }


        faktoryel=1;
       
        printf("Faktoryelini bulmak istediğiniz sayıyı yazınız: ");
            scanf("%d", &n);

            for (i=1; i<=n; i++)
            {
                faktoryel = faktoryel * i;
            }
            
                printf("girdiğiniz sayının faktoryeli: %d", faktoryel);


            int c;

    k=0;
    scanf("%d", &c);

        printf("bu sayı şu sayılara bölünüyor: \n");
    
        for (i = 1; i <=c; i++)
        {
            if (c % i==0)
            {
                printf("%d \n",i);
                k++;
            }
            
        }
        
        printf("\n bu sayı %d kadar sayıya tam bölünüyor ", k);



    int temp;
    
        int arda[]= {4,1,2,1,6};

            for (i=sizeof(arda)/sizeof(arda[0]); i>0; i--)
            {
                
                    if (arda[i] < arda[i+1])
                    {
                    temp == arda[i];
                    arda [i] == arda[i+1];
                    arda [i+1] == temp;
                    }
                    
            }

    int kalan;
    int sayi1;
    toplam = 0;

        printf("bir sayı giriniz: ");
            scanf("%d", &sayi1);

            for (;sayi1 > 0; sayi1 = sayi1/10)
            {
                kalan = sayi1 % 10;
                toplam = toplam + kalan;
            }

            printf("bu sayının basamakları toplamı= %d", toplam);

    char aa[20];
    temp = 0;


        printf("Bir sayı giriniz: ");
            scanf("%s", aa);
    
        for (i = 0; aa[i] != '\0'; i++)
        {
            for (j = 0; aa[j + 1] != '\0'; j++)
            {
                if( aa[j]<aa[j+1])
                {
                    temp = aa[j];
                    aa[j] = aa[j+1];
                    aa[j+1] = temp;
                }
            }
        }

        printf("%s ", aa);

    return 0;
    }