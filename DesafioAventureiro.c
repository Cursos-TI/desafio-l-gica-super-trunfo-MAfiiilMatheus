#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    // Declarações das variáveis
    char estado1 [20], estado2 [20];
    char codigo1 [20], codigo2 [20];
    char cidade1 [20], cidade2 [20];
    float populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;
    float SuperPoder1, SuperPoder2;
    int resultado;
    int escolhaJogador;


// Entrada de dados da carta 1
    printf ("** Cadastro carta 01 **\n");

    printf("Digite o estado:\n");
    scanf("%s", &estado1);

    printf("Digite o código da carta:\n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("Infome a população:\n");
    scanf("%f", &populacao1);

    printf("Infome a área em km²:\n");
    scanf("%f", &area1);

    printf("Infome o PIB:\n");
    scanf("%f", &PIB1);

   printf("Informe a quantidade de pontos turísticos:\n");
   scanf("%d", &pontosturisticos1);

// Entrada de dados da carta 2
   printf ("** Cadastro carta 02 ** \n");
    
   printf("Digite o estado:\n");
   scanf("%s", &estado2);

   printf("Digite o código da carta:\n");
   scanf("%s", &codigo2);

   printf("Digite o nome da cidade:\n");
   scanf("%s", &cidade2);

   printf("Infome a população:\n");
   scanf("%f", &populacao2);

   printf("Infome a área em km²:\n");
   scanf("%f", &area2);

   printf("Infome o PIB:\n");
   scanf("%f", &PIB2);

  printf("Informe a quantidade de pontos turísticos:\n");
  scanf("%d", &pontosturisticos2);

// Calculo da densidade populacional cartas 1 e 2

   densidadepopulacional1 = (float) (populacao1 / area1);

   densidadepopulacional2 = (float) (populacao2 / area2);

// Calculo do PIB per capita cartas 1 e 2

   PIBpercapita1 = (float) (PIB1 / populacao1);

   PIBpercapita2 = (float) (PIB2 / populacao2);

// calculo do super poder cartas 1 e 2 
   SuperPoder1 = (float) populacao1  + PIB1 + PIBpercapita1 + (1 / densidadepopulacional1) + pontosturisticos1;
   SuperPoder2 = (float) populacao2 + PIB2 + PIBpercapita2 + (1 / densidadepopulacional2) + pontosturisticos2;


// Saída de dados carta 01

   printf("** Carta 1 ** \n");
   printf("Estado: %s\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("População: %.3f habitantes\n", populacao1);
   printf("Área: %.3f km²\n", area1);
   printf("PIB: %.3f\n", PIB1);
   printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
   printf("A Densidade populacional é: %.3f\n", densidadepopulacional1);
   printf("O PIB per capita é: %.3f\n", PIBpercapita1);
   printf("O Super poder da carta 1 é: %.3f\n", SuperPoder1);

// Saída de dados carta 02

   printf("** Carta 2 ** \n");
   printf("Estado: %s\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %.3f habitantes\n", populacao2);
   printf("Área: %.3f km²\n", area2);
   printf("PIB: %.3f\n", PIB2);
   printf("Número de Pontos Turísticos: %.d\n", pontosturisticos2);
   printf("A Densidade populacional é: %.3f\n", densidadepopulacional2);
   printf("O PIB per capita é: %.3f\n", PIBpercapita2);
   printf("O Super poder da carta 2 é: %.3f\n", SuperPoder2);

// menu interavito para o usuario escolher qual poder comparar

printf ("*** Menu ***\n");
printf ("((( Escolha qual ponto você quer comparar ))) ***\n");
printf ("1. População\n");
printf ("2. Area\n");
printf ("3. PIB\n");
printf ("4. Numero de pontos turisticos\n");
printf ("5. Densidade populacional\n");
printf ("6. SuperPoder\n");
printf ("Escolha:");
scanf ("%d", &escolhaJogador);

switch (escolhaJogador)
{
case 1:

    if (populacao1 > populacao2)
    {
    printf ("Você escolheu comparar a População\n");
    printf ("A população da carta 1 é de: %.3f habitantes e a População da carta 2 é de: %.3f habitantes\n", populacao1, populacao2);
    printf ("*** A carta 1 venceu ! ***\n");
    } else if (populacao1 < populacao2)
    {
    printf ("Você escolheu comparar a População\n");
    printf ("A população da carta 1 é de: %.3f habitantes e a População da carta 2 é de: %.3f habitantes\n", populacao1, populacao2);
    printf ("*** A carta 2 venceu ! ***\n");

    } else {
    printf ("Você escolheu comparar a População\n");
    printf ("A população da carta 1 é de: %.3f habitantes e a População da carta 2 é de: %.3f habitantes\n", populacao1, populacao2);
    printf ("*** Deu empate !! ***\n");
    }
    break;

case 2:

    if (area1 > area2)
    {
    printf ("Você escolheu comparar a Area\n");
    printf ("A area da carta 1 é de: %.3f km² e a Area da carta 2 é de: %.3f km²\n", area1, area2);
    printf ("*** A carta 1 venceu ! ***\n");
    } else if (populacao1 < populacao2)
    {
    printf ("Você escolheu comparar a Area\n");
    printf ("A area da carta 1 é de: %.3f km² e a Area da carta 2 é de: %.3f km²\n", area1, area2);
    printf ("*** A carta 2 venceu ! ***\n");

    } else {
    printf ("Você escolheu comparar a Area\n");
    printf ("A area da carta 1 é de: %.3f km² e a Area da carta 2 é de: %.3f km²\n", area1, area2);
    printf ("*** Deu empate !! ! ***\n");
    }
    break;
    
case 3:

    if (PIB1 > PIB2)
    {
    printf ("Você escolheu comparar o PIB\n");
    printf ("O PIB da carta 1 é de: %.3f e o PIB da carta 2 é de: %.3f\n", PIB1, PIB2);
    printf ("*** A carta 1 venceu ! ***\n");
    } else if (PIB2 < PIB2)
    {
    printf ("Você escolheu comparar o PIB\n");
    printf ("O PIB da carta 1 é de: %.3f e o PIB da carta 2 é de: %.3f\n", PIB1, PIB2);
    printf ("*** A carta 2 venceu ! ***\n");

    } else {
    printf ("Você escolheu comparar o PIB\n");
    printf ("O PIB da carta 1 é de: %.3f e o PIB  da carta 2 é de: %.3f\n", PIB1, PIB2);
    printf ("*** Deu empate !! ! ***\n");
    }
    break; 

case 4:

    if (pontosturisticos1 > pontosturisticos2)
    {
    printf ("Você escolheu comparar o Numero de Pontos Turisticos\n");
    printf ("A carta 1 tem %d Pontos Turisticos e a carta 2 tem %d Pontos Turisticos\n", pontosturisticos1, pontosturisticos2);
    printf ("*** A carta 1 venceu ! ***\n");
    } else if (pontosturisticos1 < pontosturisticos2)
    {
    printf ("Você escolheu comparar o Numero de Pontos Turisticos\n");
    printf ("A carta 1 tem %d Pontos Turisticos e a carta 2 tem %d Pontos Turisticos\n", pontosturisticos1, pontosturisticos2);
    printf ("*** A carta 2 venceu ! ***\n");

    } else {
    printf ("Você escolheu comparar o Numero de Pontos Turisticos\n");
    printf ("A carta 1 tem %d Pontos Turisticos e a carta 2 tem %d Pontos Turisticos", pontosturisticos1, pontosturisticos2);
    printf ("*** Deu empate !! ! ***\n");
    }
    break; 

case 5:

    if (densidadepopulacional1 > densidadepopulacional2)
    {
    printf ("Você escolheu comparar a Densidade Populacional\n");
    printf ("A Densidade Populacional da carta 1 é %.3f e a Densidade populacional da carta 2 é %.3f\n", densidadepopulacional1, densidadepopulacional2);
    printf ("*** A carta 2 venceu ! ***\n");
    } else if (densidadepopulacional1 < densidadepopulacional2)
    {
    printf ("Você escolheu comparar a Densidade Populacional\n");
    printf ("A Densidade Populacional da carta 1 é %.3f e a Densidade populacional da carta 2 é %.3f\n", densidadepopulacional1, densidadepopulacional2);
    printf ("*** A carta 1 venceu ! ***\n");

    } else {
    printf ("Você escolheu comparar a Densidade Populacional\n");
    printf ("A Densidade Populacional da carta 1 é %.3f e a Densidade populacional da carta 2 é %.3f\n", densidadepopulacional1, densidadepopulacional2);
    printf ("*** Deu empate !! ! ***\n");
    }
    break; 

case 6:

    if (SuperPoder1 > SuperPoder2)
    {
    printf ("Você escolheu comparar o SuperPoder\n");
    printf ("O SuperPoder da carta 1 é de: %.3f e o SuperPoder da carta 2 é: %.3f\n", SuperPoder1, SuperPoder2);
    printf ("*** A carta 1 venceu ! ***\n");
    } else if (SuperPoder1 < SuperPoder2)
    {
    printf ("Você escolheu comparar o SuperPoder\n");
    printf ("O SuperPoder da carta 1 é de: %.3f e o SuperPoder da carta 2 é: %.3f\n", SuperPoder1, SuperPoder2);
    printf ("*** A carta 2 venceu ! ***\n");

    } else {
    printf ("Você escolheu comparar o SuperPoder\n");
    printf ("O SuperPoder da carta 1 é de: %.3f e o SuperPoder da carta 2 é: %.3f\n", SuperPoder1, SuperPoder2);
    printf ("*** Deu empate !! ***\n");
    }
    break;


default: 
printf ("*** Opção Invalida !! ***\n");
    break;
}
 


   return 0;
} 
