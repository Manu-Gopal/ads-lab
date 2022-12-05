#include<stdio.h>
int main()
{
 int a[100],i,n,key,p=0,f;
 printf("Enter No. of Elements : ");
 scanf("%d",&n); 
 printf("Enter Array Elements : ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter the key : ");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
    if(a[i]==key)
	{
	 f=1;
	 p=p+i;
	 break;
	}
 }
if(f==1)
        printf("element found at position  %d\n",p+1);	
else
	printf("element not found");
    
  return 0;
}
