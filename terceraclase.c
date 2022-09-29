/* TERCERA CLASE. INICIALIZACIÓN, DECLARACIÓN Y ASIGNACIÓN. PUNTEROS Y &. */

int main() {
    
    int a = 1; /* INICIALIZACIÓN. */
    
    int *p1, *p2; /* DECLARACIÓN
   
    Declaración de punteros. Los punteros uno y dos, son un int*. 

    El puntero apunta a un entero o en función del tipo de dato que se declare. */
     
    
    a = 10 * 1; /* ASIGNACIÓN */


    p1 = &a; /* ASIGNACIÓN: devuelve una dirección de memoria que se guarda en una variable p1 de tipo int 

    que guarda direcciones de memoria. Primero apunta al entero a y luego nos devuelve dirección de memoria. */

    
    printf(" a es %d, p1 es %p\n", a, p1);


    *p1 = 33; /* ESTO NO ES UNA DECLARACIÓN. ES UNA SENTENCIA.

    
    Si pongo un * a un puntero, nos devuelve a lo que apunta, es decir, a pero ha cambiado el valor de 10 a 33. */
    
    
    printf("a es %d, p1 es %p\n", a, p1);


    p2 = p1; /* El puntero 2, apunta a lo que apunta p1. Luego las direcciones de memoria, serán iguales. */

    
    printf("a es %d, p1 es %p p2 es %p\n", a, p1, p2);


    *p2 = 99; /* *p2 es a porque hemos apuntado p2, el puntero p1 que es a y el valor va a cambiar a ser 99 en vez de 33. */

    
    printf("a es %d, p1 es %p p2 es %p\n", a, p1, p2);
}


/* OTRO EJEMPLO CON PUNTEROS */

int main () {

    int a, b;

    int *p;

    a = 11;

    b = 99;

    p = &a;

    printf("a = %d, b = %d, p es %p\n", a, b, p);

    *p = 33;

    printf("a = %d, b = %d, p es %p\n", a, b, p);

    p = &b;

    printf("a = %d, b = %d, p es %p\n", a, b, p);

    *p = 77;

    printf("a = %d, b = %d, p es %p\n", a, b, p);

    return 0;
}
