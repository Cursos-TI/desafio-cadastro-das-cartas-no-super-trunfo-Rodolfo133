#include <stdio.h>
int main() {
    //inicia as variaveis
    int populacao1, pontos1, populacao2, pontos2;
    char nome1[50], nome2[50];
    float area1, PIB1, area2, PIB2, capta1, capta2, densidade1, densidade2;

    //cadastra as variaveis carta 1
    printf("Digite o nome do primeiro estado: \n");
    scanf("%s", &nome1);
    printf("digite a populacao do primeiro estado: \n");
    scanf("%d", &populacao1);
    printf("digite quantos pontos turisticos o primeiro estado possui: \n");
    scanf("%d", &pontos1);
    printf("digite a area do primeiro estado: \n");
    scanf("%f", &area1);
    printf("digite o PIB do primeiro estado: \n");
    scanf("%f", &PIB1);

    capta1 = (float)PIB1 / populacao1;
    densidade1 = (float)populacao1 / area1;

    printf("Digite o nome do segundo estado: \n");
    scanf("%s", &nome2);
    printf("digite a populacao do segundo estado: \n");
    scanf("%d", &populacao2);
    printf("digite quantos pontos turisticos o segundo estado possui: \n");
    scanf("%d", &pontos2);
    printf("digite a area do segundo estado: \n");
    scanf("%f", &area2);
    printf("digite o PIB do segundo estado: \n");
    scanf("%f", &PIB2);

    capta2 = (float)PIB2 / populacao2;
    densidade2 = (float)populacao2 / area2;

    //exibicao da carta
    printf("Estado: %s \n", nome1);
    printf("Populacao: %d \n", populacao1);
    printf("numero de pontos turisticos: %d \n", pontos1);
    printf("area: %f \n", area1) ;
    printf("PIB: %f \n", PIB1);
    printf("pib per capta: %f \n", capta1);
    printf("densidade populacional: %f \n", densidade1);

    printf("Estado: %s \n", nome2);
    printf("Populacao: %d \n", populacao2);
    printf("numero de pontos turisticos: %d \n", pontos2);
    printf("area: %f \n", area2) ;
    printf("PIB: %f \n", PIB2);
    printf("pib per capta: %f \n", capta2);
    printf("densidade populacional: %f \n", densidade2);

    return 0;
}
