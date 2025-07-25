#include <stdio.h>

//TEMOS QUE ADICIONAR UMA VARIAVEL DENSIDADE POPULACIONAL EM float (populacao/area)
//TEMOS QUE ADICIONAR UMA VARIAVEL PIB PER CAPITA EM float (PIB/populacao)
//EXIBILOS JUNTOS AOS VALORES JÁ CRIADOS, DIVIDINDO-OS POR CARTA


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
      //carta 1
        //variaveis
        char estado;
        char codigo[3]; //o código terá no máximo 2 número (3 com o valor nulo)
        char nome_cidade[50]; //limite do nome da cidade = 50
        unsigned int populacao;
        float area, PIB;
        int turista;
        float PIBper, densidade;
        
      //carta 2
        //variavel
        char estado2;
        char codigo2[4]; //idem
        char nome_cidade2[50]; //idem
        unsigned int populacao2;
        float area2, PIB2;
        int turista2;
        float PIBper2, densidade2;
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
      //carta 1
        //programação
printf("Digite a primeira letra, de A-H, do Estado da sua primeira carta\n");
scanf(" %c", &estado);

printf("Digite um código, de 01-04, para o Estado escolhido\n");
scanf("%3s", codigo);

printf("Digite o nome da Cidade do Estado escolhido que você quer\n");
scanf("%49s", nome_cidade);

printf("Escreva a quantidade de população da Cidade escolhida\n");
scanf("%u", &populacao);

printf("Digite a área total, em km², da Cidade escolhido\n");
scanf("%f", &area);

printf("Digite o PIB dessa Cidade\n");
scanf("%f", &PIB);

printf("Diga quantos pontos turisticos tem nessa Cidade\n");
scanf("%d", &turista);
printf("\n");
printf("\n");
printf("\n");
    
//PIB PER CARP e Densidade populacional
PIBper = (float)PIB / populacao;
densidade = (float)populacao/area;
      //carta 2
        //programação
printf("Agora vamos a segunda carta.....\n");
printf("Digite a primeira letra, de A-H, do Estado da sua segunda carta\n");
scanf(" %c", &estado2);

printf("Digite um código, de 01-04, para o Estado escolhido\n"); //não está sendo lido
scanf("%3s", codigo2);

printf("Digite o nome da Cidade do Estado escolhido que você quer\n"); //pulando essa linha por algum motivo
scanf("%49s", nome_cidade2);

printf("Escreva a quantidade de população da Cidade escolhida\n");
scanf("%u", &populacao2);

printf("Digite a área total, em km², da Cidade escolhida\n");
scanf("%f", &area2);

printf("Digite o PIB dessa Cidade\n");
scanf("%f", &PIB2);

printf("Diga quantos pontos turisticos tem nessa Cidade\n");
scanf("%d", &turista2);

//PIB PER CARP e Densidade populacional
PIBper2 = (float)PIB2/populacao2;
densidade2 = (float)populacao2/area2;
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //resultado da 1ª carta
printf("\n");
printf("\n");
printf("\n");
printf("Vamos então recaptular a sua primeira carta.......\n");
printf("O Estado escolhido foi o Estado %c\n", estado); //nome do estado
printf("Tendo como código: %c%s\n", estado, codigo); //código com a primeira letra e o número
printf("A cidade escolhida foi: %s\n", nome_cidade); //cidade
printf("com %u de pessoas vivendo lá\n", populacao); //população
printf("Com uma área de %.2f km²\n", area); //área
printf("O PIB dessa Cidade é de R$%.2f\n", PIB); //PIB
printf("tendo %d pontos turísticos\n", turista); //Pontos turísticos
printf("PIB per Capita: %.2f de reais por pessoa\n",PIBper);
printf("A Densidade populacional dessa cidade é de %.3f hab/km²\n", densidade);
    
    //resultado da 2ª carta
printf("\n"); //PULANDO LINHAS PARA ORGANIZAR
printf("\n"); //PULANDO LINHAS PARA ORGANIZAR
printf("Vamos então recaptular a sua segunda carta.......\n");
printf("O Estado escolhido foi o Estado %c\n", estado2); //nome do estado
printf("Tendo como código: %c%s\n", estado2, codigo2); //código com a primeira letra e o número
printf("A cidade escolhida foi: %s\n", nome_cidade2); //cidade
printf("com %u de pessoas vivendo lá\n", populacao2); //população
printf("Com uma área de %.2f km²\n", area2); //área
printf("O PIB dessa Cidade é de R$%.2f\n", PIB2); //PIB
printf("tendo %d pontos turísticos\n", turista2); //Pontos turísticos
printf("PIB per Capita: %.2f de reais por pessoa\n",PIBper2);
printf("A Densidade populacional dessa cidade é de %.3f hab/km²\n", densidade2);
printf("\n");
printf("\n");
/*comparações entre cartas
printf("Comparação entre cartas:\n");
printf("População: a carta 1 venceu?  %u\n", populacao>populacao2);
printf("Area: carta 1 venceu?  %u\n", area>area2);
printf("PIB: a carta 1 venceu?  %u\n", PIB>PIB2);
printf("Pontos Turísticos: a carta 1 venceu?  %u\n", turista>turista2);
printf("PIB per Capita: carta 1 venceu?  %u\n", PIBper>PIBper2);
printf("Densidade Populacional: carta 1 venceu?  %u\n", (-densidade)>(-densidade2));
printf("Super Poder: carta 1 venceu?  %u\n", SuperPoder>SuperPoder2);
*/
    int opcaoPlayer;
