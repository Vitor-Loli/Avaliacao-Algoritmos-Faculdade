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

    printf("A resposta da equação x é: %f.2", x);
}

//Função para cálculo de dias - Utilizada pelo exercício 2
int comp_dias(int dia) {
    int contador = 0;

    for (int i = dia; i < 10; i++) {
        if (i == 2) {
            return contador;
        }

        if (i == 7) {
            i = 0;
        }

        contador++;
    }

}

void exec2_semana() {
    char dia_semana[14];
    int retorno;

    printf("\nInforme um dia da semana: \n");
    scanf("%13s", &dia_semana);

    //Transforma tudo para minúsculo para facilitar comparação
    for(int i = 0; i < strlen(dia_semana); i++) {
        dia_semana[i] = tolower(dia_semana[i]);
    }

    if (strcmp(dia_semana, "domingo") == 0){
        retorno = comp_dias(0);
    }else if(strcmp(dia_semana, "segunda") == 0 || strcmp(dia_semana, "segunda-feira") == 0 || strcmp(dia_semana, "segunda feira") == 0) {
        retorno = comp_dias(1);
    }else if (strcmp(dia_semana, "terça") == 0 || strcmp(dia_semana, "terça-feira") == 0 || strcmp(dia_semana, "terça feira") == 0) {
        printf("\nDia de algoritmos!\n");
        return;
    }else if (strcmp(dia_semana, "quarta") == 0 || strcmp(dia_semana, "quarta-feira") == 0 || strcmp(dia_semana, "quarta feira") == 0) {
        retorno = comp_dias(3);
    }else if (strcmp(dia_semana, "quinta") == 0 || strcmp(dia_semana, "quinta-feira") == 0 || strcmp(dia_semana, "quinta feira") == 0) {
        retorno = comp_dias(4);
    }else if (strcmp(dia_semana, "sexta") == 0 || strcmp(dia_semana, "sexta-feira") == 0 || strcmp(dia_semana, "sexta feira") == 0){
        retorno = comp_dias(5);
    }else if (strcmp(dia_semana, "sabado") == 0 || strcmp(dia_semana, "sábado") == 0) {
        retorno = comp_dias(6);
    }else {
        printf("\nDia não identificado\n");
        return;
    };

    printf("Faltam ainda %d dia(s) para Terça-feira (Dia de algoritmos)", retorno);

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