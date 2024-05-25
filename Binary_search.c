#include<stdio.h>

int main()
{
	int mid,a,i,n,low,high;
	int array[n];
	printf("Enter the number of  element:");
	scanf("%d",&n);
	printf("Enter the elements in a sorted manner:\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("Enter the searching elements:");
	scanf("%d",&a);
	low = 0;
	high = n-1;
	mid = (low+ high)/2;
	for(i=0)
	while(low<=high)
	{
		if(array[mid]==a)
		{
			printf("Your searching element is %d",a );
			printf("at %d",mid);
			
		}
		else if(array[mid]<a)
		{
			low = mid+1;
			printf("your search element is greater than");
		}
		else
		{
			high = mid-1;
			printf("your search element is less than");
		}
	}
	return 0;
}
