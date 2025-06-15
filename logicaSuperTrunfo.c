#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char capturaCaractere; //Variável utilizada para capturar um caractere do buffer do teclado
    
    //Variáveis que armazenam os valores digitados da carta 1 e carta 2
    char estado[3], estado2[3];
    char codigoDaCarta[3], codigoDaCarta2[3];
    char nomePais[50], nomePais2[50], nomeDaCidade[50], nomeDaCidade2[50];
    int input, input2, populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int numeroDePontosTuristicos, numeroDePontosTuristicos2;
    float densidadePopulacional, densidadePopulacional2;
    float pibPerCapita, pibPerCapita2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Inserindo dados da Carta 1: \n");    
    printf("País: \n");
    fgets(nomePais, sizeof(nomePais), stdin);
    nomePais[strcspn(nomePais, "\n")] = '\0';
    
    printf("Estado: \n");
    scanf("%s", estado);
    
    printf("Código: \n");
    scanf("%2s", codigoDaCarta);
    
    printf("Nome da Cidade: \n");
    scanf("%c", &capturaCaractere);
    fgets(nomeDaCidade, sizeof(nomeDaCidade), stdin);
    nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0';
    
    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos);
    
    scanf("%c", &capturaCaractere); //Captura caractere do teclado
    
    printf("Inserindo dados da Carta 2: \n");
    printf("País: \n");
    fgets(nomePais2, sizeof(nomePais2), stdin);
    nomePais2[strcspn(nomePais2, "\n")] = '\0';
    
    printf("Estado: \n");
    scanf("%s", estado2);
    
    printf("Código: \n");
    scanf("%2s", codigoDaCarta2);
    
    printf("Nome da Cidade: \n");
    scanf("%c", &capturaCaractere);
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0';
    
    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);

    printf("\nCarta 1:\n");
    
    densidadePopulacional = populacao / area;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    
    pibPerCapita = (pib * 1000000000) / populacao;
    printf("PIB per capita: %.2f reais\n", pibPerCapita);

    printf("\nCarta 2:\n");
    
    densidadePopulacional2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    printf("PIB per capita: %.2f reais\n\n", pibPerCapita2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    printf("Escolha dois atributos para comparação das primeira cartas.\n");
    printf("Insira a opção do primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &input);

    printf("Insira a opção do segundo atributo:\n");
    if (input != 1) printf("1 - População\n");
    if (input != 2) printf("2 - Área\n");
    if (input != 3) printf("3 - PIB\n");
    if (input != 4) printf("4 - Número de pontos turísticos\n");
    if (input != 5) printf("5 - Densidade demográfica\n");
    scanf("%d", &input2);
    
    printf("Paises:\n");
    printf("Carta 1 -> %s Carta 2 -> %s\n", nomePais, nomePais2);
    
    switch (input) {
        case 1:
            if (input2 == 2) {
                    printf("Atributo usado na comparação: População e Área\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %d Carta 2 -> %d\n", populacao, populacao2);
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", area, area2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", populacao + area, populacao2 + area2);
                    if ((populacao + area) > (populacao2 + area2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((populacao + area) == (populacao2 + area2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if (input2 == 3) {
                    printf("Atributo usado na comparação: População e PIB\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %d Carta 2 -> %d\n", populacao, populacao2);
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita, pibPerCapita2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", populacao + pibPerCapita, populacao2 + pibPerCapita2);
                    if ((populacao + pibPerCapita) > (populacao2 + pibPerCapita2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((populacao + pibPerCapita) == (populacao2 + pibPerCapita2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if(input2 == 4) {
                    printf("Atributo usado na comparação: População e Número de pontos turísticos\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %d Carta 2 -> %d\n", populacao, populacao2);
                    printf("Carta 1 -> %d Carta 2 -> %d\n", numeroDePontosTuristicos, numeroDePontosTuristicos2);
                    printf("Soma: Carta 1 -> %d Carta 2 -> %d\n", populacao + numeroDePontosTuristicos, populacao2 + numeroDePontosTuristicos2);                    
                    if ((populacao + numeroDePontosTuristicos) > (populacao2 + numeroDePontosTuristicos2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((populacao + numeroDePontosTuristicos) == (populacao2 + numeroDePontosTuristicos2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if(input2 == 5) {
                    printf("Atributo usado na comparação: População e Densidade demográfica\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %d Carta 2 -> %d\n", populacao, populacao2);
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", densidadePopulacional, densidadePopulacional2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", populacao + densidadePopulacional, populacao2 + densidadePopulacional2);
                    if ((populacao + densidadePopulacional) > (populacao2 + densidadePopulacional2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((populacao + densidadePopulacional) == (populacao2 + densidadePopulacional2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else {
                    printf("Valor inválido.\n");
            }
        break;
        
        case 2:
            if (input2 == 1) {
                    printf("Atributo usado na comparação: Área e População \n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", area, area2);
                    printf("Carta 1 -> %d Carta 2 -> %d\n", populacao, populacao2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", populacao + area, populacao2 + area2);
                    if ((populacao + area) > (populacao2 + area2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((populacao + area) == (populacao2 + area2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if(input2 == 3) {
                    printf("Atributo usado na comparação: Área e PIB\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", area, area2);
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita, pibPerCapita2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", area + pibPerCapita, area2 + pibPerCapita2);
                    if ((area + pibPerCapita) > (area2 + pibPerCapita2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((area + pibPerCapita) == (area2 + pibPerCapita2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if(input2 == 4) {
                    printf("Atributo usado na comparação: Área e Número de pontos turísticos\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", area, area2);
                    printf("Carta 1 -> %d Carta 2 -> %d\n", numeroDePontosTuristicos, numeroDePontosTuristicos2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", area + numeroDePontosTuristicos, area2 + numeroDePontosTuristicos2);                    
                    if ((area + numeroDePontosTuristicos) > (area2 + numeroDePontosTuristicos2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((area + numeroDePontosTuristicos) == (area2 + numeroDePontosTuristicos2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if(input2 == 5) {
                    printf("Atributo usado na comparação: Área e Densidade demográfica\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", area, area2);
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", densidadePopulacional, densidadePopulacional2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", area + densidadePopulacional, area2 + densidadePopulacional2);
                    if ((area + densidadePopulacional) > (area2 + densidadePopulacional2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((area + densidadePopulacional) == (area2 + densidadePopulacional2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else {
                printf("Valor inválido.\n");
            }
        break;
        
        case 3:
            if (input2 == 1) {
                    printf("Atributo usado na comparação: PIB e População \n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita, pibPerCapita2);
                    printf("Carta 1 -> %d Carta 2 -> %d\n", populacao, populacao2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", populacao + pibPerCapita, populacao2 + pibPerCapita2);
                    if ((populacao + pibPerCapita) > (populacao2 + pibPerCapita2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((populacao + pibPerCapita) == (populacao2 + pibPerCapita2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if (input2 == 2) {
                    printf("Atributo usado na comparação: PIB e Área \n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita, pibPerCapita2);
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", area, area2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", area + pibPerCapita, area2 + pibPerCapita2);
                    if ((area + pibPerCapita) > (area2 + pibPerCapita2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((area + pibPerCapita) == (area2 + pibPerCapita2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if (input2 == 4) {
                    printf("Atributo usado na comparação: PIB e Número de pontos turísticos\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita, pibPerCapita2);
                    printf("Carta 1 -> %d Carta 2 -> %d\n", numeroDePontosTuristicos, numeroDePontosTuristicos2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita + numeroDePontosTuristicos, pibPerCapita2 + numeroDePontosTuristicos2);                    
                    if ((pibPerCapita + numeroDePontosTuristicos) > (pibPerCapita2 + numeroDePontosTuristicos2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((pibPerCapita + numeroDePontosTuristicos) == (pibPerCapita2 + numeroDePontosTuristicos2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if (input2 == 5) {
                    printf("Atributo usado na comparação: PIB e Densidade demográfica\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita, pibPerCapita2);
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", densidadePopulacional, densidadePopulacional2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita + densidadePopulacional, pibPerCapita2 + densidadePopulacional2);
                    if ((pibPerCapita + densidadePopulacional) > (pibPerCapita2 + densidadePopulacional2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((pibPerCapita + densidadePopulacional) == (pibPerCapita2 + densidadePopulacional2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else {
                printf("Valor inválido.\n");
            }
        
        break;
        
        case 4:
            if (input2 == 1) {
                    printf("Atributo usado na comparação: Número de pontos turísticos e População \n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %d Carta 2 -> %d\n", numeroDePontosTuristicos, numeroDePontosTuristicos2);
                    printf("Carta 1 -> %d Carta 2 -> %d\n", populacao, populacao2);
                    printf("Soma: Carta 1 -> %d Carta 2 -> %d\n", populacao + numeroDePontosTuristicos, populacao2 + numeroDePontosTuristicos2);
                    if ((populacao + numeroDePontosTuristicos) > (populacao2 + numeroDePontosTuristicos2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((populacao + numeroDePontosTuristicos) == (populacao2 + numeroDePontosTuristicos2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if (input2 == 2) {
                    printf("Atributo usado na comparação: Número de pontos turísticos e Área \n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %d Carta 2 -> %d\n", numeroDePontosTuristicos, numeroDePontosTuristicos2);
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", area, area2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", area + numeroDePontosTuristicos, area2 + numeroDePontosTuristicos2);
                    if ((area + numeroDePontosTuristicos) > (area2 + numeroDePontosTuristicos2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((area + numeroDePontosTuristicos) == (area2 + numeroDePontosTuristicos2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if (input2 == 3) {
                    printf("Atributo usado na comparação: Número de pontos turísticos e PIB\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %d Carta 2 -> %d\n", numeroDePontosTuristicos, numeroDePontosTuristicos2);
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita, pibPerCapita2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita + numeroDePontosTuristicos, pibPerCapita2 + numeroDePontosTuristicos2);                    
                    if ((pibPerCapita + numeroDePontosTuristicos) > (pibPerCapita2 + numeroDePontosTuristicos2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((pibPerCapita + numeroDePontosTuristicos) == (pibPerCapita2 + numeroDePontosTuristicos2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if (input2 == 5) {
                    printf("Atributo usado na comparação: Número de pontos turísticos e Densidade demográfica\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %d Carta 2 -> %d\n", numeroDePontosTuristicos, numeroDePontosTuristicos2);
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", densidadePopulacional, densidadePopulacional2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", numeroDePontosTuristicos + densidadePopulacional, numeroDePontosTuristicos2 + densidadePopulacional2);
                    if ((numeroDePontosTuristicos + densidadePopulacional) > (numeroDePontosTuristicos2 + densidadePopulacional2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((numeroDePontosTuristicos + densidadePopulacional) == (numeroDePontosTuristicos2 + densidadePopulacional2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else {
                   printf("Valor inválido.\n");
            }
        break;
        
        case 5:
            if (input2 == 1) {
                    printf("Atributo usado na comparação: Densidade demográfica e População \n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", densidadePopulacional, densidadePopulacional2);
                    printf("Carta 1 -> %d Carta 2 -> %d\n", populacao, populacao2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", populacao + densidadePopulacional, populacao2 + densidadePopulacional2);
                    if ((populacao + densidadePopulacional) > (populacao2 + densidadePopulacional2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((populacao + densidadePopulacional) == (populacao2 + densidadePopulacional2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if (input2 == 2) {
                    printf("Atributo usado na comparação: Densidade demográfica e Área \n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", densidadePopulacional, densidadePopulacional2);
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", area, area2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", area + densidadePopulacional, area2 + densidadePopulacional2);
                    if ((area + densidadePopulacional) > (area2 + densidadePopulacional2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((area + densidadePopulacional) == (area2 + densidadePopulacional2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if (input2 == 3) {
                    printf("Atributo usado na comparação: Densidade demográfica e PIB\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", densidadePopulacional, densidadePopulacional2);
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita, pibPerCapita2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita + densidadePopulacional, pibPerCapita2 + densidadePopulacional2);                    
                    if ((pibPerCapita + densidadePopulacional) > (pibPerCapita2 + densidadePopulacional2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((pibPerCapita + densidadePopulacional) == (pibPerCapita2 + densidadePopulacional2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else if (input2 == 4) {
                    printf("Atributo usado na comparação: Densidade demográfica e Número de pontos turísticos\n");
                    printf("Valores comparados:\n");
                    printf("Carta 1 -> %.2f Carta 2 -> %.2f\n", densidadePopulacional, densidadePopulacional2);
                    printf("Carta 1 -> %d Carta 2 -> %d\n", numeroDePontosTuristicos, numeroDePontosTuristicos2);
                    printf("Soma: Carta 1 -> %.2f Carta 2 -> %.2f\n", numeroDePontosTuristicos + densidadePopulacional, numeroDePontosTuristicos2 + densidadePopulacional2);
                    if ((numeroDePontosTuristicos + densidadePopulacional) > (numeroDePontosTuristicos2 + densidadePopulacional2)) {
                        printf("Resultado: Carta 1 venceu!\n");
                    } else if ((numeroDePontosTuristicos + densidadePopulacional) == (numeroDePontosTuristicos2 + densidadePopulacional2)) {
                        printf("Resultado: Empate!\n");
                    } else {
                        printf("Resultado: Carta 2 venceu!\n");
                    }
            } else {
                    printf("Valor inválido.\n");
            } 
        break;
        
        default:
             printf("Valor inválido.\n");
    }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    return 0;
}

