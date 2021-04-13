/******************************************************************************
Calcular el SAR
Compilado en GDB
Autor. Jeronimo Zuluaga Posada
13 de Abril del 2021
*******************************************************************************/
#include <stdio.h>

int main()
{
    int salario, sar, porcentaje, x;
    
    printf("¡Hola! Vamos a calcular tu ahorro para el retiro SAR.\nIngresa tu salario: $");
    
    scanf(" %i", &salario);
    
    printf("Ingresa una opción. 1 = cuota fija. 2 = porcentaje: ");
    
    scanf(" %i", &x);
    
    if (x == 1 | x == 2)
    {
        if (x == 1) {
            printf("Ingresa la cuota fija para el SAR: ");
            scanf(" %i", &sar);
            
            printf("La cantidad de dinero que deposita cada mes $%i.\n", sar);
            printf("Tu pago mensual es: $%i \n",salario - sar);
            
        return 0;
            
        }
        else
            printf("\nIngresa un porcentaje para el SAR: ");
            scanf(" %i", &porcentaje);
        sar = (salario * porcentaje)/100;
        
            printf("La cantidad de dinero que deposita cada mes $%i.\n", sar);
            printf("Tu pago mensual es: $%i \n",salario - sar);
        
        return 0;
    }
    else
    {
        printf("\nIngresa una opción correcta.\n");
    };
    return 0;
}
