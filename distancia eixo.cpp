#include <stdio.h>
#include <cmath>

main(){
	
	float poliaPg, poliaGg, distancia, circunferencia, resul;
	int numCalculos;
	
		
	printf("Digite o diametro da pequena polia ");
	scanf ("%f", &poliaPg);
	printf("Digite o diametro da grande polia ");
	scanf ("%f", &poliaGg);
	printf ("digite a circunferencia da correia ");
	scanf ("%f", &circunferencia);
	
	
	numCalculos = 0;
	distancia = (poliaGg / 2) + (poliaPg / 2);
	poliaPg = poliaPg / 2;
	poliaGg = poliaGg / 2;
	
	resul = circunferencia - 1;
	
	
	
	for (int i=1; resul < circunferencia; i++) {
		resul = 3.14 * (poliaGg + poliaPg) + 2 * sqrt(pow(distancia, 2)+(pow((poliaGg-poliaPg),2)));	
		distancia = distancia + 0.01;
		numCalculos = numCalculos + 1;
		
	}
	
		distancia = distancia - 0.01;
		printf (" \n" );
		printf ("Numero de calculos = %d \n", numCalculos);
		printf ("Circunferencia correia = %f \n", resul);
		printf ("A distancia entre eixos = %.2f mm\n", distancia);
		printf (" \n");	
	
	


	
	return 0;
}
