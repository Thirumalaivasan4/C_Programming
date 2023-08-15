// .........string functions important programs:4...........
//string copy
#include<stdio.h>
#include<string.h>
void main()
{
  char str1[10];
  char str2[10];
  printf("Enter a string: ");
  scanf("%s",&str2);
  strcpy(str1,str2);
  printf("str1=%s\n",str1);
}
//str compair
#include<stdio.h>
#include<string.h>
void main()
{  
  int n;
  char str1[10];
  char str2[10];
  printf("Enter a 1st string: ");
  scanf("%s",&str1);
   printf("Enter a 2nd string: ");
  scanf("%s",&str2);
  n=strcmp(str1,str2);
  if(n==0)
    printf("Both are equal");
  else
    printf("Both are not equal");
}
//string concardation
#include<stdio.h>
#include<string.h>
void main()
{  
  char str1[20];
  char str2[20];
  printf("Enter 1st string: ");
  scanf("%s",&str1);
  printf("Enter 2nd string: ");
  scanf("%s",&str2);
  strcat(str1,str2);
  printf("srting 1=%s\n",str1);
  printf("srting 2=%s\n",str2);
}
//string length
#include<stdio.h>
#include<string.h>
void main()
{  
  int n;
  char str1[20];
  char str2[20];
  printf("Enter 1st string: ");
  scanf("%s",&str1);
  n=strlen(str1);
  printf("The length of the entered string is %d",n);
}