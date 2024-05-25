#include<stdio.h>

int main(){
	
	int i, j, n; 

	int sum=0,p=1;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	if(n%2==0)
	{
		for(i=0; i<=n; i++)
		{
			sum = sum+i;
		
		}
		printf("Sum of the n number of elements:%d",sum);
	}
	else
	{
	
		p = p*n;
		printf("Product is:%d",p); 
	} 
		
}
