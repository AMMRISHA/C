#include<stdio.h>

int main()
{
	int i , j , number,value;
	
	printf("Enter the number to show the periodic table of that number:");
	
	scanf("%d",&number);
	
	for(i=1;i<=10;i++)
	{
		value=number * i;
		printf("%1d X %d  =  %d\n",number,i,value);
		
	}
	
	return 0;
}
