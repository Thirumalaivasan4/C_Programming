//sapping of two numbers with 3rd variable
#include<stdio.h>

void main()
{
  int a,b,c;
  printf("Enter the values of a & b: ");
  printf("\n");
  scanf("%d%d",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("\nAfter swapping: ");
  printf("\nThe value of a:%d",a);
  printf("\nThe value of b:%d",b);
  
}