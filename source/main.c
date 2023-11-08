#include<stdio.h>
#include "..\librerias\rresta.h"
#include "..\librerias\mmultiplicacion.h"
#include "..\librerias\ddivision.h"

int main()
{
    int num1, num2;
    printf("Ingrese el 1er numero: ");
    scanf("%d", &num1);
    printf("Ingrese el 2do numero: ");
    scanf("%d", &num2);
    printf("La resta es: %d", resta(num1,num2));
    printf("La division es: %d", division(num1, num2));
    printf("La multiplicaicon es: %d". multiplicacion(num1, num2));

    
    return 0;
}
