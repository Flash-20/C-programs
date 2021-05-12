#include<stdio.h>
int main(){
    int a, b, c, d, n, i, result;
    printf("Enter the number\n");
    scanf("%d", &n);
    a = b = d = n;
    while(a != 0){
        c++;
        a = a/10;
    }
    for (i = 1; i < c; i++)
    {
        b = b/10;
    }
    d = d % 10;
    result = b + d;
    printf("Sum is %d", result);
    return 0;
}