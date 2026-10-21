#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char mat[10][100];
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 100; j++){
            mat[i][j] = 'O';
            int post_aleat = rand() % 10;
            mat[post_aleat][j] = '_';
            printf("%c", mat[i][j]);
        }
    printf("\n");
    }
    return 0;
}
