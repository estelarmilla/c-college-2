#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOTAL_DE_NUMEROS 20
#define MAX_ALEAT 25
int main(){
    srand(time(NULL));
    int i = 0;
    while(i < TOTAL_DE_NUMEROS){
        if(i < (TOTAL_DE_NUMEROS - 1))
            printf("%d, ", (rand() % MAX_ALEAT) + 1);
        else
            printf("%d.", (rand() % MAX_ALEAT) + 1);
        i++;
    }
    printf("\n");
    return 0;
}
