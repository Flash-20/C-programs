#include <math.h>
#include <stdio.h>
int main() {
   int low, high, number, originalNumber, rem, count = 0, arr2[100], arr1[100], i=0, n=0, remainder, total=0, rev=0;
   double result = 0.0;
   printf("Enter two numbers(intervals): ");
   scanf("%d,%d", &low, &high);
   for (number = low + 1; number < high; ++number) {
      originalNumber = number;
      while (originalNumber != 0) {
         originalNumber /= 10;
         ++count;
      }
      originalNumber = number;
      while (originalNumber != 0) {
         rem = originalNumber % 10;
         result += pow(rem, count);
         originalNumber /= 10;
      }
      if ((int)result == number) {
         n++;
         arr1[i]=number;
         i++;
      }
      count = 0;
      result = 0;
   }
   for(int i=0; i<n; i++){
      while (arr1[i] != 0) {
        remainder = arr1[i] % 10;
        rev = rev * 10 + remainder;
        arr1[i] /= 10;
      }
      arr2[i]=rev;
      rev = 0;
      remainder = 0;
   }
   for(int i=0; i<n; i++){
      total = total + arr2[i];
   }
   printf("\n%d", total);
   return 0; 
}