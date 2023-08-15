//sapping of 2numbers without 3rd variable
#include<stdio.h>

void main()
{
  int a,b;
  printf("Enter the values of a & b: ");
  printf("\n");
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\nAfter swapping: ");
  printf("\nThe value of a:%d",a);
  printf("\nThe value of b:%d",b);
  
}