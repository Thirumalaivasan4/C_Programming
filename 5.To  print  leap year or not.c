//program to print  Leap year or not .
#include <stdio.h>
void main()
{
  int n;
  printf("Enter the year: ");
  scanf("%d",&n);
  if(n%4==0)
  {
    if(n%100==0)
    {
      if(n%400==0)
      printf("%d is an leap year",n);
      else
      printf("%d is an leap year",n);
    }
    else
    printf("%d is an leap year",n); 
  }
  else
  printf("%d is not a leap year",n);
  
}