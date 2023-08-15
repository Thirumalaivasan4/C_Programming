//fiobonacci series
#include <stdio.h>
void main()
{
    //0,1,1,2,3,5,8,13
    //a,b
    int a=0,b=1,c,i,n;
    printf("Enter the values of n: ");
    scanf("%d",&n);
    printf("fiobonacci series are: ");
    printf("\n");
    printf("%d\n%d",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
}