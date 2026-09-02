#include<stdio.h>
int main() {
    float n1, n2, n3, m;

    printf("Digite valores para notas, e aperte ENTER: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    m = (n1+n2+n3)/3;

    printf("Media de %0.1f\n", m);

    if(m >=6.0)
        printf("APROVADO\n");
    else
        printf("REPROVADO\n");
    return 0;
}
