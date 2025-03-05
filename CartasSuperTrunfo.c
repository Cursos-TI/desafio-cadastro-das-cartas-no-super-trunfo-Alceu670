#include <stdio.h>

    int main(){
        char estado [20];
        char codigo[20];
        char cidade[20];
        int populacao;
        float area;
        float pib;
        int pontosturisticos;


        printf("Digite seu Estado: \n");
        scanf("%s", &estado);

        printf("Codigo: \n");
        scanf("%s", &codigo);

        printf("Nome da Cidade: \n");
        scanf("%s", &cidade);

        printf("Quantidade de Habitantes: \n");
        scanf("%d", &populacao);

        printf("Área da Cidade: \n");
        scanf("%f", &area);

        printf("Produto interno Bruto PIB: \n");
        scanf("%f", &pib);

        printf("Quantidade de Pontos Turisticos: \n");
        scanf("%d", &pontosturisticos);
        

        printf("Carta 1! \n");
        printf("Estado: %s \n", estado);
        printf("Codigo da Carta: %s \n", codigo);
        printf("Cidade: %s \n", cidade);
        printf("Habitantes: %d \n", populacao);
        printf("Área: %f \n", area);
        printf("Pib: %f \n", pib);
        printf("Pontos Turisticos: %d \n", pontosturisticos);
    
    

        return 0;
    }
    