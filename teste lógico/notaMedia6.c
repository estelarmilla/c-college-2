#include<stdio.h>
int main() {
    float n1, n2, n3, m;
    scanf("%f%f%f", &n1, &n2, &n3);

    if((n1>=6) && (n2>=6) && (n3>=6)){
        m = (n1+n2+n3)/3;
        printf("%0.1f\n", m);
    }
    return 0;
}
