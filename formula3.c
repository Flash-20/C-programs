#include<stdio.h>
int main(){
    int a, aa, aaa, aaaa, n, total=0;
    printf("Enter a number :");
    scanf("%d", &n);
    a = n;
    aa = n*10+n;
    aaa = n*100+n*10+n;
    aaaa = n*1000+n*100+n*10+n;
    total = a+aa*aaa+aaaa;
    printf("%d", total);
}