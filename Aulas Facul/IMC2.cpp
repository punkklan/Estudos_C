#include <stdio.h>
#include <stdlib.h>
int main(){
	float peso;
	float altura;
	float IMC;
	char op;
	do{
		printf("Insira o peso:\n");
		scanf("%f", &peso);
		fflush(stdin);
		printf("Insira a altura:\n");
		scanf("%f", &altura);
		fflush(stdin);
		IMC = peso/(altura*altura);
		printf("IMC: %.2f\n", IMC);
		if(IMC < 21.0){
			printf("Abaixo do peso.\n");
		}
		else{
			if(IMC > 30.75){
				printf("Acima do peso.\n");	
			}
			else{
				printf("Peso padrão.\n");
			}
		}
		printf("Deseja executar novamente? (y/n)\n");
		scanf("%c", &op);
		fflush(stdin);
		system("cls");
	}while(op == 'y' || op == 'Y');
}
