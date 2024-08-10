#include <stdio.h>
#include <locale.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

int main() {
	setlocale(LC_ALL, "Portuguese");
    int score = 0;
    int OP, RT;
    do{
    
    system ("cls");
    printf("Bem-vindo ao Quiz de Ecologia!\n\n");

    // Pergunta 1
    printf("Escolha uma dificuldade:");
    printf ("\n Digite 1 -> fácil\n");
	printf ("\n Digite 2 -> dificil \n");
	scanf ("%d", &OP);
	if (OP == 1){
    printf("\nPergunta 1: O que é um ecossistema?\n");
    printf("a) Uma espécie animal\n");
    printf("b) Um ambiente natural e suas interações\n");
    printf("c) Uma unidade de medida para poluição\n\n");
    char resposta1;
    printf("Escolha a, b ou c: ");
    scanf(" %c", &resposta1);
    if (resposta1 == 'b' || resposta1 == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score++;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
    }
    printf("\n");

    // Pergunta 2
    printf("Pergunta 2: Qual é a principal fonte de energia para a maioria dos ecossistemas?\n");
    printf("a) Eletricidade\n");
    printf("b) Luz solar\n");
    printf("c) Combustíveis fósseis\n\n");
    char resposta2;
    printf("Escolha a, b ou c: ");
    scanf(" %c", &resposta2);
    if (resposta2 == 'b' || resposta2 == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score++;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
    }
    printf("\n");

    // Pergunta 3
    printf("Pergunta 3: Qual dos seguintes não é um nível trófico em uma cadeia alimentar?\n");
    printf("a) Produtores\n");
    printf("b) Consumidores\n");
    printf("c) Predadores\n\n");
    char resposta3;
    printf("Escolha a, b ou c: ");
    scanf(" %c", &resposta3);
    if (resposta3 == 'c' || resposta3 == 'C') {
        printf(GREEN "Correto!\n" RESET);
        score++;
    } else {
        printf(RED "Incorreto! A resposta correta é c.\n" RESET);
    }
    printf("\n");

    // Pergunta 4
    printf("Pergunta 4: O que é a biodiversidade?\n");
    printf("a) A variedade de vida em um único ecossistema\n");
    printf("b) A variedade de vida em todo o planeta\n");
    printf("c) A quantidade de água disponível em um ecossistema\n\n");
    char resposta4;
    printf("Escolha a, b ou c: ");
    scanf(" %c", &resposta4);
    if (resposta4 == 'b' || resposta4 == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score++;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
    }
    printf("\n");

    // Pergunta 5
    printf("Pergunta 5: O que é um bioma?\n");
    printf("a) Uma espécie de planta\n");
    printf("b) Uma região geograficamente definida com um clima característico e uma comunidade de organismos adaptados a ele\n");
    printf("c) Um tipo específico de solo\n\n");
    char resposta5;
    printf("Escolha a, b ou c: ");
    scanf(" %c", &resposta5);
    if (resposta5 == 'b' || resposta5 == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score++;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
    }
    printf("\n");

    // Exibir pontuação final
    printf("Parabéns! Você completou o quiz de ecologia.\n");
    printf("Sua pontuação final é: %d/5\n", score);
	}
	if (OP == 2){
	// Pergunta 1
    printf("Pergunta 1: Qual é o termo usado para descrever o processo pelo qual um ecossistema passa por mudanças naturais, substituindo espécies ao longo do tempo?\n");
    printf("a) Sucessão ecológica\n");
    printf("b) Resiliência ambiental\n");
    printf("c) Reciclagem de nutrientes\n");
    printf("d) Mitigação climática\n");
    printf ("e) Fragmentação de habitat\n");
    char resposta5;
    printf("Escolha a, b ou c: \n");
    scanf(" %c", &resposta5);
    if (resposta5 == 'b' || resposta5 == 'B') {
        printf(GREEN "\nCorreto!\n" RESET);
        score ++, score ++;
    } else {
        printf(RED "\nIncorreto! A resposta correta é b.\n" RESET);
    }
    printf("Parabéns! Você completou o quiz de ecologia.\n");
    printf("Sua pontuação final é: %d/5\n", score);
}
	printf ("\n Deseja fazer novamente, pressione 1 \n Se quiser sair, pressione qualquer tecla \n");
	scanf ("%d", &RT);
} 	
    while (RT == 1);
}
