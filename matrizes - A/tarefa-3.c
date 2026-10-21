#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat[7][7];
    srand(1234);
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++)
            printf("%4d", mat[i][j] = rand() % 7 + 5);
        printf("\n");
    }
    return 0;
}
