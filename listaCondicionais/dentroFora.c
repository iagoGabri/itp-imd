#include <stdio.h>
int main(int argc, char const *argv[])
{
    int cantoInferiorEsquerdoX, cantoInferiorEsquerdoY;
    int cantoSuperiorDireitoX, cantoSuperiorDireitoY;
    int pontoNormalX, pontoNormalY;

    scanf("%d%d%d%d", &cantoInferiorEsquerdoX, &cantoInferiorEsquerdoY, &cantoSuperiorDireitoX, &cantoSuperiorDireitoY );
    scanf("%d%d", &pontoNormalX, &pontoNormalY);

    if((pontoNormalX>=cantoInferiorEsquerdoX && pontoNormalX<=cantoSuperiorDireitoX) && (pontoNormalY>=cantoInferiorEsquerdoY && pontoNormalY<=cantoSuperiorDireitoY)){
        printf("Dentro!");
    } else{
        printf("Fora!");
    }



    
    return 0;
}
