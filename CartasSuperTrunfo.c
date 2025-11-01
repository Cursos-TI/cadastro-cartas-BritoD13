#include <stdio.h>

//Estrutura de dados que irão representar as cartas do super trunfo
int main() {
    char estado1[3], codCarta1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    char estado2[3], codCarta2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;
    
    
//Entrada de dados da carta 1
    printf("Cadastro carta 1\n");

    printf("Digite a sigla do estado: ");
    scanf("%s", estado1);
    
    printf("Digite a primeira letra do estado seguido de um número de 01 a 04. (Exemplo: A01, B03): ");
    scanf("%s", codCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

//Entrada de dados da carta 2
    printf("\nCadastro carta 2\n");

   printf("Digite a sigla do estado: ");
    scanf("%s", estado2);
    
    printf("Digite a primeira letra do estado seguido de um número de 01 a 04. (Exemplo: A01, B03): ");
    scanf("%s", codCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    
// Cálculos densidade e Pib Percapita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;


// Super Poder = soma de todos os atributos numéricos
    superPoder1 = populacao1 + area1 + pib1 + pibPerCapita1 + densidade1 + pontosTuristicos1;
    superPoder2 = populacao2 + area2 + pib2 + pibPerCapita2 + densidade2 + pontosTuristicos2;


    printf("\n====SUPER TRUNFO====\n");
//Exibição dos dados da carta 1    
    printf("\nCidade 1: %s (%s)\n", nomeCidade1, estado1);
    printf("Código: %s\n", codCarta1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
//Exibição dos dados da carta 2    
    printf("\nCidade 2: %s (%s)\n", nomeCidade2, estado2);
    printf("Código: %s\n", codCarta2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
//Comparações 
    printf("\n=== COMPARAÇÃO ENTRE AS CARTAS ===\n");

    printf("Maior população: %s\n", (populacao1 > populacao2) ? nomeCidade1 : nomeCidade2);
    printf("Maior área: %s\n", (area1 > area2) ? nomeCidade1 : nomeCidade2);
    printf("Maior PIB: %s\n", (pib1 > pib2) ? nomeCidade1 : nomeCidade2);
    printf("Maior PIB per capita: %s\n", (pibPerCapita1 > pibPerCapita2) ? nomeCidade1 : nomeCidade2);
    printf("Maior densidade populacional: %s\n", (densidade1 > densidade2) ? nomeCidade1 : nomeCidade2);
    printf("Mais pontos turísticos: %s\n", (pontosTuristicos1 > pontosTuristicos2) ? nomeCidade1 : nomeCidade2);
    printf("Maior Super Poder: %s \n", (superPoder1 > superPoder2) ? nomeCidade1 : nomeCidade2);


//Comentários sobre os termos utilizados no código

//int = entrada de dados inteiro
//float = entrada de dados com ponto flutuante
//char = entrada de dados caractere (letras, números, símbolos, etc.)   
//double = entrada de dados com ponto flutuante com maior precisão
//%d = formato para dados inteiros
//%f = formato para ponto flutuante
//%s = formato para strings (sequência de caracteres)
//%c = formato para caractere único
//struct = palavra reservada para definir uma estrutura de dados
//printf = função para imprimir dados na tela
//scanf = função para ler dados da entrada padrão (teclado)
//include = diretiva para incluir bibliotecas padrão
//stdio.h = biblioteca padrão de entrada e saída em C.




    return 0;

}
