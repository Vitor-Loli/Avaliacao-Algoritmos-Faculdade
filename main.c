#include <ctype.h>
#include <stdio.h>
#include <string.h>

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

int comp_dias(int dia) {
    int contador;
    for (int i = dia; i < 10; i++) {
        if (i == 2) {
            printf()
        }
    }

}
void exec2_semana() {
    char dia_semana[14];

    printf("\nInforme uma dia semana: \n");
    scanf("%13s", &dia_semana);

    //Transforma para maíusculo para facilitar comparação
    for(int i = 0; i < strlen(dia_semana); i++) {
        dia_semana[i] = toupper(dia_semana[i]);
    }

    if (strcmp(dia_semana, "DOMINGO") == 0){
        comp_dias(0);
    }else if(strcmp(dia_semana, "SEGUNDA") == 0 || strcmp(dia_semana, "SEGUNDA-FEIRA") == 0 || strcmp(dia_semana, "SEGUNDA FEIRA") == 0) {
        comp_dias(1);
    }else if (strcmp(dia_semana, "TERÇA") == 0 || strcmp(dia_semana, "TERÇA-FEIRA") == 0 || strcmp(dia_semana, "TERÇA FEIRA") == 0) {
        printf("Dia de algoritmos");
    }else if (strcmp(dia_semana, "QUARTA") == 0 || strcmp(dia_semana, "QUARTA-FEIRA") == 0 || strcmp(dia_semana, "QUARTA FEIRA") == 0) {
        comp_dias(3);
    }else if (strcmp(dia_semana, "QUINTA") == 0 || strcmp(dia_semana, "QUINTA-FEIRA") == 0 || strcmp(dia_semana, "QUINTA FEIRA") == 0) {
        comp_dias(4);
    }else if (strcmp(dia_semana, "SEXTA") == 0 || strcmp(dia_semana, "SEXTA-FEIRA") == 0 || strcmp(dia_semana, "SEXTA FEIRA") == 0){
        comp_dias(5);
    }else if (strcmp(dia_semana, "SABADO") == 0) {
        comp_dias(6);
    };

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