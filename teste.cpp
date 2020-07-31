#include <stdio.h>

int main(void){
	int a, b;
    printf("Digite o valor de A:");
	scanf("%d", &a);
	printf("Digite o valor de B:");
	scanf("%d", &b);
	if(a > b){
		printf("A > B\n");
	} else if(b > a){
        printf("B > A\n");
    } else {
        printf("A = B\n");
    }
}
