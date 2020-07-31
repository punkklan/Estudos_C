/*Beatriz tem 11 anos e mede 1,40 metros de altura, 
e cresce em média 2,1 centímetros ao ano. 
Sua irmã Catarina, aos 14 anos, tem 1,45 metros de altura, 
e cresce em média 1,1 centímetros ao ano. 
Elabore um programa que conte quantos anos serão necessários 
para que a altura de Beatriz ultrapasse a altura de Catarina.*/
#include <stdlib.h>
#include <stdio.h>
int main(){
	float beatriz, catarina;
	int B, C;
	beatriz = 140;
	B = 11;
	catarina = 145;
	C = 14;
	while(beatriz <= catarina){
		beatriz = beatriz + 2.1;
		catarina = catarina + 1.1;
		B++;
		C++;
		printf("** ANO: %d **\n\nBeatriz:\n\tidade: %d\n\taltura: %.2f\n\nCatarina:\n\tidade: %d\n\taltura: %.2f\n\n", B-11, B, beatriz, C, catarina);
	}
	printf("A altura de Batriz irá ultrapassar a de Catarina após %d anos.\n", B-11);
}
