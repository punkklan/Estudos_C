#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "C");
	
	char linha[200];
	FILE *arquivo;
	int i = 1;
	
	arquivo = fopen("Teste.txt","r");
	if(arquivo == NULL){
		printf("Erro ao iniciar o arquivo");
		system("pause");
		exit(-1);
	}
	
	printf("Seu texto: \n\n");
		
	while(!feof(arquivo)){
		strcpy(linha,"");
		fgets(linha, 200, arquivo);
      	printf("Linha %d: %s", i, linha);
      	i++;
	}
	fclose(arquivo);
}
