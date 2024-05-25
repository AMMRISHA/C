// Q=> find the second largest element in an array

#include<stdio.h>

int main()
{
	int n , i,j,a[10];
	printf("Enter the no. element in an array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&a[i]);
		
	}
	printf("before sorting array elements are:");
	for(i=0;i<n;i++)
	{
			printf("%d",a[i]);
	}
	
	printf("after sorting array elements are:");
	

	for(i=0;i<n;i++)
	{
		
		for(j=i+1;j<n;j++)
		{
			
	
				if(a[i]>=a[j])
				{
				int b;
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			
				}
	
		}
	}	
		
	for(i=0;i<n;i++)
	{
			printf("%d",a[i]);
	}	
	
	printf("the second largest element is %d",a[n-2]);
	
}
