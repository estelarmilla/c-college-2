#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOTAL 300
#define NUM_ALEAT 41
// para que os numeros sorteados sejam de 10 a 50, preciso estabelecer o num_aleat até 41,
//pois 40, seria de 0 a 39 (e depois, de 10 à 49). Ao colocar 41, quando digo que precisa começar do 10,
// o código vai deslocar 10 casas, do 1 ao 50.
int main(){
    srand(time(NULL));
    int vetnum[TOTAL], soma=0, media=0;
    printf("vetor = {");
    for(int i = 0; i < TOTAL; i++){
        vetnum[i] = rand() % NUM_ALEAT + 10;
        soma += vetnum[i];

        if(i==TOTAL-1)
            printf("%d}.\n", vetnum[i]);
        else
            printf("%d,     ", vetnum[i]);
    }
    media = soma/300;
    printf("Media dos valores = %d", media);
    return 0;
}
