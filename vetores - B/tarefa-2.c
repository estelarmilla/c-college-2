#include <stdio.h>
#include <stdlib.h>
int main(){
    int num_aleat;
    srand(1234);
    for(int i = 0; i < 7; i++){
        num_aleat = rand() % 4;
        printf("%d.\n", num_aleat);
    }
    return 0;
}
