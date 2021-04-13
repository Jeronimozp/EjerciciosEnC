/******************************************************************************
Calcular pago de agua
Compilado en GDB
Autor. Jeronimo Zuluaga Posada
13 de Abril del 2021
*******************************************************************************/
#include <stdio.h>

int main()
{
    int altura, largo, ancho, precio, pago, volumen;
    
    printf("Escribe la altura de la alberca: ");
    scanf(" %i", &altura);
    
    printf("Escribe el largo de la alberca: ");
    scanf(" %i", &largo);
    
    printf("Escribe el ancho de la alberca: ");
    scanf(" %i", &ancho);
    
    printf("Escribe el precio del metro cúbico del agua: ");
    scanf(" %i", &precio);
    
    volumen = (altura * largo *ancho);
    
    pago = volumen * precio;
    
    printf("El pago por %i litros de agua es: $%i\n", volumen, pago);
    
    return 0;
}
