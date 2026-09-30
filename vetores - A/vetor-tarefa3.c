#include <stdio.h>
int maiorValor(int vetor[], int tamanho){
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int main(){
    int numeros[5] = {10, 20, 35, 40, 5};
    printf("Maior valor do vetor: %d\n", maiorValor(numeros, 5));
    return 0;
}
