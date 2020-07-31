//Incls�o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h> //biblioteca com fun��es matem�ticas

//Criando uma constante inteira
#define MAX 10
//Criando uma constante em ponto flutuante
#define PI 3.14
//Criando uma constante alfanum�rica
#define MSG "Erro!"

//Corpo principal do algoritmo
int main(){
	//Criando vari�veis inteiras
	int i, n;
	//Criando vari�veis em ponto flutuante
	float a, x, quo_i, quo_f;
	//Criando vari�veis do tipo caractere
	char letra1, letra2, letras;
	
	//Para verificar os valores das vari�veis em tempo de execu��o: 
	//Debugar: fun��o watch;
	//	Tutorial p/ debug: 
	//	http://www.esj.eti.br/Apostilas/DicasDeDepuracaoDeCodigoUtilizandoDEVCPP_V10.pdf
	//ou
	//Exibir com printf();
	
	//Opera��es entre inteiros
	printf("*** Opera��es entre inteiros ***\n");
	i = 2;
	n = i * 2;
	printf("i: %d\nn: %d\n\n", i, n);
	system("pause");
	system("cls");
	
	//Opera��es entre pontos flutuantes
	printf("*** Opera��es de divis�o em ponto flutuante ***\n");
	quo_i = 3/2;
	quo_f = 2.0/3.0;
	printf("Resultado inteiro: %.2f\nResultado flutuante: %.2f\n\n", quo_i, quo_f);
	system("pause");
	system("cls");
	
	printf("*** Opera��es entre ponto flutuante ***\n");
	a = 1.1;
	x = pow(1350.25,a); //Fun��o intr�nseca pow(): eleva-se o primeiro n�mero � pot�ncia do segundo
	printf("a: %.2f\nx: %.2f\n\n", a, x);
	system("pause");
	system("cls");

	//Opera��es entre inteiros e ponto flutuante:
	printf("*** Opera��es entre inteiros e ponto flutuante ***\n");
	i = a;
	x = x / n;
	printf("i: %d\nx: %.2f\n\n", i, x);
	system("pause");
	system("cls");
	
	//Opera��es com vari�veis alfanum�ricas:
	printf("*** Atribui��o com caracteres ***\n");
	letra1 = 'O';
	letra2 = 'k';
	printf("%c%c\n\n", letra1, letra2);
	system("pause");
	system("cls");
	//Perceba como opera��es aritm�ticas entre vari�veis caractere n�o fazem sentido:
	printf("*** Soma entre caracteres ***\n");
	letras = letra1 + letra2;
	printf("Caractere: %c\nInteiro: %d\n\n", letras, letras);
	system("pause");
	system("cls");
	
	printf("*** Diferen�a entre caracteres ***\n");
	letras = letra1 - letra2;
	printf("Caractere: %c\nInteiro: %d\n\n", letras, letras);
	system("pause");
	system("cls");
	
}
