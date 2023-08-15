#include <stdio.h>
void main()
{
    int n,i;
    printf("Which table you want: ");
    printf("\n");
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    printf("\n%d^%d=%d\n",i,n,i*n);
    printf("\n");
}