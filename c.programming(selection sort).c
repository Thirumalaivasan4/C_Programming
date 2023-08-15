#include <stdio.h>
void main()
{
    int i,j,n,temp,a[50];
    printf("Enter the values of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",a[i]);
    }
    printf("The sorted list is:-");
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
         {
           if (a[i>a[j]])
            {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
         }
         printf("%d",a[i]);
    }
}
