// prime number to print range of values
#include<stdio.h>
void main()
{
  int i,start,end;
  printf("Enter the starting value: ");
  scanf("%d",&start);
  printf("Enter the endding value: ");
  scanf("%d",&end);
  for(i=start;i<=end;i++)
  {
  int j,count=0 ;
  if(i==1)
  printf("\n",i);
  else
  {
  for(j=1;j<=i;j++)
  if(i%j==0)
  {
  count++;
  }
  if(count==2)
  {
  printf("%d is a primr number prime number",i);
  printf("\n");
  }
  }
  }
}


