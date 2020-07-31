/* Desenvolver um algoritmo que, com base no valor do IMC de uma pessoa, 
imprima na tela a classifica��o da pessoa, de acordo com a f�rmula e a 
tabela a seguir:

F�rmula:
IMC = PESO / ALTURA�

Tabela:
Menor que 21,0 		-	Abaixo do peso
Entre 21,0 e 30,75	-	Peso padr�o
Superior a 30,75	-	Obeso 
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	float peso;
	float altura;
	float IMC;
	
	printf("Insira o peso:\n");
	scanf("%f", &peso);
	printf("Insira a altura:\n");
	scanf("%f", &altura);
	
	IMC = peso/(altura*altura);
	printf("IMC: %.2f\n", IMC);
	
	if(IMC < 21.0){
		printf("Abaixo do peso.\n");
	}
	else{ // IMC >= 21.0
		if(IMC > 30.75){
			printf("Obeso.\n");	
		}
		else{ // 21.0 <= IMC <= 30.75
			printf("Peso padr�o.\n");
		}
	}
}
