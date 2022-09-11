#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int numeroTimes = 0;
    int corrida = 0;
    int salto = 0;
    int lancamento = 0;
    scanf("%d" ,&numeroTimes);

    for (int i = 0; i <= numeroTimes; i++){
        char stringDigitada[100]; 
        gets(stringDigitada);
        int j = 0;

        while(stringDigitada[j] != 'F'){
            if(stringDigitada[j] =='C'){
                corrida = corrida + 1;
            } 
            if(stringDigitada[j]=='S'){
                salto = salto + 1;
            } 
            if(stringDigitada[j]=='L'){
                lancamento = lancamento + 1;
            }
            j++;
        }
    }
    printf("%d %d %d %d", corrida, salto, lancamento, corrida+salto+lancamento);
    getch();
    return 0;
}
