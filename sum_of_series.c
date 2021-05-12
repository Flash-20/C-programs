#include<stdio.h>
int main(){
    int N, i;
    float sum = 0.0;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
        sum = sum + 1/(float)i;
    printf("Sum of the series is: %.2f", sum);
}