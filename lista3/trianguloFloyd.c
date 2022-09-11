#include <stdio.h>
int main(int argc, char const *argv[])
{
    int quantidadeLinhas;
    int valorInicial = 1;
    scanf("%d", &quantidadeLinhas);
    if(quantidadeLinhas<=0){
        printf("Você entrou com %d, tente de novo na próxima", quantidadeLinhas);
    } else{
        for (int i = 1; i<=quantidadeLinhas; i++){
        for (int j = 0; j<i; j++){
            printf("%2d ", valorInicial);
            valorInicial++;
        }
        printf("\n");
    }
    }
    return 0;
}
