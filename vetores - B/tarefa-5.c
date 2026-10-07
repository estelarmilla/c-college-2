#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOTAL 20
#define NUM_ALEAT 100
int main(){
    srand(time(NULL));
    int nums[20], soma=0;
    FILE *arq_vet;
    arq_vet = fopen("vetor_aleatorio.txt", "w");
    fprintf(arq_vet, "vetor = {");
    for(int i=0; i < TOTAL; i++){
        nums[i] = rand() % NUM_ALEAT + 1;
        soma += nums[i];

        if(i==19)
            fprintf(arq_vet, "%d}.", nums[i]);
        else
            fprintf(arq_vet, "%d,     ", nums[i]);
    }
    fprintf(arq_vet, "\nSoma dos valores: %d", soma);
    fclose(arq_vet);
    return 0;
}
