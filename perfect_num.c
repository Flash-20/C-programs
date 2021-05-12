#include <stdio.h>
void  main(){
  int n=2,i,sum,k;
  scanf("%d",&k);
  for(n=2;n<=k;n++){
    i=1;
    sum = 0;
    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
    }
    if(sum==n)
      printf("%d\n",n);
  }
}