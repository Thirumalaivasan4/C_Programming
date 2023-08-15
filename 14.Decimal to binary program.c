//decimal to binary program without function
#include<stdio.h>
int main()
{
int n,i,bin[32],j;
printf("Enter a number: ");
scanf("%d",&n);
i=0;
while(n>0)
{
bin[i]=n%2;
n/=2;
i++;
}
for(j=i-1;j>=0;j--) 
printf("%d",bin[j]);
}
//decimal to binary program with function
#include<stdio.h>
long result(int n)
{
    long solution = 0;
    
    int rem, temp = 1;

    while (n!=0)
    {
        rem = n%2;
        n = n/ 2;
        solution = solution + rem*temp;
        temp = temp * 10;
    }
    return solution;
}

int main()
{
    int n;
    printf("Enter a Decimal Number: ");
    scanf("%d", &n);
    printf("Equivalent Binary Number is: %ld", result(n));
    return 0;
}