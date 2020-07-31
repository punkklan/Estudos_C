#include <stdio.h>

#define max 10

int main()
{
	char palavra[max];
	int i, j;
	FILE *arq;
	char *arquivo = "texto.txt";
	arq = fopen ("texto.txt", "w"); 
	if (arq == NULL)
		printf ("Arquivo n�o aberto. Erro\n");
	else
	{
		for (i=0; i<max; i++){
			printf("Digite a %d� palavra: ", i+1);
			scanf("%s", palavra);
			fflush(stdin);
			fprintf(arq, "%s\n", palavra);
		}
	}
	fclose(arq);
	
	arq = fopen ("texto.txt", "r");
	if (arq == NULL)
		printf ("\nArquivo n�o aberto. Erro\n");
	else
	{
		while((fgets(palavra, sizeof(palavra), arq))!=NULL )
			printf("%s", palavra);
	}
	fclose(arq);
	return (0);
}
