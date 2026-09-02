#include<stdio.h>
int main(){
    int num1, num2;

    printf("Digite dois numeros inteiros diferentes: ");
    scanf("%d%d", &num1, &num2);

    if(num1>num2)
        printf("O primeiro numero digitado eh maior do que o segundo\n");
    else
        printf("O segundo numero digitado eh maior do que o primeiro\n");

    return 0;
}
