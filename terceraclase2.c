#include <stdio.h>

/* FUNCIONES TERCERA CLASE. */

/* PUNTO MEDIO

Escribir una función que, dados dos números en coma flotante calcule y retorne como resultado el punto medio entre ambos.

Compruebe la función con números positivos, negativos y cero. */

/* PARA HACER UNA FUNCIÓN, PRIMERO EL TIPO DE RETORNO, EN ESTE CASO ES DOUBLE, IDENTIFICADOR DE LA FUNCIÓN (medio)
Y LOS PARÁMETROS EN COMA FLOTANTE, a y b. */

double medio(double a, double b)
{

    /* IMPLEMENTACIÓN */

    double m;

    m = medio(-2, +2);

    return (a + b) / 2;

    m = medio(-1, -7.2);

    m = medio(-1, 0);

    printf("El medio es: %f\n", m);
}

/* SEGUNDO EJERCICIO

PAR Y POSITIVO.

Escribir una función que escriba en la salida estándar si un número entero dado es par (o no) y si es positivo (o no)

Compruebe la función con distintos (todos los) casos posibles. */

void par_positivo(int numero)
{

    printf("%d es %s\n", numero % 2 ? "impar" : "par");

    /* COMPROBACIOÓN PAR O IMPAR.

    VERDADERO ES TODO LO QUE NO SEA 0.

    En el printf, estamos haciendo es pasarle un número entero, %d y una cadena alfanumérica para que posteriormente indique si

    la afirmación es verdadera o falsa. Le paso posteriormente el parámetro número y lo divido entre 2 para que me diga si es

    par o impar.

    Por último, el operador binario ? sirve para que me diga si es par o impar la función es decir, que lo decida.*/

    printf("%d es %s\n", numero, numero > 0 ? "positivo" : "cero o negativo");

    /* COMPROBACIÓN POSITIVO / NEGATIVO O CERO.

    Esto es lo otro que debemos comprobar, si es positivo o no. En C, todo lo que no sea 0, es verdadero. Luego utilizando el

    operador binario, me dará si es positivo o por el contrario, negativo o cero. */
}

/* TERCER EJERCICIO

MÁXIMO DE TRES NÚMEROS.

Escribir una función que lea de la entrada estándar 3 números en coma flotante (precondición: son distintos) y retorne su máximo.

Compruebe la función con distintos (todos los) casos posibles. */

double max3()
{

    /* No puedo pasarle parámetros a la función. Debo declarar 3 variables locales para que podamos posteriormente hacer el
    scaner. */

    /* ALINEAMIENTO IF, ELSE IF. MUY ÚTIL. SIEMPRE VA A ENTRAR EN ALGÚN IF/ELSE Y SI SE CUMPLE, YA NO AVANZA. */

    double a, b, c;
    double result;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b && a > c)
    {
        result = a;
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
    return result;
}



/* CUARTO EJERCICIO.

COCIENTE Y RESTO.

Escribir una función que, dados dos números enteros, calcule y devuelva como resultado el cociente y resto de la división entera.

Comprueba la función. */

int cociente_resto (int dividendo, int divisor, int *p_resto)
{

    int cociente;

    /* Se podría con printf pero sino, no puedo llamar a algo de la salida estandar.

    En este caso, como necesitamos el resultado del cociente y resto, ponemos que la salida va a ser un entero

    EN C, NO PUEDE DARSE EL RESULTADO, EN UN ARRAY. */

    *p_resto = dividendo % divisor; 
    
    /* ESTO NO PUEDE DARSE PORQUE HEMOS PUESTO *RESTO Y ESTO ES UNA DIRECCIÓN DE MEMORIA Y % DE DIVIDENDO DIVISOR, 
    
    ES UN ENTERO. */ 

    cociente = dividendo / divisor;

    printf("Función dice: El cociente es %d y el resto es %d\n", cociente, *p_resto);

    return cociente;

}


int main () {

    int c = 0;

    int r = 0;

    c = cociente_resto(20, 3, &r);

    printf("El cociente es %d y el resto es %d\n", c, r);

    return 0;

}