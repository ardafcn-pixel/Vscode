#include <stdio.h>
#include <string.h>

int main()
{
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

    return 0;
}
