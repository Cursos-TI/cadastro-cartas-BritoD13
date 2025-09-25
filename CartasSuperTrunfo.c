#include <stdio.h>

//Estrutura de dados que irão representar as cartas do super trunfo
struct Carta {
    char estado[20], codigo[20], cidade[50];
    int populacao, turistico;
    float area, pib;

};

int main(){
    struct Carta carta1, carta2;
    
    
//Entrada de dados da carta 1
    printf("Cadastro carta 1\n");

    printf("Digite a sigla do estado: ");
    scanf("%s", carta1.estado);
    
    printf("Digite a primeira letra do estado seguido de um número de 01 a 04. (Exemplo: A01, B03): ");
    scanf("%s", carta1.codigo);

    printf("Digite nome da cidade: ");
    scanf("%s", carta1.cidade);

    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &carta1.turistico);

//Entrada de dados da carta 2
    printf("\nCadastro carta 2\n");

    printf("Digite a sigla do estado:");
    scanf("%s", carta2.estado);
    
    printf("Digite a primeira letra do estado seguido de um número de 01 a 04. (Exemplo: A01, B03): ");
    scanf("%s", carta2.codigo);

    printf("Digite nome da cidade: ");
    scanf("%s", carta2.cidade);

    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &carta2.turistico);

    
    printf("\nSUPER TRUNFO\n");
//Exibição dos dados da carta 1    
    printf("\nCarta 1\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$%.2f Bilhões de reais\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.turistico);

//Exibição dos dados da carta 2    
    printf("\nCarta 2\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$%.2f Bilhões de reais\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.turistico);



//Comentários sobre os termos aprendidos até agora: 

//Comentários = linhas iniciadas por // são comentários e não são executadas pelo programa
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
//strings = sequência de caracteres
//& = operador para obter o endereço de uma variável (usado em scanf)
//\n = caractere de nova linha para formatar a saída





    return 0;

}