#include<stdio.h>
int main(){
    int i;

    for(i=0; i<5; i++){
        if(i!=3)
            printf("Este numero nao eh 3\n");
        else
            printf("Este numero eh 3\n");
    }

    return 0;
}
