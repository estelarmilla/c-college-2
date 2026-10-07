#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COMPRIMENTO 15
int main(){
    int numeros[COMPRIMENTO];
    srand(time(NULL));
    printf("Vetor aleatorio original = {");
    for(int i = 0; i < COMPRIMENTO; i++){
        numeros[i] = rand() % 100 +1;
        if(i < COMPRIMENTO - 1)
            printf("%3d, ", numeros[i]);
        else
            printf("%3d}\n", numeros[i]);
    }
    for(int i = 0; i < COMPRIMENTO - 1; i++){
        for(int j = 0; j < COMPRIMENTO - 1; j++){
            if(numeros[j] > numeros[j + 1]){
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    printf("Vetor em ordem crescente = {");
    for(int i =0; i < COMPRIMENTO; i++){
        if(i < COMPRIMENTO - 1)
            printf("%3d, ", numeros[i]);
        else
            printf("%3d}.\n", numeros[i]);
    }
    return 0;
}
