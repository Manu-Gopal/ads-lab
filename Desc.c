#include<stdio.h>
void main()
{
int arr[20];
int n, i, j, a;
printf("Enter number of elements");
scanf("%d", &n);
printf("Enter the elements of the array");
for(i=0;i<n;i++)
scanf("%d", &arr[i]);
for(i=0;i<n;i++)
 {
for(j=i+1;j<n;j++)
{
if(arr[i]<arr[j])
{
a=arr[j];
arr[j]=arr[i];
arr[i]=a;
}
}
}
printf("\nThe Descending order is\t");
for(i=0;i<n;i++)
printf("%d\t", arr[i]);
}
