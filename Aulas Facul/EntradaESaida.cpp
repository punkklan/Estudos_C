#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para formatação em várias linguas

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int x = 9999;
	float y = 111.18391;
	double z = 1500000000000000000; //é a mesma coisa que long float
	
	//Imprimindo uma mensagem simples (stdout):
	printf("Mensagem a ser exibida na tela.\n\n");
	
	//Imprimindo o conteúdo de variáveis:
	printf("Conteúdo da variável x: "); //Texto simples
	printf("%d", x); 					//Conteúdo de variável inteira (%d ou %i)
	printf("\n\n");	 					//Quebra de linha: 2x
	
	//Misturando a impressão entre texto e conteúdo de variáveis:
	printf("Conteúdo da variável y: %f\n\n", y);
	
	//Formatando o número de casa decimais de um ponto flutuante:
	printf("Variável y formatada para uma casa decimal: %.1f\n\n", y);
	
	//Formatando a impressão de um número flutuante para a notação científica:
	printf("Conteúdo da variável z: %e\n\n", z);
	
	//Lendo valores do teclado (stdin):
	printf("Digite um valor inteiro: ");
	scanf("%d", &x);
	
	printf("Digite um valor numérico com casas decimais: ");
	scanf("%f", &y);
	fflush(stdin);
	
	printf("Digite outro valor numérico com casas decimais: ");
	scanf("%lf", &z);
	//fflush(stdin);
	
	printf("\nOs valores digitados foram: %d, %.2f e %e.", x, y, z);
	
}
