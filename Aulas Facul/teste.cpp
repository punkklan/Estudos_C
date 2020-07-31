 #include <stdio.h>
 #include <stdlib.h>
 
 int SVR(int *v, int n){
       if(n == 0){
                      return 0;
        }
        else{
                      return v[n] + SVR(v, n-1);
        }
 }
 int main(){
        int A[3], s;
        A[0]=3;
        A[1]=2;
        A[2]=1;
        s = SVR(A, 1);
        printf("O resultado é: %d", s);
 }
