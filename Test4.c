#include<stdio.h>
void f1(int,int);
void main()
{
int a,b;
printf("Enter a and b");
scanf("%d%d",&a,&b);
f1(a,b);
}
void f1(int x, int y)
{
int c;
c=x+y;
printf("%d",c);
}
