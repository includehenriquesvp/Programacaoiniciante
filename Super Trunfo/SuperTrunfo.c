#include <stdio.h>

int main(){
    
//cadastro das variaveis.

char estado1[25], estado2[50], codigo2[75], nomedacidade2[18], codigo1[22], nomedacidade1[50];                
int pontosturisticos1, pontosturisticos2; 
float pib1, pib2, desipop1, densipop2, pibp1, pibp2, area1, area2, populaçao1, populaçao2;

//coleta de dados pelo cliente.

printf("Dados da carta 1: \nDigite o nome do estado:\n");
scanf("%s", &estado1);

printf("Digite o Código da carta: \n");
scanf("%s", &codigo1);

printf("Digite o nome da cidade: \n");
scanf("%s", &nomedacidade1);

printf("Digite a população: \n");
scanf("%f", &populaçao1);

printf("Digite o PIB (em bilhões): \n");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turísticos: \n");   
scanf("%d", &pontosturisticos1);

printf("Digite a área: \n");
scanf("%f", &area1);

printf("Dados da carta 2: \nDigite o nome do estado:\n");
scanf("%s", &estado2);

printf("Digite o código da carta: \n");
scanf("%s", &codigo2);

printf("Digite o nome da cidade: \n");
scanf("%s", &nomedacidade2);

printf("Digite a população: \n");
scanf("%f", &populaçao2);

printf("Digite o PIB (em bilhões): \n");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontosturisticos2);

printf("Digite a área: \n");
scanf("%f", &area2);

//calculos de PIB percapita e desidade populacional.

pibp1 = pib1 / populaçao1; 
pibp2 = pib2 / populaçao2;
desipop1 = populaçao1 / area1;
densipop2 = populaçao2 / area2;

//Leitura das cartas.

printf("Carta 1: \n Estado: %s \n Cidade: %s \n Código da carta: %s \n População: %f \n PIB: %f \n Pontos turísticos: %d \n Densidade populacional: %f \n PIB percapita: %f\n", estado1, nomedacidade1, codigo1, populaçao1, pib1, pontosturisticos1, desipop1, pibp1);
printf("Carta 2: \n Estado: %s \n Cidade: %s \n Código da carta: %s \n População: %f \n PIB: %f \n Pontos turísticos: %d \n Densidade populacional: %f \n PIB percapita: %f\n", estado2, nomedacidade2, codigo2, populaçao2, pib2, pontosturisticos2, densipop2, pibp2);

//exibição do atributo de comparação.

printf("Atributo de comparação: População. \n Carta 1: Estado: %s | Populção: %f \n Carta 2: Estado: %s | Populção: %f \n", estado1, populaçao1, estado2, populaçao2);

//estrutura de descisão.

if (populaçao1 > populaçao2){
    printf("Carta 1 venceu!");
} else {
    printf("Carta 2 venceu!");
}

return 0;
}