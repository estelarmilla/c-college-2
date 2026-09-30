#include <stdio.h>
int main(){
    int inteiros[7], numeros;
    float media;

    for (int i = 0; i < 7; i++){
        printf("Digite um valor inteiro: \n");
        scanf("%d", inteiros[i]);
        numeros = numeros + inteiros[i];
    }

    media = numeros/7;
    printf("Numeros %d e media %.2f", &numeros, &media);
    return 0;
}
