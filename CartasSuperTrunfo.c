#include <stdio.h>

int main() {
// Carta A
    char iniciala01 = 'A';
    char estadoa01[20];
    char codigoa01[10] = "A01";
    char cidadea01[20];
    int populacaoa01;
    float areaa01;
    float piba01;
    int pontosturisticosa01 ;
// Carta B
    char inicialb01 = 'B';
    char estadob01[20];
    char codigob01[10] = "B01";
    char cidadeb01[20];
    int populacaob01 ;
    float areab01 ;
    float pibb01 ;
    int pontosturisticosb01 ;

    // Inicio do cadastro carta A:
    printf("Digite as informações da Carta A:\n");
    printf("Digite o Estado Carta A:\n");
    scanf("%s", estadoa01);
   
    printf("Digite a Cidade Carta A:\n");
    scanf("%s", cidadea01);
    
    printf("Digite a quantidade da população Carta A:\n");
    scanf("%d", &populacaoa01);
    
    printf("digite a quantidade da area em km² Carta A:\n");
    scanf("%f",  &areaa01);

    printf("Digite o Pib da cidade Carta A:\n");
    scanf("%f", &piba01);
    
    printf("Digite a quantidade de pontos turísticos Carta A:\n");
    scanf("%d", &pontosturisticosa01);

    // Inicio do cadastro carta B:
    printf("Agora digite as informações da Carta B:\n");
    printf("Digite o Estado Carta B:\n");
    scanf("%s", estadob01);
   
    printf("Digite a Cidade Carta B:\n");
    scanf("%s", cidadeb01);
    
    printf("Digite a quantidade da população Carta B:\n");
    scanf("%d", &populacaob01);
    
    printf("digite a quantidade da area em km² Carta B:\n");
    scanf("%f",  &areab01);

    printf("Digite o Pib da cidade Carta B:\n");
    scanf("%f", &pibb01);
    
    printf("Digite a quantidade de pontos turísticos Carta B:\n");
    scanf("%d", &pontosturisticosb01);

//Impressão Carta A:
    printf("Carta: %c\n", iniciala01);
    printf("Estado: %s\n", estadoa01);
    printf("Código da Carta: %s\n", codigoa01);
    printf("Nome da Cidade: %s\n", cidadea01);
    printf("População: %d\n", populacaoa01);
    printf("Area em KM²: %f\n", areaa01);
    printf("PIB: %.f\n", piba01);
    printf("Pontos Turisticos: %d\n", pontosturisticosa01);
        
    printf("\n");

// Impressão Carta B:
    printf("Carta: %c\n", inicialb01);
    printf("Estado: %s\n", estadob01);
    printf("Código da Carta: %s\n", codigob01);
    printf("Nome da Cidade: %s\n", cidadeb01);
    printf("População: %d\n", populacaob01);
    printf("Area em KM²: %f\n", areab01);
    printf("PIB: %.f\n", pibb01);
    printf("Pontos Turisticos: %d\n", pontosturisticosb01);

    return 0;
}