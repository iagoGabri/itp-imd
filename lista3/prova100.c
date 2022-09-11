#include <stdio.h>
int main(){
    double tempoMaximo = 0;
    double valorEntrada = 0;
    int competidores = 0;
    int numeroSeries = 0;
    scanf("%lf", &tempoMaximo);
    while(valorEntrada!=-1){
        scanf("%lf", &valorEntrada);
        if(valorEntrada<=tempoMaximo && valorEntrada!=-1){
            competidores = competidores + 1;
        }
    }
    if(competidores>=8){
        numeroSeries = competidores/8;
        if(competidores%8>0){
            numeroSeries = numeroSeries + 1;
        }
    } else if(competidores>0){
        numeroSeries = 1;
    }
    printf("%d %d", competidores, numeroSeries);
    return 0;
}
