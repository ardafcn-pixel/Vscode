#include <stdio.h>

int iqmaxx(int iq, int arkiq)
{
      return (iq>arkiq) ? iq : arkiq;
    }

int main()
{
    //iki sayıyı karşılaştırıp cevap yazan if else if koşul yapısı

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

    return 0;
}