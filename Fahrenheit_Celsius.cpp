/******************************************************************************

Convertir grados Fahrenheit a celsius
Compilado en GDB
Autor: Jeronimo Zuluaga Posada
Abirl 7 de 2021

*******************************************************************************/
#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    
    printf("¡Hola!\nVamos a convertir grados Fahrenheit a grados Centígrados.\n");
    
    printf("Ingresa los grados ºF que quieres convertir a ºC: ");
    scanf(" %f", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("\n%fºF es igual a %fºC\n", fahrenheit, celsius);
    
    
    return 0;
}
