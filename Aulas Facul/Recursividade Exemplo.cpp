#include <stdio.h>

void iterativo(){
	int soma = 0;
	for(int i=0;i<=1000;i++){
		if(i%10==0){
			soma += i;
		}
	}
	printf("Iterativo: %d.\n", soma);
	return;
}

void recursivo(int soma, int i){
	if(i==1001){
		printf("Recursivo: %d.\n", soma);
		return;
	} else {
		if(i%10==0){
			soma += i;
		}
		return recursivo(soma, i+1);
	}
}


int main(){
	iterativo();
	recursivo(0, 0);
}
