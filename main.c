#include <ctype.h>
#include <stdio.h>

void exec1_equacao(){
    float a, b, c, x;

    printf("\nInforme o valor de A: \n");
    scanf("%f", &a);
    printf("Informe o valor de B: \n");
    scanf("%f", &b);
    printf("Informe o valor de C: \n");
    scanf("%f", &c);

    x = ((a * a) + (2 * b) - (2 * c)) / (2 * a) ;

    printf("A resposta da equação x é: %f", x);
}

void exec2_semana() {
    char dia_semana[12];

    printf("\nInforme uma dia semana: \n");
    scanf("%12s", &dia_semana);

    printf("%s", dia_semana);

    if (dia_semana == 'SEGUNDA-FEIRA' || dia_semana == 'SEGUNDA FEIRA' || dia_semana == 'SEGUNDA') {
        printf("é segunda");
    }
}

int main(void) {
    int opc;

    do {
        printf("\n\nMENU\n\n");
        printf("1. Exercício Equação\n");
        printf("2. Exercício Dia da Semana\n");
        printf("3.\n");
        printf("4.\n");
        printf("5.\n");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                exec1_equacao();
            break;

            case 2:
                exec2_semana();
            break;
            default:
                printf("Opcao invalida\n");
        }
    }while (opc != 6);
}