#include <stdio.h>
int main(){
    int mat[3][3] = {{5, 1, 7}, {4, 3, 6}, {2, 8, 9}};
    for(int i=0; i < 3; i++){
        for(int j=0; j<3; j++)
            printf("%2d", mat[i][j]);
        printf("\n");
    }
    return 0;
}
