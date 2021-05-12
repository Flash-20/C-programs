#include<stdio.h>
int main() {
    int arr[20], i, j, n;
    scanf("%d", &n);
    for(i=0; i<n; i++) 
        scanf("%d", &arr[i]);
    int arr1[20];
    for(i=n-1, j=0; i>=0; i--,j++)
        arr1[j] = arr[i];
    for(i=0; i<n; i++){
        arr[i] = arr1[i];
        printf("%d ", arr[i]);
    }    
}