#include <stdio.h>

int main(){

char estado1[25], estado2[50], codigo2[75], nomedacidade2[18], codigo1[22], nomedacidade1[50];                //cadastro das variaveis
int populaçao1, pontosturisticos1, populaçao2, pontosturisticos2; 
float pib1, pib2;

printf("Dados da carta 1: \nDigite o nome do estado:\n");
scanf("%s", &estado1);

printf("Digite o Código da carta: \n");
scanf("%s", &codigo1);

printf("Digite o nome da cidade: \n");
scanf("%s", &nomedacidade1);

printf("Digite a população: \n");
scanf("%d", &populaçao1);

printf("Digite o PIB (em bilhões): \n");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontosturisticos1);

printf("Dados da carta 2: \nDigite o nome do estado:\n");
scanf("%s", &estado2);

printf("Digite o código da carta: \n");
scanf("%s", &codigo2);

printf("Digite o nome da cidade: \n");
scanf("%s", &nomedacidade2);

printf("Digite a população: \n");
scanf("%d", &populaçao2);

printf("Digite o PIB (em bilhões): \n");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontosturisticos2);

printf("Carta 1: | Estado: %s | Cidade: %s | Código da carta: %s | População: %d | PIB: %f | Pontos turísticos: %d \n", estado1, nomedacidade1, codigo1, populaçao1, pib1, pontosturisticos1);
printf("Carta 2: | Estado: %s | Cidade: %s | Código da carta: %s | População: %d | PIB: %f | Pontos turísticos: %d", estado2, nomedacidade2, codigo2, populaçao2, pib2, pontosturisticos2);

return 0;
}