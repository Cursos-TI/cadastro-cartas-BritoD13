#include <stdio.h>

int main() {
    // ======= Dados das cartas =======
    char nomePais1[50] = "Bahia";       // Nome da primeira carta
    char nomePais2[50] = "Acre";        // Nome da segunda carta
    int populacao1 = 14870907, populacao2 = 884372; // População de cada carta
    float area1 = 564760.42, area2 = 1641230.73;    // Área de cada carta
    float pib1 = 402.6, pib2 = 23.0;                // PIB em bilhões de reais
    int pontosTuristicos1 = 22, pontosTuristicos2 = 25; // Pontos turísticos
    float densidade1 = populacao1 / area1;          // Densidade populacional carta 1
    float densidade2 = populacao2 / area2;          // Densidade populacional carta 2

    int opcaoMenu; // Variável para o menu principal

    // ======= Loop principal =======
    do {
        // Menu principal
        printf("\n===== SUPER TRUNFO FINAL =====\n");
        printf("1 - Jogar\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoMenu);

        // Se o usuário escolher jogar
        if (opcaoMenu == 1) {
            int opcao1, opcao2;                    // Atributos escolhidos
            float valor1_c1, valor1_c2, valor2_c1, valor2_c2; // Valores dos atributos
            float soma1, soma2;                    // Soma dos valores escolhidos
            char atributo1[30], atributo2[30];     // Nomes dos atributos escolhidos

            // Exibe as cartas
            printf("\nCarta 1: %s\nCarta 2: %s\n\n", nomePais1, nomePais2);

            // ======= Escolha do PRIMEIRO atributo =======
            printf("Escolha o PRIMEIRO atributo para comparar:\n");
            printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\nOpcao: ");
            scanf("%d", &opcao1);

            // ======= Escolha do SEGUNDO atributo (diferente do primeiro) =======
            printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
            for (int i = 1; i <= 5; i++) {
                if (i != opcao1) { // Ignora o atributo já escolhido
                    switch(i){
                        case 1: printf("1 - Populacao\n"); break;
                        case 2: printf("2 - Area\n"); break;
                        case 3: printf("3 - PIB\n"); break;
                        case 4: printf("4 - Pontos Turisticos\n"); break;
                        case 5: printf("5 - Densidade Demografica\n"); break;
                    }
                }
            }
            printf("Opcao: ");
            scanf("%d", &opcao2);

            // Validação: os dois atributos devem ser diferentes
            if(opcao2 == opcao1 || opcao2 < 1 || opcao2 > 5){
                printf("Opcao invalida! Os dois atributos devem ser diferentes.\n");
                continue; // volta para o menu principal
            }

            // ======= Obter os valores do PRIMEIRO atributo =======
            switch(opcao1){
                case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; sprintf(atributo1,"Populacao"); break;
                case 2: valor1_c1 = area1; valor1_c2 = area2; sprintf(atributo1,"Area"); break;
                case 3: valor1_c1 = pib1; valor1_c2 = pib2; sprintf(atributo1,"PIB"); break;
                case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; sprintf(atributo1,"Pontos Turisticos"); break;
                case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; sprintf(atributo1,"Densidade Demografica"); break;
            }

            // ======= Obter os valores do SEGUNDO atributo =======
            switch(opcao2){
                case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; sprintf(atributo2,"Populacao"); break;
                case 2: valor2_c1 = area1; valor2_c2 = area2; sprintf(atributo2,"Area"); break;
                case 3: valor2_c1 = pib1; valor2_c2 = pib2; sprintf(atributo2,"PIB"); break;
                case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; sprintf(atributo2,"Pontos Turisticos"); break;
                case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; sprintf(atributo2,"Densidade Demografica"); break;
            }

            // ======= Exibir atributos escolhidos =======
            printf("\nAtributos escolhidos: %s e %s\n", atributo1, atributo2);

            // ======= Comparação do PRIMEIRO atributo =======
            printf("\nComparando %s:\n%s: %.2f\n%s: %.2f\n", atributo1, nomePais1, valor1_c1, nomePais2, valor1_c2);
            if(opcao1==5) // Regra especial: menor densidade vence
                printf("Vencedor (menor densidade): %s\n", (valor1_c1 < valor1_c2)?nomePais1:(valor1_c2 < valor1_c1)?nomePais2:"Empate");
            else
                printf("Vencedor: %s\n", (valor1_c1 > valor1_c2)?nomePais1:(valor1_c2 > valor1_c1)?nomePais2:"Empate");

            // ======= Comparação do SEGUNDO atributo =======
            printf("\nComparando %s:\n%s: %.2f\n%s: %.2f\n", atributo2, nomePais1, valor2_c1, nomePais2, valor2_c2);
            if(opcao2==5) // Regra especial: menor densidade vence
                printf("Vencedor (menor densidade): %s\n", (valor2_c1 < valor2_c2)?nomePais1:(valor2_c2 < valor2_c1)?nomePais2:"Empate");
            else
                printf("Vencedor: %s\n", (valor2_c1 > valor2_c2)?nomePais1:(valor2_c2 > valor2_c1)?nomePais2:"Empate");

            // ======= Soma dos atributos =======
            soma1 = valor1_c1 + valor2_c1;
            soma2 = valor1_c2 + valor2_c2;
            printf("\nSoma total: %s: %.2f | %s: %.2f\n", nomePais1, soma1, nomePais2, soma2);

            // ======= Resultado final =======
            if(soma1 > soma2) printf("Resultado final: %s venceu!\n", nomePais1);
            else if(soma2 > soma1) printf("Resultado final: %s venceu!\n", nomePais2);
            else printf("Resultado final: Empate!\n");
        }

    } while(opcaoMenu != 2); // Repete até o usuário escolher sair

    // Mensagem final
    printf("\nEncerrando o jogo... Ate a proxima!\n");
    return 0;
}
1