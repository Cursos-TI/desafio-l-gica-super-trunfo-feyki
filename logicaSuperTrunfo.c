#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    char estado; 
    char codigo[3];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pt;
    char estado2[1]; 
    char codigo2[3];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pt2;

    printf("Carta 1\n");

    printf("Insira Uma letra de A a H (representando um dos oito estados): ");
       scanf("%c", &estado);
    
    printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
       scanf("%s", &codigo);
    
    printf("Insira o nome da cidade: ");
       scanf("%s", &nome);
    
       printf("Insira o número de habitantes da cidade: ");
        scanf("%d", &populacao);
    
        printf("Insira a área da cidade em quilômetros quadrados: ");
         scanf("%f", &area);
    
        printf("Insira o PIB da cidade: ");
         scanf("%f", &pib);
    
         printf("Insira o número de Pontos Turísticos: ");
          scanf("%d", &pt);
    
    
    
    
    printf("Carta 1\n");
    
    printf("Estado: %c\n", estado);
    
    printf("Código: %s\n", codigo);
    
    printf("Cidade: %s\n", nome);
    
    printf("População: %d\n", populacao);
    
    printf("Área: %.2f\n", area);
    
    printf("PIB: %.2f\n", pib);
    
    printf("Número de Pontos Turísticos: %d\n", pt);






    printf("Carta 2\n");

printf("Insira Uma letra de A a H (representando um dos oito estados): ");
   scanf("%s", &estado2);

printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
   scanf("%s", &codigo2);

printf("Insira o nome da cidade: ");
   scanf("%s", &nome2);

   printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Insira a área da cidade em quilômetros quadrados: ");
     scanf("%f", &area2);

    printf("Insira o PIB da cidade: ");
     scanf("%f", &pib2);

     printf("Insira o número de Pontos Turísticos: ");
      scanf("%d", &pt2);
     
     
     
      printf("Carta 2\n");

      printf("Estado: %s\n", estado2);
      
      printf("Código: %s\n", codigo2);
      
      printf("Cidade: %s\n", nome2);
      
      printf("População: %d\n", populacao2);
      
      printf("Área: %.2f\n", area2);
      
      printf("PIB: %.2f\n", pib2);
      
      printf("Número de Pontos Turísticos: %d\n", pt2);

     
     
      printf("Carta 1\n");
         float densidade = populacao/area;
              printf("Densidade populacional: %.2f\n", densidade);
             

              printf("Carta 2\n");
         float densidade2 = populacao2/area2;
              printf("Densidade populacional: %.2f\n", densidade2);

              
              
              
              printf("Carta 1\n");
              float percapita = pib/populacao;
              printf("Pib per capita: %.2f\n", percapita);
 
              printf("Carta 2\n");
              float percapita2 = pib2/populacao2;
              printf("Pib per capita: %.2f\n", percapita2);


              printf("Determinador de carta vencedeora: Densidade Populacional, a carta com o menor valor vence.\n");
             
              if(densidade<densidade2){
          printf(" A cidade vencedora é: %s\n", nome);}
         
          else{printf(" A cidade vencedora é: %s\n", nome2);}
 



















    return 0;
}
