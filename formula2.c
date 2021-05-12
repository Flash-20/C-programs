#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, d, e = 62, g = 14, f;
    double x = 0;
    scanf("%d,%d,%d,%d,%d", &a, &b, &c, &d, &f);
    x= (double)(pow(a,b)) / (double)(sqrt(pow(c,d)) * e * f/g);
    printf("%.3lf", x);
}