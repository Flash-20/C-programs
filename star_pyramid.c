#include<stdio.h>
int main(){
    int N, i, j, a;
    a=N;
    scanf("%d", &N);
    for(i=0; i<a; i++){
        for(j=0; j<N; j++){
            printf("*");
        }
        printf("\n");
        N--;
    }
}