#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int main()
{
    char *isimler[5] = {"Ayse", "Mehmet", "Ali", "Ahmet"};
    int yask[] = {18,20,24,32};
    char girdi[49];
    int notlar[] ={95, 100, 80, 60};

    printf("+------------+-------+--------+\n");
    printf("|İSİM| %-5s | %-5s | %-4s | %-4s |\n", isimler[0],isimler[1],isimler[2],isimler[3]);
    printf("|YAŞ | %-5d | %-6d | %-4d | %-5d |\n", yask[0],yask[1],yask[2],yask[3]);
    printf("+------------+-------+--------+\n");

    printf("kimin notunu öğrenmek istiyorsun? ");

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
        printf("öyle bir öğrenci yok\n");
    }

    return 0;
}
