 #include <stdio.h>
 #include <stdlib.h>
 int main(){
    int mat[3][3];
    int i, j, soma;
    soma = 0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
        	printf("\n %d", soma);
             soma = soma + mat[i][j];
             
        }
    }
    printf("\n %d", soma);
 }
