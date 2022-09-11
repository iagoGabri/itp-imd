#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int valorInserido;
    char str[100];
    scanf("%d", &valorInserido);
    sprintf(str,"%d",valorInserido);
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c\n",str[i]);
    }
    
    return 0;
}
