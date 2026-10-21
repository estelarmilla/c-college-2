#include <stdio.h>
int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            printf("Digite o valor para mat[%d][%d]: \n", i, j);
            scanf("%d", &mat[i][j]);
        }

    printf("A matriz digitada foi: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf("%2d", mat[i][j]);
        printf("\n");
    }
    return 0;
}
