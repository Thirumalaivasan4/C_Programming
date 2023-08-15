// maximum number in an array and their sum and average
#include<stdio.h>
int main()
{
int a[10],max,i;
int sum=0;
  float average;
 printf("Enter the numbers: \n");
for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
max=a[0];
for(i=0;i<10;i++)
  { 
    if(max<a[i])
    {
       max=a[i];
    }
    sum=sum+a[i];
  }
  average =sum/10.0;
  printf("Maximnum number is %d\n",max);
  printf("The sum is is %d\n",sum);
  printf("The average is:%f",average);
}