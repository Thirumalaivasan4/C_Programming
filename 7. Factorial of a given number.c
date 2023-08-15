//factorial of a given number
#include<stdio.h>\
int fact(int);
int main()
{
  int n,f;
  printf("Enter the values of n: ");
  scanf("%d",&n);
  f=fact(n);
  printf("The factorial answer is  %d",f);
}
int fact(n)
{
 if(n==0)
     return 0;
 else if(n==1)
     return 1;
 else
     return n*fact(n-1);
}