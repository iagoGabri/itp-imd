#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char scale[1];
    double temperature;
    scanf("%lf %s", &temperature, &scale);
    if(strcmp(scale, "C") == 0){
        printf("Celsius: %.2lf \nFarenheit: %.2lf \nKelvin: %.2lf \n",temperature ,temperature*1.8+32 ,temperature+273.15);
    }
    if(strcmp(scale, "F") == 0){
        printf("Celsius: %.2lf \nFarenheit: %.2lf \nKelvin: %.2lf \n",(temperature-32)/1.8 ,temperature ,(temperature+459.67)*5.0/9);

    }
    if(strcmp(scale, "K") == 0){
        printf("Celsius: %.2lf \nFarenheit: %.2lf \nKelvin: %.2lf \n", temperature-273.15,(temperature-273.15)*1.8 + 32 ,temperature);
    }

    return 0;
}
