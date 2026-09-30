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

int imprimirVetor(int outro[], int comprimento){
    printf("\nVetor inteiro: ");
    for(int i = 0; i < comprimento; i++){
        printf("     %d", outro[i]);
    }
    return 0;
}

int main(){
    int numeros[15] = {10, 20, 35, 40, 5, 50, 15, 25, 30, 45, 65, 55, 60, 78, 88};
    printf("\n", imprimirVetor(numeros, 15));
    printf("Maior valor do vetor: %d\n", maiorValor(numeros, 15));
    return 0;
}
