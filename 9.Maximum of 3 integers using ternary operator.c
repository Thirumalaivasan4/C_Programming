//maximum of 3 integer using ternary operator 
#include<stdio.h>
int main()
{
  int a,b,c,big;
  printf("Enter the three numbers:\n");
  scanf("%d%d%d",&a,&b,&c);
  big=(a>b&&a>c)?(a):((b>c)?(b):(c));
  printf("%d is big",big);
  return 0;
}