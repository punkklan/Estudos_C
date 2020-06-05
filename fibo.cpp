#include <stdio.h>
#include <cmath>
	
	
	int fibo (int n) {
		int fib, ant1, ant2, vezes;		
		ant1 = 0;
		ant2 = 1;
		vezes = 0;
		printf("\n");
		for (int i = 1; i <= n; i++ ){
			fib = ant1 + ant2;
			ant2 = ant1;
			ant1 = fib;
			
			vezes = vezes+ 1;
			printf(" %d \n", vezes);
		}
	return fib;
	}
		
	

main(){
	int n;
	printf ("Digite n \n");
	scanf ("%d", &n);
		
	printf("resultado fibo %d \n", fibo(n));
	


 		
	return 0;
}
