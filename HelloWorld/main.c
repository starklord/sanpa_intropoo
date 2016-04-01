#include <stdio.h>
#include <stdlib.h>

float farenheitToCelsius(float f);
float celsiusToFarenheit(float c);


void printCelsiusToFarenheit(){
    int i= 0;
    printf("Celsius - Farenheit\n");
    for(i ; i <= 300 ; i=i+20){
        printf("%3d %6.1f\n",i,celsiusToFarenheit(i));
    }
}

void printFarenheitToCelsius(){
    int i= 0;
    printf("Farenheit - Celsius\n");
    for(i ; i <= 300 ; i=i+20){
        printf("%3d %6.1f\n",i,farenheitToCelsius(i));
    }
}



float farenheitToCelsius(float f) {
    return (5.0/9.0)*(f-32);
}

float celsiusToFarenheit(float c) {
    return c*(9.0/5.0)+32;
}

int main()
{
    printCelsiusToFarenheit();
    printFarenheitToCelsius();
    return 0;
}
