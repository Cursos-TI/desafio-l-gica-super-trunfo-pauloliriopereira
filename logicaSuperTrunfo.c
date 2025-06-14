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
    int input, populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int numeroDePontosTuristicos, numeroDePontosTuristicos2;
    float densidadePopulacional, densidadePopulacional2;
    float pibPerCapita, pibPerCapita2;
    int cartaVencedora;
    char nomeDaCidadeVencedora[50];
    
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
    
    printf("Insira um número para fazer a comparação das duas cartas. Segue abaixo o número do atributo da carta:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &input);
    
    printf("Paises:\n");
    printf("Carta 1 -> %s Carta 2 -> %s\n", nomePais, nomePais2);
    
    switch (input) {
        case 1:
            if (populacao > populacao2) {
                cartaVencedora = 1;
            } else if (populacao == populacao2) {
                cartaVencedora = 0;
            } else {
                cartaVencedora = 2;
            }
            printf("Atributo usado na comparação: População\n");
            printf("Valores comparados: Carta 1 -> %d Carta 2 -> %d\n", populacao, populacao2);
        break;
        
        case 2:
            if (area > area2) {
                cartaVencedora = 1;
            } else if (area == area2) {
                cartaVencedora = 0;
            } else {
                cartaVencedora = 2;
            }            
            printf("Atributo usado na comparação: Área\n");
            printf("Valores comparados: Carta 1 -> %.2f Carta 2 -> %.2f\n", area, area2);
        break;
        
        case 3:
            if (pibPerCapita > pibPerCapita2) {
                cartaVencedora = 1;
            } else if (pibPerCapita == pibPerCapita2) {
                cartaVencedora = 0;
            } else {
                cartaVencedora = 2;
            }
            printf("Atributo usado na comparação: PIB\n");
            printf("Valores comparados: Carta 1 -> %.2f Carta 2 -> %.2f\n", pibPerCapita, pibPerCapita2);
        break;
        
        case 4:
            if (numeroDePontosTuristicos > numeroDePontosTuristicos2) {
                cartaVencedora = 1;
            } else if (numeroDePontosTuristicos == numeroDePontosTuristicos2) {
                cartaVencedora = 0;
            } else {
                cartaVencedora = 2;
            }
            printf("Atributo usado na comparação: Número de pontos turísticos\n");
            printf("Valores comparados: Carta 1 -> %d Carta 2 -> %d\n", numeroDePontosTuristicos, numeroDePontosTuristicos2);
        break;
        
        case 5:
            if (densidadePopulacional < densidadePopulacional2) {
                cartaVencedora = 1;
            } else if (densidadePopulacional == densidadePopulacional2) {
                cartaVencedora = 0;
            } else {
                cartaVencedora = 2;
            }        
            printf("Atributo usado na comparação: Densidade demográfica\n");
            printf("Valores comparados: Carta 1 -> %.2f Carta 2 -> %.2f\n", densidadePopulacional, densidadePopulacional2);
        break;
        
        default:
    }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    
    if (cartaVencedora == 1) {
        printf("Resultado: Carta %d venceu!\n", cartaVencedora);
    } else if (cartaVencedora == 0) {
        printf("Resultado: Empate!\n");
    } else {
        printf("Resultado: Carta %d venceu!\n", cartaVencedora);
    }

    return 0;
}

