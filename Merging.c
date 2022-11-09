#include<stdio.h>
void main()
{
	int n1, n2, n3, i, a[20], b[20], c[20];

	printf("enter the number of elements of 1st array");
	scanf("%d", &n1);

	printf("enter the number of elements of 2nd array");
	scanf("%d", &n2);

	n3 = n1 + n2;

	printf("enter the elements of 1st array");

	for(i=0;i<n1;i++){
	scanf("%d", &a[i]);
        }

	printf("enter the elements of 2nd array");

        for(i=0;i<n2;i++){
	scanf("%d", &b[i]);
        }
	for(int i = 0; i < n1; i++)
       
		c[i] = a[i];

	for(int i = 0; i < n2; i++)     

		c[i + n1] = b[i];
        
	printf("The merged array: ");

	for(int i = 0; i < n3; i++)
	
		printf("%d ", c[i]);
}
