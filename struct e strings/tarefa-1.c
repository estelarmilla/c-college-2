#include <stdio.h>
int main(){
    struct Ponto{
        float x;
        float y;
    };
    struct Ponto p;
    p.x = 0.97;
    p.y = 1.32;
    printf("Coordenadas do ponto p (x, y): (%.2f, %.2f)\n ", p.x, p.y);
    return 0;
}
