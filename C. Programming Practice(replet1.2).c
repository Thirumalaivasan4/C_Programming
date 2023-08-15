/*
#inclincludeude <stdio.h>
#include<math.h>
int main()
{
  int n,i,digits=0,temp,sum=0;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  for(i=n;i>0;i/10)
{
    digits ++;
}
temp=n;

while(n>0)
{
  sum=sum+pow(n%10,digits);
  n=n/10;
}
  if(temp==sum)
    printf("an amstrong number");
  else
    printf("not an amstrong number");
  }


#include<stdio.h>
int pow(int,int);
int main()
{
  int base,exp,result;
  printf("Enter the base and exponent value:\n");
  scanf("%d%d",&base,&exp);
  result=pow(base,exp);
  printf("The answer is:%d",result);
}
pow(int base,int exp)
{
  int ans=1;
  while(exp>0)
  ans = ans* base;
  exp--;
  return ans;
}
#include<stdio.h>
int main()
{
  int b,a,ans=1;
  printf("Enter a number: ");
  printf("%d%d",&a,&b);
  while(a>0)
  {
  ans *= b;
  a--;
  }
  printf("%d",ans);
}

#include<stdio.h>
void main()
{
  printf("thirumalaivasan.s");
  printf("\a");
}

#include<stdio.h>
#include<string.h>
struct student
{
int idno;
char name[20];
int rollno;
};
main()
{
struct student d;
int n,i;
printf("How many members detials which you want to store:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the students name: ");
scanf("%s",&d.name[20]);
printf("Enter the students id.number: ");
scanf("%d",&d.idno);
printf("Enter the students roll number: ");
scanf("%d",&d.rollno);
printf("NE$XT $TUDENT DETIALS\n");
}
printf("_________The student detials are__________\n");
for(i=0;i<n;i++)
{
printf("\nEnter the student detials %d.",i+1);
printf("\nThe name is %s",d.name);
printf("\nThe id number is %d",d.idno);
printf("\nThe roll number is %d",d.rollno);
}
}

#include<math.h>
#include<stdio.h>
main()
{
  int a,b,c;
  printf("Enter the power and base:\n");\
  scanf("%d%d",&a,&b);
  c=pow(a,b);
  printf("the answer is %d",c);
  printf("\a");

}
#include<stdio.h>
#include<string.h>
int thiru(int,int);
int main()
{
  int a,b;
  printf("Enter the base and exponent value:\n");
  scanf("%d%d",&a,&b);
  thiru(a,b);
}
 int thiru(int a,int b)
{
  int ans=1;
  while(a>0)
  ans = ans* b;
  a--;
  printf("%d",ans);
}
#include <stdio.h>


int Pow(int X, int Y)
{

        int power = 1, i;

        for (i = 1; i <= Y; ++i) {
                power = power * X;
        }

        return power;

}

int main() {

        long long int base, exponent;

        printf("Enter Base: ");
        scanf("%d", &base);

        printf("Enter Power: ");
        scanf("%d", &exponent);

        printf("%d ^ %d = %d", base, exponent, Pow(base, exponent));

}


#include<stdio.h>
 int main()
{
int n,r,sum=0,temp;
printf("enter the number=");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
printf("armstrong  number ");
else
printf("not armstrong number");
return 0;
}
#include <math.h>
#include <stdio.h>

int main()
{
   int num, originalNum, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   originalNum = num;

   // store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n)
   {
       originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10)
   {
       remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}

#include<stdio.h>

void main()
{
  FILE *f;
  char*str={"THIRU"};
  f=fopen("abc.c","w");
  if(f==NULL)
  {
    printf("Unable to creat e file");

  }
  fprintf(f,"%s",str);
  printf("file created sucessfully");

  fclose(f);
}
#include<stdio.h>
#include<string.h>
void main()
{
  char *a;
  printf(" please enter the file name:");
  gets(a);
  remove(a);
  printf("deleted sucessfully");
}

#include<stdio.h>

void main()
{
  FILE *f;
  int *str=1;
  while(str<=100)

  f=fopen("abc.c","w");
  if(f==NULL)
  {
    printf("Unable to creat e file");

  }
  while(str<=100)
  {
  fprintf(f,"%d",str);
  str++;
  }
  printf("file created sucessfully");
  fclose(f);
}
#include <stdio.h>
//Maximum size of the array
#define MAX_SIZE  200
int main()
{
    //file pointer
    FILE *fp = NULL;
    char buffer[MAX_SIZE] = {0};
    //create the file
    fp = fopen("abcd.txt", "w");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //Get input from the user
    printf("Enter data which you want to store = ");
    if(fgets(buffer,MAX_SIZE,stdin) == NULL)
    {
        printf("Error in reading the input data\n");
        //close the file
        fclose(fp);
        exit(1);
    }
    //Write the buffer in file
    fwrite(buffer, sizeof(buffer[0]), MAX_SIZE, fp);
    //close the file
    fclose(fp);
    printf("File has been created and saved successfully\n");
    return 0;
  }

#include<stdio.h>
#include<string.h>
int main()
{
struct student
{
int idno;
char name[20];
int rollno;
};
 struct student m;
 printf("Enter the detials:\n");
  scanf("%s%d%d",&m.name[20],&m.idno,&m.rollno);
  printf("\n%s\n",m.name);
  printf("\n%d\n",m.idno);
  printf("\n%d\n",m.rollno);
  return 0;
}



#include<stdio.h>
#include<string.h>
int dis(int,char[],int);
main()
{
struct student
{
int mark;
char name[20];
int rollno;
};
 struct student m={100,"thiru",12};


  dis(m.mark,m.name,m.rollno);
  return 0;
}
int dis()
{
  int rollno,mark;
  char name[20];
  printf("\n%d\n",mark);
  printf("\n%s\n",name);
  printf("\n%d\n",rollno);
  return 0;
}
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
#include<stdio.h>

void main()
{
  FILE *f;
  int i=1;
  f=fopen("abc.txt","w");
  if(f==NULL)
  {
    printf("Unable to creat e file");

  }
  while(i<=100)
{
  fprintf(f,"%d\n",i);
  i++;
}
  printf("file created sucessfully");

  fclose(f);
}*

#include<stdio.h>

void main()
{
  FILE *f;
  int i=0;
  f=fopen("abc.txt","w");
  if(f==NULL)
  {
    printf("Unable to create file");

  }
  while (i<=255)
{
  fprintf(f,"The ASCII values of %c is %d\n",i,i);
  i++;
}
  printf("file created sucessfully");

  fclose(f);
}

//To ASCII values for all characters.

*/
/*

#include <stdio.h>
void main() {
  FILE *f;
  int i, n, limit;
  f = fopen("abc.txt", "w");
  if (f == NULL) {
    printf("Unable to create file");
  }
  printf("Enter the limit: ");
  scanf("%d", &limit);
  for (n = 1; n <= limit; n++)
  {

    for (i = 1; i <= limit; i++)
      fprintf(f, "%d^%d=%d\n", i, n, i * n);
    fprintf(f,"\nThe %d table is  \n",n);
  }
  printf("\n");
  printf("file created sucessfully");

  fclose(f);
}

#include <stdio.h>
#include <stdlib.h>
int main() {
  char ch, file_name[25];
  FILE *fp;

  printf("Enter name of a file you wish to see\n");
  gets(file_name);

  fp = fopen(file_name, "r"); // read mode

  if (fp == NULL) {
    printf("Error while opening the file.\n");
  }

  printf("The contents of %s file are:\n", file_name);

  while ((ch = fgetc(fp)) != EOF)
    printf("%c", ch);

  fclose(fp);
  return 0;
}
#include <stdio.h>

int main()
{
    int num;

    Input number from user
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num & 1)
    {
        printf("%d is odd.", num);
    }
    else
    {
        printf("%d is even.", num);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define n 6
int main(){
    int arr[n] = {9, 8, 7, 2, 4, 3};
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
}
// Comparing both the strings using pointers
int stringcompare(char *a,char *b);
main()
{
  char *a,*b;
   int flag=0;
  *a=C;
  *b=B;
    while(*a!='\0' && *b!='\0')  // while loop

      {
        if(*a!=*b)
        {
            flag=1;
        }
        a++;
        b++;
    }
  if(flag==0)
    return 0;
    else
    return 1;
  }
#include<stdio.h>
int i,l;
int search(int ,int *,int);
int main()
{
   int n,m;
   printf("enter the size of array:");
   scanf("%d",&n);
   int a[n];
   printf("enter the elements:\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("enter the element to be searched:");
   scanf("%d",&m);
   search(n,a,m);
   return 0;
}
int search(int n,int *a,int m)
{
   for(i=0;i<n;i++)
   {
      if(m==a[i])
      {
         l=1;
         break;
      }
   }
   if(l==1){
      printf("%d is present in the array",m);
   } else {
      printf("%d is not present in the array",m);
   }
}
#include<stdio.h>
#define fun(x) (x*x-x) 
main() 
{
  float I;
  I=37.0/ fun(2);
  printf("%.2f",I);

  
}

#include <stdio.h>
#define a 6
int main() 
{
  if(0) 
    printf("thiru");
  return 0;
  }
#include<stdio.h>
main() 
{
  int x=10, y=12, a, z;
  a=x*y++;
  z=x*y;
  printf("%d\n%d",a,z);
  }

#include<stdio.h>
main() 
{
  int k, p=2, m=10;
  k=!((p<2)&&(m<10));
  printf("%d" ,k);
    }*/
#include<stdio.h> 
int main()

{
int s=20;
if(s=19)
printf("Right\n"); 
else 
printf("Wrong\n");

return 0;

}