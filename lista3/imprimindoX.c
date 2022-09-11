#include <stdio.h>
int main(int argc, char const *argv[])
{
    char charDigitado;
    int numeroLinhas;
    scanf("%d %c", &numeroLinhas, &charDigitado);
    for(int i = 0; i<numeroLinhas-1; i++){
        for(int k = 0; k<numeroLinhas-1;k++){
            if((i==k) || (i+k == numeroLinhas-2)){
                printf("%c", charDigitado);
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
