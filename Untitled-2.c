#include<stdio.h>
int main ()
{
   int i=1 , n ,sum=0 ;
   printf("enter the value");
   scanf("%d:",n);
   while (i<=n){
    sum =sum +i;
    i=i+1;
   }
   printf("sum of: %d",sum);
return 0 ;
}
