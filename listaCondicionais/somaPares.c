#include <stdio.h>
int main(int argc, char const *argv[])
{
    int entrada1, entrada2;
    scanf("%d%d",&entrada1,&entrada2);
    if(entrada1%2!=0){
        printf("Não posso somar, pois %d não é par\n", entrada1);
    }
    if(entrada2%2!=0){
        printf("Não posso somar, pois %d não é par", entrada2);
    }
    if(entrada1%2==0 && entrada2%2==0){
        printf("%d",entrada1+entrada2);
    }
    return 0;
}
