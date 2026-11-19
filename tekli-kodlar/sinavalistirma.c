#include <stdio.h>

int main(){

    /*

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
    int i;
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
    int i;

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
            int i;
            int toplam=0;

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

        İç içe döngüyle şu çıktıları veren kodları yaz:
     (a)  *       (b)  1 2 3 4      (c)        *
          **           1 2 3                  **
          ***          1 2                   ***
          ****         1                    ****
     

        int i; 
        int j;
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

       int n;
       int i;
       int faktoryel=1;
       
        printf("Faktoryelini bulmak istediğiniz sayıyı yazınız: ");
            scanf("%d", &n);

            for (i=1; i<=n; i++)
            {
                faktoryel = faktoryel * i;
            }
            
                printf("girdiğiniz sayının faktoryeli: %d", faktoryel);


    int a;
    int i;
    int k=0;
    scanf("%d", &a);

        printf("bu sayı şu sayılara bölünüyor: \n");
    
        for (i = 1; i <=a; i++)
        {
            if (a % i==0)
            {
                printf("%d \n",i);
                k++;
            }
            
        }
        
        printf("\n bu sayı %d kadar sayıya tam bölünüyor ", k);



    int i;
    int j;
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
    int toplam = 0;

        printf("bir sayı giriniz: ");
            scanf("%d", &sayi1);

            for (;sayi1 > 0; sayi1 = sayi1/10)
            {
                kalan = sayi1 % 10;
                toplam = toplam + kalan;
            }

            printf("bu sayının basamakları toplamı= %d", toplam);

    char a[20];
    int temp = 0;
    int i;
    int j;


        printf("Bir sayı giriniz: ");
            scanf("%s", a);
    
        for (i = 0; a[i] != '\0'; i++)
        {
            for (j = 0; a[j + 1] != '\0'; j++)
            {
                if( a[j]<a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }

        printf("%s ", a);,

*/

    { 
        int n1=5,i,j,k=15; 
            for(i=n;i>=0;i++) 
    { 
        for(m=0,m<k;m++)printf(" "); 
            for(j=i;j<=n,j--) printf("%3d",j); 
                Printf("\n");k-=3; 
    }
    return 0;
    }