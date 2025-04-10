#include <ctype.h>
#include <stdio.h>
#include <string.h>

//Função exercício 1
void exec1_equacao(){
    float a = 0, b = 0, c = 0, x = 0;

    printf("\nAtenção! Para números decimais utilize o separador '.' EX: 2.5");
    printf("\nInforme o valor de A: \n");
    scanf("%f", &a);
    printf("Informe o valor de B: \n");
    scanf("%f", &b);
    printf("Informe o valor de C: \n");
    scanf("%f", &c);

    x = ((a * a) + (2 * b) - (2 * c)) / (2 * a) ;

    printf("A resposta da equação x é: %.2f", x);
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

//Função exercício 2
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

//Função exercício 3
void exec3_notas() {
    float nota1 = 0, nota2 = 0, nota3 = 0, resultado = 0;

    printf("\nAtenção! Para notas quebradas utilize o separador '.' EX: 8.6");
    printf("\nInforme a primeira nota do aluno: \n");
    scanf("%f", &nota1);
    printf("\nInforme a segunda nota do aluno: \n");
    scanf("%f", &nota2);
    printf("Informe a terceira nota do aluno: \n");
    scanf("%f", &nota3);

    nota1 = (nota1/100) * 40;
    nota2 = (nota2/100) * 40;
    nota3 = (nota3/100) * 20;

    resultado = nota1 + nota2 + nota3;

    if (resultado >= 6.0) {
        printf("\nAprovado com média: %.2f", resultado);
    }else {
        printf("\nReprovado com média: %.2f", resultado);
    }
}

//Função exercício 4
void exec4_macas() {
    float qtd_macas = 0;

    printf("\nInforme quantas maçãs foram compradas: \n");
    scanf("%f", &qtd_macas);

    if (qtd_macas >= 12) {
        qtd_macas = (qtd_macas * 0.3) + qtd_macas;
        printf("O valor a ser vendido o lote de maçãs é: R$%.2f",qtd_macas);
    }else {
        qtd_macas = ((qtd_macas * 1.3) * 0.3) + qtd_macas;
        printf("O valor a ser vendido o lote de maçãs é: R$%.2f",qtd_macas);
    }

}

//Função exercício 5
void exec5_estados() {
    int estado;

    do {
        printf("\nSelecione seu Estado\n");
        printf("1. Santa Catarina\n");
        printf("2. Rio Grande do Sul\n");
        printf("3. Paraná\n");
        printf("4. São Paulo\n");
        printf("5. Sair\n");
        scanf("%d", &estado);

        switch (estado) {
            case 1:
                printf("\nCatarinense\n");
            break;

            case 2:
                printf("\nRio Grandense\n");
            break;

            case 3:
                printf("\nParanaense\n");
            break;

            case 4:
                printf("\nPaulista\n");
            break;

            case 5:
                printf("\nAté logo!\n");
            break;

            default:
                printf("Estado inválido");
        }
    }while (estado != 5);

}

int main(void) {
    int opc;

    do {
        printf("\n\nMENU\n\n");
        printf("1. Exercício Equação\n");
        printf("2. Exercício Dia da Semana\n");
        printf("3. Exercício Notas\n");
        printf("4. Exercício Maçãs\n");
        printf("5. Exercício Estados\n");
        printf("6. Sair\n");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                exec1_equacao();
            break;

            case 2:
                exec2_semana();
            break;

            case 3:
                exec3_notas();
            break;

            case 4:
                exec4_macas();
            break;

            case 5:
                exec5_estados();
            break;

            case 6:
                printf("\nAté logo!\n");
            break;

            default:
                printf("Opção inválida\n");
        }
    }while (opc != 6);
}