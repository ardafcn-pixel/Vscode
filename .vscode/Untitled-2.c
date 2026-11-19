#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char rank[50];
    printf("rankın ne? \n");
    scanf("%49s", rank);

    if(strcmp(rank, "gold") == 0) {
        printf("elo hell\n");
    }
    else if(strcmp(rank, "diamond") == 0) {
        printf("iyisin\n");
    }
    else if(strcmp(rank, "yüce") == 0) {
        printf("aimin iyi\n");
    }
    else if(strcmp(rank, "gümüş") == 0) {
        printf("daha fazla oyna \n");
    }
    else if(strcmp(rank, "demir") == 0) {
        printf("elo hell\n");
    }
    else {
        printf("öyle bir rank yok. \n");
    }

    return 0;
}