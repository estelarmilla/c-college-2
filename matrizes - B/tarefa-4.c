#include <stdio.h>
int main(){
    int mat[3][3];
    int n = 3;
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
    printf("\nEntradas que nao fazem parte da diagonal secundária:\n\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(j==i || j == (n-1-i))
                printf("   ");
            else
                printf("%4d", mat[i][j]);
    printf("\n");
    return 0;
}
