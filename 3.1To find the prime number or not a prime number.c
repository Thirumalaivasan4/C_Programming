//prime number or not a prime number
//divided by 1 and itself-->2,3,5,7,11......
//it has 2 factor
//1,2,3,4,5,6.....-->i<=n-->Input
//5%1==0 to 5%6==0
#include <stdio.h>
void main()
{
    int n,i,factor=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        factor=factor+1;
    }
    if(factor==2)
    {
        printf("%d is a prime number.",n);
    }
    else
    {
        printf("%d is not a prime number.",n);
    }
}