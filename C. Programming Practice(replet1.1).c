// 1 to 100 without loop using goto statement
#include <stdio.h>
 void main()
{
  int i=1;
  loop:
  if(i<=100)
  {
    printf("%d\n",i);
    i++;
    goto loop;
  }
}
// 1 to 100 without loop using function 
#include <stdio.h>
int result(int i);
main()
{
 int i=1;
 result(i); 
}
int result(int i)
{
if (i<=100)
{
printf("%d \n", i);
i++;
result(i);
}
}
#include<stdio.h>
int add(int,int);
int main()
{
  int a,b,c;
  printf("Enter any two numbers:\n" );
  scanf("%d%d",&a,&b);
  c=add(a,b);
  printf("The addation is:%d.",c);
}
int add(x,y)
{
 int ans;
  ans=x+y;
  return ans;
}


//odd or even
#include<stdio.h>
void main()
{
  int a;
  printf("Enter a munber:\n");
  scanf("%d",&a);
  if((a&1)==0)
    printf("%d is even.",a);
  else if((a&1)==1)
        printf("%d is odd.",a);
 
}
//153=1^3+5^3+3^3
//abcd....n=a^n+b^n+c^n+d^n+..,...
#include <stdio.h>
#include<math.h>
void main()
{
  int num,i,digits=0,temp,sum=0; 
  printf("Enter the value of n: ");
  scanf("%d",&num);
  for(i=num;i>0;i=i/10)
{
    digits ++;
  printf("%d",digits);
    
}
temp=num;
while(num<0)
{
  sum=sum+pow(num%10,digits);
  num=num/10;
}
  if(temp==sum)
    printf("%d is an amstrong number");
  else
    printf("%d is an not an amstrong number");
}  //addation of two matrix
#include<stdio.h>
void main()
{
    int i,j,a[5][5],b[5][5],d[5][5];
    int c,r;
    printf("Enter the no. of rows: ");
    scanf("%d",&r);
    printf("Enter the no. of coloum: ");
    scanf("%d",&c);
    printf("Enter the matrix A: ");
    printf("\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {   
            printf("Enter the values for (%d,%d)of matrix A: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the matrix B: ");
    printf("\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {   
            printf("Enter the values for (%d,%d)of matrix B: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
         d[i][j]= a[i][j]+b[i][j];
        }
    }
    printf("The addition is: ");
    printf("\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("\t%d",d[i][j]);
            
        }
        printf("\n");
    }
}
//Subraction  of two matrix 
#include<stdio.h>
void main()
{
    int i,j,a[5][5],b[5][5],d[5][5];
    int c,r;
    printf("Enter the no. of rows: ");
    scanf("%d",&r);
    printf("Enter the no. of coloum: ");
    scanf("%d",&c);
    printf("Enter the matrix A: ");
    printf("\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {   
            printf("Enter the values for (%d,%d)of matrix A: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the matrix B: ");
    printf("\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {   
            printf("Enter the values for (%d,%d)of matrix B: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
         d[i][j]= a[i][j]-b[i][j];
        }
    }
    printf("The addition is: ");
    printf("\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("\t%d",d[i][j]);
            
        }
        printf("\n");
    }
}
// multiplication of matrix 
#include<stdio.h>
void main()
{
    int i,j,a[5][5],b[5][5],d[5][5];
    int c,r;
    printf("Enter the no. of rows: ");
    scanf("%d",&r);
    printf("Enter the no. of coloum: ");
    scanf("%d",&c);
    printf("Enter the matrix A: ");
    printf("\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {   
            printf("Enter the values for (%d,%d)of matrix A: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the matrix B: ");
    printf("\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {   
            printf("Enter the values for (%d,%d)of matrix B: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
         d[i][j]= a[i][j]*b[i][j];
        }
    }
    printf("The addition is: ");
    printf("\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("\t%d",d[i][j]);
            
        }
        printf("\n");
    }
}
//transport of a matrix 
#include<stdio.h>
void main()
{
    int i,j,a[5][5];
    int c,r;
    printf("Enter the no. of rows: ");
    scanf("%d",&r);
    printf("Enter the no. of coloum: ");
    scanf("%d",&c);
    printf("Enter the matrix A: ");
    printf("\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {   
            printf("Enter the values for (%d,%d)of matrix A: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The transpose is ");
    printf("\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("\t%d",a[j][i]);
            
        }
        printf("\n");
    }
}


