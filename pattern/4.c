
//0
//01
//012
//0123
//01234
//012345
//0123456

#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("Enter the number of lines:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
