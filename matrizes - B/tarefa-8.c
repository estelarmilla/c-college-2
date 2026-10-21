#include <stdio.h>
#include <stdlib.h>
#DEFINE num 10
int main(){
    int mat[5][5], outra[5][5], prodt[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j ++){
            mat[i][j] =  rand() % num + 1;
            printf("%4d", mat[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j ++){
            outra[i][j] =  rand() % num + 1;
            printf("%4d", outra[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j ++){
            do{
                mat[i][j]
            }
            while(i==j);
        }
    printf("\n");
    }
    return 0;
}
