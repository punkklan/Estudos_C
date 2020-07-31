/* Algoritmo do mapa 52 da faculdade */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

	int condicaoDoMenu ;   /* Vari�vel que controla a switch do menu */
	bool condicao = true;		  /* Vari�vel que controla o loop while do main */
	int numDeCadastros = 0;
	int numCodigo = 1;
		
	struct dados {
		int codigo;
		char nome[30];
		char telefone[30];
		char email[40];
	};

	struct dados cliente [5] ;
	
void printMenu(){
	system("cls");
	printf(" --------------------------\n");
	printf(" |  Programa de cadastro  |\n");
	printf(" |------------------------|\n");
	printf(" | 1 - Adicionar Cliente  |\n");
	printf(" | 2 - Lista Clientes     |\n");
	printf(" | 0 - Encerrar programa  |\n");
	printf(" --------------------------\n");
}

void listClientes(){
	
	if (numDeCadastros != 0){
		system("cls");
    	printf("\n --------------------------\n");
		printf(" |  Clientes cadastrados  |\n");
		printf(" --------------------------\n");
		int i = 0;
	 	for (i; i<numDeCadastros; i++){		
		   	printf("\n C�digo:   %d\n\n", cliente[i].codigo);
			printf(" Nome:     %s\n", cliente[i].nome);
			printf(" Telefone: %s\n", cliente[i].telefone);
			printf(" E-mail:   %s\n", cliente[i].email);
			printf(" --------------------------\n");
		};
	} else {
		system("cls");
		printf("\n Agenda vazia!\n");
		printf("\n \n");
	};
}

void addCliente (){
	if (numCodigo <= 5) {
		int i = numDeCadastros;
		system("cls");		
		cliente[i].codigo = numCodigo;      /* preenche automaticamente o codigo cliente */
		printf("\n C�digo: %d\n", numCodigo);
		printf("\n Digite o nome: ");
		fgets(cliente[i].nome, 30, stdin);
		fflush(stdin);   /* Limpa a buffer do teclado */
		printf("\n Digite o telefone: ");
		fgets(cliente[i].telefone, 30, stdin);
		fflush(stdin); 		
		printf("\n Digite o e-mail: ");
		fgets(cliente[i].email, 40, stdin);
		fflush(stdin); 		
		numCodigo++;
		numDeCadastros++;
	} else {
		printf("\n Agenda lotada!\n");
		printf("\n \n");
		system("pause");
	};					
}

void menu(){
	
	scanf("%1d", &condicaoDoMenu);
	fflush(stdin);
	
	if (condicaoDoMenu == 1 || condicaoDoMenu == 2 ||condicaoDoMenu == 0){
				
		switch (condicaoDoMenu){
			case 1:
				addCliente();
				break;
			case 2:
				listClientes();
				system("pause");
				break;		
			case 0:
				printf("\n\n Programa finalizado\n\n");
				condicao = false;      /*  para finalizar o while do main */
				break;	
		};
		
	} else {
			printf("\n\n Comando inv�lido\n\n");
			system("pause");		
	};
}
		
int main(void){
	setlocale (LC_ALL, "Portuguese");
	 	
	while (condicao){
		condicaoDoMenu = 3;	// for�a a condi��o para != das op��es existentes no menu, evita de entrada invadida quando digitado letra no menu
		printMenu();
		menu();
		fflush(stdin);  // for�a novamente limpeza buffer teclado
	}
		 	
	return (0);	
}	
