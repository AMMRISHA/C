//  *  
// * *
//* * *
//* * * * 

#include<stdio.h>

int main()
{
	int i,j,n,k ,count=0;
	
	printf("Enter the number of lines:");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
			count++;
		}
		
		printf("\n");
	}
	printf("%d",count);
}