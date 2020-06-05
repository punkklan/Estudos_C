#include <stdio.h>
#include <cmath>

main(){
	
	float poliaPg, poliaGg, distancia, resul;
		
	printf("Digite o diametro da pequena polia ");
	scanf ("%f", &poliaPg);
	printf("Digite o diametro da grande polia ");
	scanf ("%f", &poliaGg);
	printf ("digite a distancia entre eixos ");
	scanf ("%f", &distancia);
	
	poliaPg = poliaPg / 2;
	poliaGg = poliaGg / 2;
	resul = 3.14 * (poliaGg + poliaPg) + 2 * sqrt(pow(distancia, 2)+(pow((poliaGg-poliaPg),2)));
	
	printf ("A circunferencia da correia = %f", resul);
	
	return 0;
}
