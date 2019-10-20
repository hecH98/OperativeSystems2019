#include <stdio.h>
#include <unistd.h>

int main(){
    int i;
    char numero[10];
    char stop[10];
    sprintf(stop, "-1");
    for(i = 2 ; i <= 100; i++){
        sprintf(numero, "%d", i);
        write(1, numero, sizeof(numero));
    }
    write(1, stop, sizeof(stop));
    printf("\n");
    return 0;
}