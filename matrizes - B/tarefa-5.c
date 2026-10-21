#include <stdio.h>
#include <stdlib.h>
#define num_aleat 10
int main(){
    int mat[5][5];
    int outra[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            mat[i][j] = rand() % num_aleat + 1;
            outra[i][j] = mat[i][j];
            if(i > j){
                outra[i][j] = 0;
            }
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz com nulos abaixo da diagonal principal:\n\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            printf("%4d", outra[i][j]);
        printf("\n");
    }
    return 0;
}
