#include <stdio.h>
int main(int argc, char const *argv[])
{
    int quantidadeHeroi, classeHeroi, classeMonstro;
    scanf("%d%d%d", &quantidadeHeroi, &classeHeroi, &classeMonstro);
    if(((classeHeroi>classeMonstro) || (classeMonstro==5 && classeHeroi==5))&&(quantidadeHeroi>=1)){
        printf("Heróis vencerão!");
    } else if((classeHeroi==classeMonstro ) && (quantidadeHeroi>=3)){
        printf("Heróis vencerão!");
    } else{
        printf("Melhor chamar Saitama!");
    }
    return 0;
}
