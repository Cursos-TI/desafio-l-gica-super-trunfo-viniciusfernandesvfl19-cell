#include <stdio.h>

int main()
{

    //=========Carta 1=========

    char estado[4];
    printf("Digite o Estado: ");
    scanf("%s", estado);

    char codigoCarta[20];
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta);

    char cidade[20];
    printf("Digite a cidade: ");
    scanf("%s", cidade);

    int populacao;
    printf("Digite a população: ");
    scanf("%d", &populacao);

    double area;
    printf("Digite a área da cidade: ");
    scanf("%lf", &area);

    double PIB;
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &PIB);

    int pontoTuristico;
    printf("Digite o total de pontos turísticos: ");
    scanf("%d", &pontoTuristico);

    double densidadePopulacional = populacao / area;

    double PIBperCapita = (PIB * 1000000000) / (double)populacao;

    double inversoDensidade = 1.0 / densidadePopulacional;

    float superPoder = (float)populacao + (float)area + (float)PIB + (float)pontoTuristico + (float)PIBperCapita + (float)inversoDensidade;

    //=========Carta 2=========

    char estado2[4];
    printf("Digite o Estado 2: ");
    scanf("%s", estado2);

    char codigoCarta2[20];
    printf("Digite o código da carta 2: ");
    scanf("%s", codigoCarta2);

    char cidade2[20];
    printf("Digite a cidade 2: ");
    scanf("%s", cidade2);

    int populacao2;
    printf("Digite a população 2: ");
    scanf("%d", &populacao2);

    double area2;
    printf("Digite a área da cidade 2: ");
    scanf("%lf", &area2);

    double PIB2;
    printf("Digite o PIB da cidade 2: ");
    scanf("%lf", &PIB2);

    int pontoTuristico2;
    printf("Digite o total de pontos turísticos 2: ");
    scanf("%d", &pontoTuristico2);

    double densidadePopulacional2 = populacao2 / area2;

    double PIBperCapita2 = (PIB2 * 1000000000) / (double)populacao2;

    double inversoDensidade2 = 1.0 / densidadePopulacional2;

    float superPoder2 = (float)populacao2 + (float)area2 + (float)PIB2 + (float)pontoTuristico2 + (float)PIBperCapita2 + (float)inversoDensidade2;

    printf("\nCarta 1\n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigoCarta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d \n", pontoTuristico);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional);
    printf("PIB per Capita: %.2f\n", PIBperCapita);

    printf("\nCarta 2\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", pontoTuristico2);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", PIBperCapita2);

    printf("\n===== COMPARAÇÃO DAS CARTAS =====\n");

    if (populacao > populacao2)
    {
        printf("Carta 1 - %s : %d", cidade, populacao);
        printf("Carta 2 - %s : %d", cidade2, populacao2);
        printf("Resultado: Carta 1 %s venceu!", cidade);
    }
    else
    {
        printf("Carta 1 - %s : %d", cidade, populacao);
        printf("Carta 2 - %s : %d", cidade2, populacao2);
        printf("Resultado: Carta 2 %s venceu!", cidade2);
    }

    int opcao;

    printf("\n===== MENU SUPER TRUNFO =====\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("País 1: %s vs País 2: %s\n", cidade, cidade2); // Exibe o nome das cidades/países

    switch (opcao)
    {
    case 1: // População
        printf("Atributo Escolhido: População\n");
        printf("Valor Carta 1: %d | Valor Carta 2: %d\n", populacao, populacao2);

        if (populacao > populacao2)
        {
            printf("Vencedor: Carta 1 (%s)!\n", cidade);
        }
        else if (populacao < populacao2)
        {
            printf("Vencedor: Carta 2 (%s)!\n", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 2: // Área
        printf("Atributo Escolhido: Área\n");
        printf("Valor Carta 1: %.2f km² | Valor Carta 2: %.2f km²\n", area, area2);

        if (area > area2)
        {
            printf("Vencedor: Carta 1 (%s)!\n", cidade);
        }
        else if (area < area2)
        {
            printf("Vencedor: Carta 2 (%s)!\n", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 3: // PIB
        printf("Atributo Escolhido: PIB\n");
        printf("Valor Carta 1: %.2f bilhões | Valor Carta 2: %.2f bilhões\n", PIB, PIB2);

        if (PIB > PIB2)
        {
            printf("Vencedor: Carta 1 (%s)!\n", cidade);
        }
        else if (PIB < PIB2)
        {
            printf("Vencedor: Carta 2 (%s)!\n", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 4: // Pontos Turísticos
        printf("Atributo Escolhido: Pontos Turísticos\n");
        printf("Valor Carta 1: %d | Valor Carta 2: %d\n", pontoTuristico, pontoTuristico2);

        if (pontoTuristico > pontoTuristico2)
        {
            printf("Vencedor: Carta 1 (%s)!\n", cidade);
        }
        else if (pontoTuristico < pontoTuristico2)
        {
            printf("Vencedor: Carta 2 (%s)!\n", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 5: // Densidade Demográfica (REGRA INVERTIDA: Menor vence)
        printf("Atributo Escolhido: Densidade Demográfica\n");
        printf("Valor Carta 1: %.2f hab/km² | Valor Carta 2: %.2f hab/km²\n", densidadePopulacional, densidadePopulacional2);

        if (densidadePopulacional < densidadePopulacional2)
        { // < significa que a Carta 1 tem menor densidade (vence)
            printf("Vencedor: Carta 1 (%s)!\n", cidade);
        }
        else if (densidadePopulacional > densidadePopulacional2)
        {
            printf("Vencedor: Carta 2 (%s)!\n", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    default:
        printf("Opção inválida! O jogo terminou sem um vencedor.\n");
        break;
    }

    return 0;
}
