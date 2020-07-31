//Inclsão das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h> //biblioteca com funções matemáticas

//Criando uma constante inteira
#define MAX 10
//Criando uma constante em ponto flutuante
#define PI 3.14
//Criando uma constante alfanumérica
#define MSG "Erro!"

//Corpo principal do algoritmo
int main(){
	//Criando variáveis inteiras
	int i, n;
	//Criando variáveis em ponto flutuante
	float a, x, quo_i, quo_f;
	//Criando variáveis do tipo caractere
	char letra1, letra2, letras;
	
	//Para verificar os valores das variáveis em tempo de execução: 
	//Debugar: função watch;
	//	Tutorial p/ debug: 
	//	http://www.esj.eti.br/Apostilas/DicasDeDepuracaoDeCodigoUtilizandoDEVCPP_V10.pdf
	//ou
	//Exibir com printf();
	
	//Operações entre inteiros
	printf("*** Operações entre inteiros ***\n");
	i = 2;
	n = i * 2;
	printf("i: %d\nn: %d\n\n", i, n);
	system("pause");
	system("cls");
	
	//Operações entre pontos flutuantes
	printf("*** Operações de divisão em ponto flutuante ***\n");
	quo_i = 3/2;
	quo_f = 2.0/3.0;
	printf("Resultado inteiro: %.2f\nResultado flutuante: %.2f\n\n", quo_i, quo_f);
	system("pause");
	system("cls");
	
	printf("*** Operações entre ponto flutuante ***\n");
	a = 1.1;
	x = pow(1350.25,a); //Função intrínseca pow(): eleva-se o primeiro número à potência do segundo
	printf("a: %.2f\nx: %.2f\n\n", a, x);
	system("pause");
	system("cls");

	//Operações entre inteiros e ponto flutuante:
	printf("*** Operações entre inteiros e ponto flutuante ***\n");
	i = a;
	x = x / n;
	printf("i: %d\nx: %.2f\n\n", i, x);
	system("pause");
	system("cls");
	
	//Operações com variáveis alfanuméricas:
	printf("*** Atribuição com caracteres ***\n");
	letra1 = 'O';
	letra2 = 'k';
	printf("%c%c\n\n", letra1, letra2);
	system("pause");
	system("cls");
	//Perceba como operações aritméticas entre variáveis caractere não fazem sentido:
	printf("*** Soma entre caracteres ***\n");
	letras = letra1 + letra2;
	printf("Caractere: %c\nInteiro: %d\n\n", letras, letras);
	system("pause");
	system("cls");
	
	printf("*** Diferença entre caracteres ***\n");
	letras = letra1 - letra2;
	printf("Caractere: %c\nInteiro: %d\n\n", letras, letras);
	system("pause");
	system("cls");
	
}
