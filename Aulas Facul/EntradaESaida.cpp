#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para formata��o em v�rias linguas

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int x = 9999;
	float y = 111.18391;
	double z = 1500000000000000000; //� a mesma coisa que long float
	
	//Imprimindo uma mensagem simples (stdout):
	printf("Mensagem a ser exibida na tela.\n\n");
	
	//Imprimindo o conte�do de vari�veis:
	printf("Conte�do da vari�vel x: "); //Texto simples
	printf("%d", x); 					//Conte�do de vari�vel inteira (%d ou %i)
	printf("\n\n");	 					//Quebra de linha: 2x
	
	//Misturando a impress�o entre texto e conte�do de vari�veis:
	printf("Conte�do da vari�vel y: %f\n\n", y);
	
	//Formatando o n�mero de casa decimais de um ponto flutuante:
	printf("Vari�vel y formatada para uma casa decimal: %.1f\n\n", y);
	
	//Formatando a impress�o de um n�mero flutuante para a nota��o cient�fica:
	printf("Conte�do da vari�vel z: %e\n\n", z);
	
	//Lendo valores do teclado (stdin):
	printf("Digite um valor inteiro: ");
	scanf("%d", &x);
	
	printf("Digite um valor num�rico com casas decimais: ");
	scanf("%f", &y);
	fflush(stdin);
	
	printf("Digite outro valor num�rico com casas decimais: ");
	scanf("%lf", &z);
	//fflush(stdin);
	
	printf("\nOs valores digitados foram: %d, %.2f e %e.", x, y, z);
	
}
