#include <stdio.h>
 
int main()
{
  int i, Number, a, b, count, count1=0; 
  
  printf(" Prime Number from a to b are: \n");
  scanf("%d %d", &a, &b);
  for(Number = a; Number <= b; Number++)
  {
    count = 0;
    for (i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && Number != 1 )
    {
        count1++;
        if(count1%2==0)
	        printf(" %d ", Number);
    }  
  }
  printf("%d", count1);
  return 0;
}