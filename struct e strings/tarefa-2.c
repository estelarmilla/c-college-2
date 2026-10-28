#include <stdio.h>
int main(){
    typedef struct{
        int x;
        int y;
        int z;
    } Pontos;
    Pontos p1, p2, p3;

    p1.x = 3;
    p1.y = 5;
    p1.z = 1;

    p2.x = 2;
    p2.y = 1;
    p2.z = 6;

    p3.x = 4;
    p3.y = 8;
    p3.z = 7;

    printf("Coordenadas do ponto p1 (x1, y1, z1): (%d, %d, %d)\n", p1.x, p1.y, p1.z);
    printf("Coordenadas do ponto p2 (x1, y1, z1): (%d, %d, %d)\n", p2.x, p2.y, p2.z);
    printf("Coordenadas do ponto p3 (x1, y1, z1): (%d, %d, %d)\n", p3.x, p3.y, p3.z);
    return 0;
}
