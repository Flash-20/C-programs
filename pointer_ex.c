#include<stdio.h>
int main (){
    int *p1, *p2;
    int a=5, b=6;
    p1=&a;
    p2=&b;
    printf("%d", *p1+(*p2));
}