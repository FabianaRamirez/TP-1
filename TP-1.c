/*
 * Mostrar Tabla de Temperaturas de Celsius a Fahrenheit
 * Fabiana Maria Anahi Ramirez
 * 12/04/2015
 */

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int inicio = 0;
    int limite = 300;
    int cont = 20;
    celsius = inicio;
    printf("Tabla de Temperaturas\n\n");
    printf("%8s %12s", "Celsius", "Fahrenheit\n");
    while(celsius <= limite){
        fahr = (celsius * (9.0/5.0)) + 32.0;
         printf("%5.0f %11.1f\n",celsius, fahr);
        celsius = celsius + cont;
    }
}
