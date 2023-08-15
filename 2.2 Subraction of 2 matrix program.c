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