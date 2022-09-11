#include <stdio.h>
int main(int argc, char const *argv[])
{
    char alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int valoresEntrada[4];
    int somaEntrada = 0;

    scanf("%d%d%d%d", &valoresEntrada[0], &valoresEntrada[1], &valoresEntrada[2], &valoresEntrada[3]);

    for(int i = 0; i<4; i++){
        somaEntrada = valoresEntrada[i] + somaEntrada;
    }

    if(somaEntrada==0){
        printf("Ei! Ninguém colocou nada!");
    } else if(somaEntrada>26){
        somaEntrada = somaEntrada-26;
        printf("Letra: %c", alfabeto[somaEntrada-1]);
    }else{
        printf("Letra: %c", alfabeto[somaEntrada-1]);
    }
    return 0;
}

    
