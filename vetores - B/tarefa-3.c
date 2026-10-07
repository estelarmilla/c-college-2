#include <stdio.h>
#include <stdlib.h>
int main(){
    int num_aleat;
    srand(1234);
    int i = 0;

    do{
        num_aleat = rand() % 200;
        if(i==7){ // não esquecer que = atribui valor e == é operador de comparação
            printf("%d.", num_aleat);
        }
        else{
            printf("%d,     ", num_aleat);
        }
        i++;
    }while(i < 8);

    return 0;
}
