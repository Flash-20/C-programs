#include<stdio.h>
#include<math.h>
int main(){
    int a[100], b[100], i, n, C=50, H=30;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d,", &a[i]);
    }
    for(i=0; i<n; i++){
        b[i]=sqrt((2*C*C*a[i])/H);
        if(i==n-1)
            printf("%d", b[i]);
        else
            printf("%d,", b[i]);
    }
}