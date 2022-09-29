
#include <stdio.h>

int main(){
    int entero;//declaracion detras de llavess
    float x; char letra;
    printf ("Hola\n"); //es para imprimir la palabra 
    scanf("%d" , &entero); //scanf es el scaner para leer
    printf(" el numero es %d y el doble es %d\n", entero, 2*entero); // %d lo q hace es colocar la variable que hayas puesto 
    scanf ("%lf", &x);
    printf(" el numero es %f y el inverso es %d\n", x, 1/x);// %e te lo pone en notacion cientifica
    scanf("%c ,&letra");
    printf("la ltera es '%c' \n", letra+1);
    printf("El numero de la letra es %d\n", letra);
    return 0;
}