printf("Digite o número da opção que será usada para comparar as cartas:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. PIB per capita\n");
printf("6. Densidade demográfica\n");
scanf("%d", &opcaoPlayer);
printf("\n");

// TESTAR TUDO
switch (opcaoPlayer)
{
case 1:
    printf("Comparação entre populações\n");
    printf("Carta 1 - %s: %u pessoas\n", nome_cidade, populacao);
    printf("Carta 1 - %s: %u pessoas\n", nome_cidade2, populacao2);
    if (populacao>populacao2){ //carta 1 maior que carta 2
        printf("Carta 1 (%s) venceu!!!\n", nome_cidade);
    } else if(populacao == populacao2){ //empate
        printf("Empate!!!\n");
    }
    else { //carta 2 maior que carta 1
        printf("Carta 2 (%s) venceu!!!\n", nome_cidade2);
    }
break;
case 2:
    printf("Comparação entre as áreas\n");
    printf("Carta 1 - %.2f km²\n", area);
    printf("Carta 2 - %.2f km²\n", area2);
    if (area>area2){ //carta 1 maior que carta 2
        printf("Carta 1 venceu!!!\n");
    } else if (area == area2){ //empate
        printf("Empate!!!\n");
    } 
    else { //carta 2 maior que carta 1
        printf("Carta 2 venceu!!!\n");
    }
break;
case 3:
    printf("Comparação entre os PIBs\n");
    printf("Carta 1 - %.2f\n", PIB);
    printf("Carta 2 - %.2f\n", PIB2);
    if (PIB>PIB2){ //carta 1 maior que carta 2
        printf("Carta 1 venceu!!!\n");
    } else if (PIB == PIB2){ //empate
        printf("Empate!!!\n");
    } 
    else { //carta 2 maior que carta 1
        printf("Carta 2 venceu!!!\n");
    }
break;
case 4:
    printf("Comparação entre a quantidade de pontos turísticos\n");
    printf("Carta 1 - %d\n", turista);
    printf("Carta 2 - %d\n", turista2);
    if (turista>turista2) {
        printf("Carta 1 venceu!!!\n");
    } else if (turista == turista2){
        printf("Empate!!!\n");
    } 
    else {
        printf("Carta 2 venceu!!!");
    }
break;
case 5:
    printf("Comparação entre os PIB's per Capita\n");
    printf("Carta 1 - %.2f\n", PIBper);
    printf("Carta 2 - %.2f\n", PIBper2);
    if (PIBper>PIBper2){
        printf("Carta 1 venceu!!!\n");
    } else if (PIBper == PIBper2){
        printf("Empate!!!\n");
    }
    else {
        printf("Carta 2 venceu!!!\n");
    }
break;
case 6:
    printf("Comparação entre as densidades populacionais\n");
    printf("Carta 1 - %.2f\n", densidade);
    printf("Carta 2 - %.2f\n", densidade2);
    if (densidade<densidade2){
        printf("Carta 1 venceu!!!\n");
    } else if (densidade == densidade2){
        printf("Empate!!!\n");
    } 
    else {
        printf("Carta 2 venceu!!!\n");
    }
break;
default:
    printf("Ainda não há essa opção, mas foi criativo de sua parte tentar ela, repete tudo aí pra deixar de ser trouxa\n");
break;
}


float SuperPoder = (float)populacao+area+PIB+turista+PIBper+(1/densidade);
float SuperPoder2 = (float)populacao2+area2+PIB2+turista2+PIBper2+(1/densidade2);
printf("\n");
printf("Comparação entre os Super Poderes\n");
printf("Carta 1 - %.2f\n", SuperPoder);
printf("Carta 2 - %.2f\n", SuperPoder2);
if (SuperPoder>SuperPoder2){
    printf("Carta 1 venceu!!!\n");
} else {
    printf("Carta 2 venceu!!!\n");
}

return 0;
}