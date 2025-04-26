#include<stdio.h>
int main()
{
   int i=0; 
   printf("Enter the Ending value:");
   scanf("%d",&i);
   printf("Even numbers:");
   while(i<=1)
   {
      if(i%2==0)
      {
        printf("\n%d",i);
        i++;
      }
   }
}