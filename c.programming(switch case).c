#include <stdio.h>
void main()
{
    int a,b,c;
    char ch;
    printf("\naddation");
    printf("\nsubraction");
    printf("\nmultiplication");
    printf("\ndivision");
    printf("\nwhich operation you want to be performed: ");
    scanf("%c",&ch);
    printf("Enter the values of a and b: ");
    printf("\n");
    scanf(" %d%d",&a,&b);
    switch(ch)
    {
        case'+':
        c=a+b;
        break;
        case'-':
        c=a-b;
        break;
        case'*':
        c=a*b;
        break;
        case'/':
        c=a/b;
        break;
        defualt:
        printf("Enter the correct opperation ");
    }
    printf("The c is %d",c);
}