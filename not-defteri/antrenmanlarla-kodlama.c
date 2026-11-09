#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


void ahmo(){
    printf("ahmetin götünü sikeyim\n");
}

double toplama(double fiyat1, double fiyat2)

{
    return fiyat1 + fiyat2;
    }
    
    int iqmaxx(int iq, int arkiq)
{
      return (iq>arkiq) ? iq : arkiq;
    }

int main() 
{
    // düz yazı yazan komut
    
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

    //ismini ve yaşını soran komut

    char isim[30];
    int yas;

        printf("\nadın ne dostum? ");
            fgets(isim, 30, stdin);
            isim[strlen(isim)-1] = '\0';
        
            while (strlen(isim)==0)
            {
                printf("\nhiçbir isim girmedin.\n\nisim gir lan. ");
                fgets(isim, 30, stdin);
                isim[strlen(isim)-1] = '\0';

            }
            

        printf("\nkaç yaşındasın? ");
            scanf("%d", &yas);

             while (yas <= 0)
            {
                printf("\nyaşını girmedin.\n\nyaşını söyle lan. ");
                scanf("%d", &yas);

            }

                printf("\naaa %s, güzel isim! %dden daha genç gösteriyosun\n", isim , yas);

    //yarıçaptan çevre bulan kod
    
    int a;
        printf("\nbana bir sayı versene senin verdiğin sayıyı yarıçap kabul eden dairenin çevresini yazıcam ");
        scanf("%d", &a);

                double b = 2 * a * M_PI ;
                printf("\nbu dairenin çevresi %.3f olurdu\n", b);

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
        
        printf("\n3. kenarın uzunluğu : %.3f\n", k3);

    //elindeki dövizi tl kuruna çeviren komut
    
        char doviz;
        float ytl;

            printf("\npara birimini (S) veya (E) belirtiniz ");
            scanf(" %c", &doviz);

            doviz = toupper(doviz);

        if (doviz == 'S'){
            printf("\nkaç doların var? ");
            scanf("%f", &ytl);
            ytl = (ytl * 49.70);
            printf("\nparan %.2f türk lirası ediyor\n", ytl);
        }
        else if (doviz == 'E'){
            printf("kaç euron var? ");
            scanf("%f", &ytl);
            ytl = (ytl * 55.46);
            printf("\nparan %.2f türk lirası ediyor\n", ytl);
        }
        else{
            printf("geçersiz para birimi girdiniz*\n ");

        }
     
    //havanın derece ve durumuna göre stateini söyleyen komut   
    
    int derece;
    char durum[10];

        printf("\nhava kaç derece? ");
        scanf("%d", &derece);

        printf("\nhava açık mı kapalı mı?\n ");
        scanf("%s", durum); 

        if (derece >= 10 && derece <= 30 && strcmp(durum, "kapalı") == 0)
        {
             printf("\nhava normal bro \n\n");
        }
        else if(derece >= 10 && derece <= 30 && strcmp(durum, "açık") == 0)
        {
            printf("\nhava iyi la \n\n");
        }
        else
        {
            printf("\nhava kötü kanka ya \n\n");
        }
    
    //ahmete sövdüğüm komut

        ahmo();
        ahmo();
        ahmo();
        ahmo();
        ahmo();
        ahmo();
        ahmo();
    
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

    
    int iq;
    int arkiq;
    
        printf("\nKaç IQ'sun? ");
            scanf("%d", &iq);
        printf("\nArkadaşın kaç IQ? ");
            scanf("%d", &arkiq);
        
    int max = iqmaxx(iq, arkiq);

    if(max == arkiq){
        printf("\nArkadaşının IQ'su %d olduğu için senden zeki.\n", max);
    }
    else if(max == iq){
        printf("\nsen %d IQ olduğun için arkadaşından zekisin.\n", max);
    }

    int sayi3 = 0;
    int toplam3 = 0;
    char tm3[1000];
    char ty[1000];
    
    // print ve doğru cevabı verene kadar tekrar eden while kodu

    printf("\n -1 diyince durucam tamam mı ");
        fgets(tm3, sizeof(tm3), stdin);
            tm3[strcspn(tm3, "\n")] = 0;
    
    while (strcmp(tm3, "tamam") != 0){

        printf("\nyou must follow my words baby... ");
            fgets(tm3, sizeof(tm3), stdin);
                tm3[strcspn(tm3, "\n")] = 0;
    }

    //sayıları toplayan ve sonunda doğru teşekkürler komutunu isteyen do while döngüsü

    do{
        printf("\nbana istediğin kadar pozitif tam sayı söyle onları topliyim ");
            scanf("%d", &sayi3);

        if (sayi3 > 0){
            toplam3 += sayi3;
        }
        
        }
        while (sayi3 != -1);
            printf("\nbu sayıların toplamı %d teşekkür et ", toplam3);

        getchar();
                fgets(ty, sizeof(ty), stdin);
                ty[strcspn(ty, "\n")] = 0;
          
        //doğru cevap verilene kadar tekrar eden while döngüsü

        while (strcmp(ty, "teşekkürler") != 0)
        {
            printf("\ndediğimi yap ");
                fgets(ty, sizeof(ty), stdin);
                    ty[strcspn(ty, "\n")] = 0;
    }

        printf("\nuslu köpek \n");
        


    int satir;
    char karakter;

    printf("\nsatır sayısı? ");
        scanf("%d", &satir);

    printf("\nhangi karakteri yazim? ");
        scanf(" %c", &karakter);

    for (int i=1; i<=satir; i++){

        for (int j=1; j<=i; j++){
        
            printf("%c", karakter);

        }
        
    printf("\n");
    
    }

    int satir2 = satir;
    int karakter2 = karakter;

    for (int i=1; i<=satir2; i++){

        for (int j=1; j<=satir2-i; j++){
        
            printf("%c", karakter2);

        }
        
    printf("\n");
    
    }


    char *isimler[5] = {"Ayse", "Mehmet", "Ali", "Ahmet"};
    int yask[] = {18,20,24,32};
    char girdi[49];
    int notlar[] ={95, 100, 80, 60};

    printf("+------------+-------+--------+\n");
    printf("|İSİM| %-5s | %-5s | %-4s | %-4s |\n", isimler[0],isimler[1],isimler[2],isimler[3]);
    printf("|YAŞ | %-5d | %-6d | %-4d | %-5d |\n", yask[0],yask[1],yask[2],yask[3]);
    printf("+------------+-------+--------+\n");

    printf("kimin notunu öğrenmek istiyorsun? \n");

        fgets(girdi, sizeof(girdi), stdin);
        girdi[strcspn(girdi, "\n")] = '\0';

            for (int i = 0; girdi[i]; i++) {
                girdi[i] = tolower(girdi[i]);
            }  

    if(strcmp(girdi, "ayse") == 0){
        printf("Ayşe'nin notu %d. \n", notlar[0]);
    }

    else if(strcmp(girdi, "mehmet") == 0){
        printf("Mehmet'in notu %d. \n", notlar[1]);
    }
    
    else if(strcmp(girdi, "ali") == 0){
        printf("Ali'nin notu %d. \n", notlar[2]);
    }

    else if(strcmp(girdi, "ahmet") == 0){
        printf("Ahmet'in notu %d. \n", notlar[3]);
    }
    else {
        printf("0\n");
    }

    char arklar[][20]={"Ahmet", "Abacı", "Ayşe", "Sena"};

    for(int i=0; i<sizeof(arklar)/sizeof(arklar[0]); i++){
            printf("%s ", arklar[i]);
        }
        printf("\n     ...sonra... \n");

        strcpy(arklar[1], "gitti");
        strcpy(arklar[2], "gitti");
        strcpy(arklar[3], "gitti");

            for(int i=0; i<sizeof(arklar)/sizeof(arklar[0]); i++){
                printf("%s ", arklar[i]);
            }

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