#include<stdio.h>
int f1(int);
void main()
{
int a,z;
printf("enter a number");
scanf("%d",&a);
z=f1(a);
printf("The number is %d",z);
}
int f1(int x)
{
x=x+5;
return(x);
}
