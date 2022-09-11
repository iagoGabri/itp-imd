#include <stdio.h>
int main(int argc, char const *argv[])
{
    int combo, dinheiro, valorLanche;
    scanf("%d%d", &combo, &dinheiro);
    switch (combo){
        case 1:
            valorLanche = 12;
            break;
        case 2:
            valorLanche = 23;
            break;
        case 3:
            valorLanche = 31;
            break;
        case 4:
             valorLanche = 28;
            break;
        case 5:
             valorLanche = 15;
            break;
    }
    if(dinheiro<valorLanche){
                printf("Saldo insuficiente! Falta %d reais", valorLanche-dinheiro);
            } else if(dinheiro>valorLanche){
                printf("Troco = %d reais", dinheiro-valorLanche);
            } else{
                printf("Deu certim!");
            }
    return 0;
}
