#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3

typedef struct{
	char nome[50];
	char telefone[20]; //+xx xx xxxxx xxxx
} tipo_pessoa;

int main(){
	tipo_pessoa lista[TAM];
	
	for(int i=0; i<TAM; i++){
		printf("Insira o nome da pessoa %d:\n", i+1);
		gets(lista[i].nome);
		fflush(stdin);
		printf("Insira o telefone de pessoa %d (+XX XX XXXXX XXXX):\n", i+1);
		gets(lista[i].telefone);
		fflush(stdin);
	}
	
	system("cls");
	printf("Os dez cadastros foram preenchidos...\n\n");
	system("pause");

	for(int i=0; i<TAM; i++){
		printf("%s - %s\n", lista[i].nome, lista[i].telefone);
	}
}
