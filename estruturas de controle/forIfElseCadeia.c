#include<stdio.h>
int main(){
    int i;

    for(i=1; i<=10; i++){
        if(i==2)
            printf("Numero par %d", i);
        else if(i==4)
            printf("Numero par %d", i);
        else if(i==6)
            printf("Numero par %d", i);
        else if(i==8)
            printf("Numero par %d", i);
        else if(i==10)
            printf("Numero par %d", i);
        else
            printf("Numero impar %d", i);
        printf("\n");
        }
    return 0;
}
