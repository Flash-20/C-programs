#include<stdio.h>
#include<math.h>
int main(){
    int N, b=0, a, i;
    scanf("%d",&N);
    a = N;
    for(i=1; b<a; i++)
    {
        b=pow(2,i);
        if(a<b){
            printf("%d is not a power of 2\n", N);
            break;
        }
        if(b==a){
            printf("%d is a power of 2", N);
            break;
        }
    }
}