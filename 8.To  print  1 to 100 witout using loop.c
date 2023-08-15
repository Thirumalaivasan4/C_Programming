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
result(i+1);
}
}