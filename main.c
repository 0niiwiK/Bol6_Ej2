#include <stdio.h>

int main() {
    float nota;
    printf("Introduce la nota: ");
    scanf("%f",&nota);
    while (nota<0 || nota>10) {
        printf("Nota no valida, introduzca la nota de nuevo: ");
        scanf("%f", &nota);
        fflush(stdin);
    } // Pedir nota mientras nota invalida
    if (nota>=0 && nota<3)
        printf("MUY DEFICIENTE");
    else if (nota>=3 && nota<5)
        printf("INSUFICIENTE");
    else if (nota>=5 && nota<6)
        printf("SUFICIENTE");
    else if (nota>=6 && nota<7)
        printf("BIEN");
    else if (nota>=7 && nota<9)
        printf("NOTABLE");
    else
        printf("SOBRESALIENTE");
    if (nota==10)
        printf("\n|---> MATRICULA DE HONOR <---|");
    return 0;
    }
