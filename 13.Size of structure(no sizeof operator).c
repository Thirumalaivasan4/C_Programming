//find the size of structure without using size of operator in c
#include<stdio.h>
#include<string.h>
struct ABC 
{
 int a;
 float b;
 char c;
};
int main()
{
  struct ABC *ptr=(struct ABC*)0;
  ptr++;
  printf("The size of the structure is %d",ptr);
  return 0;
}