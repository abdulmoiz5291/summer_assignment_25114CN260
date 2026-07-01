#include <stdio.h>

int main ()
{
   int n, original, remainder, count = 0; 
   printf("Enter a decimal number:");
   scanf("%d",&n);
   original = n;
   
   while (n != 0) {
   remainder = n % 2;
   if (remainder == 1) 
   {
    count++;
   }
    n = n / 2;
    }
   printf("There abe %d 1s bits in %d",count ,original);
   return 0; 
}   
