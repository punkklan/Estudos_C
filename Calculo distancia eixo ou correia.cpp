#include <stdio.h>
#include <cmath>
	
	float poliaPg, poliaGg, distancia, circunferencia, resul;
	int numCalculos, x, y;
	
	float calculoCorreia (float poliaPg, float poliaGg, float distancia) {		
		poliaPg = poliaPg / 2;
		poliaGg = poliaGg / 2;
		resul = 3.14 * (poliaGg + poliaPg) + 2 * sqrt(pow(distancia, 2)+(pow((poliaGg-poliaPg),2)));		
	}
		
	float calculoDistancia (float poliaPg, float poliaGg, float circunferencia)	 {
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
	}

main(){
	printf (" \n");
	printf ("Digite 1 para descobrir a circunferencia da correia\n");
	printf ("Digite 2 para descobrir a distancia entre eixos\n");
	scanf ("%d", &x);

	
	switch (x){
		case (1):
			printf (" \n");
			printf("Digite o diametro da polia pequena em mm : ");
			scanf ("%f", &poliaPg);
			printf("Digite o diametro da polia grande em mm  : ");
			scanf ("%f", &poliaGg);
			printf ("Digite a distancia entre eixos em mm     : ");
			scanf ("%f", &distancia);
			calculoCorreia(poliaPg, poliaGg, distancia);
			printf (" \n");
			printf ("A circunferencia da correia = %.2f mm", resul);

		break;
		
		case (2):
			printf (" \n");
			printf("Digite o diametro da polia pequena em mm  : ");
			scanf ("%f", &poliaPg);
			printf("Digite o diametro da polia grande em mm   : ");
			scanf ("%f", &poliaGg);
			printf ("Digite a circunferencia da correia em mm  : ");
			scanf ("%f", &circunferencia);
			calculoDistancia(poliaPg, poliaGg, circunferencia);
			printf (" \n");
			printf ("Numero de calculos = %d \n", numCalculos);
			printf ("A distancia entre eixos = %.2f", distancia);			
		break;		
	}
	printf (" \n");
	printf ("Relacao de = 1:%.1f", (poliaGg/poliaPg));
	printf (" \n\n");
	printf ("Desenvolvido em C++ por wintermarcio@gmail.com");
	printf (" \n");
	main();
 		
	return 0;
}
