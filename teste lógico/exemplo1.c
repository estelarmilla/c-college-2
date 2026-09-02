#include<stdio.h>
int main() {
    float n1, n2, n3, media;
    printf("Programa que calcula a media de tres numeros reais\n\n\n");

    printf("Digite tres numeros reais separados por um espaco. Digite ENTER ao final:\n");
    scanf("%f%f%f", &n1, &n2, &n3);
    media=(n1+n2+n3)/3;

    printf("Media dos tres numeros reais = ");
    printf("%0.1f\n", media);

    return 0;
}
