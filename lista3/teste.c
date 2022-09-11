#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numeroVezes, corrida, salto, lancamento;
    scanf("%d\n", &numeroVezes);
    for(int i = 0; i<numeroVezes; i++){
        char stringDigitada[100]; 
        fgets(stringDigitada, 256, stdin);
        int k = 0;
        while(stringDigitada[k]!='F'){
            if(stringDigitada[k]=='C'){
                corrida = corrida + 1;
            }
            if(stringDigitada[k]=='S'){
                salto = salto + 1;
            }
            if(stringDigitada[k]=='L'){
                lancamento = lancamento + 1;
            }
            k = k + 1;
        }
    }
    printf("%d %d %d %d", corrida, salto, lancamento, corrida+salto+lancamento);
    return 0;
}
