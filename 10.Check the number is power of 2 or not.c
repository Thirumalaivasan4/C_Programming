//check the integer is a power of two
#include<stdio.h>
void main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  
  (n&(n-1))==0?printf("The entered number is power of two"):printf("The entered number is not a power of two");
}