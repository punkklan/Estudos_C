#include <stdio.h>
#include <stdlib.h>

//S�rie de Fibonacci        *
//Posi��o (n):	0	1 	2 	3 	4 
//Termo (fib):	0	1 	1 	2 	3 

int fibRec(int n){
	if(n < 2){ //caso base
		return n;
	}else{     //chamadas recursivas
		return fibRec(n-1) + fibRec(n-2);
	}
}

int fibIter(int n){
	int i, j, k, fib;
	k = 1;
	fib = 0;
	for(i=0; i<n; i++){
		j = fib + k;
		fib = k;
		k = j;
	}
	return fib;
}

int main(){
	printf("Recurisvamente: %d\nIterativamente: %d\n", fibRec(10), fibIter(10));
}


	





