#include<stdio.h>
void mult(int,int);
void main()
{
int a,b;
a=5;
b=10;
mult(a,b);
}
void mult(int x,int y)
{
int c;
c=x*y;
printf("product = %d",c);
}
