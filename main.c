// Realizar un programa que calcule si alguien tiene edad para votar

#include <stdio.h>

int main()
{
    int edad = 0, mayoria = 18;

    printf("Programa que calcula si alguien tiene edad para votar o no \n\n");
    printf("Proporcioname tu edad: ");
    scanf("%d", &edad);

    if(edad >= mayoria)
        printf("Felicidades, ya puedes votar \n");
    else
        printf("Aun no puedes votar, te faltan %d años para poder votar \n", mayoria - edad);

    return 0;
}
