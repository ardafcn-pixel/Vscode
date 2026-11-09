#include <stdio.h>
#include <string.h>


int main()
{
    //havanın derece ve durumuna göre stateini söyleyen komut   
    
    int derece;
    char durum[10];

        printf("\nhava kaç derece? ");
        scanf("%d", &derece);

        printf("\nhava açık mı kapalı mı? ");
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
    
    return 0 ;
}