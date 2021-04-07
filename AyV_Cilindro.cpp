/******************************************************************************

                Programa que calcula el área y el volumen de un cilindro
                Compilado en GDB
                Autor: Jeronimo Zuluaga Posada
                Abril 7 de 2021

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    
    float radio, altura, area, volumen;
    
    printf("Hola!\n¡Vamos a calcular el área\ny el volumen de un cilindro! \n\n");
    
    printf("Ingresa el radio de la base: ");
    scanf(" %f", &radio);
    
    printf("\nIngresa la altura del cilindro: ");
    scanf(" %f", &altura);
    
    volumen = 3.1416 * (radio * radio) * altura;
    
    area = 2*(3.1416) * radio * altura + 2*(3.1416) * (radio * radio);
    
    printf("El área de la base es: %f \n", area);
    printf("El volumen del cilindro es: %f \n", volumen);
    
    return 0;
}
