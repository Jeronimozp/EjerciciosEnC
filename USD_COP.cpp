/******************************************************************************

Convertir Dolares a Pesos Colombianos // Promedio de $3.500 por $1 Dolar.
Compilado en GDB
Autor: Jeronimo Zuluaga Posada
Abril 7 de 2021

*******************************************************************************/
#include <stdio.h>

int main()
{
    int usd, cop;
    
    printf("¡Hola!\nVamos a convertir Dolares Estadounidenses a Pesos Colombianos.\n");
    
    printf("Ingresa los dolares USD que quieres convertir a pesos COP: ");
    scanf(" %i", &usd);
    
    cop = usd * 3500;
    
    printf("$%i USD son $%i COP o pesos Colombianos.\n", usd, cop);
    
    return 0;
}
