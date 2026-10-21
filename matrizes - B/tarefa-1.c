#include <stdio.h>
int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            printf("Digite a entrada da linha %d coluna %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    printf("\nMatriz digitada:\n\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf("%4d", mat[i][j]);
        printf("\n");
    }
    printf("\nEntradas da diagonal principal da matriz:\n\n");
    for(int i = 0; i < 3; i++)
        printf("%4d", mat[i][i]);
    printf("\n");
    return 0;
}
